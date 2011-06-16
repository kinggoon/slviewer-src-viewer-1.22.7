// <edit>
#ifndef LL_LLCHAREDITOR_H
#define LL_LLCHAREDITOR_H

#include "lluictrl.h"

class LLCharEditor : public LLUICtrl
{
public:
	LLCharEditor(const std::string& name, const LLRect& rect, BOOL is_hex = FALSE);
	virtual ~LLCharEditor();
	BOOL setChar(U8 c);
	U8 getChar();
	void draw();
	BOOL handleMouseDown(S32 x, S32 y, MASK mask);
	BOOL handleKey(KEY key, MASK mask, BOOL called_from_parent);
	BOOL handleKeyHere(KEY key, MASK mask);
	BOOL handleUnicodeChar(llwchar uni_char, BOOL called_from_parent);
	BOOL handleUnicodeCharHere(llwchar uni_char);
private:
	BOOL mIsHex;
	U8 mChar;
	LLWString mText;
};

#endif
// </edit>