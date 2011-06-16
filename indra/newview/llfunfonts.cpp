// <edit>
#include "llviewerprecompiledheaders.h"
#include "llfunfonts.h"
#include "llviewercontrol.h"
// static
std::string LLFunFonts::apply(std::string str)
{
	U32 font = gSavedSettings.getU32("FunFont");
	if(font)
	{
		std::string out;
		LLWString wstr = utf8str_to_wstring(str);
		int len = wstr.length();
		int i;
		switch(font)
		{
		case 1: // Heart
			out = llformat("%s %c%c%c", str.c_str(), 0xe2, 0x99, 0xa5);
			break;
		case 2: // Wide heart
			out = llformat("%s %c%c%c", str.c_str(), 0xe2, 0x9d, 0xa4);
			break;
		case 3: // You notice this text
			for(i = 0; i < len; i++)
			{
				std::string character = wstring_to_utf8str(wstr.substr(i, 1));
				if(character.size() == 1)
				{
					char c = character[0];
					if(c < 0x20) out += character;
					else if(c == 0x20) out += llformat("%c%c%c", 0xe3, 0x80, c + 0x60);
					//else if(c < 0x30) out += llformat("%c%c%c", 0xe3, 0x80, c + 0x60);
					else if(c < 0x60) out += llformat("%c%c%c", 0xef, 0xbc, c + 0x60);
					else out += llformat("%c%c%c", 0xef, 0xbd, c + 0x20);
				}
				else out += character;
			}
			break;
		case 4: // Up side down
			for(i = len - 1; i >= 0; i--)
			{
				static std::string right_side_up[38] = {"a",						  "b","c",						   "d","e",							"f",						 "g",						  "h",						   "i",							"j",						 "k",						  "m",						   "n","o","p","q","r",							"t",						 "u","v",						  "w",						   "y",							".",						 "[","]","(",")","{","}","?",						  "!",						   "'","<",">","_",									"\\","/", ";"};
				static std::string up_side_down[38]	 = {llformat("%c%c", 0xc9, 0x90), "q",llformat("%c%c", 0xc9, 0x94),"p",llformat("%c%c", 0xc7, 0x9d),llformat("%c%c", 0xc9, 0x9f),llformat("%c%c", 0xc6, 0x83),llformat("%c%c", 0xc9, 0xa5),llformat("%c%c", 0xc4, 0xb1),llformat("%c%c", 0xc9, 0xbe),llformat("%c%c", 0xca, 0x9e),llformat("%c%c", 0xc9, 0xaf),"u","o","d","b",llformat("%c%c", 0xc9, 0xb9),llformat("%c%c", 0xca, 0x87),"n",llformat("%c%c", 0xca, 0x8c),llformat("%c%c", 0xca, 0x8d),llformat("%c%c", 0xca, 0x8e),llformat("%c%c", 0xcb, 0x99),"]","[",")","(","}","{",llformat("%c%c", 0xc2, 0xbf),llformat("%c%c", 0xc2, 0xa1),",",">","<",llformat("%c%c%c", 0xe2, 0x80, 0xbe),"/", "\\",llformat("%c%c", 0xd8, 0x9b)};
				std::string character = wstring_to_utf8str(wstr.substr(i, 1));
				LLStringUtil::toLower(character);
				int index = 0;
				for(; index < 38; index++)
				{
					if(right_side_up[index] == character)
					{
						out += up_side_down[index];
						break;
					}
					else if(up_side_down[index] == character)
					{
						out += right_side_up[index];
						break;
					}
				}
				if(index == 38) out += character;
			}
			break;
		default:
			break;
		}
		return out;
	}
	return str;
}
// </edit>
