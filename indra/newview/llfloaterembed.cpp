// <DayOh>

#include "llviewerprecompiledheaders.h"
#include "llfloaterembed.h"
#include "lluictrlfactory.h"

#include "llpreviewnotecard.h"

#include "llappviewer.h" // gLocalInventoryRoot
#include "lllocalinventory.h"


LLFloaterEmbed::LLFloaterEmbed(void* owner)
:	LLFloater()
{
	this->previewNotecard = owner;
	LLUICtrlFactory::getInstance()->buildFloater(this, "floater_pretend_item_properties.xml");
}

LLFloaterEmbed::~LLFloaterEmbed()
{
	if(previewNotecard)
	{
		((LLPreviewNotecard*)previewNotecard)->embedderOpen = false;
		((LLPreviewNotecard*)previewNotecard)->floaterEmbed = NULL;
	}
}

BOOL LLFloaterEmbed::postBuild(void)
{
	// Fill in default values

	getChild<LLLineEditor>("creator_id_line")->setText(std::string("00000000-0000-0000-0000-000000000000"));
	getChild<LLLineEditor>("owner_id_line")->setText(std::string("00000000-0000-0000-0000-000000000000"));
	getChild<LLLineEditor>("asset_id_line")->setText(std::string("00000000-0000-0000-0000-000000000000"));
	getChild<LLLineEditor>("name_line")->setText(std::string(""));
	getChild<LLLineEditor>("desc_line")->setText(std::string(""));

	// Set up callbacks

	childSetAction("ok_btn", onClickOK, this);

	return TRUE;
}

// static
void LLFloaterEmbed::onClickOK(void* user_data)
{
	LLFloaterEmbed* floater = (LLFloaterEmbed*)user_data;

	LLUUID item_id;
	item_id.generate();

	std::string name = floater->getChild<LLLineEditor>("name_line")->getText();
	std::string desc = floater->getChild<LLLineEditor>("desc_line")->getText();
	LLUUID asset_id = LLUUID(floater->getChild<LLLineEditor>("asset_id_line")->getText());
	LLUUID creator_id = LLUUID(floater->getChild<LLLineEditor>("creator_id_line")->getText());
	LLUUID owner_id = LLUUID(floater->getChild<LLLineEditor>("owner_id_line")->getText());

	LLAssetType::EType type = LLAssetType::AT_TEXTURE;
	LLInventoryType::EType inv_type = LLInventoryType::IT_TEXTURE;

	LLPermissions* perms = new LLPermissions();
	perms->init(creator_id, owner_id, LLUUID::null, LLUUID::null);

	LLViewerInventoryItem* item = new LLViewerInventoryItem(
			item_id,
			gLocalInventoryRoot,
			*perms,
			asset_id,
			type,
			inv_type,
			name,
			desc,
			LLSaleInfo::DEFAULT,
			0,
			0);

	LLLocalInventory::addItem(item);
}

// </DayOh>