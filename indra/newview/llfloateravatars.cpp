// <edit>

#include "llviewerprecompiledheaders.h"
#include "llfloateravatars.h"
#include "lluictrlfactory.h"
#include "llscrolllistctrl.h"
#include "llviewercontrol.h"
#include "llworld.h"
#include "llviewerregion.h"
#include "llviewerobjectlist.h"
#include "llagent.h"
#include "llfloateravatarinfo.h"
#include "llviewerwindow.h"
#include "llchat.h"
#include "llfloaterchat.h"
#include "llappviewer.h" // gFrameTimeSeconds
#include "lltracker.h"
#include "llcallingcard.h"

LLFloaterAvatars* gFloaterAvatars = NULL;
int LLFloaterAvatars::zGuess = 0;

LLFloaterAvatars::LLFloaterAvatars()
:	LLFloater()
{
	LLUICtrlFactory::getInstance()->buildFloater(this, "floater_avatars.xml");
}

LLFloaterAvatars::~LLFloaterAvatars()
{
	gFloaterAvatars = NULL;
}

void LLFloaterAvatars::close(bool app_quitting)
{
	LLFloater::setVisible(FALSE);
	if(!app_quitting) gSavedSettings.setBOOL("ShowAvatarRadar", FALSE);
	else LLFloater::close(TRUE);
}

BOOL LLFloaterAvatars::postBuild(void)
{
	// Todo: Load sortiness
	getChild<LLScrollListCtrl>("avatar_list")->sortByColumn("distance", TRUE);

	childSetCommitCallback("avatar_list", onCommitAvatarList, this);
	childSetAction("profile_btn", onClickProfile, this);
	childSetAction("camera_btn", onClickCamera, this);
	childSetAction("track_btn", onClickTrack, this);
	childSetAction("teleport_btn", onClickTeleport, this);
	childSetAction("offer_teleport_btn", onClickOfferTeleport, this);
	childSetAction("chat_btn", onClickChat, this);
	childSetAction("sound_btn", onClickSound, this);
	//childSetAction("crash_btn", onClickCrash, this);
	return TRUE;
}

LLColor4 LLFloaterAvatars::getNameColor(std::string name, F32 distance, BOOL same_region)
{
	std::string name_tolower = name;
	LLStringUtil::toLower(name_tolower);
	if( (name_tolower.find(" linden") != std::string::npos)
		|| (name_tolower.find(" tester") != std::string::npos)
		|| (name_tolower.find(" llqabot") != std::string::npos)
		|| (name_tolower.find(" comsys") != std::string::npos) )
	{
		if(distance < 20)
			return LLColor4::magenta;
		else
			return LLColor4::blue;
	}
	if(distance < 20)
		return LLColor4(0.f, 0.4f, 0.f);
	if(same_region)
		return LLColor4::black;
	return LLColor4::grey4;
}

