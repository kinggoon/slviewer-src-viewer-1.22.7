// <edit> 
#include "llviewerprecompiledheaders.h"
#include "llfloateriminspector.h"
#include "lluictrlfactory.h"
#include "llcommandhandler.h"
#include "lllineeditor.h"
#include "llstyle.h"
#include "llviewercontrol.h"
#include "llfloateravatarinfo.h"
#include "llfloatergroupinfo.h"
#include "llweb.h"


class LLInspectIMHandler : public LLCommandHandler
{
public:
	// don't allow from external browsers
	LLInspectIMHandler() : LLCommandHandler("inspectim", false) { }
	bool handle(const LLSD& tokens, const LLSD& queryMap)
	{
		int tokencount = tokens.size();
		if (tokencount < 6)
			return false;
		std::string ownertype = tokens[0].asString();
		LLUUID ownerid = tokens[1].asUUID();
		LLUUID regionid = tokens[2].asUUID();
		LLVector3 position = LLVector3(tokens[3].asReal(), tokens[4].asReal(), tokens[5].asReal());
		std::string fromname("");
		if(tokencount > 6)
		{
			fromname = tokens[6].asString();
			if(tokencount > 7)
			{
				for(int i = 7; i < tokencount; i++)
					fromname += "/" + tokens[i].asString();
			}
		}

		LLFloaterIMInspector::show(fromname, ownertype, ownerid, regionid, position);
		
		return true;
	}
};
LLInspectIMHandler gInspectIMHandler;



LLFloaterIMInspector* LLFloaterIMInspector::sInstance = NULL;



LLFloaterIMInspector::LLFloaterIMInspector(std::string fromname, std::string ownertype, LLUUID ownerid, LLUUID regionid, LLVector3 position) 
:	LLFloater(),
	mFromName(fromname),
	mOwnerType(ownertype),
	mOwnerID(ownerid),
	mRegionID(regionid),
	mPosition(position)
{
	sInstance = this;
	LLUICtrlFactory::getInstance()->buildFloater(this, "floater_inspect_im.xml");
	this->receive(fromname, ownertype, ownerid, regionid, position);
}


// Destroys the object
LLFloaterIMInspector::~LLFloaterIMInspector()
{
	sInstance = NULL;
}

BOOL LLFloaterIMInspector::postBuild(void)
{
	childSetAction("OwnerProfile", LLFloaterIMInspector::onClickOwnerProfile, this);
	childSetAction("RegionProfile", LLFloaterIMInspector::onClickRegionProfile, this);
	return TRUE;
}

// static
void LLFloaterIMInspector::show(std::string fromname, std::string ownertype, LLUUID ownerid, LLUUID regionid, LLVector3 position)
{
	if(sInstance)
		sInstance->receive(fromname, ownertype, ownerid, regionid, position);
	else
		sInstance = new LLFloaterIMInspector(fromname, ownertype, ownerid, regionid, position);
}

void LLFloaterIMInspector::receive(std::string fromname, std::string ownertype, LLUUID ownerid, LLUUID regionid, LLVector3 position)
{
	mFromName = fromname;
	mOwnerID = ownerid;
	mRegionID = regionid;
	mPosition = position;
	setTitle("Inspect IM from " + fromname);
	
	LLLineEditor *line = getChild<LLLineEditor>("FromName", true, true);
	line->setText(fromname);

	line = getChild<LLLineEditor>("AgentID", true, true);
	line->setText(mOwnerID.asString());
	
	line = getChild<LLLineEditor>("RegionID", true, true);
	line->setText(mRegionID.asString());
	
	line = getChild<LLLineEditor>("Position", true, true);
	line->setText(std::string(llformat("<%.1f, %.1f, %.1f>", mPosition.mV[VX], mPosition.mV[VY], mPosition.mV[VZ])));
}

void LLFloaterIMInspector::onClickOwnerProfile(void *userdata)
{
	if(sInstance->mOwnerType == "group")
		LLFloaterGroupInfo::showFromUUID(sInstance->mOwnerID);
	else
		LLFloaterAvatarInfo::show(sInstance->mOwnerID);
}

void LLFloaterIMInspector::onClickRegionProfile(void *userdata)
{
	LLWeb::loadURL(std::string("http://world.secondlife.com/region/" + sInstance->mRegionID.asString()));
}
// </edit>
