// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation14.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 14

void _activation_check_proc_14_func_2082729590(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] = _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_14_func_1221781267(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_14_func_884919157(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_doaccount;

}

void _activation_check_proc_14_func_1280586716(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_secret;

}

void _activation_check_proc_14_func_577819473(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_14_func_901924158(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_9;

	_activation_check_proc_14_func_225753212(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_14_func_225753212(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_e.mData[0x7];

}

void _activation_check_proc_14_func_814032174(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1700618711(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_641694307(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_14_func_1505574970(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_14_func_1556592889(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_14_func_1509268341(int& _activatnvar_confusing_int_f, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x2] != _activatnvar_pos) _activatnvar_confusing_bool_f = false;

	/* inline */ _activation_check_proc_14_func_411702189(_activatnvar_confusing_int_f, _activatnvar_confusing_int_5);
}

void _activation_check_proc_14_func_1376873770(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_14_func_1287796496(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_14_func_1598287676(_activatnvar_combined_id, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_14_func_1598287676(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xd] <<= _activatnvar_combined_id.mData[0x4];

}

void _activation_check_proc_14_func_1107411366(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

	_activation_check_proc_14_func_1315245335(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_confusing_LLUUID_9, _activatnvar_fscked, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_14_func_1315245335(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x7] |= _activatnvar_confusing_LLUUID_9.mData[0xf];

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_835252592(bool& _activatnvar_confusing_bool_2, LLMD5& _activatnvar_smd5, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_2 = false;

	/* inline */ _activation_check_proc_14_func_142963336(_activatnvar_smd5);
}

void _activation_check_proc_14_func_629618817(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_14_func_1801946810(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_14_func_1783797147(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 += _activatnvar_confusing_int_c;

}

void _activation_check_proc_14_func_37710413(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("f349532e-ea86-b480-1c58-2cfb95615951");

	_activation_check_proc_14_func_1154049643();
	/* inline */ _activation_check_proc_14_func_1939674660(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_14_func_1154049643()
{
	
}

void _activation_check_proc_14_func_491076132(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_14_func_2050103357(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_14_func_978258(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1312200046(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_14_func_2053261878(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_f[0xd] &= _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_14_func_643255552(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1140830686(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_7, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_1 <<= _activatnvar_confusing_char_7;

	_activation_check_proc_14_func_2053261878(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_5);
	_activation_check_proc_14_func_643255552(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
	/* inline */ _activation_check_proc_14_func_33246837(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_14_func_9598844(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
	/* inline */ _activation_check_proc_14_func_184159348(_activatnvar_generic_iterator);
	_activation_check_proc_14_func_1312200046(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_14_func_1801238638(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_14_func_1381150152(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_14_func_393917670(U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_code)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
	_activation_check_proc_14_func_1910166994(_activatnvar_code, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_14_func_1910166994(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_code;

}

void _activation_check_proc_14_func_53634670(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] >>= _activatnvar_confusing_LLUUID_1.mData[0x5];

	/* inline */ _activation_check_proc_14_func_278232933(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_299963485(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_LLUUID_c.mData[0x4];

	/* inline */ _activation_check_proc_14_func_2092314868(_activatnvar_confusing_chararray_9, _activatnvar_confusing_U8_4);
	/* inline */ _activation_check_proc_14_func_98295938(_activatnvar_confusing_bool_3);
}

void _activation_check_proc_14_func_1752107428(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_int_1 &= 0xff;

	/* inline */ _activation_check_proc_14_func_833997231(_activatnvar_confusing_bool_6, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_14_func_2143551528(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_14_func_678556880(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_c);
	_activation_check_proc_14_func_1087388861(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_2);
	_activation_check_proc_14_func_1091886574(_activatnvar_confusing_bool_0, _activatnvar_confusing_char_b);
}

void _activation_check_proc_14_func_1091886574(bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_char_b >>= 0xf;

}

void _activation_check_proc_14_func_1087388861(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x8] == 0x4) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_14_func_1887644160(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] <<= _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_14_func_1660351446(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("f3bf523a-46eb-308a-918a-4496e348d4c7");

}

void _activation_check_proc_14_func_996577216(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_8++;

	/* inline */ _activation_check_proc_14_func_810230130(_activatnvar_generic_iterator);
	_activation_check_proc_14_func_841055917(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_confusing_int_7, _activatnvar_confusing_int_a, _activatnvar_combined_id);
	_activation_check_proc_14_func_1887535572(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_14_func_1887535572(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x0] ^= _activatnvar_confusing_LLUUID_1.mData[0x2];

}

void _activation_check_proc_14_func_841055917(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_7 *= _activatnvar_confusing_int_a;

}

void _activation_check_proc_14_func_110589858(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("bb978491-85e1-a96e-2f87-fccd343b3d96");

}

void _activation_check_proc_14_func_932978851(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_14_func_294031543(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_14_func_1827830461(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_4 ^= 0x6;

}

void _activation_check_proc_14_func_1835997959(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_14_func_1803183029(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_int_3 &= 0xff;

	if(_activatnvar_confusing_LLUUID_f.mData[0x9] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_14_func_217932756(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_14_func_2063965591(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_14_func_1202676683(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

	_activation_check_proc_14_func_2063965591(_activatnvar_t0, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_14_func_1663018100(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_14_func_1178625702(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_LLUUID_b.mData[0xa] += _activatnvar_confusing_chararray_c[0x3];

	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_c += 0x6;

}

void _activation_check_proc_14_func_1020054483(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b |= _activatnvar_confusing_LLUUID_b.mData[0xe];

}

void _activation_check_proc_14_func_1040727876(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x9] |= _activatnvar_confusing_chararray_1[0x5];

	_activation_check_proc_14_func_1020054483(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_char_b);
}

void _activation_check_proc_14_func_429493460(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_509543766(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("53408644-ae32-329b-6781-f585db21ba64");

}

void _activation_check_proc_14_func_702342163(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_c[0xb] &= _activatnvar_ser_digest[0x5];

	_activation_check_proc_14_func_975773540(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_14_func_975773540(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_14_func_922306736(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_char_0;

}

void _activation_check_proc_14_func_1806886481(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] &= _activatnvar_confusing_chararray_c[0x5];

	_activation_check_proc_14_func_922306736(_activatnvar_confusing_char_0, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_14_func_892412720(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_LLUUID_2.mData[0x2];

}

void _activation_check_proc_14_func_1047402313(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_14_func_1958423310(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] *= _activatnvar_confusing_LLUUID_8.mData[0x8];

}

void _activation_check_proc_14_func_292237686(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e = 0x3;

	_activation_check_proc_14_func_1047402313(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_14_func_1409758739(_activatnvar_confusing_int_9);
	_activation_check_proc_14_func_1958423310(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_14_func_1153292107(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_14_func_433845842(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_0;

	_activation_check_proc_14_func_1153292107(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_14_func_2133631205(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_14_func_458083530()
{
	
}

void _activation_check_proc_14_func_14252099(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_a.mData[0x7] &= _activatnvar_confusing_chararray_9[0x7];

	_activation_check_proc_14_func_1668888788(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_14_func_1668888788(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 >>= 0xd;

}

void _activation_check_proc_14_func_1694781943(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_14_func_875023052(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_c.mData[0xf] &= _activatnvar_confusing_LLUUID_b.mData[0x3];

}

void _activation_check_proc_14_func_1498356468()
{
	
}

void _activation_check_proc_14_func_1944965726(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xa] == _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_14_func_1181563077(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d |= 0xf;

}

void _activation_check_proc_14_func_1256392905(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_746220113(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_d >>= 0x6;

	_activation_check_proc_14_func_1163723769(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_14_func_1256392905(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_1163723769(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("74f3eebc-32d3-5b3c-e884-6be2211075e7");

}

void _activation_check_proc_14_func_586678441(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xf] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_14_func_1760315343(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_5 >>= 0xb;

}

void _activation_check_proc_14_func_441167679(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= _activatnvar_confusing_int_7;

}

void _activation_check_proc_14_func_191531232(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_14_func_1701517291(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_c)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_c *= _activatnvar_confusing_char_9;

}

void _activation_check_proc_14_func_1609387794(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x3] |= _activatnvar_confusing_LLUUID_c.mData[0x3];

	_activation_check_proc_14_func_1347142255(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_14_func_1347142255(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_14_func_1980033426(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_2[0x3];

}

void _activation_check_proc_14_func_1175619057(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_5.mData[0xf] |= _activatnvar_section1.mData[0x2];

}

void _activation_check_proc_14_func_1546553864(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_1175619057(_activatnvar_confusing_LLUUID_5, _activatnvar_section1);
	_activation_check_proc_14_func_2134344134(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_2134344134(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_346480976(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_14_func_435590528(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] ^= _activatnvar_confusing_chararray_9[0x8];

	_activation_check_proc_14_func_346480976(_activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_14_func_530987547(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_26082277(LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_4;

	/* inline */ _activation_check_proc_14_func_466267272(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_107888735(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_f)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x4] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_14_func_82996582(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_14_func_2100508968(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_14_func_197111052(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_14_func_666162688(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_3 <<= _activatnvar_confusing_int_6;

	_activation_check_proc_14_func_320312952();
}

void _activation_check_proc_14_func_320312952()
{
	
}

void _activation_check_proc_14_func_640444963(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_4.mData[0x8];

}

void _activation_check_proc_14_func_436756845(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x6] = _activatnvar_confusing_LLUUID_8.mData[0x1];

}

void _activation_check_proc_14_func_58789311(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_e[0xd] += _activatnvar_confusing_LLUUID_9.mData[0x2];

}

void _activation_check_proc_14_func_1792554487(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("d4f77692-44c7-c0f9-6e32-2ce2d394aeb8");

}

void _activation_check_proc_14_func_594865048(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_14_func_582383517(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xc] &= _activatnvar_confusing_LLUUID_7.mData[0x7];

}

void _activation_check_proc_14_func_503582667(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_6[0xf] = _activatnvar_confusing_LLUUID_4.mData[0x9];

}

void _activation_check_proc_14_func_2019255780(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_8;

	/* inline */ _activation_check_proc_14_func_744794262();
	_activation_check_proc_14_func_503582667(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_14_func_974608022(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_14_func_591590425(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] ^= _activatnvar_confusing_chararray_9[0x2];

}

void _activation_check_proc_14_func_1346690763(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_14_func_638407225(_activatnvar_confusing_LLUUID_d, _activatnvar_lace);
	_activation_check_proc_14_func_273947746(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_14_func_273947746(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_14_func_638407225(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_lace;

}

void _activation_check_proc_14_func_1202760324(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_e[0x3] *= _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_14_func_1009308932(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_14_func_664152074(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_chararray_d[0x2];

}

void _activation_check_proc_14_func_148045038(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_0 &= _activatnvar_confusing_char_9;

}

void _activation_check_proc_14_func_1598412581(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("bfa434eb-b245-3183-4835-b8a19ad407a9");

	_activation_check_proc_14_func_148045038(_activatnvar_confusing_bool_5, _activatnvar_confusing_U8_0, _activatnvar_confusing_char_9);
	_activation_check_proc_14_func_664152074(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_14_func_680725598(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_14_func_1104369384(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_e[0x8] |= _activatnvar_confusing_LLUUID_e.mData[0xc];

}

void _activation_check_proc_14_func_257042942(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 |= _activatnvar_t1;

}

void _activation_check_proc_14_func_1878381126(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 <<= 0x4;

}

void _activation_check_proc_14_func_1115932428(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xa] |= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_14_func_1268937709(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_14_func_2101224702(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("e61c3e7a-02de-5bf6-2649-85dc0a65c848");

	_activation_check_proc_14_func_1268937709(_activatnvar_confusing_int_8);
}

void _activation_check_proc_14_func_914586789()
{
	
}

void _activation_check_proc_14_func_935365667(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_14_func_1295718893(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_7;

	if(_activatnvar_confusing_LLUUID_9.mData[0xa] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_14_func_1283115334(U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_14_func_772599237(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 |= 0x6;

}

void _activation_check_proc_14_func_1458816927(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 30; _activatnvar_strbuf_0[0] ^= 38; _activatnvar_strbuf_0[1] = 6; _activatnvar_strbuf_0[1] ^= 100; _activatnvar_strbuf_0[2] = 60; _activatnvar_strbuf_0[2] ^= 95; _activatnvar_strbuf_0[3] = 76; _activatnvar_strbuf_0[3] ^= 121; _activatnvar_strbuf_0[4] = 20; _activatnvar_strbuf_0[4] ^= 32; _activatnvar_strbuf_0[5] = 90; _activatnvar_strbuf_0[5] ^= 110; _activatnvar_strbuf_0[6] = 113; _activatnvar_strbuf_0[6] ^= 67; _activatnvar_strbuf_0[7] = 1; _activatnvar_strbuf_0[7] ^= 52; _activatnvar_strbuf_0[8] = 42; _activatnvar_strbuf_0[8] ^= 7; _activatnvar_strbuf_0[9] = 75; _activatnvar_strbuf_0[9] ^= 123; _activatnvar_strbuf_0[10] = 34; _activatnvar_strbuf_0[10] ^= 19; _activatnvar_strbuf_0[11] = 78; _activatnvar_strbuf_0[11] ^= 120; _activatnvar_strbuf_0[12] = 85; _activatnvar_strbuf_0[12] ^= 101; _activatnvar_strbuf_0[13] = 71; _activatnvar_strbuf_0[13] ^= 106; _activatnvar_strbuf_0[14] = 56; _activatnvar_strbuf_0[14] ^= 8; _activatnvar_strbuf_0[15] = 32; _activatnvar_strbuf_0[15] ^= 16; _activatnvar_strbuf_0[16] = 34; _activatnvar_strbuf_0[16] ^= 26; _activatnvar_strbuf_0[17] = 69; _activatnvar_strbuf_0[17] ^= 119; _activatnvar_strbuf_0[18] = 28; _activatnvar_strbuf_0[18] ^= 49; _activatnvar_strbuf_0[19] = 73; _activatnvar_strbuf_0[19] ^= 122; _activatnvar_strbuf_0[20] = 84; _activatnvar_strbuf_0[20] ^= 102; _activatnvar_strbuf_0[21] = 58; _activatnvar_strbuf_0[21] ^= 10; _activatnvar_strbuf_0[22] = 54; _activatnvar_strbuf_0[22] ^= 4; _activatnvar_strbuf_0[23] = 91; _activatnvar_strbuf_0[23] ^= 118; _activatnvar_strbuf_0[24] = 7; _activatnvar_strbuf_0[24] ^= 100; _activatnvar_strbuf_0[25] = 38; _activatnvar_strbuf_0[25] ^= 30; _activatnvar_strbuf_0[26] = 127; _activatnvar_strbuf_0[26] ^= 79; _activatnvar_strbuf_0[27] = 11; _activatnvar_strbuf_0[27] ^= 57; _activatnvar_strbuf_0[28] = 60; _activatnvar_strbuf_0[28] ^= 12; _activatnvar_strbuf_0[29] = 95; _activatnvar_strbuf_0[29] ^= 109; _activatnvar_strbuf_0[30] = 115; _activatnvar_strbuf_0[30] ^= 74; _activatnvar_strbuf_0[31] = 21; _activatnvar_strbuf_0[31] ^= 37; _activatnvar_strbuf_0[32] = 115; _activatnvar_strbuf_0[32] ^= 67; _activatnvar_strbuf_0[33] = 84; _activatnvar_strbuf_0[33] ^= 108; _activatnvar_strbuf_0[34] = 106; _activatnvar_strbuf_0[34] ^= 90; _activatnvar_strbuf_0[35] = 56; _activatnvar_strbuf_0[35] ^= 10; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_14_func_1845236456(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x8] &= _activatnvar_confusing_chararray_1[0xe];

}

void _activation_check_proc_14_func_136331320(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_14_func_725651871(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_section1;

}

void _activation_check_proc_14_func_716948400(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] &= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_14_func_361193532(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a *= _activatnvar_confusing_chararray_a[0xc];

}

void _activation_check_proc_14_func_1975616335(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_14_func_900438188(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 <<= 0xa;

}

void _activation_check_proc_14_func_1908439300(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 <<= 0xc;

}

void _activation_check_proc_14_func_469737169(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_LLUUID_1.mData[0x8];

}

void _activation_check_proc_14_func_414589377(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 += 0x5;

}

void _activation_check_proc_14_func_198838854(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x2] <<= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_14_func_2024234093(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_combined_id;

}

void _activation_check_proc_14_func_400136349(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_14_func_1423137555(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_5[0x4] <<= _activatnvar_confusing_chararray_b[0x6];

	_activation_check_proc_14_func_400136349(_activatnvar_confusing_int_6);
}

void _activation_check_proc_14_func_1455229416(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_14_func_1755400425(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_14_func_1226877487(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
}

void _activation_check_proc_14_func_160299665(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_14_func_1135915819(_activatnvar_t0, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_14_func_1135915819(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_14_func_663037685()
{
	
}

void _activation_check_proc_14_func_876930400(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_8;

	_activation_check_proc_14_func_663037685();
}

void _activation_check_proc_14_func_833725629(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_14_func_2010718694(int& _activatnvar_confusing_int_e)
{
	
	_activation_check_proc_14_func_2084121514(_activatnvar_confusing_int_e);
}

void _activation_check_proc_14_func_2084121514(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e |= 0x1;

}

void _activation_check_proc_14_func_388295516(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_chararray_2[0x0] |= _activatnvar_code.mData[0x4];

	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_14_func_2100670975(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_14_func_1032210644(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_U8_f;

	_activation_check_proc_14_func_473909465();
}

void _activation_check_proc_14_func_473909465()
{
	
}

void _activation_check_proc_14_func_168173260(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= _activatnvar_confusing_int_e;

}

void _activation_check_proc_14_func_277579993(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_14_func_91366828(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_chararray_1[0x7];

}

void _activation_check_proc_14_func_86920419(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_14_func_1704847860(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] <<= _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_14_func_1446555852(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_14_func_672062436(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_ser_digest)
{
	
	/* inline */ _activation_check_proc_14_func_41580642(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_14_func_1536128889(_activatnvar_confusing_char_a, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_14_func_1536128889(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_a <<= _activatnvar_confusing_chararray_6[0x1];

}

void _activation_check_proc_14_func_201982505(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_14_func_1181573465(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("e34a80e1-13a5-bcb4-e1e5-4471150ecd46");

}

void _activation_check_proc_14_func_392994311(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
	/* inline */ _activation_check_proc_14_func_28315813(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_14_func_561803425(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xf] |= _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_14_func_621800341(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_U8_e;

	_activation_check_proc_14_func_561803425(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_14_func_371358756(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] <<= _activatnvar_fscked.mData[0xc];

}

void _activation_check_proc_14_func_2128048740(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b = 0xb;

}

void _activation_check_proc_14_func_491305701(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 >>= 0xf;

}

void _activation_check_proc_14_func_156989224(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_f.mData[0x3] += _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_14_func_338561121(int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activatnvar_confusing_chararray_c[0x6] &= _activatnvar_confusing_LLUUID_2.mData[0xf];

}

void _activation_check_proc_14_func_994920968(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_5)
{
	_activatnvar_pos &= 7;
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_d.mData[0xb];

}

void _activation_check_proc_14_func_720619610(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_14_func_2006447468(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 ^= 0xb;

}

void _activation_check_proc_14_func_543037718(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_6;

	_activation_check_proc_14_func_2006447468(_activatnvar_confusing_U8_5);
	_activation_check_proc_14_func_1515952452(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_8);
	_activation_check_proc_14_func_69641354(_activatnvar_confusing_char_f);
}

void _activation_check_proc_14_func_69641354(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_14_func_1515952452(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xf] == 0x2) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_14_func_1248247845()
{
	
}

void _activation_check_proc_14_func_956226397(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_0[0x7] = _activatnvar_code.mData[0x9];

}

void _activation_check_proc_14_func_1484410891(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_14_func_2141920698(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1380476054(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_14_func_67651271(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_so, LLUUID& _activatnvar_secret, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_14_func_2057288383(_activatnvar_confusing_LLUUID_e);
	_activation_check_proc_14_func_2013268592(_activatnvar_confusing_LLUUID_6, _activatnvar_secret);
	_activation_check_proc_14_func_1380476054(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_14_func_2013268592(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_secret;

}

void _activation_check_proc_14_func_2057288383(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("77bb3d1c-76ab-cc1b-4ff4-1d0eb6862208");

}

void _activation_check_proc_14_func_1058764079(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("e9a6ed6d-0744-f215-2518-d9934a11dff3");

	_activation_check_proc_14_func_426997750(_activatnvar_t0);
}

void _activation_check_proc_14_func_426997750(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_14_func_1420847785(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("a1ede316-8586-8761-0bbd-0170011a5fdc");

}

void _activation_check_proc_14_func_1192409670(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section1)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
	_activation_check_proc_14_func_1420847785(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_14_func_1250493774(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_14_func_83044187(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_4;

	_activation_check_proc_14_func_1984075662(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_14_func_1036727792(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_e);
	_activation_check_proc_14_func_843560892();
}

void _activation_check_proc_14_func_843560892()
{
	
}

void _activation_check_proc_14_func_1984075662(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x3] <<= _activatnvar_confusing_LLUUID_7.mData[0x9];

}

void _activation_check_proc_14_func_614966981(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_14_func_840871313(LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_so;

	_activation_check_proc_14_func_614966981(_activatnvar_t0);
	/* inline */ _activation_check_proc_14_func_1432204974(_activatnvar_t0);
	/* inline */ _activation_check_proc_14_func_1141041459();
}

void _activation_check_proc_14_func_1626859576(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("9978f87f-ef12-8904-acf7-e50d405b37ce");

}

void _activation_check_proc_14_func_1053078958(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_582947963(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] += _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_14_func_1853622184(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_a;

	/* inline */ _activation_check_proc_14_func_338894894(_activatnvar_confusing_int_9, _activatnvar_confusing_int_3);
	_activation_check_proc_14_func_582947963(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_14_func_1989801143(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_chararray_9[0x2] += _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_14_func_498212448(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_LLUUID_8.mData[0xb];

	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1824815795(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_14_func_610361743(_activatnvar_generic_iterator);
	_activation_check_proc_14_func_498212448(_activatnvar_confusing_LLUUID_8, _activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_14_func_404813196(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_14_func_229773256(int& _activatnvar_confusing_int_e, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
	_activation_check_proc_14_func_1232865596(_activatnvar_confusing_int_e);
	_activation_check_proc_14_func_404813196(_activatnvar_t0);
}

void _activation_check_proc_14_func_1232865596(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e <<= 0xd;

}

void _activation_check_proc_14_func_1165628945(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 |= _activatnvar_secret.mData[0x7];

	/* inline */ _activation_check_proc_14_func_1025377811(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_14_func_1432299284(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f ^= 0xa;

}

void _activation_check_proc_14_func_172818712(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c = 0xa;

}

void _activation_check_proc_14_func_476940941(int& _activatnvar_confusing_int_4, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_int_4++;

	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_14_func_1674158479(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_2.mData[0xc] >>= _activatnvar_confusing_chararray_1[0xc];

}

void _activation_check_proc_14_func_1344011625(unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activatnvar_confusing_U8_c |= _activatnvar_confusing_chararray_0[0x5];

}

void _activation_check_proc_14_func_453491924(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_4 <<= 0x1;

}

void _activation_check_proc_14_func_502855546(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_fscked.mData[0x2];

}

void _activation_check_proc_14_func_1486250800(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_0[0xc] >>= _activatnvar_code.mData[0x2];

}

void _activation_check_proc_14_func_1372022441(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_14_func_804313988(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xa] <<= _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_14_func_1043840581(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 ^= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_14_func_523695865(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_LLUUID_c.mData[0x9];

}

void _activation_check_proc_14_func_1156595895(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activatnvar_confusing_U8_1 = _activatnvar_confusing_chararray_6[0xd];

}

void _activation_check_proc_14_func_163210970(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_char_8 &= _activatnvar_secret.mData[0xd];

	_activation_check_proc_14_func_1156595895(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_6, _activatnvar_confusing_int_7);
}

void _activation_check_proc_14_func_393577680(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 <<= _activatnvar_confusing_chararray_5[0xa];

	_activatnvar_confusing_char_5 = _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_14_func_1782897039(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_9 = false;

	_activation_check_proc_14_func_13770806(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_13770806(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_14_func_2126356753(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_5.mData[0xc] >>= _activatnvar_confusing_chararray_d[0x1];

}

void _activation_check_proc_14_func_1702187780(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

	_activation_check_proc_14_func_2126356753(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_14_func_2013420162()
{
	
}

void _activation_check_proc_14_func_1289331465(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("fddf0271-ffc3-d661-a0a1-ba0a96db96c9");

}

void _activation_check_proc_14_func_1702285876(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_c[0x8] = _activatnvar_confusing_chararray_9[0x7];

}

void _activation_check_proc_14_func_416802777(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_f.mData[0xf];

	/* inline */ _activation_check_proc_14_func_1392367932(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_7);
	_activation_check_proc_14_func_912219517(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_14_func_912219517(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xf] ^= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_14_func_707997643(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_14_func_1124814499(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_14_func_1069294697(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x5] == 0x5) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_14_func_733732458(_activatnvar_generic_iterator);
	_activation_check_proc_14_func_1708222623(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_1708222623(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1966942382(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_so.mData[0x1];

}

void _activation_check_proc_14_func_1680309081(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_14_func_1872044656(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_14_func_738851948(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_0.mData[0x1] ^= _activatnvar_fscked.mData[0xb];

}

void _activation_check_proc_14_func_1775709489(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("aa678ed4-1306-fb96-ec53-dac7cd139284");

}

void _activation_check_proc_14_func_1787607989(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= 0xd;

}

void _activation_check_proc_14_func_1723794437(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_14_func_1900044395(LLMD5*& _activatnvar_mmd5, char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_char_3;

	_activation_check_proc_14_func_1723794437(_activatnvar_ser_digest, _activatnvar_smd5);
	/* inline */ _activation_check_proc_14_func_335551634(_activatnvar_mmd5);
}

void _activation_check_proc_14_func_1412850794(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_14_func_2122924136(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("370db6d6-f056-9688-30e6-03b7484530d2");

}

void _activation_check_proc_14_func_482053468(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 >>= _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_14_func_1343386248()
{
	
}

void _activation_check_proc_14_func_1516737127(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_2014629787(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_char_c;

	/* inline */ _activation_check_proc_14_func_1250721176(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_14_func_446982327(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_1[0x7] ^= _activatnvar_confusing_chararray_b[0x6];

}

void _activation_check_proc_14_func_19105313(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_1688450818(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_1688450818(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1267543767(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_14_func_674260172(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_14_func_2083553023(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1168793349(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1314845921(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_0)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_0 >>= 0xf;

	_activation_check_proc_14_func_898770663(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_898770663(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_552618548(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1596797880(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_14_func_1759869712(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_a <<= _activatnvar_confusing_char_9;

}

void _activation_check_proc_14_func_1612419768(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_14_func_750488577(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_14_func_1152640274(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_14_func_169428903(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_chararray_3[0xa];

}

void _activation_check_proc_14_func_1240209056(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] &= _activatnvar_confusing_chararray_1[0x8];

	_activation_check_proc_14_func_719614551(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_14_func_719614551(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_14_func_1403851138(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 += _activatnvar_confusing_chararray_b[0x3];

	_activation_check_proc_14_func_77487927(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_77487927(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_809435030(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_14_func_1059102213(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_14_func_79427900(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x1] == 0x8) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_14_func_2127724606(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x6] += _activatnvar_confusing_chararray_b[0x8];

}

void _activation_check_proc_14_func_2011042645(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_b.mData[0x3];

}

void _activation_check_proc_14_func_1634931309(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x5] += _activatnvar_confusing_chararray_b[0xb];

	/* inline */ _activation_check_proc_14_func_1194421881(_activatnvar_confusing_char_9, _activatnvar_section2);
	_activation_check_proc_14_func_2011042645(_activatnvar_confusing_U8_e, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_14_func_2127724606(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_14_func_343386352(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d ^= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_14_func_189859926(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_14_func_658420344(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_9.mData[0x5] &= _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_14_func_550606843(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_0 += _activatnvar_confusing_char_e;

	_activation_check_proc_14_func_872277919(_activatnvar_confusing_char_6, _activatnvar_confusing_char_0);
	_activation_check_proc_14_func_1063539721(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_1063539721(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_14_func_872277919(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_6 <<= _activatnvar_confusing_char_0;

}

void _activation_check_proc_14_func_178806887(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_14_func_1926323427(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_14_func_614152782(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_7 |= 0x8;

}

void _activation_check_proc_14_func_693595522(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("788d14c6-cae3-b2c7-5981-eaed8553ae14");

}

void _activation_check_proc_14_func_1295432984(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_14_func_356849390(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 ^= 0x2;

}

void _activation_check_proc_14_func_661558070(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_14_func_597200434(unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_3, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_int_3 &= 0xff;

	/* inline */ _activation_check_proc_14_func_1595182321(_activatnvar_pos);
	/* inline */ _activation_check_proc_14_func_1940481602(_activatnvar_confusing_U8_b, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_14_func_1479289369(_activatnvar_confusing_int_9);
	_activation_check_proc_14_func_426915299(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_14_func_315261289(_activatnvar_confusing_LLUUID_e, _activatnvar_section1);
}

void _activation_check_proc_14_func_426915299(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_14_func_84352778(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("0e95d5ac-e6c3-9b0d-e927-2cd4087f477b");

}

void _activation_check_proc_14_func_1338859877(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xa] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_14_func_1458564799(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_14_func_1403313491(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1636976192(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_14_func_854860860(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_14_func_532050432(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_14_func_1399797444(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 += 0x5;

}

void _activation_check_proc_14_func_1873626472(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_6 >>= _activatnvar_confusing_int_b;

	_activation_check_proc_14_func_1399797444(_activatnvar_confusing_int_8);
}

void _activation_check_proc_14_func_301468576(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_2[0xf] += _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_14_func_1667601506(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_497787538(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("ecca0745-a67b-9e71-eb35-0333a0198f66");

}

void _activation_check_proc_14_func_1592213944(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xc] *= _activatnvar_confusing_LLUUID_5.mData[0x2];

}

void _activation_check_proc_14_func_767625417(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xd;

}

void _activation_check_proc_14_func_1785205398(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("ac4a421a-5f97-47cf-83ef-afef840f2c29");

	_activation_check_proc_14_func_767625417(_activatnvar_confusing_int_c);
	_activation_check_proc_14_func_1592213944(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_14_func_1192169666(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_5.mData[0xd] *= _activatnvar_confusing_LLUUID_8.mData[0xe];

	/* inline */ _activation_check_proc_14_func_1258430091(_activatnvar_confusing_char_c, _activatnvar_confusing_char_9, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_14_func_1290323133(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("05da61b5-ca95-bd5a-b801-c869f76b1754");

}

void _activation_check_proc_14_func_1923986008(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_291351079(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_d);
	_activation_check_proc_14_func_555220743(_activatnvar_confusing_char_f, _activatnvar_confusing_char_b);
}

void _activation_check_proc_14_func_555220743(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b += _activatnvar_confusing_char_f;

}

void _activation_check_proc_14_func_291351079(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xb] >>= _activatnvar_confusing_LLUUID_8.mData[0xb];

}

void _activation_check_proc_14_func_563413711(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1116509749(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_lace.mData[0x2];

}

void _activation_check_proc_14_func_74308380(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_14_func_1900303561(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("e05d5a72-d26a-9b0d-8397-dfcca2b2a704");

}

void _activation_check_proc_14_func_1888086846(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_14_func_1432621325(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_a <<= 0xd;

}

void _activation_check_proc_14_func_1737294179(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_chararray_e[0xe] >>= _activatnvar_confusing_LLUUID_7.mData[0x9];

	_activation_check_proc_14_func_1432621325(_activatnvar_confusing_U8_a, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_14_func_1327343427(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_LLUUID_8.mData[0x8];

	_activation_check_proc_14_func_1593033998(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_14_func_1859224573();
}

void _activation_check_proc_14_func_1593033998(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_7[0xf] >>= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_14_func_100753544(int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_14_func_1268331549(_activatnvar_confusing_char_a);
	/* inline */ _activation_check_proc_14_func_685604699(_activatnvar_name_digest, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_14_func_1268331549(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_14_func_1856789532(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d += _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_14_func_1732805218(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_14_func_890858110(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_lace;

	_activation_check_proc_14_func_1732805218(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_d);
	_activation_check_proc_14_func_1856789532(_activatnvar_confusing_chararray_8, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_14_func_1666829385(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_14_func_838878697(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_14_func_278506411(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_f[0x7] <<= _activatnvar_confusing_chararray_d[0xb];

	/* inline */ _activation_check_proc_14_func_164031552();
}

void _activation_check_proc_14_func_1105722006(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_1 >>= _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_14_func_243323143(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_6, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_a;

	/* inline */ _activation_check_proc_14_func_403659757(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_14_func_536187615(_activatnvar_confusing_char_7, _activatnvar_confusing_bool_1, _activatnvar_confusing_U8_3);
	/* inline */ _activation_check_proc_14_func_1290036752(_activatnvar_confusing_chararray_3, _activatnvar_confusing_char_e);
	/* inline */ _activation_check_proc_14_func_574482192(_activatnvar_confusing_int_6);
	/* inline */ _activation_check_proc_14_func_499612211(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_14_func_825656259(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_14_func_1199580156(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x8] <<= _activatnvar_confusing_LLUUID_3.mData[0x4];

	_activation_check_proc_14_func_825656259(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_14_func_1567395407(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] ^= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_14_func_1757551032()
{
	
}

void _activation_check_proc_14_func_1983686855(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_a[0xa] <<= _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_14_func_720954214(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("6b8ad411-3693-1f18-b382-a499ac19b996");

}

void _activation_check_proc_14_func_641263094(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_b[0x2];

}

void _activation_check_proc_14_func_1269972385(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x0] ^= _activatnvar_name_digest[0x4];

}

void _activation_check_proc_14_func_1529714570(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_3, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activatnvar_confusing_int_3 |= 0x7;

	_activation_check_proc_14_func_399654267(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_399654267(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1100620667(LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_char_0 = _activatnvar_fscked.mData[0x5];

	/* inline */ _activation_check_proc_14_func_824144329(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_14_func_463516357(bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_14_func_564797717(unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_d[0x4] >>= _activatnvar_name_digest[0x7];

	_activation_check_proc_14_func_463516357(_activatnvar_confusing_bool_6);
}

void _activation_check_proc_14_func_468274262(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_715853391(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_14_func_1046589355(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_14_func_1524855006(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 *= _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_14_func_1795244240(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_b[0xe] ^= _activatnvar_confusing_LLUUID_0.mData[0x3];

	_activation_check_proc_14_func_1524855006(_activatnvar_confusing_chararray_8, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_14_func_708490185(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xc] |= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_14_func_857825912(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_14_func_667322493(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1468111694(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_14_func_1653711557(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_1122424514(unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_5 &= 0xff;

	/* inline */ _activation_check_proc_14_func_1879786719(_activatnvar_confusing_int_a, _activatnvar_confusing_int_8);
	_activation_check_proc_14_func_1242611036(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_14_func_1242611036(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] = _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_14_func_900785566(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_793554474(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_e.mData[0x1] ^= _activatnvar_confusing_LLUUID_1.mData[0x5];

}

void _activation_check_proc_14_func_1976591078(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_14_func_915272667(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_f *= _activatnvar_confusing_U8_1;

	_activation_check_proc_14_func_793554474(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_14_func_1976591078(_activatnvar_confusing_int_b);
}

void _activation_check_proc_14_func_830362784(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1033689510(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_14_func_1243301093(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x9] |= _activatnvar_name_digest[0xf];

}

void _activation_check_proc_14_func_1172960274(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_14_func_751793058(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_14_func_689408298(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_14_func_752136856(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 91; _activatnvar_strbuf_0[0] ^= 106; _activatnvar_strbuf_0[1] = 108; _activatnvar_strbuf_0[1] ^= 92; _activatnvar_strbuf_0[2] = 22; _activatnvar_strbuf_0[2] ^= 37; _activatnvar_strbuf_0[3] = 47; _activatnvar_strbuf_0[3] ^= 27; _activatnvar_strbuf_0[4] = 110; _activatnvar_strbuf_0[4] ^= 12; _activatnvar_strbuf_0[5] = 104; _activatnvar_strbuf_0[5] ^= 14; _activatnvar_strbuf_0[6] = 76; _activatnvar_strbuf_0[6] ^= 42; _activatnvar_strbuf_0[7] = 78; _activatnvar_strbuf_0[7] ^= 120; _activatnvar_strbuf_0[8] = 17; _activatnvar_strbuf_0[8] ^= 60; _activatnvar_strbuf_0[9] = 51; _activatnvar_strbuf_0[9] ^= 81; _activatnvar_strbuf_0[10] = 124; _activatnvar_strbuf_0[10] ^= 75; _activatnvar_strbuf_0[11] = 94; _activatnvar_strbuf_0[11] ^= 106; _activatnvar_strbuf_0[12] = 124; _activatnvar_strbuf_0[12] ^= 76; _activatnvar_strbuf_0[13] = 63; _activatnvar_strbuf_0[13] ^= 18; _activatnvar_strbuf_0[14] = 109; _activatnvar_strbuf_0[14] ^= 93; _activatnvar_strbuf_0[15] = 25; _activatnvar_strbuf_0[15] ^= 127; _activatnvar_strbuf_0[16] = 12; _activatnvar_strbuf_0[16] ^= 110; _activatnvar_strbuf_0[17] = 1; _activatnvar_strbuf_0[17] ^= 101; _activatnvar_strbuf_0[18] = 17; _activatnvar_strbuf_0[18] ^= 60; _activatnvar_strbuf_0[19] = 1; _activatnvar_strbuf_0[19] ^= 48; _activatnvar_strbuf_0[20] = 23; _activatnvar_strbuf_0[20] ^= 116; _activatnvar_strbuf_0[21] = 18; _activatnvar_strbuf_0[21] ^= 112; _activatnvar_strbuf_0[22] = 16; _activatnvar_strbuf_0[22] ^= 118; _activatnvar_strbuf_0[23] = 54; _activatnvar_strbuf_0[23] ^= 27; _activatnvar_strbuf_0[24] = 44; _activatnvar_strbuf_0[24] ^= 24; _activatnvar_strbuf_0[25] = 32; _activatnvar_strbuf_0[25] ^= 22; _activatnvar_strbuf_0[26] = 31; _activatnvar_strbuf_0[26] ^= 42; _activatnvar_strbuf_0[27] = 111; _activatnvar_strbuf_0[27] ^= 12; _activatnvar_strbuf_0[28] = 26; _activatnvar_strbuf_0[28] ^= 42; _activatnvar_strbuf_0[29] = 53; _activatnvar_strbuf_0[29] ^= 4; _activatnvar_strbuf_0[30] = 34; _activatnvar_strbuf_0[30] ^= 70; _activatnvar_strbuf_0[31] = 108; _activatnvar_strbuf_0[31] ^= 94; _activatnvar_strbuf_0[32] = 16; _activatnvar_strbuf_0[32] ^= 33; _activatnvar_strbuf_0[33] = 74; _activatnvar_strbuf_0[33] ^= 40; _activatnvar_strbuf_0[34] = 43; _activatnvar_strbuf_0[34] ^= 79; _activatnvar_strbuf_0[35] = 69; _activatnvar_strbuf_0[35] ^= 112; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_14_func_1286703759(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_752136856(_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_14_func_52428560(_activatnvar_confusing_chararray_5, _activatnvar_strbuf_0, _activatnvar_confusing_chararray_a, _activatnvar_secret);
}

void _activation_check_proc_14_func_1657982826(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_14_func_739944751(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_4 |= _activatnvar_confusing_char_4;

}

void _activation_check_proc_14_func_1384310230(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_14_func_1547993933(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1651894392(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_14_func_182634792(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d >>= 0x3;

}

void _activation_check_proc_14_func_1437903000(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_14_func_157484442(_activatnvar_confusing_LLUUID_0);
	_activation_check_proc_14_func_776725204(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_14_func_368773104(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_14_func_776725204(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x8] != 0x5) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_14_func_157484442(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("1e18ff6c-b834-7bc9-7c71-8ddb1811b04a");

}

void _activation_check_proc_14_func_368773104(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] = _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_14_func_1005509215(int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x9] >>= _activatnvar_confusing_LLUUID_a.mData[0xa];

	/* inline */ _activation_check_proc_14_func_348718080(_activatnvar_confusing_int_5);
}

void _activation_check_proc_14_func_882845188(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
}

void _activation_check_proc_14_func_170460210(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
	_activation_check_proc_14_func_882845188(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_751864682(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1892326722(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_9.mData[0x2] |= _activatnvar_section2.mData[0x6];

}

void _activation_check_proc_14_func_1234118741(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 <<= _activatnvar_confusing_chararray_c[0xe];

	_activation_check_proc_14_func_1609395410(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_8);
}

void _activation_check_proc_14_func_1609395410(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_chararray_9[0x7];

}

void _activation_check_proc_14_func_180541952(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("8b6aa7b6-54ab-f3b2-46b0-bd9a38cf610b");

	/* inline */ _activation_check_proc_14_func_1801608304(_activatnvar_confusing_LLUUID_d, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_320533212(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_5 >>= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_14_func_669883245(U8& _activatnvar_pos, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activatnvar_pos |= 8;
}

void _activation_check_proc_14_func_97978371(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_section2;

}

void _activation_check_proc_14_func_1917947848(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_14_func_1229657243(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_991721243(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x0] |= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_14_func_163749134(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] *= _activatnvar_confusing_LLUUID_c.mData[0xe];

}

void _activation_check_proc_14_func_1063246372(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x3] &= _activatnvar_lace.mData[0x6];

}

void _activation_check_proc_14_func_1577037110(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_lace.mData[0x7];

}

void _activation_check_proc_14_func_1854429124(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_14_func_1114303460(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 |= 0x7;

}

void _activation_check_proc_14_func_1386242240(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_0 &= _activatnvar_confusing_char_4;

	_activation_check_proc_14_func_1635793427(_activatnvar_t0);
}

void _activation_check_proc_14_func_1635793427(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_14_func_861660756(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_5.mData[0xd] <<= _activatnvar_confusing_chararray_0[0x8];

	_activation_check_proc_14_func_294132021(_activatnvar_confusing_char_2, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_14_func_294132021(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_chararray_7[0xe];

}

void _activation_check_proc_14_func_1738919817(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_t0, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_combined_id)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_9 = _activatnvar_confusing_char_4;

	_activation_check_proc_14_func_1567489710(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_14_func_1110923641(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_14_func_1110923641(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_14_func_1567489710(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] ^= _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_14_func_225225436(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_chararray_6[0xc];

}

void _activation_check_proc_14_func_1001178290(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_14_func_1257980414(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_so;

}

void _activation_check_proc_14_func_514758185(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_14_func_238773440(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] >>= _activatnvar_confusing_chararray_b[0xf];

	/* inline */ _activation_check_proc_14_func_246810889();
}

void _activation_check_proc_14_func_744797447(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_14_func_1351609520(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_14_func_1317601693(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_U8_b &= _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_14_func_315823302(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c >>= 0x2;

}

void _activation_check_proc_14_func_39663542(U8& _activatnvar_t1, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_5[0x0];

	_activation_check_proc_14_func_1043334955(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_e);
	_activation_check_proc_14_func_1551073966(_activatnvar_generic_iterator);
	_activation_check_proc_14_func_969660067(_activatnvar_t1, _activatnvar_confusing_char_3);
	_activation_check_proc_14_func_1662280701(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_fscked);
}

void _activation_check_proc_14_func_1551073966(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1662280701(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1043334955(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_14_func_969660067(U8& _activatnvar_t1, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 >>= _activatnvar_t1;

}

void _activation_check_proc_14_func_757146183(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_t0)
{
	_activatnvar_generic_iterator = 12;
	/* inline */ _activation_check_proc_14_func_1504380180(_activatnvar_t0, _activatnvar_confusing_bool_d, _activatnvar_confusing_U8_b);
	/* inline */ _activation_check_proc_14_func_758755226(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_14_func_1705033042(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x5] >>= _activatnvar_confusing_LLUUID_f.mData[0x1];

}

void _activation_check_proc_14_func_834584454(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_14_func_84038946(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_e[0x5] ^= _activatnvar_confusing_chararray_b[0xf];

}

void _activation_check_proc_14_func_949847920()
{
	
}

void _activation_check_proc_14_func_1364717058(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("67870a79-a01e-46bf-58e4-3a9cc0af2ac1");

	/* inline */ _activation_check_proc_14_func_1890554011(_activatnvar_confusing_bool_3, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_14_func_1938964974(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] &= _activatnvar_confusing_LLUUID_e.mData[0xd];

}

void _activation_check_proc_14_func_417490382(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_14_func_2080190692()
{
	
}

void _activation_check_proc_14_func_1230733202(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_14_func_1447992296(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_14_func_1254658723(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_14_func_1192429021(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_U8_e |= 0x1;

	_activation_check_proc_14_func_1254658723(_activatnvar_confusing_chararray_0, _activatnvar_confusing_char_2);
}

void _activation_check_proc_14_func_1072745403(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_f <<= 0xe;

}

void _activation_check_proc_14_func_1344532987(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_14_func_706397430(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_14_func_743483314(_activatnvar_confusing_U8_d, _activatnvar_generic_bool_0, _activatnvar_confusing_U8_8);
	_activation_check_proc_14_func_1072745403(_activatnvar_confusing_U8_f, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_14_func_1555478967(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1921875730(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_9 = _activatnvar_section2.mData[0x3];

}

void _activation_check_proc_14_func_709758238(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xf] ^= _activatnvar_confusing_chararray_2[0x8];

	/* inline */ _activation_check_proc_14_func_1331558129(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_14_func_250576484(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x2] == 0x9) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_14_func_80308696(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_so;

}

void _activation_check_proc_14_func_721796434(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_14_func_351657612(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xf] ^= _activatnvar_confusing_LLUUID_b.mData[0x9];

}

void _activation_check_proc_14_func_1442360898(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_9.mData[0xd];

}

void _activation_check_proc_14_func_1993938865(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	/* inline */ _activation_check_proc_14_func_179594307(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_1277493608(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] &= _activatnvar_confusing_chararray_4[0x7];

	/* inline */ _activation_check_proc_14_func_438843471(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_14_func_1009263919(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_14_func_1057833141(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_a.mData[0x8] |= _activatnvar_confusing_LLUUID_8.mData[0x7];

}

void _activation_check_proc_14_func_861949708(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_14_func_330295361(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_14_func_2132551541(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_14_func_122156771(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1574912693(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_14_func_1543960319(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] += _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_14_func_2115615871(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1845722643(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_14_func_1591392524(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1978957990(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_14_func_1644946821(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_b, char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_b, int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_b &= _activatnvar_confusing_chararray_4[0x1];

	_activation_check_proc_14_func_1978957990(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_e);
	_activation_check_proc_14_func_304766005(_activatnvar_confusing_char_3, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_e, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_14_func_1145259245(_activatnvar_confusing_char_2);
	/* inline */ _activation_check_proc_14_func_1061309188(_activatnvar_confusing_int_4, _activatnvar_confusing_char_f);
	/* inline */ _activation_check_proc_14_func_798572720(_activatnvar_strbuf_0, _activatnvar_section2);
}

void _activation_check_proc_14_func_304766005(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xa] == _activatnvar_confusing_char_3) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_14_func_1735195222(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xc] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_14_func_3488570(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_711324983(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_3488570(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_14_func_1216243488(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_14_func_853528526(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_2 *= _activatnvar_confusing_char_1;

}

void _activation_check_proc_14_func_1123954635(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_a.mData[0x7];

}

void _activation_check_proc_14_func_1901274217(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_14_func_1494282773(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_14_func_1901274217(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_14_func_1123954635(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_char_9);
}

void _activation_check_proc_14_func_1881005226(bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_5;

	_activation_check_proc_14_func_1884515833(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_2);
	_activation_check_proc_14_func_977947062(_activatnvar_confusing_int_5);
}

void _activation_check_proc_14_func_977947062(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_14_func_1884515833(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_14_func_996435626(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_14_func_1408005978(int& _activatnvar_confusing_int_3, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_U8_d |= _activatnvar_combined_id.mData[0x6];

	/* inline */ _activation_check_proc_14_func_1044219026(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_9);
	_activation_check_proc_14_func_996435626(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_0);
	_activation_check_proc_14_func_2100682617(_activatnvar_confusing_int_3);
}

void _activation_check_proc_14_func_2100682617(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_14_func_1939202776(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1323569892(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_14_func_1711606566(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_e;

	/* inline */ _activation_check_proc_14_func_80533770(_activatnvar_confusing_U8_d, _activatnvar_confusing_char_8);
	_activation_check_proc_14_func_1323569892(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_14_func_12466361(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1727743681(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_14_func_1026803896(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1228043807(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] >>= _activatnvar_confusing_LLUUID_1.mData[0x4];

}

void _activation_check_proc_14_func_1916649854(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_c[0xb] |= _activatnvar_confusing_chararray_7[0xf];

	_activation_check_proc_14_func_1895315664(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
}

void _activation_check_proc_14_func_1895315664(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_573093411(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 ^= 0x5;

}

void _activation_check_proc_14_func_2005093801(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_14_func_975431108(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_doaccount;

}

void _activation_check_proc_14_func_1200464971(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_14_func_301191838(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_14_func_1946947918(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_14_func_610035293(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x0] <<= _activatnvar_confusing_chararray_8[0x0];

}

void _activation_check_proc_14_func_758775534(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_14_func_845891331(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_7 *= 0x8;

}

void _activation_check_proc_14_func_326853113(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_14_func_606422593(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_14_func_1095572794(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_0)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_3 *= _activatnvar_confusing_char_0;

}

void _activation_check_proc_14_func_37958145(DWORD& _activatnvar_serial, unsigned char* _activatnvar_confusing_chararray_1, LLMD5& _activatnvar_smd5, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_14_func_1966251461(_activatnvar_smd5, _activatnvar_confusing_chararray_1, _activatnvar_serial);
}

void _activation_check_proc_14_func_1966251461(LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_confusing_chararray_1, DWORD& _activatnvar_serial)
{
	_activatnvar_confusing_chararray_1[0x8] <<= _activatnvar_confusing_chararray_1[0x2];

	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
}

void _activation_check_proc_14_func_1217011576(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_14_func_993266520(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_14_func_1066376455(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_14_func_1644310128(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_d[0x2] &= _activatnvar_section2.mData[0x3];

}

void _activation_check_proc_14_func_1343035704(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1850577098(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a = 0x0;

}

void _activation_check_proc_14_func_708321643(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_8)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xe] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_0 = false;

	_activation_check_proc_14_func_184779353(_activatnvar_fscked, _activatnvar_code, _activatnvar_confusing_LLUUID_c, _activatnvar_generic_iterator, _activatnvar_confusing_chararray_3, _activatnvar_combined_id);
	_activation_check_proc_14_func_1948389911(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_14_func_1948389911(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_14_func_184779353(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_c.mData[0xc] >>= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_14_func_498929863(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_secret;

}

void _activation_check_proc_14_func_453648850(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_14_func_710151724(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_char_4 *= _activatnvar_confusing_chararray_1[0x9];

}

void _activation_check_proc_14_func_1981151012(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_8)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_5 += _activatnvar_confusing_U8_8;

}

void _activation_check_proc_14_func_917135614(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_14_func_1023599464(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_14_func_1161917575(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_so;

	_activation_check_proc_14_func_1023599464(_activatnvar_t0);
}

void _activation_check_proc_14_func_1886335069(unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, char& _activatnvar_feat)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_1330647321(_activatnvar_confusing_U8_0, _activatnvar_feat);
}

void _activation_check_proc_14_func_1330647321(U8& _activatnvar_confusing_U8_0, char& _activatnvar_feat)
{
	_activatnvar_confusing_U8_0 >>= _activatnvar_feat;

}

void _activation_check_proc_14_func_1588440306(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_0 += _activatnvar_confusing_char_a;

}

void _activation_check_proc_14_func_1499192495(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1965477370(LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_e;

	_activation_check_proc_14_func_1499192495(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
	_activation_check_proc_14_func_1804670918(_activatnvar_confusing_chararray_6, _activatnvar_so);
	_activation_check_proc_14_func_1588440306(_activatnvar_confusing_char_0, _activatnvar_confusing_char_a);
}

void _activation_check_proc_14_func_1804670918(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_6[0x7] *= _activatnvar_so.mData[0x6];

}

void _activation_check_proc_14_func_1427180338(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x6] *= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_14_func_1592559109(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x9] <<= _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_14_func_1058372542(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_feat, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("66c30318-b022-9377-e2b2-783e7aaa9469");

	/* inline */ _activation_check_proc_14_func_1484155023(_activatnvar_confusing_char_b);
	_activation_check_proc_14_func_618397035(_activatnvar_feat, _activatnvar_lace);
}

void _activation_check_proc_14_func_618397035(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_14_func_1648516470(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1289889312(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_1648516470(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_14_func_1153215041(_activatnvar_confusing_char_a, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_14_func_2018722120(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
}

void _activation_check_proc_14_func_2115957008(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_14_func_390366924(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_chararray_f[0x7];

	_activation_check_proc_14_func_1816260527(_activatnvar_confusing_chararray_e, _activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_14_func_421040061(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_8);
}

void _activation_check_proc_14_func_1816260527(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xb] |= _activatnvar_confusing_LLUUID_9.mData[0xe];

	_activatnvar_confusing_char_0 >>= _activatnvar_confusing_chararray_e[0xa];

}

void _activation_check_proc_14_func_374999956(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_9[0xc] >>= _activatnvar_confusing_chararray_8[0x8];

	/* inline */ _activation_check_proc_14_func_1477809844();
}

void _activation_check_proc_14_func_938158343(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_e.mData[0xf];

}

void _activation_check_proc_14_func_1966545361(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x6] += _activatnvar_secret.mData[0xe];

	_activatnvar_confusing_chararray_5[0x5] ^= _activatnvar_confusing_chararray_1[0xd];

	_activation_check_proc_14_func_938158343(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_14_func_834475261(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_14_func_737775228(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xb] == _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_14_func_685297967(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_14_func_1797422511(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_combined_id;

}

void _activation_check_proc_14_func_1056049349()
{
	
}

void _activation_check_proc_14_func_1293463963(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_14_func_151878746(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_7)
{
	
	/* inline */ _activation_check_proc_14_func_709841276(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_14_func_1346414798(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_14_func_1224913235(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1332113790(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_14_func_1985626673(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_855666307(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_lace;

	/* inline */ _activation_check_proc_14_func_783203043(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_14_func_1908890069(_activatnvar_confusing_char_5, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_14_func_1550509261(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_a)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xb] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_14_func_1913175859(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_name_digest, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_2 = false;

	/* inline */ _activation_check_proc_14_func_1054068226(_activatnvar_confusing_chararray_7, _activatnvar_name_digest);
	_activation_check_proc_14_func_404054497(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	_activation_check_proc_14_func_122232729(_activatnvar_generic_iterator);
	_activation_check_proc_14_func_1607824725(_activatnvar_confusing_int_9);
}

void _activation_check_proc_14_func_122232729(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1607824725(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_14_func_404054497(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1826211454(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x1] >>= _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_14_func_428633883(unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xc] == 0x7) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_14_func_1826211454(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_14_func_2037308214(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_954136794(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_b ^= _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_14_func_1696614655(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1952407495(unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_char_1 = _activatnvar_secret.mData[0xe];

	_activation_check_proc_14_func_2037308214(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_14_func_954136794(_activatnvar_confusing_char_b, _activatnvar_confusing_chararray_f);
	_activation_check_proc_14_func_1696614655(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_1325466651(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_1.mData[0x1] |= _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_14_func_1548799367(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_generic_bool_1;

	_activation_check_proc_14_func_1470077717(_activatnvar_so, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_14_func_1470077717(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] = _activatnvar_so.mData[0xb];

}

void _activation_check_proc_14_func_1028397499(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_14_func_934619900(_activatnvar_pos);
}

void _activation_check_proc_14_func_718737375(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_14_func_1599952417(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("e26747a8-896b-e76d-9f38-af5a46851433");

}

void _activation_check_proc_14_func_1735517082(LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_14_func_1919592067(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_f[0x0] |= _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_14_func_68433782(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_a;

	_activation_check_proc_14_func_1919592067(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_c);
	_activation_check_proc_14_func_1337467606(_activatnvar_confusing_int_5, _activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_14_func_651234854(_activatnvar_confusing_char_b, _activatnvar_confusing_bool_4, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_14_func_1337467606(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= _activatnvar_confusing_int_5;

}

void _activation_check_proc_14_func_1409230199(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_14_func_627339863(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("68292e29-e717-8a86-8814-b9752f9b721b");

}

void _activation_check_proc_14_func_575049145(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xe] != _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_14_func_1786505886(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_14_func_1103738814(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_0, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_char_0;

	_activation_check_proc_14_func_575049145(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_8, _activatnvar_confusing_bool_7);
	_activation_check_proc_14_func_627339863(_activatnvar_confusing_LLUUID_3);
	_activation_check_proc_14_func_1786505886(_activatnvar_confusing_int_7);
}

void _activation_check_proc_14_func_292810688(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_14_func_1239619809(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_14_func_37799270(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_2092339278(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_14_func_2056086246(int& _activatnvar_confusing_int_6, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 >>= _activatnvar_confusing_int_6;

	/* inline */ _activation_check_proc_14_func_1068407718(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_834511072(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_207563444(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_14_func_1127504018(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_b >>= 0x2;

}

void _activation_check_proc_14_func_1361275191(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

	
}

void _activation_check_proc_14_func_903323399(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("b54452e2-470b-3ae7-2779-f78165a18da7");

}

void _activation_check_proc_14_func_1826048951(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_14_func_1835542698(_activatnvar_combined_id, _activatnvar_t0);
	_activation_check_proc_14_func_903323399(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_14_func_1835542698(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_14_func_399533922(int& _activatnvar_confusing_int_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_14_func_1327226261(_activatnvar_confusing_int_d);
}

void _activation_check_proc_14_func_1474898492(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_9 = _activatnvar_combined_id.mData[0xb];

}

void _activation_check_proc_14_func_2106775325(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1088893486(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_7.mData[0x4] = _activatnvar_confusing_LLUUID_f.mData[0x2];

	_activatnvar_confusing_LLUUID_9.mData[0x5] += _activatnvar_secret.mData[0x3];

}

void _activation_check_proc_14_func_1193917073(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 += 0x3;

}

void _activation_check_proc_14_func_2067847743(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_b >>= 0xe;

}

void _activation_check_proc_14_func_85906681(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_14_func_868621328(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_7 >>= _activatnvar_confusing_int_c;

}

void _activation_check_proc_14_func_926072182(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_1363439022(_activatnvar_confusing_U8_4, _activatnvar_secret);
}

void _activation_check_proc_14_func_1363439022(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_secret.mData[0xa];

}

void _activation_check_proc_14_func_1856877754(char& _activatnvar_confusing_char_f, char& _activatnvar_feat, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_14_func_824262854(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_4);
	_activation_check_proc_14_func_1620247383(_activatnvar_confusing_char_f, _activatnvar_confusing_char_6, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_14_func_1228474683(_activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_feat);
}

void _activation_check_proc_14_func_1620247383(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_f ^= _activatnvar_confusing_char_6;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_304247816(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_14_func_1967584364(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_14_func_661776809(_activatnvar_doaccount);
}

void _activation_check_proc_14_func_661776809(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_14_func_1160414089(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_14_func_99852795(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
	/* inline */ _activation_check_proc_14_func_134738923(_activatnvar_confusing_chararray_3, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_14_func_575783761(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	
	/* inline */ _activation_check_proc_14_func_1945588235(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_14_func_1755172224(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x5] |= _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_14_func_281243030(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_14_func_529426552(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_14_func_529426552(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_d[0x5] |= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_14_func_1913415639(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	/* inline */ _activation_check_proc_14_func_1941924997(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_14_func_705431869(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_5++;

	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_14_func_251686277(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_5;

	_activation_check_proc_14_func_1634590541(_activatnvar_code, _activatnvar_confusing_char_b);
	_activation_check_proc_14_func_1686633669(_activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_14_func_746356673(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_0, _activatnvar_confusing_bool_c, _activatnvar_confusing_char_1);
}

void _activation_check_proc_14_func_1686633669(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("a9d952ae-107e-6f0e-7bb3-6b707487c5c1");

}

void _activation_check_proc_14_func_1634590541(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_code.mData[0xa];

}

void _activation_check_proc_14_func_1199642584(U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_e >>= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_14_func_2066242437(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("f479a270-6af0-dddc-7fcd-1396a32d3bc9");

	/* inline */ _activation_check_proc_14_func_1070494478(_activatnvar_confusing_char_f, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_14_func_237860135(_activatnvar_confusing_chararray_5);
}

void _activation_check_proc_14_func_231058341(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_14_func_855654958(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_14_func_82331009(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x3] &= _activatnvar_confusing_LLUUID_8.mData[0xc];

}

void _activation_check_proc_14_func_1048985884(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_14_func_880133062(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_14_func_519394413(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_5 = _activatnvar_section2.mData[0x6];

}

void _activation_check_proc_14_func_1497271549(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_14_func_1391538544(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_3[0x3] *= _activatnvar_so.mData[0x0];

}

void _activation_check_proc_14_func_1150712129(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_e.mData[0x6] &= _activatnvar_confusing_LLUUID_7.mData[0x1];

}

void _activation_check_proc_14_func_1594115705(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xd] |= _activatnvar_confusing_chararray_c[0x6];

	_activation_check_proc_14_func_208629097(_activatnvar_section1, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_14_func_208629097(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_14_func_985339050(bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_f;

	_activatnvar_confusing_chararray_7[0xd] &= _activatnvar_combined_id.mData[0xc];

	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_14_func_1394679112(bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_4 *= _activatnvar_confusing_char_5;

	_activation_check_proc_14_func_985339050(_activatnvar_confusing_bool_f, _activatnvar_confusing_chararray_7, _activatnvar_combined_id, _activatnvar_confusing_int_7, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_14_func_1432282027(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_14_func_1810446438(_activatnvar_t0);
}

void _activation_check_proc_14_func_1406389777(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_1706736879(_activatnvar_confusing_char_5, _activatnvar_section2);
	_activation_check_proc_14_func_1701604813(_activatnvar_secret, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_14_func_732465531(_activatnvar_confusing_U8_0);
}

void _activation_check_proc_14_func_1701604813(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_secret;

}

void _activation_check_proc_14_func_1706736879(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_5 = _activatnvar_section2.mData[0x7];

}

void _activation_check_proc_14_func_1766748647(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_int_3++;

	_activatnvar_confusing_LLUUID_3 = LLUUID("b810b9bf-4a6a-0e53-54a2-08f4417c1454");

}

void _activation_check_proc_14_func_172691223(U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_a *= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_14_func_1801087367(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_14_func_329138027(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x7] != 0x8) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_14_func_1621739290(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xb] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_2;

	_activation_check_proc_14_func_172691223(_activatnvar_confusing_U8_2, _activatnvar_confusing_char_a, _activatnvar_confusing_bool_b);
	_activation_check_proc_14_func_1801087367(_activatnvar_generic_bool_0);
	_activation_check_proc_14_func_329138027(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_14_func_2038110957(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_8;

	/* inline */ _activation_check_proc_14_func_587234735(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_14_func_533142497(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_14_func_235478711(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = 0x1;

}

void _activation_check_proc_14_func_1904914508(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_6[0xa] <<= _activatnvar_confusing_chararray_a[0x1];

	_activation_check_proc_14_func_235478711(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_14_func_362882438(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x0] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_14_func_295634445(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_6.mData[0x2] ^= _activatnvar_confusing_chararray_7[0xe];

}

void _activation_check_proc_14_func_168278454()
{
	
}

void _activation_check_proc_14_func_978551363(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_14_func_2082433146(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xc;

}

void _activation_check_proc_14_func_1072336431(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xc] |= _activatnvar_confusing_chararray_8[0x3];

	/* inline */ _activation_check_proc_14_func_1244898659(_activatnvar_confusing_char_b, _activatnvar_confusing_char_f);
}

void _activation_check_proc_14_func_140116996(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("e5987d21-0ecf-3dd4-b7f1-fe66aaf6de0b");

}

void _activation_check_proc_14_func_1374860450(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_f, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] &= _activatnvar_confusing_chararray_7[0xc];

	_activation_check_proc_14_func_1898464245(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_6);
	_activation_check_proc_14_func_117831466(_activatnvar_confusing_int_f);
}

void _activation_check_proc_14_func_1898464245(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_6;

	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_14_func_117831466(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0x2;

}

void _activation_check_proc_14_func_314167754(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_LLUUID_0.mData[0x2];

}

void _activation_check_proc_14_func_1150677584(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_3 ^= 0x6;

}

void _activation_check_proc_14_func_1347534744(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xb] *= _activatnvar_so.mData[0x0];

}

void _activation_check_proc_14_func_45726912(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_2;

	/* inline */ _activation_check_proc_14_func_823553157(_activatnvar_confusing_LLUUID_0);
	_activation_check_proc_14_func_1347534744(_activatnvar_so, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_14_func_1117415307(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_215877585(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1205416076(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("484b2321-045c-a8b9-e9f9-2e172c30992f");

}

void _activation_check_proc_14_func_120702994(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_14_func_496841878(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_14_func_979814209(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_d.mData[0x3] ^= _activatnvar_ser_digest[0xd];

}

void _activation_check_proc_14_func_974161389(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_14_func_1756130378(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_14_func_1040288368(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("9ef0912b-c28d-f747-76ea-7e5fa3be7b80");

	_activation_check_proc_14_func_1756130378(_activatnvar_confusing_char_f);
}

void _activation_check_proc_14_func_878587495(bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_14_func_1239489211(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("4f400a11-3861-402d-d160-39f0dff80814");

}

void _activation_check_proc_14_func_1805329598(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_code, char* _activatnvar_strbuf_0)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
	_activation_check_proc_14_func_957245826(_activatnvar_confusing_int_3);
}

void _activation_check_proc_14_func_957245826(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_14_func_1729955546(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_14_func_1546413900(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] |= _activatnvar_mac_digest[0x2];

}

void _activation_check_proc_14_func_2000041587(bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_c;

	_activation_check_proc_14_func_1546413900(_activatnvar_confusing_LLUUID_d, _activatnvar_mac_digest);
}

void _activation_check_proc_14_func_703528699(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("096cc7b5-78c9-f8e3-2bd1-b77a4f044aea");

}

void _activation_check_proc_14_func_799119441(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_5.mData[0x8];

	_activation_check_proc_14_func_703528699(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_14_func_966883297(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 += 0x9;

}

void _activation_check_proc_14_func_617472453(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_1797757230(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_14_func_1797757230(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1448696910(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_14_func_1662399148(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1469588847(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_833760938(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_14_func_701415534(_activatnvar_confusing_int_6);
	/* inline */ _activation_check_proc_14_func_1264547347(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_7, _activatnvar_confusing_char_c);
}

void _activation_check_proc_14_func_833760938(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_2002604446(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_so)
{
	_activatnvar_so ^= _activatnvar_section2;
	_activation_check_proc_14_func_1567187576(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_14_func_244145955(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_14_func_1835849827(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_14_func_1835849827(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_14_func_1567187576(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_14_func_1356991571(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("63a89a8f-ca66-e38d-ef29-7c686ae8a3eb");

}

void _activation_check_proc_14_func_109798422(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_0 = _activatnvar_confusing_int_c;

}

void _activation_check_proc_14_func_1048005047(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_333500723(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x8] ^= _activatnvar_confusing_LLUUID_c.mData[0xc];

}

void _activation_check_proc_14_func_2031069509(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 |= _activatnvar_code.mData[0x9];

	_activation_check_proc_14_func_333500723(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_14_func_1623821014(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_14_func_1530200780(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_14_func_483729365();
}

void _activation_check_proc_14_func_326945172(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_3 >>= _activatnvar_confusing_int_f;

}

void _activation_check_proc_14_func_8255212()
{
	
}

void _activation_check_proc_14_func_1734571866(U8& _activatnvar_confusing_U8_4)
{
	
	_activation_check_proc_14_func_162602261(_activatnvar_confusing_U8_4);
}

void _activation_check_proc_14_func_162602261(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_14_func_148200074(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1380080869(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("e7794a11-5603-d6f7-25eb-69717524dbe1");

}

void _activation_check_proc_14_func_139939224(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_3 = false;

	
}

void _activation_check_proc_14_func_1949951282(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 *= _activatnvar_confusing_int_0;

}

void _activation_check_proc_14_func_1805338043(bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_0, U8& _activatnvar_pos, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_so, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_chararray_2[0x3];

	_activation_check_proc_14_func_1663181579(_activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_14_func_407482611(_activatnvar_t0);
	_activation_check_proc_14_func_1378257170(_activatnvar_t0);
	/* inline */ _activation_check_proc_14_func_954537378();
	_activation_check_proc_14_func_1332070473(_activatnvar_confusing_bool_5, _activatnvar_confusing_char_0);
	_activation_check_proc_14_func_1949951282(_activatnvar_confusing_int_0, _activatnvar_confusing_int_8);
	_activation_check_proc_14_func_367821271(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_14_func_367821271(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_14_func_1332070473(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_0)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_0 *= 0xa;

}

void _activation_check_proc_14_func_1378257170(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_14_func_1663181579(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("ea428125-08a6-1e65-610c-3d19a8a22676");

}

void _activation_check_proc_14_func_1096735480(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_2050018356(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] ^= _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_14_func_891596846(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_2050018356(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_14_func_32530689(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] |= _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_14_func_1508189237(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_14_func_15036816(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_LLUUID_0.mData[0xf];

	_activation_check_proc_14_func_1508189237(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_14_func_1705244374(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_c);
	_activation_check_proc_14_func_2101335952(_activatnvar_confusing_U8_b, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_14_func_1550091190(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_14_func_2101335952(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_b ^= _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_14_func_196033133(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_14_func_1010949369(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_14_func_196033133(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_14_func_744222593(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_14_func_739758097(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xc] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_14_func_1446548405(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_5)
{
	
	_activation_check_proc_14_func_739758097(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_14_func_1968768540(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_14_func_749639042(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_14_func_1968768540(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_14_func_97439388(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_14_func_103743739(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_14_func_1786415605(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 += 0xc;

}

void _activation_check_proc_14_func_1010145305(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_3, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_int_3 &= 0xff;

	/* inline */ _activation_check_proc_14_func_1135495165(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_f);
	_activation_check_proc_14_func_803918667(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_14_func_803918667(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_14_func_1800519654(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_14_func_1057989738(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("46802794-d672-b1f0-0f3a-9c5e2a5a93ef");

}

void _activation_check_proc_14_func_32184718(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_c)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x9] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_14_func_220073839(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_4 ^= _activatnvar_confusing_chararray_2[0xf];

}

void _activation_check_proc_14_func_826218908(bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_int_c++;

	_activation_check_proc_14_func_1424682729(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_14_func_1424733685(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_14_func_1424682729(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_14_func_593874996(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activation_check_proc_14_func_1896800993(_activatnvar_confusing_LLUUID_1, _activatnvar_so);
}

void _activation_check_proc_14_func_1896800993(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_so;

}

void _activation_check_proc_14_func_1775378029()
{
	
}

void _activation_check_proc_14_func_152629581(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_9.mData[0x1] |= _activatnvar_confusing_chararray_8[0x0];

}

void _activation_check_proc_14_func_269207661(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_1 >>= 0xd;

}

void _activation_check_proc_14_func_1633152926(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x0] >>= _activatnvar_confusing_chararray_a[0x6];

}

void _activation_check_proc_14_func_2011271622(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_3)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_0 += _activatnvar_confusing_U8_3;

}

void _activation_check_proc_14_func_837931189(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_14_func_705102090(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_b)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_2011271622(_activatnvar_confusing_char_0, _activatnvar_confusing_bool_1, _activatnvar_confusing_U8_3);
	_activation_check_proc_14_func_837931189(_activatnvar_confusing_int_b);
	_activation_check_proc_14_func_1633152926(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_14_func_1467979191(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] += _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_14_func_992993061(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1482495268(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_14_func_1294122428()
{
	
}

void _activation_check_proc_14_func_1945215814()
{
	
}

void _activation_check_proc_14_func_187251375(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a >>= _activatnvar_confusing_char_a;

}

void _activation_check_proc_14_func_2131416103(char& _activatnvar_confusing_char_a)
{
	
	_activation_check_proc_14_func_187251375(_activatnvar_confusing_char_a);
	_activation_check_proc_14_func_1945215814();
}

void _activation_check_proc_14_func_2139352829(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] <<= _activatnvar_confusing_LLUUID_1.mData[0x4];

}

void _activation_check_proc_14_func_204024876(U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_14_func_274558015(_activatnvar_confusing_U8_3, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_14_func_2001831710(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x8] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_7;

	/* inline */ _activation_check_proc_14_func_703889649(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_14_func_231433893(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_14_func_1708408686(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_14_func_290792174(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_602017193(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_602017193(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_953774877(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1125573195(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_14_func_82053242(U8& _activatnvar_t1, U8& _activatnvar_pos, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_3;

	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	_activation_check_proc_14_func_1125573195(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_107968505(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("2d5be340-8a8e-9ff9-de3a-e9ff21965c2d");

}

void _activation_check_proc_14_func_451691142(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_14_func_1121493812(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_char_9;

}

void _activation_check_proc_14_func_1993599469(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_1121493812(_activatnvar_confusing_char_9, _activatnvar_confusing_char_0);
}

void _activation_check_proc_14_func_1292281926(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_14_func_1428168799()
{
	
}

void _activation_check_proc_14_func_10029774(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_c *= 0x4;

	/* inline */ _activation_check_proc_14_func_2076434676(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_14_func_1262864559(bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x0] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_14_func_559418429(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_14_func_640696700(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_3 >>= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_14_func_788282597(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x3] <<= _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_14_func_807891536(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_7 = 0x9;

}

void _activation_check_proc_14_func_702993380(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_14_func_420062428(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_1 ^= 0x1;

}

void _activation_check_proc_14_func_1808356658(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_0;

	/* inline */ _activation_check_proc_14_func_894932518(_activatnvar_confusing_char_0);
	_activation_check_proc_14_func_420062428(_activatnvar_generic_bool_0, _activatnvar_confusing_char_1);
	_activation_check_proc_14_func_505008987(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_4);
	/* inline */ _activation_check_proc_14_func_2145497943(_activatnvar_confusing_int_6);
	_activation_check_proc_14_func_24078605(_activatnvar_lace, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_14_func_505008987(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_14_func_24078605(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xd] *= _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_14_func_77232409(char& _activatnvar_confusing_char_3, U8& _activatnvar_t1)
{
	_activatnvar_confusing_char_3 *= _activatnvar_t1;

}

void _activation_check_proc_14_func_1172760727(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_383102114(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t1, int& _activatnvar_confusing_int_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_14_func_1172760727(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
	/* inline */ _activation_check_proc_14_func_171606268(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_5);
	_activation_check_proc_14_func_77232409(_activatnvar_confusing_char_3, _activatnvar_t1);
}

void _activation_check_proc_14_func_973300574(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 90; _activatnvar_strbuf_0[0] ^= 107; _activatnvar_strbuf_0[1] = 119; _activatnvar_strbuf_0[1] ^= 71; _activatnvar_strbuf_0[2] = 115; _activatnvar_strbuf_0[2] ^= 64; _activatnvar_strbuf_0[3] = 70; _activatnvar_strbuf_0[3] ^= 114; _activatnvar_strbuf_0[4] = 87; _activatnvar_strbuf_0[4] ^= 53; _activatnvar_strbuf_0[5] = 117; _activatnvar_strbuf_0[5] ^= 19; _activatnvar_strbuf_0[6] = 54; _activatnvar_strbuf_0[6] ^= 80; _activatnvar_strbuf_0[7] = 46; _activatnvar_strbuf_0[7] ^= 24; _activatnvar_strbuf_0[8] = 85; _activatnvar_strbuf_0[8] ^= 120; _activatnvar_strbuf_0[9] = 55; _activatnvar_strbuf_0[9] ^= 85; _activatnvar_strbuf_0[10] = 91; _activatnvar_strbuf_0[10] ^= 108; _activatnvar_strbuf_0[11] = 0; _activatnvar_strbuf_0[11] ^= 52; _activatnvar_strbuf_0[12] = 83; _activatnvar_strbuf_0[12] ^= 99; _activatnvar_strbuf_0[13] = 104; _activatnvar_strbuf_0[13] ^= 69; _activatnvar_strbuf_0[14] = 41; _activatnvar_strbuf_0[14] ^= 25; _activatnvar_strbuf_0[15] = 121; _activatnvar_strbuf_0[15] ^= 31; _activatnvar_strbuf_0[16] = 96; _activatnvar_strbuf_0[16] ^= 2; _activatnvar_strbuf_0[17] = 62; _activatnvar_strbuf_0[17] ^= 90; _activatnvar_strbuf_0[18] = 117; _activatnvar_strbuf_0[18] ^= 88; _activatnvar_strbuf_0[19] = 35; _activatnvar_strbuf_0[19] ^= 18; _activatnvar_strbuf_0[20] = 123; _activatnvar_strbuf_0[20] ^= 24; _activatnvar_strbuf_0[21] = 99; _activatnvar_strbuf_0[21] ^= 1; _activatnvar_strbuf_0[22] = 39; _activatnvar_strbuf_0[22] ^= 65; _activatnvar_strbuf_0[23] = 90; _activatnvar_strbuf_0[23] ^= 119; _activatnvar_strbuf_0[24] = 56; _activatnvar_strbuf_0[24] ^= 12; _activatnvar_strbuf_0[25] = 0; _activatnvar_strbuf_0[25] ^= 54; _activatnvar_strbuf_0[26] = 59; _activatnvar_strbuf_0[26] ^= 14; _activatnvar_strbuf_0[27] = 29; _activatnvar_strbuf_0[27] ^= 126; _activatnvar_strbuf_0[28] = 2; _activatnvar_strbuf_0[28] ^= 50; _activatnvar_strbuf_0[29] = 43; _activatnvar_strbuf_0[29] ^= 26; _activatnvar_strbuf_0[30] = 47; _activatnvar_strbuf_0[30] ^= 75; _activatnvar_strbuf_0[31] = 24; _activatnvar_strbuf_0[31] ^= 42; _activatnvar_strbuf_0[32] = 123; _activatnvar_strbuf_0[32] ^= 74; _activatnvar_strbuf_0[33] = 15; _activatnvar_strbuf_0[33] ^= 109; _activatnvar_strbuf_0[34] = 52; _activatnvar_strbuf_0[34] ^= 80; _activatnvar_strbuf_0[35] = 118; _activatnvar_strbuf_0[35] ^= 67; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_14_func_936338542(U8& _activatnvar_confusing_U8_a, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_a.mData[0x5];

	_activation_check_proc_14_func_973300574(_activatnvar_strbuf_0);
}

void _activation_check_proc_14_func_1288987733(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_14_func_949482646(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_14_func_62426781(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_4[0xf] ^= _activatnvar_code.mData[0xd];

}

void _activation_check_proc_14_func_1330679181(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_14_func_2079539202(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("841df229-b0f1-7515-cb84-9383fad1e3a8");

}

void _activation_check_proc_14_func_1806691747(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1630697952(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_159584831(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1624963508(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x1] = _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_14_func_2014221072(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_2 += _activatnvar_confusing_U8_f;

}

void _activation_check_proc_14_func_1121843797(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_U8_b++;

	_activation_check_proc_14_func_2014221072(_activatnvar_confusing_U8_f, _activatnvar_confusing_U8_2, _activatnvar_confusing_bool_8);
	_activation_check_proc_14_func_439496454();
}

void _activation_check_proc_14_func_439496454()
{
	
}

void _activation_check_proc_14_func_1500100652(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_14_func_1305565359(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 >>= 0x6;

}

void _activation_check_proc_14_func_1189783476(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	/* inline */ _activation_check_proc_14_func_408145112(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_14_func_1118003425(_activatnvar_confusing_chararray_0);
	_activation_check_proc_14_func_1265356255(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_14_func_818098420(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_7);
}

void _activation_check_proc_14_func_1265356255(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("9abfc568-ac45-a346-b116-13e8febaf1a7");

}

void _activation_check_proc_14_func_818098420(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_3.mData[0x2];

}

void _activation_check_proc_14_func_1886593220(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] = _activatnvar_ser_digest[0x1];

}

void _activation_check_proc_14_func_1729623584(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_258027351(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d *= 0xe;

}

void _activation_check_proc_14_func_1301677360(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("fe638506-94c8-460c-d626-bcfb7d3d509e");

}

void _activation_check_proc_14_func_2044342085(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_d[0xb] |= _activatnvar_confusing_chararray_2[0xc];

}

void _activation_check_proc_14_func_972810024(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_14_func_484819318(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] |= _activatnvar_confusing_LLUUID_5.mData[0xe];

}

void _activation_check_proc_14_func_1756459408(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_14_func_80642188(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1740292272(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_char_a;

}

void _activation_check_proc_14_func_1615884025(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1111227822(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_14_func_1933491664(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_U8_3 += _activatnvar_confusing_char_8;

}

void _activation_check_proc_14_func_1551092258(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_9.mData[0x6] <<= _activatnvar_confusing_LLUUID_7.mData[0xa];

}

void _activation_check_proc_14_func_265144822()
{
	
}

void _activation_check_proc_14_func_679940556(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xe] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_14_func_377261575(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1703496335(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1741800913(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x1] != 0x4) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_14_func_1632187436(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_f >>= 0x4;

}

void _activation_check_proc_14_func_1316380728(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_strbuf_0[0] = 96; _activatnvar_strbuf_0[0] ^= 33; _activatnvar_strbuf_0[1] = 120; _activatnvar_strbuf_0[1] ^= 27; _activatnvar_strbuf_0[2] = 68; _activatnvar_strbuf_0[2] ^= 48; _activatnvar_strbuf_0[3] = 8; _activatnvar_strbuf_0[3] ^= 97; _activatnvar_strbuf_0[4] = 69; _activatnvar_strbuf_0[4] ^= 51; _activatnvar_strbuf_0[5] = 90; _activatnvar_strbuf_0[5] ^= 59; _activatnvar_strbuf_0[6] = 45; _activatnvar_strbuf_0[6] ^= 89; _activatnvar_strbuf_0[7] = 14; _activatnvar_strbuf_0[7] ^= 103; _activatnvar_strbuf_0[8] = 110; _activatnvar_strbuf_0[8] ^= 1; _activatnvar_strbuf_0[9] = 77; _activatnvar_strbuf_0[9] ^= 35; _activatnvar_strbuf_0[10] = 20; _activatnvar_strbuf_0[10] ^= 87; _activatnvar_strbuf_0[11] = 32; _activatnvar_strbuf_0[11] ^= 79; _activatnvar_strbuf_0[12] = 26; _activatnvar_strbuf_0[12] ^= 126; _activatnvar_strbuf_0[13] = 3; _activatnvar_strbuf_0[13] ^= 102; _activatnvar_strbuf_0[14] = 0;
	/* inline */ _activation_check_proc_14_func_1714464032(_activatnvar_confusing_U8_d, _activatnvar_secret);
}

void _activation_check_proc_14_func_363421681(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("f966209b-3fc4-8511-cc92-88a6fd0ea5af");

}

void _activation_check_proc_14_func_1829650490(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x6] <<= _activatnvar_secret.mData[0x2];

}

void _activation_check_proc_14_func_626381861(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_14_func_1474921337(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 <<= 0x4;

}

void _activation_check_proc_14_func_988759796(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_323384468(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_2 |= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_14_func_480817229(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_5)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_5 &= 0x8;

}

void _activation_check_proc_14_func_1103668413(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_8.mData[0xd];

}

void _activation_check_proc_14_func_1360904525(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_t1, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_0 ^= _activatnvar_t1;

}

void _activation_check_proc_14_func_1713668759(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_b >>= _activatnvar_confusing_char_a;

}

void _activation_check_proc_14_func_379071642(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_section2, U8& _activatnvar_t1)
{
	_activatnvar_confusing_chararray_9[0xd] >>= _activatnvar_section2.mData[0x3];

	/* inline */ _activation_check_proc_14_func_558190746(_activatnvar_confusing_int_7, _activatnvar_confusing_int_2);
	_activation_check_proc_14_func_1360904525(_activatnvar_confusing_U8_0, _activatnvar_t1, _activatnvar_generic_bool_1);
	_activation_check_proc_14_func_1713668759(_activatnvar_confusing_char_b, _activatnvar_confusing_char_a);
}

void _activation_check_proc_14_func_1830282266(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_14_func_672668323(_activatnvar_confusing_chararray_6, _activatnvar_confusing_char_7);
}

void _activation_check_proc_14_func_52873790(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x0] &= _activatnvar_confusing_chararray_5[0xd];

	/* inline */ _activation_check_proc_14_func_471085026(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_14_func_1650491950(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_a.mData[0xa];

	_activatnvar_confusing_LLUUID_f = _activatnvar_code;

}

void _activation_check_proc_14_func_1544202963(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_14_func_1734759496(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

	/* inline */ _activation_check_proc_14_func_1376765375(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_14_func_1047169142(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_14_func_1750285008(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_14_func_1589552937(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1397202703(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_14_func_1562911932(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
	/* inline */ _activation_check_proc_14_func_1320588415(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_14_func_1804212489()
{
	
}

void _activation_check_proc_14_func_1458238638(int& _activatnvar_confusing_int_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_1847726969(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_14_func_306692375(_activatnvar_confusing_int_5);
	_activation_check_proc_14_func_1804212489();
}

void _activation_check_proc_14_func_1847726969(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1573954186(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_5 >>= _activatnvar_confusing_int_e;

}

void _activation_check_proc_14_func_1012393447(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

	_activation_check_proc_14_func_1171191101();
}

void _activation_check_proc_14_func_1171191101()
{
	
}

void _activation_check_proc_14_func_412928585(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_LLUUID_6.mData[0x5];

}

void _activation_check_proc_14_func_1020840713(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_14_func_507538252(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

	_activation_check_proc_14_func_457082062(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_14_func_1603498944(_activatnvar_confusing_bool_9, _activatnvar_generic_bool_1);
}

void _activation_check_proc_14_func_457082062(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 = 0x1;

}

void _activation_check_proc_14_func_1405165117(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_14_func_878537431(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_12639621(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_14_func_605690190(char& _activatnvar_confusing_char_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_12639621(_activatnvar_confusing_char_f);
}

void _activation_check_proc_14_func_928403886(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_chararray_4[0x5];

}

void _activation_check_proc_14_func_693961672(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_section1, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_section1;

	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_14_func_1743273568(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_14_func_402582163(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_14_func_1467378346(LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_749036738(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
	_activation_check_proc_14_func_402582163(_activatnvar_confusing_int_8, _activatnvar_confusing_int_6);
}

void _activation_check_proc_14_func_749036738(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_64010017(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_476669063(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xd] == 0xc) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_14_func_225246036(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_a ^= _activatnvar_confusing_int_0;

}

void _activation_check_proc_14_func_394199968(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_int_b++;

	_activation_check_proc_14_func_225246036(_activatnvar_confusing_int_a, _activatnvar_confusing_int_0);
	_activation_check_proc_14_func_476669063(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_1);
	/* inline */ _activation_check_proc_14_func_2084215987(_activatnvar_confusing_LLUUID_2, _activatnvar_so);
	_activation_check_proc_14_func_64010017(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_1469185484(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_14_func_1221240532(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_0)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_0 ^= _activatnvar_confusing_U8_6;

	_activation_check_proc_14_func_1469185484(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_14_func_662298972(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_14_func_1173178765(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x6] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_14_func_1151162501(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_14_func_331324183(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xd;

}

void _activation_check_proc_14_func_643984332(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_fscked.mData[0xf];

}

void _activation_check_proc_14_func_2145062559(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_14_func_70567102(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_7[0xb] <<= _activatnvar_confusing_LLUUID_5.mData[0x5];

	_activatnvar_confusing_LLUUID_2 = LLUUID("a257eb1d-e958-0458-41e4-0b40b4aadcb6");

}

void _activation_check_proc_14_func_1452025890(int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_746747150(_activatnvar_confusing_U8_f, _activatnvar_confusing_bool_6);
	_activation_check_proc_14_func_2034711406(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_14_func_363957438(_activatnvar_confusing_int_8);
}

void _activation_check_proc_14_func_2034711406(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_14_func_746747150(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_f ^= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_14_func_1811941922(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_chararray_e[0xd];

}

void _activation_check_proc_14_func_220882694(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_44834616(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_14_func_1206765337(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1982449307(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_14_func_804575773(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_14_func_2135587159(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 += 0x6;

}

void _activation_check_proc_14_func_336242759(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_t0 &= 7;
	_activation_check_proc_14_func_2135587159(_activatnvar_confusing_U8_4);
}

void _activation_check_proc_14_func_1272320500(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 *= _activatnvar_confusing_int_0;

}

void _activation_check_proc_14_func_1784952754(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_768321401(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_1[0xf] |= _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_14_func_1028498643(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_14_func_2113128953()
{
	
}

void _activation_check_proc_14_func_673266634(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_chararray_3[0x3];

}

void _activation_check_proc_14_func_895039548(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_14_func_280359063(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_14_func_1569506138(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_1663828518(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_7)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_7 ^= 0x9;

}

void _activation_check_proc_14_func_27607683(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_3.mData[0x5] = _activatnvar_so.mData[0x8];

	/* inline */ _activation_check_proc_14_func_849731473(_activatnvar_confusing_char_8, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_14_func_159691281(char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_generic_iterator = 12;
	/* inline */ _activation_check_proc_14_func_125118785(_activatnvar_confusing_chararray_c, _activatnvar_confusing_char_1);
}

void _activation_check_proc_14_func_2135024574(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_LLUUID_a.mData[0x7];

}

void _activation_check_proc_14_func_1071937020(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_0, char& _activatnvar_feat)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_14_func_370360264(_activatnvar_doaccount, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_14_func_1677345724(_activatnvar_generic_bool_1, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_793573077(LLMD5*& _activatnvar_nmd5, std::string& _activatnvar_fullname, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_lace.mData[0x0];

	_activation_check_proc_14_func_2069209049(_activatnvar_nmd5, _activatnvar_fullname);
}

void _activation_check_proc_14_func_2069209049(LLMD5*& _activatnvar_nmd5, std::string& _activatnvar_fullname)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_14_func_1831392618(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1702067025()
{
	
}

void _activation_check_proc_14_func_1381232777(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("cb01b0d9-996b-3886-e217-6a8d08976b72");

}

void _activation_check_proc_14_func_857954578(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] &= _activatnvar_section2.mData[0x6];

}

void _activation_check_proc_14_func_92845442(int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_14_func_1682576612(_activatnvar_confusing_int_a);
}

void _activation_check_proc_14_func_1212574698(unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xe] += _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_14_func_553788476(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_14_func_205930299(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b <<= _activatnvar_confusing_chararray_b[0x0];

}

void _activation_check_proc_14_func_964251465(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_8 ^= 0x3;

}

void _activation_check_proc_14_func_2125973351(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_14_func_750943128(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_U8_d;

	_activation_check_proc_14_func_2125973351(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_14_func_1454760080(int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x0] != 0x5) _activatnvar_confusing_bool_c = false;

	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_c;

	_activation_check_proc_14_func_366723856(_activatnvar_t1);
	/* inline */ _activation_check_proc_14_func_2055826342(_activatnvar_generic_iterator, _activatnvar_confusing_int_0);
}

void _activation_check_proc_14_func_366723856(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_14_func_759997197(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1247268313(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e <<= 0xe;

}

void _activation_check_proc_14_func_2014046458(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_759997197(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_14_func_1528586652(_activatnvar_generic_iterator);
	_activation_check_proc_14_func_1247268313(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_14_func_1389049839(_activatnvar_confusing_U8_7, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_14_func_499839083(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_7)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_8 |= _activatnvar_confusing_char_7;

}

void _activation_check_proc_14_func_1244517453(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

	/* inline */ _activation_check_proc_14_func_1830554740(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_14_func_1882961694(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_14_func_1882961694(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_14_func_394674939(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x8] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_14_func_1608286967(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_14_func_8498484(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_b[0xa] ^= _activatnvar_ser_digest[0x1];

}

void _activation_check_proc_14_func_698794361(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_14_func_96531940(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b >>= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_14_func_1567585015(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_14_func_2109482070(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] *= _activatnvar_confusing_LLUUID_4.mData[0xe];

	/* inline */ _activation_check_proc_14_func_943050035(_activatnvar_confusing_U8_1);
	/* inline */ _activation_check_proc_14_func_650765695(_activatnvar_lace, _activatnvar_confusing_chararray_7);
	_activation_check_proc_14_func_1567585015(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_14_func_2054412030(LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_c;

	_activation_check_proc_14_func_1779393250(_activatnvar_section2, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_14_func_1779393250(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x0] >>= _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_14_func_1122470186(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x3] |= _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_14_func_825692243(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_14_func_1272994775(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_14_func_341480789(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 = _activatnvar_confusing_int_3;

}

void _activation_check_proc_14_func_1267671449(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_0)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_c <<= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_14_func_1101579261(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = false;

	/* inline */ _activation_check_proc_14_func_1288560924(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_14_func_2034951685(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_14_func_1492899988(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xa] *= _activatnvar_confusing_chararray_c[0x8];

}

void _activation_check_proc_14_func_339796333(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_14_func_1261420534(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_char_5++;

	_activation_check_proc_14_func_339796333(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_14_func_1702406668(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_14_func_1312147667(int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_14_func_770000443(_activatnvar_confusing_int_c);
}

void _activation_check_proc_14_func_1912593004(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_5)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_8 |= 0xb;

	/* inline */ _activation_check_proc_14_func_1822537536(_activatnvar_confusing_int_5);
	_activation_check_proc_14_func_1227622582(_activatnvar_confusing_bool_6);
}

void _activation_check_proc_14_func_1227622582(bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_14_func_1174507236(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] ^= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_14_func_1404726294(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] <<= _activatnvar_name_digest[0x8];

	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_14_func_82663798(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_14_func_607341410(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1715972890(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_4)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_5 = true;

	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_14_func_1844185143(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_14_func_157352567(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_b <<= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_14_func_1797826720(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_14_func_1120730204(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_14_func_629454696(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
	_activation_check_proc_14_func_436880502(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_14_func_436880502(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_14_func_367241111(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_14_func_1437424028(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_14_func_1821998783(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_14_func_1821998783(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_649950023(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1098879036(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_14_func_1674097421(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_14_func_313323789(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_14_func_1870867700(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_a = _activatnvar_section2.mData[0xd];

}

void _activation_check_proc_14_func_316065337(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_e)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_e |= 0x3;

}

void _activation_check_proc_14_func_592145793(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_572807246()
{
	
}

void _activation_check_proc_14_func_1809849058(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_3 *= _activatnvar_confusing_int_e;

}

void _activation_check_proc_14_func_1882451152(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d |= 0x2;

}

void _activation_check_proc_14_func_784350504(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_14_func_1695308938(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1718717341(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_t0 &= 3;
	/* inline */ _activation_check_proc_14_func_1152199541(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_4);
	_activation_check_proc_14_func_1448345932(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_14_func_1448345932(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x8] *= _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_14_func_1304111312(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("d17a5cfd-8c20-0147-2605-962f82af18c9");

}

void _activation_check_proc_14_func_1668910070(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_9[0x8] >>= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_14_func_247628802(unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_c, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_7;

	_activation_check_proc_14_func_1668910070(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_e);
	_activation_check_proc_14_func_404823489(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_char_c, _activatnvar_confusing_bool_8);
	_activation_check_proc_14_func_2146560679(_activatnvar_confusing_int_1);
}

void _activation_check_proc_14_func_404823489(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xb] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_14_func_2146560679(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_14_func_1466609317(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x5] <<= _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_14_func_297496782(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x8] += _activatnvar_confusing_LLUUID_d.mData[0xf];

}

void _activation_check_proc_14_func_1194427383(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 *= 0xb;

}

void _activation_check_proc_14_func_1212615269(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_14_func_2070124864(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_d)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_d *= 0xf;

}

void _activation_check_proc_14_func_1892419990(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_d += _activatnvar_confusing_chararray_8[0x4];

}

void _activation_check_proc_14_func_1109665679(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f ^= _activatnvar_confusing_int_c;

}

void _activation_check_proc_14_func_1525624951(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_14_func_981439790(unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_c, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_f, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xf] != 0xd) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_c;

	_activation_check_proc_14_func_1525624951(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_5);
	_activation_check_proc_14_func_1892419990(_activatnvar_confusing_char_d, _activatnvar_confusing_chararray_8);
	_activation_check_proc_14_func_1109665679(_activatnvar_confusing_int_c, _activatnvar_confusing_int_f);
}

void _activation_check_proc_14_func_181650609(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x4] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_a = false;

	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_14_func_75435046(_activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_14_func_253485616(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_section1.mData[0x9];

}

void _activation_check_proc_14_func_208915212(LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_14_func_1268353081(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_1535733839(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_14_func_114737613(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 78; _activatnvar_strbuf_0[0] ^= 120; _activatnvar_strbuf_0[1] = 107; _activatnvar_strbuf_0[1] ^= 91; _activatnvar_strbuf_0[2] = 91; _activatnvar_strbuf_0[2] ^= 111; _activatnvar_strbuf_0[3] = 74; _activatnvar_strbuf_0[3] ^= 123; _activatnvar_strbuf_0[4] = 95; _activatnvar_strbuf_0[4] ^= 108; _activatnvar_strbuf_0[5] = 31; _activatnvar_strbuf_0[5] ^= 124; _activatnvar_strbuf_0[6] = 68; _activatnvar_strbuf_0[6] ^= 116; _activatnvar_strbuf_0[7] = 6; _activatnvar_strbuf_0[7] ^= 52; _activatnvar_strbuf_0[8] = 99; _activatnvar_strbuf_0[8] ^= 78; _activatnvar_strbuf_0[9] = 36; _activatnvar_strbuf_0[9] ^= 20; _activatnvar_strbuf_0[10] = 75; _activatnvar_strbuf_0[10] ^= 121; _activatnvar_strbuf_0[11] = 8; _activatnvar_strbuf_0[11] ^= 60; _activatnvar_strbuf_0[12] = 2; _activatnvar_strbuf_0[12] ^= 52; _activatnvar_strbuf_0[13] = 106; _activatnvar_strbuf_0[13] ^= 71; _activatnvar_strbuf_0[14] = 125; _activatnvar_strbuf_0[14] ^= 77; _activatnvar_strbuf_0[15] = 9; _activatnvar_strbuf_0[15] ^= 57; _activatnvar_strbuf_0[16] = 126; _activatnvar_strbuf_0[16] ^= 77; _activatnvar_strbuf_0[17] = 122; _activatnvar_strbuf_0[17] ^= 74; _activatnvar_strbuf_0[18] = 83; _activatnvar_strbuf_0[18] ^= 126; _activatnvar_strbuf_0[19] = 89; _activatnvar_strbuf_0[19] ^= 107; _activatnvar_strbuf_0[20] = 54; _activatnvar_strbuf_0[20] ^= 7; _activatnvar_strbuf_0[21] = 121; _activatnvar_strbuf_0[21] ^= 73; _activatnvar_strbuf_0[22] = 95; _activatnvar_strbuf_0[22] ^= 102; _activatnvar_strbuf_0[23] = 82; _activatnvar_strbuf_0[23] ^= 127; _activatnvar_strbuf_0[24] = 62; _activatnvar_strbuf_0[24] ^= 6; _activatnvar_strbuf_0[25] = 105; _activatnvar_strbuf_0[25] ^= 81; _activatnvar_strbuf_0[26] = 80; _activatnvar_strbuf_0[26] ^= 101; _activatnvar_strbuf_0[27] = 110; _activatnvar_strbuf_0[27] ^= 95; _activatnvar_strbuf_0[28] = 62; _activatnvar_strbuf_0[28] ^= 10; _activatnvar_strbuf_0[29] = 123; _activatnvar_strbuf_0[29] ^= 66; _activatnvar_strbuf_0[30] = 90; _activatnvar_strbuf_0[30] ^= 106; _activatnvar_strbuf_0[31] = 23; _activatnvar_strbuf_0[31] ^= 118; _activatnvar_strbuf_0[32] = 22; _activatnvar_strbuf_0[32] ^= 117; _activatnvar_strbuf_0[33] = 110; _activatnvar_strbuf_0[33] ^= 86; _activatnvar_strbuf_0[34] = 66; _activatnvar_strbuf_0[34] ^= 39; _activatnvar_strbuf_0[35] = 21; _activatnvar_strbuf_0[35] ^= 38; _activatnvar_strbuf_0[36] = 0;
	/* inline */ _activation_check_proc_14_func_1856092109(_activatnvar_section2, _activatnvar_strbuf_0);
}

void _activation_check_proc_14_func_875687294(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_14_func_973866034(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_char_f;

}

void _activation_check_proc_14_func_15494724()
{
	
}

void _activation_check_proc_14_func_1199195819(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_847613017(int& _activatnvar_confusing_int_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_e &= 0xff;

	_activation_check_proc_14_func_1199195819(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_366880844(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d += 0x2;

}

void _activation_check_proc_14_func_241393647(unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_366880844(_activatnvar_confusing_char_d);
}

void _activation_check_proc_14_func_1120081902(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] += _activatnvar_secret.mData[0x9];

}

void _activation_check_proc_14_func_1793997272(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_so;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_309158238(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1018517652(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_e.mData[0x9];

}

void _activation_check_proc_14_func_527075766(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_a *= _activatnvar_confusing_chararray_8[0x4];

}

void _activation_check_proc_14_func_119160764(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_e |= _activatnvar_combined_id.mData[0x4];

}

void _activation_check_proc_14_func_930536309(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_14_func_502705223(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f |= _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_14_func_658846740(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_14_func_1206120692(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_14_func_1336934228(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("c7f2e9df-5ceb-911f-d829-7596958aba39");

}

void _activation_check_proc_14_func_1476080283(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_LLUUID_6.mData[0x3];

	_activation_check_proc_14_func_1336934228(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_14_func_658846740(_activatnvar_confusing_char_6);
	_activation_check_proc_14_func_230968056(_activatnvar_confusing_char_e, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_14_func_1861908128(_activatnvar_pos, _activatnvar_t1, _activatnvar_so);
	_activation_check_proc_14_func_1206120692(_activatnvar_confusing_int_e);
}

void _activation_check_proc_14_func_230968056(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_e.mData[0x4];

}

void _activation_check_proc_14_func_698202728(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x4] |= _activatnvar_confusing_LLUUID_a.mData[0x0];

}

void _activation_check_proc_14_func_1713784291(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("3037c12a-0d79-5ec9-bec7-7da3619d054a");

	/* inline */ _activation_check_proc_14_func_2087974395(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_14_func_1547432537(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_5.mData[0x7] >>= _activatnvar_confusing_LLUUID_a.mData[0xa];

	_activation_check_proc_14_func_698641525(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_8, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_14_func_698641525(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_14_func_1104668256()
{
	
}

void _activation_check_proc_14_func_2120220698(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("ded3d39f-2b87-b4e3-51ba-ea0e281e4d83");

}

void _activation_check_proc_14_func_2140528536(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_14_func_2025766839(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_secret.mData[0xb];

}

void _activation_check_proc_14_func_1459912634(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 ^= _activatnvar_confusing_int_7;

}

void _activation_check_proc_14_func_1142622090(bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_3 |= _activatnvar_confusing_int_0;

	_activation_check_proc_14_func_667933278(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_1, _activatnvar_confusing_U8_8);
	_activation_check_proc_14_func_1924966533();
	/* inline */ _activation_check_proc_14_func_2059530240(_activatnvar_confusing_chararray_2, _activatnvar_confusing_char_5);
}

void _activation_check_proc_14_func_1924966533()
{
	
}

void _activation_check_proc_14_func_667933278(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_8)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x1] != _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_1 = false;

	
}

void _activation_check_proc_14_func_1591301807(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_0[0x3] &= _activatnvar_lace.mData[0xa];

	_activation_check_proc_14_func_1608654562(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_14_func_1608654562(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_199640790(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_e &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_14_func_712007721(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_14_func_199640790(_activatnvar_confusing_bool_e, _activatnvar_generic_bool_0);
}

void _activation_check_proc_14_func_1343148575(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_14_func_451732236(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_776442486(int& _activatnvar_confusing_int_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_14_func_1064921990(_activatnvar_confusing_int_8);
}

void _activation_check_proc_14_func_801820400(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_14_func_2011484718(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_14_func_85217265()
{
	
}

void _activation_check_proc_14_func_1412346514(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_6;

	_activation_check_proc_14_func_1153462839(_activatnvar_confusing_char_4, _activatnvar_confusing_char_a);
	_activation_check_proc_14_func_85217265();
}

void _activation_check_proc_14_func_1153462839(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_char_a;

}

void _activation_check_proc_14_func_1338671719()
{
	
}

void _activation_check_proc_14_func_723930907(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_14_func_1993755585(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_14_func_1896632011(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_14_func_1040383731(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_4);
	/* inline */ _activation_check_proc_14_func_1275431362(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_14_func_32272474(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_so;

}

void _activation_check_proc_14_func_951279080(char& _activatnvar_confusing_char_8, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_8 = _activatnvar_code.mData[0x2];

	/* inline */ _activation_check_proc_14_func_1546642677(_activatnvar_confusing_int_b);
}

void _activation_check_proc_14_func_869239185(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_7)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_U8_7 <<= 0xc;

}

void _activation_check_proc_14_func_690728989(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_14_func_1123028804(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_14_func_1008181878(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("03de7ef8-d9c2-e161-e187-869f528a08ad");

}

void _activation_check_proc_14_func_1179521183(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_4[0x0] &= _activatnvar_confusing_LLUUID_2.mData[0xb];

}

void _activation_check_proc_14_func_1864564374()
{
	
}

void _activation_check_proc_14_func_458609894(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_14_func_3437906(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_6 <<= _activatnvar_confusing_U8_e;

	_activation_check_proc_14_func_118603357(_activatnvar_confusing_char_1);
}

void _activation_check_proc_14_func_118603357(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 ^= 0x5;

}

void _activation_check_proc_14_func_1961505525(bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_14_func_2101582427(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_14_func_2083580898(_activatnvar_generic_iterator);
}

void _activation_check_proc_14_func_2101582427(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_14_func_1856776408(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_14_func_443877425(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xb] *= _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_14_func_792218684(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1893495092()
{
	
}

void _activation_check_proc_14_func_2089384705(bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_a;

	/* inline */ _activation_check_proc_14_func_818144334(_activatnvar_ser_digest, _activatnvar_confusing_chararray_0);
	_activation_check_proc_14_func_619647169(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_14_func_619647169(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("95e3dc9c-8602-d32f-04af-518db7433d21");

}

void _activation_check_proc_14_func_1678286417(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_14_func_1762026657(U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_U8_a++;

	_activatnvar_confusing_int_9++;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
