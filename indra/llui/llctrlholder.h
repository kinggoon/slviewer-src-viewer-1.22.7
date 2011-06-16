// <edit>
#ifndef LL_LLCTRLHOLDER_H
#define LL_LLCTRLHOLDER_H
#include "llview.h"
class LLCtrlHolder : public LLView
{
public:
	LLCtrlHolder(const std::string& name_and_text, const LLRect& rect);
	~LLCtrlHolder();
	void reshape(S32 width, S32 height, BOOL called_from_parent);
	void setCtrlWidth(S32 ctrl_width);
	void addCheck(std::string label, std::string control_name);
	void addSlider(S32 min, S32 max, std::string control_name);
	void addChild(LLView* view, S32 tab_group = 0);
	void autoSizeControls();
	void draw();
private:
	LLFontGL* mGLFont;
	S32 mCtrlWidth;
	LLUIImage* mBackgroundImage;
};
#endif
// </edit>
