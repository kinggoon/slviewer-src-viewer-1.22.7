// <edit>
#ifndef LL_LLFLOATERIMINSPECTOR_H
#define LL_LLFLOATERIMINSPECTOR_H

#include "llfloater.h"


class LLFloaterIMInspector 
: public LLFloater
{
public:
	BOOL postBuild(void);
	static void show(std::string fromname, std::string ownertype, LLUUID ownerid, LLUUID regionid, LLVector3 position);
	static void onClickOwnerProfile(void *userdata);
	static void onClickRegionProfile(void *userdata);

private:
	LLFloaterIMInspector(std::string fromname, std::string ownertype, LLUUID ownerid, LLUUID regionid, LLVector3 position);
	void receive(std::string fromname, std::string ownertype, LLUUID ownerid, LLUUID regionid, LLVector3 position);
	virtual ~LLFloaterIMInspector();
	
private:
	static LLFloaterIMInspector* sInstance;
	std::string mFromName;
	std::string mOwnerType;
	LLUUID mOwnerID;
	LLUUID mRegionID;
	LLVector3 mPosition;
};

#endif
// </edit>
