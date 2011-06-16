// <edit>
#ifndef LL_LLFLOATERCRASHERS_H
#define LL_LLFLOATERCRASHERS_H

#include "llfloater.h"

class LLFloaterCrashers
: public LLFloater
{
public:
	LLFloaterCrashers();
	BOOL postBuild(void);
	void close(bool app_quitting);
	
private:
	virtual ~LLFloaterCrashers();

// static stuff
public:
	static LLFloaterCrashers* sInstance;
	static void show();
	static void onClickPointAt(void*);
	static void onClickAnimA(void*);
	static void onClickAnimB(void*);
	static void onClickAnimC(void*);
	static void onClickAll(void*);
};

#endif
// </edit>
