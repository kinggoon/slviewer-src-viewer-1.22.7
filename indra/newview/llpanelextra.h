// <edit>
#ifndef LL_LLPANELEXTRA_H
#define LL_LLPANELEXTRA_H
#include "llpanel.h"
class LLTabContainer;
class LLPanelActivation;
class LLPanelSecurity;
class LLPanelMisc;
class LLPanelExtra : public LLPanel
{
public:
	LLPanelExtra();
	virtual ~LLPanelExtra();
	virtual BOOL postBuild();
	void apply();
	void cancel();
private:
	LLTabContainer* mTabContainer;
	LLPanelActivation* mActivationPanel;
	LLPanelSecurity* mSecurityPanel;
	LLPanelMisc* mMiscPanel;
};
#endif
// </edit>