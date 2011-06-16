// <edit>

#ifndef LL_LLFLOATERTEXTEDITOR_H
#define LL_LLFLOATERTEXTEDITOR_H

#include "llfloater.h"
#include "lltexteditor.h"
#include "llinventory.h"
#include "llviewerimage.h"

class LLFloaterTextEditor
: public LLFloater
{
public:
	LLFloaterTextEditor(LLInventoryItem* item);
	static void show(LLUUID item_id);
	BOOL postBuild(void);
	void close(bool app_quitting);
	static void imageCallback(BOOL success, 
					LLViewerImage *src_vi,
					LLImageRaw* src, 
					LLImageRaw* aux_src, 
					S32 discard_level,
					BOOL final,
					void* userdata);
	static void assetCallback(LLVFS *vfs,
				   const LLUUID& asset_uuid,
				   LLAssetType::EType type,
				   void* user_data, S32 status, LLExtStat ext_status);
	static void onClickSave(void* user_data);
	static void onClickUpload(void* user_data);
	static void onSaveComplete(const LLUUID& asset_uuid, void* user_data, S32 status, LLExtStat ext_status);
	LLInventoryItem* mItem;
	LLTextEditor* mEditor;
	static std::list<LLFloaterTextEditor*> sInstances;
private:
	virtual ~LLFloaterTextEditor();
};

#endif
// </edit>
