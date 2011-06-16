// <edit>
#ifndef LL_LLFLOATERAVATARS_H
#define LL_LLFLOATERAVATARS_H

#include "llfloater.h"
#include "llviewerregion.h"

class LLFloaterAvatars
: public LLFloater
{
public:
	LLFloaterAvatars();
	BOOL postBuild(void);
	void close(bool app_quitting);

	LLColor4 getNameColor(std::string name, F32 distance, BOOL same_region);
	void refreshAvatars();

	static void onCommitAvatarList(LLUICtrl* ctrl, void* user_data);
	static void onClickProfile(void* user_data);
	static void onClickCamera(void* user_data);
	static void onClickTrack(void* user_data);
	static void onClickTeleport(void* user_data);
	static void onClickOfferTeleport(void* user_data);
	static void finishOfferTeleport(S32 option, const std::string& text, void* userdata);
	static void onClickChat(void* user_data);
	static void finishChat(S32 option, const std::string& text, void* userdata);
	static void onClickSound(void* user_data);
	static void finishSound(S32 option, const std::string& text, void* userdata);
	static void onClickCrash(void* user_data);
	static void finishCrash(S32 option, void* userdata);

	typedef struct
	{
		LLVector3d pos_global;
		LLVector3 pos_local;
		LLViewerRegion* region;
		bool z_known;
	} Location;

	static LLFloaterAvatars::Location LLFloaterAvatars::find(LLUUID id);
	static F32 guessZ();
	static int zGuess;
	
private:
	virtual ~LLFloaterAvatars();

	enum LIST_COLUMN_ORDER
	{
		LIST_NAME,
		LIST_DISTANCE
	};

	enum ANNOUNCE_TYPE
	{
		ANNOUNCE_JOIN_MAIN,
		ANNOUNCE_JOIN_CHILD,
		ANNOUNCE_JOIN_NEWREGION,
		ANNOUNCE_PART_MAIN,
		ANNOUNCE_PART_CHILD,
		ANNOUNCE_PART_DEADREGION
	};

	typedef struct
	{
		ANNOUNCE_TYPE announceType;
		LLUUID avatarId;
		std::string regionName;
		F32 timeStamp;
	} Announcement;

	std::vector<Announcement> pendingAnnouncements;

	std::vector<std::string> previous_region_names;
	std::map<LLUUID,std::string> previous_id2region;

	void LLFloaterAvatars::doAnnouncements();
};

extern LLFloaterAvatars* gFloaterAvatars;

#endif
// </edit>