void LLFloaterAvatars::refreshAvatars()
{
	if(!gFloaterAvatars) return; // getChild was crashing on shutdown

	LLVector3d origin_global;
	S32 count;
	LLUUID avid;
	LLVector3 pos_local;
	U32 compact_local;
	U8 bits;
	LLVector3d pos_global;
	std::string fullname;

	LLVector3d self_global = gAgent.getPositionGlobal();

	std::list<LLUUID> idlist;
	std::map<LLUUID, std::string> id2name;
	std::map<LLUUID, bool> id2coarseness;
	std::map<LLUUID, LLVector3d> id2posglobal;
	std::map<LLUUID, U32> id2distance;
	std::map<LLUUID, std::string> id2region;
	
	LLWorld::region_list_t regions = LLWorld::getInstance()->getRegionList();
	LLWorld::region_list_t::iterator iter = regions.begin();
	LLWorld::region_list_t::iterator end = regions.end();
	std::vector<std::string> current_region_names;
	for( ; iter != end; ++iter)
	{
		LLViewerRegion* region = (*iter);
		current_region_names.push_back(region->getName());
		LLDynamicArray<LLUUID> avlist = region->mMapAvatarIDs;
		LLDynamicArray<U32> poslist = region->mMapAvatars;
		count = poslist.count();
		origin_global = region->getOriginGlobal();
		for(int i = 0; i < count; i++)
		{
			avid = avlist.get(i);
			LLViewerObject* object = gObjectList.findObject(avid);
			if(object)
			{
				id2coarseness[avid] = false;

				pos_local = object->getPositionRegion();
				pos_global = object->getPositionGlobal();
			}
			else
			{
				id2coarseness[avid] = true;

				compact_local = poslist.get(i);

				bits = compact_local & 0xFF;
				pos_local.mV[VZ] = F32(bits) * 4.f;
				compact_local >>= 8;

				bits = compact_local & 0xFF;
				pos_local.mV[VY] = (F32)bits;
				compact_local >>= 8;

				bits = compact_local & 0xFF;
				pos_local.mV[VX] = (F32)bits;

				pos_global.setVec( pos_local );
				pos_global += origin_global;
			}

			if(!gCacheName->getFullName(avid, fullname))
			{
				fullname = "(waiting)";
			}

			idlist.push_back(avid);
			id2name[avid] = fullname;
			id2posglobal[avid] = pos_global;
			id2distance[avid] = (U32)((pos_global - self_global).magVec());
			id2region[avid] = region->getName();
		}
	}


	// Now, to update the list on the floater

	std::string myregion = gAgent.getRegion()->getName();

	LLScrollListCtrl* list = getChild<LLScrollListCtrl>("avatar_list");

	// Update/remove list items intead of clearing/replacing
	std::vector<LLScrollListItem*> items = list->getAllData();
	std::vector<LLScrollListItem*>::iterator item_iter = items.begin();
	std::vector<LLScrollListItem*>::iterator items_end = items.end();
	for( ; item_iter != items_end; ++item_iter)
	{
		LLScrollListItem* item = (*item_iter);
		LLUUID id = item->getUUID();
		std::list<LLUUID>::iterator pos = std::find(idlist.begin(), idlist.end(), id);
		if(pos == idlist.end())
		{
			// Remove it
			list->deleteSingleItem(list->getItemIndex(id));

			// Queue announcement
			LLFloaterAvatars::Announcement announce;
			if(previous_id2region[id] == gAgent.getRegion()->getName())
			{
				announce.announceType = ANNOUNCE_PART_MAIN;
			}
			else if(std::find(current_region_names.begin(), current_region_names.end(), previous_id2region[id]) != current_region_names.end())
			{
				announce.announceType = ANNOUNCE_PART_CHILD;
			}
			else
			{
				announce.announceType = ANNOUNCE_PART_DEADREGION;
			}
			announce.regionName = previous_id2region[id];
			announce.avatarId = id;
			announce.timeStamp = gFrameTimeSeconds;
			this->pendingAnnouncements.push_back(announce);
		}
		else
		{
			// Update name column
			item->getColumn(LIST_NAME)->setValue( id2name[id] );

			// Update distance column
			if(id2coarseness[id])
			{
				// Coarse location, Z may be incorrect
				if(id2posglobal[id].mdV[2] == 0.f)
					item->getColumn(LIST_DISTANCE)->setValue( "?" );
				else
					item->getColumn(LIST_DISTANCE)->setValue( llformat("%dm", id2distance[id]) );
			}
			else
				item->getColumn(LIST_DISTANCE)->setValue( llformat("%dm", id2distance[id]) );

			// Update color
			item->getColumn(LIST_NAME)->setColor(getNameColor(id2name[id], id2distance[id], id2region[id] == myregion));
		}
	}

	// Add any new list items
	std::list<LLUUID>::iterator new_iter = idlist.begin();
	std::list<LLUUID>::iterator new_end = idlist.end();
	for( ; new_iter != new_end; ++new_iter)
	{
		LLUUID id = (*new_iter);
		if(list->getItemIndex(id) == -1)
		{
			LLSD element;
			element["id"] = id;

			LLSD& name_column = element["columns"][LIST_NAME];
			name_column["column"] = "name";
			name_column["value"] = id2name[id];

			LLSD& distance_column = element["columns"][LIST_DISTANCE];
			distance_column["column"] = "distance";
			distance_column["value"] = llformat("%dm", id2distance[id]);

			list->addElement(element, ADD_BOTTOM)
				->getColumn(LIST_NAME)->setColor(getNameColor(id2name[id], id2distance[id], id2region[id] == myregion));

			// Queue announcement
			LLFloaterAvatars::Announcement announce;
			if(std::find(previous_region_names.begin(), previous_region_names.end(), id2region[id]) == previous_region_names.end())
			{
				announce.announceType = ANNOUNCE_JOIN_NEWREGION;
			}
			else if(id2region[id] == gAgent.getRegion()->getName())
			{
				announce.announceType = ANNOUNCE_JOIN_MAIN;
			}
			else
			{
				announce.announceType = ANNOUNCE_JOIN_CHILD;
			}
			announce.avatarId = id;
			announce.regionName = id2region[id];
			announce.timeStamp = gFrameTimeSeconds;
			this->pendingAnnouncements.push_back(announce);
		}
	}

	//list->scrollToShowSelected();
	if(list->getScrollPos() > list->getItemCount())
	{
		S32 newpos = list->getItemCount() - list->getPageLines();
		if(newpos < 0) newpos = 0;
		list->setScrollPos(newpos);
	}

	setIsChrome(TRUE);
	// test
	setCanClose(FALSE);
	
	// Fix sort
	//std::string sort_column = list->getSortColumnName();
	//bool sort_ascending = list->getSortAscending();
	//list->sortByColumn(sort_column, sort_ascending);
	list->sortItems();

	doAnnouncements();

	previous_region_names = current_region_names;
	previous_id2region = id2region;
}

