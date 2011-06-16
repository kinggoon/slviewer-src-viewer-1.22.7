// <edit>
#ifndef LL_LLCTRLSCROLLY_H
#define LL_LLCTRLSCROLLY_H
#include "lluictrl.h"
#include "llscrollbar.h"
#include "llviewborder.h"
#include "llctrlholder.h"
class LLCtrlScrolly : public LLUICtrl
{
public:
	LLCtrlScrolly(const std::string& name, const LLRect& rect);
	~LLCtrlScrolly();
	static LLView* fromXML(LLXMLNodePtr node, LLView *parent, class LLUICtrlFactory *factory);
	void reshape(S32 width, S32 height, BOOL called_from_parent);
	BOOL handleScrollWheel(S32 x, S32 y, S32 clicks);
	BOOL handleMouseDown(S32 x, S32 y, MASK mask);
	BOOL handleHover(S32 x, S32 y, MASK mask);
	BOOL handleMouseUp(S32 x, S32 y, MASK mask);
	void correctScrollbar();
	void addItem(LLCtrlHolder* item);
	void draw();
private:
	LLRect mContentRect;
	LLScrollbar* mScrollbar;
	LLViewBorder* mBorder;
	LLUIImage* mBackgroundImage;
	std::vector<LLCtrlHolder*> mItems;
};
#endif
// </edit>
