// <edit>
#include "llviewerprecompiledheaders.h"
#include "llpanelmisc.h"
#include "lluictrlfactory.h"
#include "llviewercontrol.h"
#include "llctrlholder.h"
#include "llctrlscrolly.h"
#include "lllineeditor.h"
#include "llagent.h"
LLPanelMisc::LLPanelMisc()
{
	LLUICtrlFactory::getInstance()->buildPanel(this, "panel_preferences_misc.xml");
}
LLPanelMisc::~LLPanelMisc()
{
}
BOOL LLPanelMisc::postBuild()
{
	LLCtrlScrolly* scrolly = getChild<LLCtrlScrolly>("scrolly");

	LLCtrlHolder* holder = new LLCtrlHolder("Avatar enter/exit notifications", LLRect(10, 60, 487, 10));
	holder->setCtrlWidth(200);
	holder->addCheck("Enable", "RadarAnnounce");
	holder->addCheck("Include adjacent regions", "RadarAnnounceAdjacentRegions");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("IM tab created when someone is typing a message", LLRect(10, 60, 487, 10));
	holder->addCheck("Enable", "OpenIMOnTyping");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("IM sound", LLRect(10, 60, 487, 10));
	holder->addCheck("Enable", "PlayIMSound");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("Customize IM sound", LLRect(10, 60, 487, 10));
	holder->setCtrlWidth(300);
	LLLineEditor* edit = new LLLineEditor("edit", LLRect(0,1,1,0));
	//edit->setText(gSavedSettings.getString("IMSoundID"));
	edit->setControlName("IMSoundID", NULL);
	holder->addChild(edit);
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("KeyTool results behavior", LLRect(10, 60, 487, 10));
	holder->setCtrlWidth(200);
	holder->addCheck("Open automatically", "KeyToolAutomaticOpen");
	holder->addCheck("Close the floater", "KeyToolAutomaticClose");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("Camera collides with surfaces", LLRect(10, 60, 487, 10));
	holder->addCheck("Disable that", "DisableCameraCollision");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("Double-click teleport", LLRect(10, 60, 487, 10));
	holder->addCheck("Enabled", "DoubleClickTeleport");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("Pre-jump and landing delays", LLRect(10, 60, 487, 10));
	holder->addCheck("Disable them", "Nimble");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("Gestures", LLRect(10, 60, 487, 10));
	holder->addCheck("Enabled", "EnableGestures");
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("Allow fly", LLRect(10, 60, 487, 10));
	holder->addCheck("Always", "AlwaysAllowFly");
	scrolly->addItem(holder);
	
	return TRUE;
}
void LLPanelMisc::apply()
{
	if(gAgentID.notNull())
	{
		if(gSavedSettings.getBOOL("DisableCameraCollision"))
			gAgent.setCameraCollidePlane(LLVector4(0.0f, 0.0f, 0.0f, 0.0f));
	}
}
void LLPanelMisc::cancel()
{
}
// </edit>
