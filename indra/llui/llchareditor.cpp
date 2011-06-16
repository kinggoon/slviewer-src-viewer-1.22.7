// <edit>
#include "linden_common.h"
#include "llchareditor.h"

LLCharEditor::LLCharEditor(const std::string& name, const LLRect& rect, BOOL is_hex)
:	LLUICtrl( name, rect, TRUE, NULL, NULL, FOLLOWS_TOP | FOLLOWS_LEFT ),
	mIsHex(is_hex)
{
}

LLCharEditor::~LLCharEditor()
{
	setChar(0);
}

BOOL LLCharEditor::setChar(U8 c)
{
	mChar = c;
	if(mIsHex) mChar &= 0x0f;
	mText = utf8str_to_wstring(mIsHex ? llformat("%X", mChar) : llformat("%c", mChar));
	return TRUE;
}

U8 LLCharEditor::getChar()
{
	return mChar;
}

void LLCharEditor::draw()
{
	gGL.getTexUnit(0)->unbind(LLTexUnit::TT_TEXTURE);
	gl_rect_2d(LLRect(0, getRect().getHeight(), getRect().getWidth(), 0), LLColor4::white);
	LLFontGL* font = LLFontGL::sMonospace;
	font->render(mText, S32(0), 1.0f, 1.0f, LLColor4::black,
					LLFontGL::LEFT, LLFontGL::BASELINE, LLFontGL::NORMAL,
					1, S32_MAX, NULL, FALSE, FALSE);
}

BOOL LLCharEditor::handleMouseDown(S32 x, S32 y, MASK mask)
{
	setFocus(TRUE);
	return TRUE;
}

BOOL LLCharEditor::handleKey(KEY key, MASK mask, BOOL called_from_parent)
{
	return TRUE;
}

BOOL LLCharEditor::handleKeyHere(KEY key, MASK mask)
{
	return TRUE;
}

BOOL LLCharEditor::handleUnicodeChar(llwchar uni_char, BOOL called_from_parent)
{
	U8 c = uni_char & 0xff;
	if(mIsHex)
	{
		if(c > 0x39)
		{
			if(c > 0x46) c -= 0x20;
			if(c >= 0x41 && c <= 0x46) c = (c & 0x0f) + 0x09;
			else return TRUE;
		}
		else if(c < 0x30) return TRUE;
		else c &= 0x0f;
	}
	setChar(c);
	return TRUE;
}

BOOL LLCharEditor::handleUnicodeCharHere(llwchar uni_char)
{
	return TRUE;
}
// </edit>