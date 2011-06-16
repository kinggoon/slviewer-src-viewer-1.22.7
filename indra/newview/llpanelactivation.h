// <edit>
#ifndef LL_LLPANELACTIVATION_H
#define LL_LLPANELACTIVATION_H
#include "llpanel.h"
#include "lllineeditor.h"
class LLPanelActivation : public LLPanel
{
public:
	LLPanelActivation();
	virtual ~LLPanelActivation();
	virtual BOOL postBuild();
	static std::string getHardwareID();
	static void LLPanelActivation::onClickCopyResult(void* data);
	LLLineEditor* mActivationCodeBox;
	std::string mHardwareIDText;
	void apply();
	void cancel();
};

#endif
// </edit>