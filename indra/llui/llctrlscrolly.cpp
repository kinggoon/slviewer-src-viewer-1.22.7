// <edit>
#include "linden_common.h"
#include "llctrlscrolly.h"
//#include "llwindow.h" // setCursor
static LLRegisterWidget<LLCtrlScrolly> r("ctrl_scrolly");
LLCtrlScrolly::LLCtrlScrolly(const std::string& name, const LLRect& rect)
:	LLUICtrl(name, rect, TRUE, NULL, NULL)
{
	// Background image
	mBackgroundImage = LLUI::getUIImage("test_gradient.png");
	// Border
	mBorder = new LLViewBorder( std::string("border"),
							getRect(),
							LLViewBorder::BEVEL_IN,
							LLViewBorder::STYLE_LINE,
							1 ); // border width
	addChild( mBorder );
	// Content
	mContentRect.setOriginAndSize( 
		0,
		0,
		getRect().getWidth() - SCROLLBAR_SIZE,
		getRect().getHeight());
	// Scrollbar
	LLRect scroll_rect;
	scroll_rect.setOriginAndSize( 
		getRect().getWidth() - SCROLLBAR_SIZE,
		0,
		SCROLLBAR_SIZE,
		getRect().getHeight());
	mScrollbar = new LLScrollbar( std::string("scrollbar"), scroll_rect,
		LLScrollbar::VERTICAL,
		1, // total lines			
		0,						
		1, // page size
		NULL, this );
	mScrollbar->setFollowsRight();
	mScrollbar->setFollowsTop();
	mScrollbar->setFollowsBottom();
	mScrollbar->setEnabled( TRUE );
	mScrollbar->setVisible( TRUE );
	mScrollbar->setOnScrollEndCallback(NULL, NULL);
	addChild(mScrollbar);
	correctScrollbar();
}
LLCtrlScrolly::~LLCtrlScrolly()
{
}
LLView* LLCtrlScrolly::fromXML(LLXMLNodePtr node, LLView *parent, class LLUICtrlFactory *factory)
{
	std::string name("ctrl_scrolly");
	node->getAttributeString("name", name);
	LLRect rect;
	createRect(node, rect, parent, LLRect());
	LLCtrlScrolly* ctrl = new LLCtrlScrolly(name, rect);
	ctrl->initFromXML(node, parent);
	ctrl->correctScrollbar();
	return ctrl;
}
void LLCtrlScrolly::reshape(S32 width, S32 height, BOOL called_from_parent)
{
	// mRect
	LLView::reshape( width, height, called_from_parent );
	// Border
	mBorder->setRect(getRect());
	// Content
	mContentRect.setOriginAndSize( 
		0,
		0,
		getRect().getWidth() - SCROLLBAR_SIZE,
		getRect().getHeight());
	// Scrollbar
	LLRect scroll_rect;
	scroll_rect.setOriginAndSize( 
		getRect().getWidth() - SCROLLBAR_SIZE,
		0,
		SCROLLBAR_SIZE,
		getRect().getHeight());
	mScrollbar->setRect(scroll_rect);
	correctScrollbar();
}
BOOL LLCtrlScrolly::handleScrollWheel(S32 x, S32 y, S32 clicks)
{
	return mScrollbar->handleScrollWheel( 0, 0, clicks );
}
BOOL LLCtrlScrolly::handleMouseDown(S32 x, S32 y, MASK mask)
{
	BOOL handled = FALSE;
	handled = LLView::childrenHandleMouseDown(x, y, mask) != NULL;
	return handled;
}
BOOL LLCtrlScrolly::handleHover(S32 x, S32 y, MASK mask)
{
	BOOL handled = FALSE;
	handled = childrenHandleHover(x, y, mask) != NULL;
	return handled;
}
BOOL LLCtrlScrolly::handleMouseUp(S32 x, S32 y, MASK mask)
{
	BOOL handled = FALSE;
	handled = childrenHandleMouseUp(x, y, mask) != NULL;
	return handled;
}
void LLCtrlScrolly::correctScrollbar()
{
	mScrollbar->setDocSize(mItems.size());
	mScrollbar->setPageSize(mContentRect.getHeight() / 60);
}
void LLCtrlScrolly::addItem(LLCtrlHolder* item)
{
	addChild(item);
	item->reshape(mContentRect.getWidth(), 60, TRUE);
	//item->setOrigin(0, mContentRect.getHeight() - (mItems.size() * 60));
	mItems.push_back(item);
}
void LLCtrlScrolly::draw()
{
	// Background
	//gl_rect_2d(mContentRect, LLColor4::grey4);
	mBackgroundImage->draw(0, 0, mContentRect.getWidth(), mContentRect.getHeight());
	// Foreground
	mBorder->draw();
	drawChild(mScrollbar);
	// Contents
	LLLocalClipRect clip1(mContentRect);
	S32 first_line = mScrollbar->getDocPos();
	S32 last_line = first_line + mScrollbar->getPageSize(); // extra one at bottom
	S32 very_last_line = mItems.size() - 1;
	for(U32 i = 0; i < mItems.size(); i++)
	{
		mItems[i]->setOrigin(0, mContentRect.getHeight() - ((i - first_line + 1) * 60));
	}
	for(int line = first_line; line <= last_line; line++)
	{
		if(line > very_last_line) break;
		drawChild(mItems[line], 0, 0);
	}
}
// </edit>
