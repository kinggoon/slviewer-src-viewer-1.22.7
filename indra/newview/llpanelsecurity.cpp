// <edit>
#include "llviewerprecompiledheaders.h"
#include "llpanelsecurity.h"
#include "lluictrlfactory.h"
#include "llviewercontrol.h"
#include "llctrlholder.h"
#include "llctrlscrolly.h"
#include "lllineeditor.h"
#include "llagent.h"
#include "llviewerobject.h"
LLPanelSecurity::LLPanelSecurity()
{
	LLUICtrlFactory::getInstance()->buildPanel(this, "panel_preferences_security.xml");
}
LLPanelSecurity::~LLPanelSecurity()
{
}
BOOL LLPanelSecurity::postBuild()
{
	mSpoofProtectionAtOpen = gSavedSettings.getU32("SpoofProtectionLevel");

	LLCtrlScrolly* scrolly = getChild<LLCtrlScrolly>("scrolly");

	LLCtrlHolder* holder = new LLCtrlHolder("IP Spoofing Protection Level", LLRect(10, 60, 487, 10));
	holder->addSlider(0, 3, "SpoofProtectionLevel");
	holder->addCheck("Alerts", "SpoofProtectionAlerts");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("llMapDestination", LLRect(10, 60, 487, 10));
	holder->addCheck("Shown in map", "DisableScriptTeleportRequest");
	holder->addCheck("Shown in chat", "ShowMapDestinationInChat");
	scrolly->addItem(holder);
	
	holder = new LLCtrlHolder("Click-sit", LLRect(10, 60, 487, 10));
	holder->addCheck("Disable", "DisableClickSit");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("LookAt (server-bound)", LLRect(10, 60, 487, 10));
	holder->addCheck("Disable focus", "DisableLookAtFocus");
	holder->addCheck("Disable all", "DisableLookAt");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("Selection Beam and PointAt", LLRect(10, 60, 487, 10));
	holder->addCheck("Disable", "DisablePointAtAndBeam");
	scrolly->addItem(holder);

	return TRUE;
}
void LLPanelSecurity::apply()
{
	if(gMessageSystem)
	{
		U32 new_spoof_protection = gSavedSettings.getU32("SpoofProtectionLevel");
		if(new_spoof_protection != mSpoofProtectionAtOpen)
		{
			mSpoofProtectionAtOpen = new_spoof_protection;
			gMessageSystem->stopSpoofProtection();
			gMessageSystem->startSpoofProtection(new_spoof_protection);
		}
	}
	if(gAgentID.notNull())
	{
		if(gSavedSettings.getBOOL("DisableLookAt"))
			gAgent.setLookAt(LOOKAT_TARGET_NONE, (LLViewerObject*)gAgent.getAvatarObject(), LLVector3(-2.f, 0.f, 0.f));
		if(gSavedSettings.getBOOL("DisableLookAtFocus"))
			gAgent.setLookAt(LOOKAT_TARGET_NONE, (LLViewerObject*)gAgent.getAvatarObject(), LLVector3(-2.f, 0.f, 0.f));
		if(gSavedSettings.getBOOL("DisablePointAtAndBeam"))
			gAgent.setPointAt(POINTAT_TARGET_CLEAR);
	}
}
void LLPanelSecurity::cancel()
{
}
// </edit>
