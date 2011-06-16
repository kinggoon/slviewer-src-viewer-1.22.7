// <edit>
#ifndef LL_LLPANELSECURITY_H
#define LL_LLPANELSECURITY_H
#include "llpanel.h"
class LLPanelSecurity : public LLPanel
{
public:
	LLPanelSecurity();
	virtual ~LLPanelSecurity();
	virtual BOOL postBuild();
	void apply();
	void cancel();
	U32 mSpoofProtectionAtOpen;
};
#endif
// </edit>