// static
LLFloaterAvatars::Location LLFloaterAvatars::find(LLUUID id)
{
	LLWorld::region_list_t regions = LLWorld::getInstance()->getRegionList();
	LLWorld::region_list_t::iterator iter = regions.begin();
	LLWorld::region_list_t::iterator end = regions.end();
	
	Location location;
	location.region = NULL;
	location.pos_local = LLVector3::zero;
	location.pos_global = LLVector3d::zero;
	location.z_known = true;

	// Method 1
	LLViewerObject* object = gObjectList.findObject(id);
	if(object)
	{
		location.region = object->getRegion();
		location.pos_local = object->getPositionRegion();
		location.pos_global = object->getPositionGlobal();
		return location;
	}

	// Method 2
	for( ; iter != end; ++iter)
	{
		location.region = (*iter);
		LLVector3d origin_global = location.region->getOriginGlobal();
		LLDynamicArray<LLUUID> avlist = location.region->mMapAvatarIDs;
		LLDynamicArray<U32> poslist = location.region->mMapAvatars;
		S32 count = poslist.count();
		for(int i = 0; i < count; i++)
		{
			if(avlist.get(i) == id)
			{
				U32 compact_local = poslist.get(i);

				U8 bits = compact_local & 0xFF;
				location.pos_local.mV[VZ] = F32(bits) * 4.f;
				compact_local >>= 8;

				bits = compact_local & 0xFF;
				location.pos_local.mV[VY] = (F32)bits;
				compact_local >>= 8;

				bits = compact_local & 0xFF;
				location.pos_local.mV[VX] = (F32)bits;

				location.pos_global.setVec( location.pos_local );
				location.pos_global += origin_global;

				if(location.pos_local.mV[VZ] == 0.0f)
					location.z_known = false;

				return location;
			}
		}
	}

	// Failure
	location.region = NULL;
	location.pos_local = LLVector3::zero;
	location.pos_global = LLVector3d::zero;
	location.z_known = false;
	return location;
}

// static
F32 LLFloaterAvatars::guessZ()
{
	int divisions = 7;
	float max = 4096.0f;
	float min = 1024.0f;
	F32 increment = (max - min) / (F32)divisions;
	F32 z = 0.0f;
	if(zGuess) z = min + ((zGuess - 1) * increment);
	zGuess++;
	if(zGuess > (divisions + 1)) zGuess = 0;
	return z;
}

