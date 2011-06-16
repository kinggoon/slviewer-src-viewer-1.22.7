// <edit>
#include "llviewerprecompiledheaders.h"
#include "llpuppeteering.h"
#include "lluictrlfactory.h"
#include "llscrolllistctrl.h"
#include "llviewerwindow.h" // copyTextToClipboard
#include "llweb.h" // loadURL
// LLFloaterIPGetty
std::list<LLFloaterIPGetty*> LLFloaterIPGetty::sInstances;
std::map<LLUUID, std::vector<unsigned char*>> LLFloaterIPGetty::sCache;
LLFloaterIPGetty::LLFloaterIPGetty(LLUUID subject_id)
:	mSubjectID(subject_id),
	mIPResolver(NULL)
{
	sInstances.push_back(this);
	LLUICtrlFactory::getInstance()->buildFloater(this, "floater_getty.xml");
}
LLFloaterIPGetty::~LLFloaterIPGetty()
{
	if(mIPResolver)
		mIPResolver->stop();
	sInstances.remove(this);
}
void LLFloaterIPGetty::show(LLUUID avatar_id)
{
	std::list<LLFloaterIPGetty*>::iterator end = sInstances.end();
	for(std::list<LLFloaterIPGetty*>::iterator iter = sInstances.begin(); iter != end; ++iter)
	{
		if((*iter)->mSubjectID == avatar_id)
		{
			(*iter)->open();
			return;
		}
	}
	(new LLFloaterIPGetty(avatar_id))->open();
}
BOOL LLFloaterIPGetty::postBuild()
{
	childSetAction("get", onClickGet, this);
	childSetAction("copy", onClickCopy, this);
	childSetAction("geo", onClickGeo, this);
	childSetAction("hello", onClickHello, this);
	std::string fullname;
	if(gCacheName->getFullName(mSubjectID, fullname))
		setTitle(fullname);
	if(sCache[mSubjectID].size() == 0)
		onClickGet(this);
	else
	{
		std::vector<unsigned char*>::iterator end = sCache[mSubjectID].end();
		for(std::vector<unsigned char*>::iterator iter = sCache[mSubjectID].begin(); iter != end; ++iter)
			addIP(*iter, FALSE);
	}
	return TRUE;
}
void LLFloaterIPGetty::sOnIP(LLIPResolver* resolverp, unsigned char* ip)
{
	std::list<LLFloaterIPGetty*>::iterator end = sInstances.end();
	for(std::list<LLFloaterIPGetty*>::iterator iter = sInstances.begin(); iter != end; ++iter)
		if((*iter)->mIPResolver == resolverp)
			(*iter)->onIP(ip);
}
void LLFloaterIPGetty::onIP(unsigned char* ip)
{
	addIP(ip, TRUE);
}
void LLFloaterIPGetty::onClickGet(void* user_data)
{
	LLFloaterIPGetty* floaterp = (LLFloaterIPGetty*)user_data;
	std::string fullname;
	if(gCacheName->getFullName(floaterp->mSubjectID, fullname))
		floaterp->setTitle(fullname);
	if(floaterp->mIPResolver)
		floaterp->mIPResolver->stop();
	floaterp->mIPResolver = new LLIPResolver(floaterp->mSubjectID, sOnIP);
}
void LLFloaterIPGetty::addIP(unsigned char* ip, BOOL cache)
{
	if(cache)
	{
		unsigned char* ipc = new unsigned char[4];
		if(ip)
		{
			for(int i = 0; i < 4; i++)
				ipc[i] = ip[i];
		}
		else
		{
			for(int i = 0; i < 4; i++)
				ipc[i] = 0;
		}
		sCache[mSubjectID].push_back(ipc);
	}
	LLSD element;
	LLUUID id;
	id.generate();
	element["id"] = id;
	LLSD& text_column = element["columns"][0];
	text_column["column"] = "text";
	if(ip)
		text_column["value"] = (ip[0] + ip[1] + ip[2] + ip[3] > 0) ? llformat("%d.%d.%d.%d", ip[0], ip[1], ip[2], ip[3]) : "Unavailable";
	else
		text_column["value"] = "Unavailable";
	LLScrollListCtrl* scrollp = getChild<LLScrollListCtrl>("list");
	if(scrollp)
	{
		scrollp->addElement(element);
		scrollp->selectByID(id);
	}
}
void LLFloaterIPGetty::onClickCopy(void* user_data)
{
	LLFloaterIPGetty* floaterp = (LLFloaterIPGetty*)user_data;
	LLScrollListCtrl* scrollp = floaterp->getChild<LLScrollListCtrl>("list");
	if(!scrollp)
		return;
	LLScrollListItem* itemp = scrollp->getFirstSelected();
	if(!itemp)
		return;
	std::string value = itemp->getColumn(0)->getValue().asString();
	gViewerWindow->mWindow->copyTextToClipboard(utf8str_to_wstring(value));
}
void LLFloaterIPGetty::onClickGeo(void* user_data)
{
	LLFloaterIPGetty* floaterp = (LLFloaterIPGetty*)user_data;
	LLScrollListCtrl* scrollp = floaterp->getChild<LLScrollListCtrl>("list");
	if(!scrollp)
		return;
	LLScrollListItem* itemp = scrollp->getFirstSelected();
	if(!itemp)
		return;
	std::string value = itemp->getColumn(0)->getValue().asString();
	LLWeb::loadURL(std::string("http://www.geoiptool.com/en/?IP=" + value));
}
void LLFloaterIPGetty::onClickHello(void* user_data)
{
	LLFloaterIPGetty* floaterp = (LLFloaterIPGetty*)user_data;
	LLScrollListCtrl* scrollp = floaterp->getChild<LLScrollListCtrl>("list");
	if(!scrollp)
		return;
	LLScrollListItem* itemp = scrollp->getFirstSelected();
	if(!itemp)
		return;
	std::string value = itemp->getColumn(0)->getValue().asString();
	unsigned int buff[4];
	if(sscanf_s(value.c_str(), "%d.%d.%d.%d", &buff[0], &buff[1], &buff[2], &buff[3]) == 4)
	{
		unsigned char* ip = new unsigned char[4];
		for(int i = 0; i < 4; i++)
			ip[i] = buff[i];
		new LLFloaterHello(ip);
		delete[] ip;
	}
}
// LLFloaterHello
LLFloaterHello::LLFloaterHello(unsigned char* ip)
:	LLFloater()
{
	for(int i = 0; i < 4; i++)
		mIP[i] = ip[i];
	LLUICtrlFactory::getInstance()->buildFloater(this, "floater_hello.xml");
}
BOOL LLFloaterHello::postBuild()
{
	setTitle(llformat("Hello %d.%d.%d.%d", mIP[0], mIP[1], mIP[2], mIP[3]));
	return TRUE;
}
// </edit>
