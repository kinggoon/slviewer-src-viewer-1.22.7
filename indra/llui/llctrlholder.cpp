// <edit>
#include "linden_common.h"
#include "llctrlholder.h"
#include "lluictrl.h" // intellisense isn't working
//#include "llwindow.h" // setCursor
#include "llcheckboxctrl.h"
#include "llsliderctrl.h"
//static LLRegisterWidget<LLHexEditor> r("ctrl_holder");
LLCtrlHolder::LLCtrlHolder(const std::string& name_and_text, const LLRect& rect)
:	LLView(name_and_text, rect, TRUE)
{
	mGLFont = LLFontGL::sSansSerif;
	mBackgroundImage = LLUI::getUIImage("progress_fill.tga"); // unused
	setCtrlWidth(100);
}
LLCtrlHolder::~LLCtrlHolder()
{
}
void LLCtrlHolder::reshape(S32 width, S32 height, BOOL called_from_parent)
{
	LLView::reshape( width, height, called_from_parent );
	autoSizeControls();
}
void LLCtrlHolder::setCtrlWidth(S32 ctrl_width)
{
	mCtrlWidth = ctrl_width;
	autoSizeControls();
}
void LLCtrlHolder::addCheck(std::string label, std::string control_name)
{
	LLCheckBoxCtrl* check = new LLCheckBoxCtrl(label, LLRect(0, 20, 20, 0), label);
	if(!control_name.empty())
		check->setControlName(control_name, NULL);
	//check->setEnabledColor(LLColor4::white);
	addChild(check);
}
void LLCtrlHolder::addSlider(S32 min, S32 max, std::string control_name)
{
	LLSliderCtrl* slider = new LLSliderCtrl("", LLRect(0,20,100,0), "", LLFontGL::sSansSerif, 10, 90, TRUE, FALSE, FALSE, NULL, NULL, max, min, max, 1, control_name);
	slider->setPrecision(0);
	addChild(slider);
}
void LLCtrlHolder::addChild(LLView* view, S32 tab_group)
{
	LLView::addChild(view, tab_group);
	autoSizeControls();
}
void LLCtrlHolder::autoSizeControls()
{
	LLRect self_rect = getRect();
	LLRect ctrl_rect = LLRect(self_rect.getWidth(), 25, self_rect.getWidth() + mCtrlWidth, 5);
	const LLView::child_list_t* child_list = getChildList();
	LLView::child_list_const_iter_t child_end = child_list->end();
	for(LLView::child_list_const_iter_t child_iter = child_list->begin();
		child_iter != child_end; ++child_iter)
	{
		ctrl_rect.translate(-mCtrlWidth - 10, 0);
		LLView* view = (*child_iter);
		view->setRect(ctrl_rect);
	}
}
void LLCtrlHolder::draw()
{
	// Background
	LLRect self_rect = getRect();
	gGL.color4fv(LLColor4::grey.mV);
	gGL.getTexUnit(0)->unbind(LLTexUnit::TT_TEXTURE);
	LLGLEnable stipple(GL_LINE_STIPPLE);
	glLineStipple(1, (short) 0x3333);
	gGL.begin(LLRender::LINES);
	gGL.vertex2f(getRect().mLeft + (self_rect.getWidth() / 8), self_rect.mTop - 90);
	gGL.vertex2f(getRect().mLeft + ((self_rect.getWidth() / 8) * 7), self_rect.mTop - 90);
	gGL.vertex2f(getRect().mLeft + (self_rect.getWidth() / 8), self_rect.mBottom - 90);
	gGL.vertex2f(getRect().mLeft + ((self_rect.getWidth() / 8) * 7), self_rect.mBottom - 90);
	gGL.end();
	// Text
	mGLFont->renderUTF8(this->getName(), 0, 10, self_rect.getHeight() - mGLFont->getLineHeight() - 5, LLColor4::black);
	// Controls
	const LLView::child_list_t* child_list = getChildList();
	const LLView::child_list_const_iter_t child_end = child_list->end();
	for(LLView::child_list_const_iter_t child_iter = child_list->begin();
		child_iter != child_end; ++child_iter)
	{
		LLView* view = (*child_iter);
		this->drawChild(view, 0, 0);
	}
}
// </edit>