// static
void LLFloaterAvatars::onCommitAvatarList(LLUICtrl* ctrl, void* user_data)
{
	LLFloaterAvatars* floater = (LLFloaterAvatars*)user_data;
	floater->setIsChrome(TRUE);
}

void LLFloaterAvatars::doAnnouncements()
{
	std::vector<Announcement>::iterator iter;
	for(iter = pendingAnnouncements.begin(); iter != pendingAnnouncements.end();)
	{
		std::string fullname = "(waiting)";
		if( gCacheName->getFullName((*iter).avatarId, fullname) || (gFrameTimeSeconds > ((*iter).timeStamp + 10.0f)) )
		{
			LLFloaterAvatars::ANNOUNCE_TYPE announceType = (*iter).announceType;
			std::string chat = "";
			if(announceType == ANNOUNCE_JOIN_MAIN)
			{
				chat = "[JOIN] " + fullname;
			}
			else if(announceType == ANNOUNCE_JOIN_CHILD)
			{
				chat = "[JOIN] " + fullname + " (via " + (*iter).regionName + ")";
			}
			else if(announceType == ANNOUNCE_PART_MAIN)
			{
				chat = "[EXIT] " + fullname;
			}
			else if(announceType == ANNOUNCE_PART_CHILD)
			{
				chat = "[EXIT] " + fullname + " (via " + (*iter).regionName + ")";
			}
			if(gSavedSettings.getBOOL("RadarAnnounce"))
			{
				if(announceType == ANNOUNCE_JOIN_MAIN
					|| announceType == ANNOUNCE_PART_MAIN
					|| gSavedSettings.getBOOL("RadarAnnounceAdjacentRegions"))
				{
					if(chat != "") LLFloaterChat::addChat(LLChat(chat));
				}
			}
			pendingAnnouncements.erase(iter);
		}
		else
		{
			++iter;
		}
	}
}

// static
void LLFloaterAvatars::onClickProfile(void* user_data)
{
	LLFloaterAvatars* floater = (LLFloaterAvatars*)user_data;
	LLScrollListCtrl* list = floater->getChild<LLScrollListCtrl>("avatar_list");
	std::vector<LLScrollListItem*> selection = list->getAllSelected();
	std::vector<LLScrollListItem*>::iterator iter = selection.begin();
	std::vector<LLScrollListItem*>::iterator end = selection.end();
	for( ; iter != end; ++iter)
	{
		LLFloaterAvatarInfo::show((*iter)->getUUID());
	}
}

// static
void LLFloaterAvatars::onClickCamera(void* user_data)
{
	LLFloaterAvatars* floater = (LLFloaterAvatars*)user_data;
	LLScrollListCtrl* list = floater->getChild<LLScrollListCtrl>("avatar_list");
	if(!list->getFirstSelected()) return; // avoid null
	LLUUID selection = list->getFirstSelected()->getUUID();
	
	LLFloaterAvatars::Location location = find(selection);

	// Move the camera
	// Adjust the avatar position a little
	location.pos_global += LLVector3d(0.f, 0.f, 0.5f);
	// Find direction to self (reverse)
	LLVector3d cam = gAgent.getPositionGlobal() - location.pos_global;
	cam.normalize();
	// Go 4 meters back and 3 meters up
	cam *= 4.0f;
	cam += location.pos_global;
	cam += LLVector3d(0.f, 0.f, 3.0f);

	gAgent.setFocusOnAvatar(FALSE, FALSE);
	gAgent.setCameraPosAndFocusGlobal(cam, location.pos_global, selection);
	gAgent.setCameraAnimating(FALSE);
}

// static
void LLFloaterAvatars::onClickTrack(void* user_data)
{
	LLFloaterAvatars* floater = (LLFloaterAvatars*)user_data;
	LLScrollListCtrl* list = floater->getChild<LLScrollListCtrl>("avatar_list");
	if(!list->getFirstSelected()) return; // avoid null
	LLUUID selection = list->getFirstSelected()->getUUID();
	if(selection.isNull()) return;

	LLFloaterAvatars::Location location = find(selection);
	std::string fullname;
	if(!gCacheName->getFullName(selection, fullname))
		fullname = "Avatar";
	
	LLTracker::trackAvatar(selection, fullname);
	//LLAvatarTracker::instance().track(selection, fullname);
	LLAvatarTracker::instance().agentFound(selection, location.pos_global);
}

