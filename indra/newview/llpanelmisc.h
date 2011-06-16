// <edit>
#ifndef LL_LLPANELMISC_H
#define LL_LLPANELMISC_H
#include "llpanel.h"
class LLPanelMisc : public LLPanel
{
public:
	LLPanelMisc();
	virtual ~LLPanelMisc();
	virtual BOOL postBuild();
	void apply();
	void cancel();
};
#endif
// </edit>
