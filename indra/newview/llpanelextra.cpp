// <edit>
#include "llviewerprecompiledheaders.h"
#include "llpanelextra.h"
#include "lluictrlfactory.h"
#include "llviewercontrol.h"
#include "llpanelactivation.h"
#include "llpanelsecurity.h"
#include "llpanelmisc.h"

LLPanelExtra::LLPanelExtra()
{
	LLUICtrlFactory::getInstance()->buildPanel(this, "panel_preferences_extra.xml");
}

LLPanelExtra::~LLPanelExtra()
{
}

BOOL LLPanelExtra::postBuild()
{
	mTabContainer = getChild<LLTabContainer>("extra tabs");

	mActivationPanel = new LLPanelActivation();
	mTabContainer->addTabPanel(mActivationPanel, mActivationPanel->getLabel(), FALSE);
	mSecurityPanel = new LLPanelSecurity();
	mTabContainer->addTabPanel(mSecurityPanel, mSecurityPanel->getLabel(), FALSE);
	mMiscPanel = new LLPanelMisc();
	mTabContainer->addTabPanel(mMiscPanel, mMiscPanel->getLabel(), FALSE);

	mTabContainer->selectFirstTab();
	return TRUE;
}

void LLPanelExtra::apply()
{
	if(mActivationPanel) mActivationPanel->apply();
	if(mSecurityPanel) mSecurityPanel->apply();
	if(mMiscPanel) mMiscPanel->apply();
}

void LLPanelExtra::cancel()
{
	if(mActivationPanel) mActivationPanel->cancel();
	if(mSecurityPanel) mSecurityPanel->cancel();
	if(mMiscPanel) mMiscPanel->cancel();
}
// </edit>
