// <edit>
#include "llviewerprecompiledheaders.h"
#include "llpanelactivation.h"
#include "llbutton.h"
#include "lltexteditor.h"
#include "lluictrlfactory.h"
#include "llviewercontrol.h"
#include "llviewerwindow.h"
#include "llappviewer.h"
#include "llmd5.h"
#include "llviewernetwork.h"
#include "llctrlholder.h"
#include "llctrlscrolly.h"
LLPanelActivation::LLPanelActivation()
{
	mHardwareIDText = "Missingno.";
	mActivationCodeBox = NULL;
	LLUICtrlFactory::getInstance()->buildPanel(this, "panel_preferences_activation.xml");
}
LLPanelActivation::~LLPanelActivation()
{
}
BOOL LLPanelActivation::postBuild()
{
	LLCtrlScrolly* scrolly = getChild<LLCtrlScrolly>("scrolly");
	
	mHardwareIDText = "Hardware ID: " + getHardwareID();
	LLCtrlHolder* holder = new LLCtrlHolder(mHardwareIDText, LLRect(10, 60, 487, 10));
	holder->setCtrlWidth(128);
	LLButton* button = new LLButton("Copy to Clipboard", LLRect(0, 1, 1, 0));
	button->setClickedCallback(onClickCopyResult, this);
	holder->addChild(button);
	scrolly->addItem(holder);

	holder = new LLCtrlHolder("Activation Code", LLRect(10, 60, 487, 10));
	holder->setCtrlWidth(300);
	mActivationCodeBox = new LLLineEditor("edit", LLRect(0,1,1,0));
	mActivationCodeBox->setText(gSavedSettings.getString(std::string("Ac") + std::string("tivationCode")));
	holder->addChild(mActivationCodeBox);
	scrolly->addItem(holder);

	return TRUE;
}
//static
std::string LLPanelActivation::getHardwareID()
{
	DWORD serial = 0;
	DWORD flags = 0;
	BOOL success = GetVolumeInformation(
			L"C:\\",
			NULL,		// volume name buffer
			0,			// volume name buffer size
			&serial,	// volume serial
			NULL,		// max component length
			&flags,		// file system flags
			NULL,		// file system name buffer
			0);			// file system name buffer size
	if(!success) serial = 0;

	unsigned char serial_digest[16]; // MD5RAW_BYTES == 16
	LLMD5 smd5;
	smd5.update((unsigned char*)&serial, sizeof(DWORD));
	smd5.finalize();
	smd5.raw_digest(serial_digest);

	unsigned char mac_digest[16]; // MD5RAW_BYTES == 16
	LLMD5* mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
	mmd5->raw_digest(mac_digest);

	LLUUID id;
	for(int i = 0; i < 16; i++) id.mData[i] = serial_digest[i] ^ mac_digest[i];
	
	return id.asString();
}
//static
void LLPanelActivation::onClickCopyResult(void* data)
{
	LLPanelActivation* self = (LLPanelActivation*)data;
	if(self) gViewerWindow->mWindow->copyTextToClipboard(utf8str_to_wstring(self->mHardwareIDText));
}
void LLPanelActivation::apply()
{
	std::string code = mActivationCodeBox->getText();
	LLStringUtil::trim(code);
	gSavedSettings.setString(std::string("A") + std::string("ctivationCode"), code); // lol ActivationCode
}
void LLPanelActivation::cancel()
{
}
// </edit>