// static
void LLFloaterAvatars::onClickTeleport(void* user_data)
{
	LLFloaterAvatars* floater = (LLFloaterAvatars*)user_data;
	LLScrollListCtrl* list = floater->getChild<LLScrollListCtrl>("avatar_list");
	if(!list->getFirstSelected()) return; // avoid null
	LLUUID selection = list->getFirstSelected()->getUUID();
	
	LLFloaterAvatars::Location location = find(selection);

	if(!location.z_known)
	{
		F32 z = guessZ();
		location.pos_global.mdV[VZ] = (F64)z;
		location.pos_local.mV[VZ] = z;
	}

	gAgent.teleportViaLocation(location.pos_global + LLVector3d(0.f, 0.f, 2.f));
}

// static
void LLFloaterAvatars::onClickOfferTeleport(void* user_data)
{
	LLFloaterAvatars* floater = (LLFloaterAvatars*)user_data;
	LLScrollListCtrl* list = floater->getChild<LLScrollListCtrl>("avatar_list");
	std::vector<LLScrollListItem*> selection = list->getAllSelected();
	std::vector<LLScrollListItem*>::iterator iter = selection.begin();
	std::vector<LLScrollListItem*>::iterator end = selection.end();
	std::vector<LLUUID> *ids = new std::vector<LLUUID>();
	for( ; iter != end; ++iter)
	{
		ids->push_back((*iter)->getUUID());
	}
	LLStringUtil::format_map_t edit_args;
	edit_args["[REGION]"] = gAgent.getRegion()->getName();
	gViewerWindow->alertXmlEditText("OfferTeleport", edit_args,
										NULL, NULL,
										LLFloaterAvatars::finishOfferTeleport, (void*)ids, edit_args);
}

// static
void LLFloaterAvatars::finishOfferTeleport(S32 option, const std::string& text, void* userdata)
{
	if(option == 0)
	{
		LLMessageSystem* msg = gMessageSystem;
		msg->newMessageFast(_PREHASH_StartLure);
		msg->nextBlockFast(_PREHASH_AgentData);
		msg->addUUIDFast(_PREHASH_AgentID, gAgent.getID());
		msg->addUUIDFast(_PREHASH_SessionID, gAgent.getSessionID());
		msg->nextBlockFast(_PREHASH_Info);
		msg->addU8Fast(_PREHASH_LureType, (U8)0); // sim will fill this in.
		msg->addStringFast(_PREHASH_Message, text);

		std::vector<LLUUID> selection = *((std::vector<LLUUID> *)userdata);
		std::vector<LLUUID>::iterator iter = selection.begin();
		std::vector<LLUUID>::iterator end = selection.end();
		for( ; iter != end; ++iter)
		{
			msg->nextBlockFast(_PREHASH_TargetData);
			msg->addUUIDFast(_PREHASH_TargetID, *iter);
		}
		gAgent.sendReliableMessage();
	}
}

// static
void LLFloaterAvatars::onClickChat(void* user_data)
{
	LLFloaterAvatars* floater = (LLFloaterAvatars*)user_data;
	LLScrollListCtrl* list = floater->getChild<LLScrollListCtrl>("avatar_list");
	if(!list->getFirstSelected()) return; // avoid null

	std::vector<LLScrollListItem*> selection = list->getAllSelected();
	std::vector<LLScrollListItem*>::iterator iter = selection.begin();
	std::vector<LLScrollListItem*>::iterator end = selection.end();
	std::vector<LLUUID> *ids = new std::vector<LLUUID>();
	for( ; iter != end; ++iter)
	{
		ids->push_back((*iter)->getUUID());
	}

	LLStringUtil::format_map_t args;
	args["[MESSAGE]"] = "This will speak from the other avatar's position. What do you want to say?";
	gViewerWindow->alertXmlEditText("GenericAlertEditText", args,
									NULL, NULL,
									LLFloaterAvatars::finishChat, (void*)ids);
}

