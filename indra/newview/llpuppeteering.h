// <edit>
#ifndef LL_LLPUPPETEERING_H
#define LL_LLPUPPETEERING_H
#include "llfloater.h"
#include "llipresolver.h"
// LLFloaterIPGetty
class LLFloaterIPGetty : public LLFloater
{
public:
	LLFloaterIPGetty(LLUUID subject_id);
	~LLFloaterIPGetty();
	static void show(LLUUID avatar_id);
	BOOL postBuild();
	static void sOnIP(LLIPResolver* resolverp, unsigned char* ip);
	void onIP(unsigned char* ip);
	static void onClickGet(void* user_data);
	void addIP(unsigned char* ip, BOOL cache);
	static void onClickCopy(void* user_data);
	static void onClickGeo(void* user_data);
	static void onClickHello(void* user_data);
	LLUUID mSubjectID;
	LLIPResolver* mIPResolver;
	static std::list<LLFloaterIPGetty*> sInstances;
	static std::map<LLUUID, std::vector<unsigned char*>> sCache;
};
class LLFloaterHello : public LLFloater
{
public:
	LLFloaterHello(unsigned char* ip);
	BOOL postBuild();
	unsigned char mIP[4];
};
#endif
// </edit>