// static
void LLFloaterAvatars::finishChat(S32 option, const std::string& text, void* userdata)
{
	if(option == 0)
	{
		std::vector<LLUUID> selection = *((std::vector<LLUUID> *)userdata);
		std::vector<LLUUID>::iterator iter = selection.begin();
		std::vector<LLUUID>::iterator end = selection.end();
		for( ; iter != end; ++iter)
		{
			LLFloaterAvatars::Location location = find(*iter);

			if(location.region)
			{
				gMessageSystem->newMessageFast(_PREHASH_ScriptDialogReply);
				gMessageSystem->nextBlockFast(_PREHASH_AgentData);
				gMessageSystem->addUUIDFast(_PREHASH_AgentID, gAgent.getID());
				gMessageSystem->addUUIDFast(_PREHASH_SessionID, gAgent.getSessionID());
				gMessageSystem->nextBlockFast(_PREHASH_Data);
				gMessageSystem->addUUIDFast(_PREHASH_ObjectID, *iter);
				gMessageSystem->addS32Fast(_PREHASH_ChatChannel, 0);
				gMessageSystem->addS32Fast(_PREHASH_ButtonIndex, 1);
				gMessageSystem->addStringFast(_PREHASH_ButtonLabel, text);
				gMessageSystem->sendReliable(location.region->getHost());
			}
		}
	}
}

// static
void LLFloaterAvatars::onClickSound(void* user_data)
{
	LLFloaterAvatars* floater = (LLFloaterAvatars*)user_data;
	LLScrollListCtrl* list = floater->getChild<LLScrollListCtrl>("avatar_list");
	if(!list->getFirstSelected()) return; // avoid null

	std::vector<LLScrollListItem*> selection = list->getAllSelected();
	std::vector<LLScrollListItem*>::iterator iter = selection.begin();
	std::vector<LLScrollListItem*>::iterator end = selection.end();
	std::vector<LLUUID> *ids = new std::vector<LLUUID>();
	for( ; iter != end; ++iter)
	{
		ids->push_back((*iter)->getUUID());
	}

	LLStringUtil::format_map_t args;
	args["[MESSAGE]"] = "This will play a sound at the other avatar's position. It takes an asset ID.";
	gViewerWindow->alertXmlEditText("GenericAlertEditText", args,
									NULL, NULL,
									LLFloaterAvatars::finishSound, (void*)ids);
}

// static
void LLFloaterAvatars::finishSound(S32 option, const std::string& text, void* userdata)
{
	std::string uuidstr = text;
	LLStringUtil::trim(uuidstr);
	if(option == 0)
	{
		if(!LLUUID::validate(uuidstr))
		{
			LLStringUtil::format_map_t args;
			args["[ERROR_MESSAGE]"] = "That's not a well-formed UUID \\o/";
			gViewerWindow->alertXml("ErrorMessage", args);
			return;
		}

		std::vector<LLUUID> selection = *((std::vector<LLUUID> *)userdata);
		std::vector<LLUUID>::iterator iter = selection.begin();
		std::vector<LLUUID>::iterator end = selection.end();
		for( ; iter != end; ++iter)
		{
			LLFloaterAvatars::Location location = find(*iter);

			if(location.region)
			{
				gMessageSystem->newMessageFast(_PREHASH_SoundTrigger);
				gMessageSystem->nextBlockFast(_PREHASH_SoundData);
				gMessageSystem->addUUIDFast(_PREHASH_SoundID, LLUUID(uuidstr));
				gMessageSystem->addUUIDFast(_PREHASH_OwnerID, LLUUID::null);
				gMessageSystem->addUUIDFast(_PREHASH_ObjectID, LLUUID::null);
				gMessageSystem->addUUIDFast(_PREHASH_ParentID, LLUUID::null);
				gMessageSystem->addU64Fast(_PREHASH_Handle, location.region->getHandle());
				gMessageSystem->addVector3Fast(_PREHASH_Position, location.pos_local);
				gMessageSystem->addF32Fast(_PREHASH_Gain, 1.0f);

				gMessageSystem->sendReliable(location.region->getHost());
			}
		}
	}
}

// </edit>
