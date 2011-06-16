// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation09.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 09

void _activation_check_proc_09_func_1225993427(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_6.mData[0x5];

}

void _activation_check_proc_09_func_1373877801(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] <<= _activatnvar_secret.mData[0x1];

	_activation_check_proc_09_func_2141303032(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_09_func_2141303032(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x7] >>= _activatnvar_confusing_chararray_d[0x0];

}

void _activation_check_proc_09_func_1485048116(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1644427580(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
	_activation_check_proc_09_func_1406729507(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_09_func_1406729507(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xd] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_09_func_314753755(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_09_func_169323513()
{
	
}

void _activation_check_proc_09_func_86649297(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_09_func_1207042572(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_09_func_825447929(_activatnvar_t1, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_09_func_825447929(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_09_func_1995717302(int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_0;

	/* inline */ _activation_check_proc_09_func_1109082034(_activatnvar_confusing_int_1);
}

void _activation_check_proc_09_func_573936156(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_09_func_2084735552(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("f42f20a2-0de1-3022-7178-6b9ca15544cb");

}

void _activation_check_proc_09_func_706222167(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_09_func_225646636(_activatnvar_confusing_int_1);
}

void _activation_check_proc_09_func_225646636(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_09_func_755495679(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_09_func_248196537(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_09_func_717833047(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_t0 |= 8;
	_activatnvar_confusing_LLUUID_5.mData[0xf] |= _activatnvar_confusing_chararray_6[0x6];

}

void _activation_check_proc_09_func_2129772930(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

	_activation_check_proc_09_func_717833047(_activatnvar_confusing_LLUUID_5, _activatnvar_t0, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_09_func_660949707(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_09_func_755495679(_activatnvar_confusing_int_d);
	_activation_check_proc_09_func_248196537(_activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_09_func_719785226(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_9)
{
	
	_activation_check_proc_09_func_859187731(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_09_func_1707806469(_activatnvar_confusing_char_0, _activatnvar_confusing_char_7);
}

void _activation_check_proc_09_func_859187731(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_09_func_1291022502(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_09_func_483043807(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_f += 0x6;

}

void _activation_check_proc_09_func_725542927(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_f.mData[0x4] |= _activatnvar_fscked.mData[0x9];

}

void _activation_check_proc_09_func_1758106464(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_09_func_619091107(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x4] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_09_func_1665135952(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1638340156(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_09_func_512481064(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_09_func_1535067613(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_09_func_743962951(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_09_func_743962951(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_09_func_1899837096(int& _activatnvar_confusing_int_1, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	
	_activation_check_proc_09_func_893376361(_activatnvar_pos, _activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_09_func_775192436(_activatnvar_confusing_int_1);
}

void _activation_check_proc_09_func_893376361(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x3] == _activatnvar_pos) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_09_func_1313302820(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_2040019925(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("2fa28afb-d07c-1157-e811-e0a40a763754");

	_activation_check_proc_09_func_1332690181(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_09_func_91424674(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_09_func_1313302820(_activatnvar_generic_iterator);
	_activation_check_proc_09_func_1692494561(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_09_func_1692494561(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xe] |= _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_09_func_1332690181(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1776286238(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_09_func_1754112577(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_09_func_723851964(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_828211972(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_combined_id;

}

void _activation_check_proc_09_func_590598527(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x6] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_09_func_1946295659(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_09_func_1671126850(DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_gvi_flags = 0;
}

void _activation_check_proc_09_func_1575861330(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("9f956cb6-a3a7-f313-f476-4f06b214625e");

}

void _activation_check_proc_09_func_820888548(std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
}

void _activation_check_proc_09_func_349679257(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_09_func_1093718601(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_09_func_2099785297(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1980360413(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_c = _activatnvar_confusing_char_6;

}

void _activation_check_proc_09_func_1708108641(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_b &= _activatnvar_code.mData[0xe];

	_activation_check_proc_09_func_1980360413(_activatnvar_confusing_bool_5, _activatnvar_confusing_char_6, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_09_func_912101257(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_09_func_1806790280(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] &= _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_09_func_1710819866(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_chararray_4[0x4];

}

void _activation_check_proc_09_func_300211486()
{
	
}

void _activation_check_proc_09_func_1555700595(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

	_activation_check_proc_09_func_300211486();
}

void _activation_check_proc_09_func_2117490229(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_09_func_648814923(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_09_func_533432172(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("1b62a933-f12e-0326-2014-5e1884cb021f");

}

void _activation_check_proc_09_func_1194147019(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_09_func_441580623(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_a *= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_09_func_213205533(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_09_func_1725651023(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_09_func_192569461(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_349835844(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("96ea8f71-1e22-ab54-578e-ae4e03d5b240");

	/* inline */ _activation_check_proc_09_func_1561039901(_activatnvar_confusing_int_6);
}

void _activation_check_proc_09_func_1906818618(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_8;

	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_09_func_1454890978(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_925897370(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xf] ^= _activatnvar_confusing_LLUUID_9.mData[0x7];

	/* inline */ _activation_check_proc_09_func_16016825(_activatnvar_generic_iterator);
	_activation_check_proc_09_func_1454890978(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_09_func_23733433(U8& _activatnvar_t1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_d)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
	_activatnvar_confusing_int_d <<= _activatnvar_generic_iterator;

}

void _activation_check_proc_09_func_1568429463(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_9 ^= 0x1;

}

void _activation_check_proc_09_func_1652150146(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_285090411(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_7)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_c = true;

	if(_activatnvar_confusing_LLUUID_7.mData[0x6] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_6 = false;

	/* inline */ _activation_check_proc_09_func_1081164140(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_09_func_857059463(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1304756076(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 *= _activatnvar_confusing_int_2;

}

void _activation_check_proc_09_func_271529154(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_t1)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x6] == _activatnvar_t1) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_09_func_1773238239(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1918779814(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_b;

	_activation_check_proc_09_func_1773238239(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1638256642(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_09_func_1344573710(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] <<= _activatnvar_confusing_LLUUID_7.mData[0xf];

	/* inline */ _activation_check_proc_09_func_386929903(_activatnvar_confusing_int_d, _activatnvar_confusing_int_b);
}

void _activation_check_proc_09_func_1590480793(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x3] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_09_func_34960624(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_09_func_436315190(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_09_func_394444231(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_09_func_705017102(unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_c[0xb] |= _activatnvar_confusing_chararray_b[0x0];

	_activation_check_proc_09_func_1768161591(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_09_func_856644313();
}

void _activation_check_proc_09_func_1768161591(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_09_func_1668362510(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_09_func_2142170704(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_09_func_2131102326(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_5++;

	/* inline */ _activation_check_proc_09_func_953751437(_activatnvar_confusing_chararray_c, _activatnvar_combined_id);
}

void _activation_check_proc_09_func_1855589723(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_09_func_1915100747(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_09_func_1915100747(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] += _activatnvar_confusing_LLUUID_b.mData[0x2];

}

void _activation_check_proc_09_func_1396186252(LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_LLUUID_e.mData[0x0];

	_activation_check_proc_09_func_359712167(_activatnvar_confusing_int_6);
	_activation_check_proc_09_func_2047876221(_activatnvar_confusing_LLUUID_8, _activatnvar_section2);
	/* inline */ _activation_check_proc_09_func_461366632(_activatnvar_confusing_int_4, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_int_b, _activatnvar_confusing_int_6);
}

void _activation_check_proc_09_func_2047876221(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_section2;

}

void _activation_check_proc_09_func_359712167(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_09_func_293427986(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_09_func_188070066(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1449083755(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_09_func_1231602610(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_9 <<= 0x4;

	/* inline */ _activation_check_proc_09_func_480212996(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_09_func_1642319858(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_secret;

}

void _activation_check_proc_09_func_174003097(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= 0x6;

}

void _activation_check_proc_09_func_1575333746(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_6, int& _activatnvar_confusing_int_c)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_1;

	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_f = false;

	/* inline */ _activation_check_proc_09_func_1278540483(_activatnvar_confusing_bool_a, _activatnvar_confusing_char_0, _activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_09_func_174003097(_activatnvar_confusing_int_c);
}

void _activation_check_proc_09_func_1801593443(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_d >>= 0xd;

}

void _activation_check_proc_09_func_1602182480(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_a)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_a |= 0xc;

}

void _activation_check_proc_09_func_901244132(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_09_func_1963199959(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_0[0x6] >>= _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_09_func_30060620(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_09_func_1227573194(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] += _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_09_func_325785044(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_09_func_274377768(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_09_func_549416867(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_09_func_1906348156(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_e, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_e <<= _activatnvar_confusing_char_1;

	/* inline */ _activation_check_proc_09_func_1571221259(_activatnvar_confusing_U8_7);
	_activation_check_proc_09_func_549416867(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
	/* inline */ _activation_check_proc_09_func_1477631241(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_09_func_274377768(_activatnvar_confusing_char_e, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_09_func_669229694(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_09_func_1866397832(char& _activatnvar_confusing_char_8, int& _activatnvar_confusing_int_2, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_U8_2;

	_activation_check_proc_09_func_669229694(_activatnvar_confusing_int_2);
}

void _activation_check_proc_09_func_1618672176(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 |= 0x4;

}

void _activation_check_proc_09_func_1979401055(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_f[0xc] |= _activatnvar_secret.mData[0xa];

	/* inline */ _activation_check_proc_09_func_217261179(_activatnvar_confusing_U8_1, _activatnvar_confusing_char_a, _activatnvar_confusing_bool_0);
	_activation_check_proc_09_func_1618672176(_activatnvar_confusing_int_6);
	_activation_check_proc_09_func_116171696(_activatnvar_confusing_char_6, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_09_func_116171696(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_6 *= _activatnvar_confusing_chararray_7[0x3];

}

void _activation_check_proc_09_func_500895037(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_chararray_4[0xe];

	_activation_check_proc_09_func_1971268456(_activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_09_func_1542904333(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_09_func_1971268456(unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x2] >>= _activatnvar_confusing_chararray_b[0x2];

}

void _activation_check_proc_09_func_113708961(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 1; _activatnvar_strbuf_0[0] ^= 48; _activatnvar_strbuf_0[1] = 109; _activatnvar_strbuf_0[1] ^= 93; _activatnvar_strbuf_0[2] = 50; _activatnvar_strbuf_0[2] ^= 1; _activatnvar_strbuf_0[3] = 113; _activatnvar_strbuf_0[3] ^= 69; _activatnvar_strbuf_0[4] = 28; _activatnvar_strbuf_0[4] ^= 126; _activatnvar_strbuf_0[5] = 122; _activatnvar_strbuf_0[5] ^= 28; _activatnvar_strbuf_0[6] = 64; _activatnvar_strbuf_0[6] ^= 38; _activatnvar_strbuf_0[7] = 105; _activatnvar_strbuf_0[7] ^= 95; _activatnvar_strbuf_0[8] = 62; _activatnvar_strbuf_0[8] ^= 19; _activatnvar_strbuf_0[9] = 71; _activatnvar_strbuf_0[9] ^= 37; _activatnvar_strbuf_0[10] = 75; _activatnvar_strbuf_0[10] ^= 124; _activatnvar_strbuf_0[11] = 125; _activatnvar_strbuf_0[11] ^= 73; _activatnvar_strbuf_0[12] = 54; _activatnvar_strbuf_0[12] ^= 6; _activatnvar_strbuf_0[13] = 17; _activatnvar_strbuf_0[13] ^= 60; _activatnvar_strbuf_0[14] = 108; _activatnvar_strbuf_0[14] ^= 92; _activatnvar_strbuf_0[15] = 71; _activatnvar_strbuf_0[15] ^= 33; _activatnvar_strbuf_0[16] = 15; _activatnvar_strbuf_0[16] ^= 109; _activatnvar_strbuf_0[17] = 63; _activatnvar_strbuf_0[17] ^= 91; _activatnvar_strbuf_0[18] = 123; _activatnvar_strbuf_0[18] ^= 86; _activatnvar_strbuf_0[19] = 98; _activatnvar_strbuf_0[19] ^= 83; _activatnvar_strbuf_0[20] = 114; _activatnvar_strbuf_0[20] ^= 17; _activatnvar_strbuf_0[21] = 38; _activatnvar_strbuf_0[21] ^= 68; _activatnvar_strbuf_0[22] = 52; _activatnvar_strbuf_0[22] ^= 82; _activatnvar_strbuf_0[23] = 82; _activatnvar_strbuf_0[23] ^= 127; _activatnvar_strbuf_0[24] = 7; _activatnvar_strbuf_0[24] ^= 51; _activatnvar_strbuf_0[25] = 4; _activatnvar_strbuf_0[25] ^= 50; _activatnvar_strbuf_0[26] = 33; _activatnvar_strbuf_0[26] ^= 20; _activatnvar_strbuf_0[27] = 45; _activatnvar_strbuf_0[27] ^= 78; _activatnvar_strbuf_0[28] = 61; _activatnvar_strbuf_0[28] ^= 13; _activatnvar_strbuf_0[29] = 91; _activatnvar_strbuf_0[29] ^= 106; _activatnvar_strbuf_0[30] = 51; _activatnvar_strbuf_0[30] ^= 87; _activatnvar_strbuf_0[31] = 75; _activatnvar_strbuf_0[31] ^= 121; _activatnvar_strbuf_0[32] = 51; _activatnvar_strbuf_0[32] ^= 2; _activatnvar_strbuf_0[33] = 52; _activatnvar_strbuf_0[33] ^= 86; _activatnvar_strbuf_0[34] = 118; _activatnvar_strbuf_0[34] ^= 18; _activatnvar_strbuf_0[35] = 78; _activatnvar_strbuf_0[35] ^= 123; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_09_func_495304719(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_LLUUID_b.mData[0x8];

}

void _activation_check_proc_09_func_752539612(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_09_func_708438880(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_8 = true;

	/* inline */ _activation_check_proc_09_func_1393255863(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
}

void _activation_check_proc_09_func_1844758713(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_09_func_1528563443(int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_1, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("e1866963-b971-81f6-e61e-9de8ae056578");

	_activation_check_proc_09_func_1844758713(_activatnvar_confusing_int_7);
	_activation_check_proc_09_func_412043571(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_09_func_1784328626(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	_activation_check_proc_09_func_920747075(_activatnvar_confusing_int_b, _activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_09_func_879775882(_activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_09_func_1209688954(_activatnvar_generic_bool_0);
}

void _activation_check_proc_09_func_412043571(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d *= 0xa;

}

void _activation_check_proc_09_func_920747075(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_b &= _activatnvar_confusing_int_1;

}

void _activation_check_proc_09_func_1206961483(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1277273212(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_1.mData[0x5];

}

void _activation_check_proc_09_func_2048294729(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_09_func_555508526(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_5[0xd] |= _activatnvar_name_digest[0x1];

}

void _activation_check_proc_09_func_639578630(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xa] += _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_09_func_542970913(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xa] == 0x9) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_6;

	/* inline */ _activation_check_proc_09_func_1878418963(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
	_activation_check_proc_09_func_886613315(_activatnvar_confusing_char_2, _activatnvar_confusing_bool_4, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_09_func_886613315(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_c)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_2 = _activatnvar_confusing_U8_c;

}

void _activation_check_proc_09_func_765304584(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_09_func_880958785(U8& _activatnvar_t0, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_a;

	/* inline */ _activation_check_proc_09_func_1441629195(_activatnvar_t0);
}

void _activation_check_proc_09_func_957394165(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_e ^= 0x5;

}

void _activation_check_proc_09_func_441757252()
{
	
}

void _activation_check_proc_09_func_786062953(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_09_func_141626770(char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_7, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

	_activation_check_proc_09_func_786062953(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_09_func_1055811390(_activatnvar_confusing_char_6);
}

void _activation_check_proc_09_func_1163026871(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_c <<= 0xe;

}

void _activation_check_proc_09_func_1760517848(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_1 <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_09_func_2024927901(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_U8_f++;

	_activation_check_proc_09_func_1760517848(_activatnvar_confusing_U8_6, _activatnvar_confusing_bool_7, _activatnvar_confusing_char_1);
}

void _activation_check_proc_09_func_460122666(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 += 0x4;

	_activation_check_proc_09_func_1375268783(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1375268783(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	
}

void _activation_check_proc_09_func_1741245060(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_3.mData[0x1] &= _activatnvar_confusing_LLUUID_4.mData[0xb];

}

void _activation_check_proc_09_func_1319948450(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_09_func_471904463(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_09_func_241646132(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_c)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_c |= _activatnvar_confusing_U8_c;

	_activation_check_proc_09_func_471904463(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_09_func_688002848()
{
	
}

void _activation_check_proc_09_func_96307115(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_09_func_1009109915(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c += _activatnvar_confusing_U8_b;

	/* inline */ _activation_check_proc_09_func_1235407360(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_09_func_916623955(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_09_func_1888985072(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("c111cbe4-75d6-adc1-b0eb-8310c3781dfd");

}

void _activation_check_proc_09_func_691576757(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x1] *= _activatnvar_confusing_LLUUID_6.mData[0x0];

	/* inline */ _activation_check_proc_09_func_456396866(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_4);
	/* inline */ _activation_check_proc_09_func_714195895(_activatnvar_confusing_bool_d, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_09_func_1176081540(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_09_func_1629076443(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_09_func_855491702(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_09_func_639046291(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_09_func_941527903(int& _activatnvar_confusing_int_5, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_09_func_639046291(_activatnvar_confusing_int_5);
}

void _activation_check_proc_09_func_2063722269(int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_7 = 0x6;

	/* inline */ _activation_check_proc_09_func_2122842934(_activatnvar_confusing_int_5);
}

void _activation_check_proc_09_func_1171499580(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_09_func_1399724124(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_doaccount;

}

void _activation_check_proc_09_func_1487215235(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] += _activatnvar_confusing_LLUUID_0.mData[0xe];

	/* inline */ _activation_check_proc_09_func_1173082874(_activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_09_func_1644823334(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_09_func_217520333(_activatnvar_confusing_chararray_1, _activatnvar_confusing_char_8);
}

void _activation_check_proc_09_func_1977871436(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_09_func_1217567068(_activatnvar_section2, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_09_func_1217567068(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] += _activatnvar_section2.mData[0x6];

}

void _activation_check_proc_09_func_1216647496(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_09_func_1758795563(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_09_func_219496800(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("e19a73a1-8bfb-ec65-f038-52f17eb233c2");

	_activation_check_proc_09_func_1758795563(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_09_func_236741430(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a |= 0x8;

}

void _activation_check_proc_09_func_396740307(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_236711674(LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_int_6++;

	_activation_check_proc_09_func_396740307(_activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked);
	_activation_check_proc_09_func_236741430(_activatnvar_confusing_int_a);
}

void _activation_check_proc_09_func_669060627()
{
	
}

void _activation_check_proc_09_func_1575490218(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_c, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_09_func_429229161(_activatnvar_confusing_char_5, _activatnvar_confusing_U8_c, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_09_func_429229161(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_5 |= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_09_func_589014486(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xb] = _activatnvar_confusing_LLUUID_b.mData[0xd];

}

void _activation_check_proc_09_func_828163256(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_6.mData[0x9];

}

void _activation_check_proc_09_func_1685827565(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_so;

}

void _activation_check_proc_09_func_903522187(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_8 &= 0xff;

	_activatnvar_confusing_chararray_3[0x9] >>= _activatnvar_ser_digest[0xf];

}

void _activation_check_proc_09_func_1820801284(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_a;

	/* inline */ _activation_check_proc_09_func_358462087(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_09_func_1398013149(_activatnvar_pos);
}

void _activation_check_proc_09_func_1398013149(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_09_func_1326091543(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 += 0x0;

}

void _activation_check_proc_09_func_152824746(int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f)
{
	
	/* inline */ _activation_check_proc_09_func_27538618(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_7);
	_activation_check_proc_09_func_1054431419(_activatnvar_confusing_U8_7);
	_activation_check_proc_09_func_1326091543(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_09_func_1670286222(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_09_func_1054431419(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 <<= 0x2;

}

void _activation_check_proc_09_func_794314338(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_12843509(char* _activatnvar_strbuf_0, U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_d;

	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_5.mData[0x2];

	/* inline */ _activation_check_proc_09_func_547028701(_activatnvar_section1, _activatnvar_strbuf_0);
	_activation_check_proc_09_func_912529194(_activatnvar_generic_bool_0, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_U8_7, _activatnvar_confusing_bool_3);
	_activation_check_proc_09_func_417065663(_activatnvar_confusing_char_1, _activatnvar_confusing_U8_d, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_09_func_912529194(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x5] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_3 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_09_func_417065663(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_d = _activatnvar_confusing_char_1;

}

void _activation_check_proc_09_func_447086276(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d <<= _activatnvar_confusing_char_6;

}

void _activation_check_proc_09_func_1057839239(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1873403321(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_09_func_1290837096(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_d, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_6, bool& _activatnvar_doaccount)
{
	
	_activation_check_proc_09_func_447086276(_activatnvar_confusing_char_6, _activatnvar_confusing_U8_d);
	_activation_check_proc_09_func_1057839239(_activatnvar_generic_iterator);
	_activation_check_proc_09_func_1873403321(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_09_func_911692407(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_09_func_149435660(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_902613288(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x4] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_09_func_660850124(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_09_func_2080258067(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("b7a316e7-c75b-498d-0f1a-c245ab437c15");

	_activation_check_proc_09_func_660850124(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_09_func_149668240(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("e32d051e-1c0a-d384-4711-ebaee0c1b665");

}

void _activation_check_proc_09_func_1318890169(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_09_func_487948915(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x2] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_09_func_1641937620(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_999718254(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	
	/* inline */ _activation_check_proc_09_func_43325655(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_09_func_1969612025(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_09_func_2068702263(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_09_func_836779879(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_09_func_1065184858(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_09_func_1351293700(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_09_func_1722241562(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x2] <<= _activatnvar_mac_digest[0xf];

}

void _activation_check_proc_09_func_2125534029(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_09_func_2136112712(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_6[0x5];

	/* inline */ _activation_check_proc_09_func_206574758(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_7);
}

void _activation_check_proc_09_func_342887416(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_09_func_1149274936(_activatnvar_feat, _activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_09_func_1248810562(char& _activatnvar_confusing_char_7, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_7 += _activatnvar_t0;

}

void _activation_check_proc_09_func_523993431(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] >>= _activatnvar_confusing_LLUUID_a.mData[0xd];

	_activation_check_proc_09_func_1248810562(_activatnvar_confusing_char_7, _activatnvar_t0);
}

void _activation_check_proc_09_func_1534651589(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_chararray_1[0x4];

	_activation_check_proc_09_func_1913000772(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1913000772(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1280561212(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_09_func_1338889979(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_4.mData[0x4];

}

void _activation_check_proc_09_func_1282811578(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

	_activation_check_proc_09_func_1338889979(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_char_a);
}

void _activation_check_proc_09_func_980591536(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1612360093(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1891201030(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_1612360093(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_09_func_980591536(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1151736860(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] = _activatnvar_confusing_chararray_9[0x5];

}

void _activation_check_proc_09_func_77107902(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_09_func_1747865299(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 += 0x8;

}

void _activation_check_proc_09_func_2017250224(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x6] != _activatnvar_confusing_char_2) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_09_func_1076074090(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_1475574417(_activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_09_func_1910213438(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_09_func_1475574417(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_LLUUID_f.mData[0xe];

}

void _activation_check_proc_09_func_1910213438(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x6] == 0xd) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_09_func_2053035226(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xe;

}

void _activation_check_proc_09_func_1595195684(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_a[0x2] <<= _activatnvar_mac_digest[0xd];

}

void _activation_check_proc_09_func_602974184(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_chararray_3[0x3] >>= _activatnvar_confusing_chararray_3[0x2];

	/* inline */ _activation_check_proc_09_func_1229657931(_activatnvar_confusing_int_b);
}

void _activation_check_proc_09_func_445426249(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_09_func_2012004312(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_09_func_1480272776(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_09_func_1155681692(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_09_func_1742462552(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_09_func_926126300(_activatnvar_confusing_int_5);
}

void _activation_check_proc_09_func_926126300(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 ^= 0x6;

}

void _activation_check_proc_09_func_902448351(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_09_func_980023458(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_09_func_1359607928(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_09_func_1352985377(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_09_func_190909019(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_09_func_761770832(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_e |= _activatnvar_confusing_char_4;

}

void _activation_check_proc_09_func_1891506641(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_4)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_09_func_761770832(_activatnvar_confusing_char_4, _activatnvar_confusing_U8_e, _activatnvar_confusing_bool_7);
	_activation_check_proc_09_func_190909019(_activatnvar_confusing_int_b);
}

void _activation_check_proc_09_func_1812528624(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_9, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_2 += _activatnvar_confusing_char_0;

	_activation_check_proc_09_func_497420732(_activatnvar_confusing_int_9);
}

void _activation_check_proc_09_func_497420732(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_09_func_1705988818(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x4] += _activatnvar_confusing_LLUUID_a.mData[0x0];

}

void _activation_check_proc_09_func_1624151713(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_LLUUID_8.mData[0x4] ^= _activatnvar_confusing_chararray_6[0xc];

	_activatnvar_confusing_int_5 &= 0xff;

	/* inline */ _activation_check_proc_09_func_1054479782(_activatnvar_t0);
	_activation_check_proc_09_func_1163467040();
}

void _activation_check_proc_09_func_1163467040()
{
	
}

void _activation_check_proc_09_func_1766438445(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_8 >>= _activatnvar_confusing_int_2;

}

void _activation_check_proc_09_func_36418884(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("346c863b-b5f0-88ce-47e5-d7bfe13a64ed");

}

void _activation_check_proc_09_func_2136252883(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_code;

	_activation_check_proc_09_func_924873257(_activatnvar_confusing_int_0);
}

void _activation_check_proc_09_func_924873257(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_09_func_157091810(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1280538861(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_09_func_643882234(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_LLUUID_3.mData[0x0] += _activatnvar_confusing_LLUUID_e.mData[0x7];

	_activation_check_proc_09_func_1280538861(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_8);
	_activation_check_proc_09_func_1435079254(_activatnvar_confusing_char_2, _activatnvar_confusing_chararray_7);
	_activation_check_proc_09_func_499582972();
}

void _activation_check_proc_09_func_499582972()
{
	
}

void _activation_check_proc_09_func_1435079254(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_09_func_1830105900(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_09_func_1010600407(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_09_func_1543980720(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f = 0x2;

}

void _activation_check_proc_09_func_1023714223(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_09_func_812498757(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_09_func_1258517118(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_2120788618(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_1258517118(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1300451450(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1592587528(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1714207150(U8& _activatnvar_confusing_U8_4, char& _activatnvar_feat)
{
	_activatnvar_confusing_U8_4 >>= _activatnvar_feat;

}

void _activation_check_proc_09_func_1015807326(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_09_func_1667778841(unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	
	_activation_check_proc_09_func_156577410(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_09_func_898246913(_activatnvar_confusing_U8_5);
	/* inline */ _activation_check_proc_09_func_88935755(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_09_func_156577410(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1340876722(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x3] *= _activatnvar_confusing_chararray_7[0xe];

}

void _activation_check_proc_09_func_2132453428(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] = _activatnvar_confusing_LLUUID_b.mData[0xe];

}

void _activation_check_proc_09_func_1139745804(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c += _activatnvar_confusing_char_5;

}

void _activation_check_proc_09_func_45495222(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("e467dc27-c716-37c5-0568-76ade9cee5fe");

}

void _activation_check_proc_09_func_1981822016(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_fscked;

}

void _activation_check_proc_09_func_698278503(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f >>= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_09_func_2012472161(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_a.mData[0x2] += _activatnvar_mac_digest[0x0];

}

void _activation_check_proc_09_func_849645703(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xa] <<= _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_09_func_1379338688(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xe] = _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_09_func_786177910(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 |= _activatnvar_confusing_int_e;

	_activation_check_proc_09_func_1379338688(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_09_func_2113589493(bool& _activatnvar_confusing_bool_e, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_int_b = _activatnvar_confusing_int_a;

	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_6 <<= _activatnvar_confusing_char_a;

}

void _activation_check_proc_09_func_680321887(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_09_func_300317649(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_2034047369(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] = _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_09_func_163167116(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_09_func_1222403679()
{
	
}

void _activation_check_proc_09_func_34541902(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_09_func_1231253726(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_a, _activatnvar_confusing_bool_9);
	_activation_check_proc_09_func_1222403679();
	_activation_check_proc_09_func_163167116(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_09_func_1231253726(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_4 = _activatnvar_confusing_char_a;

}

void _activation_check_proc_09_func_1504695195(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_09_func_104815548(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_t0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] &= _activatnvar_confusing_chararray_f[0xa];

	_activation_check_proc_09_func_1504695195(_activatnvar_pos, _activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_09_func_978409034(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1393295568(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_1;

	_activation_check_proc_09_func_978409034(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_09_func_1582178732(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("a99d2fdc-82b0-c852-205d-fb7d27834a0a");

}

void _activation_check_proc_09_func_1937933007(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_generic_iterator++;
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] == 0xc) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_09_func_1582178732(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_09_func_1434819776(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_secret;

}

void _activation_check_proc_09_func_446294759(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_LLUUID_5.mData[0xe];

}

void _activation_check_proc_09_func_7833491(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_f >>= _activatnvar_confusing_chararray_6[0xe];

	_activation_check_proc_09_func_1230473141(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_09_func_1230473141(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_a[0xc] *= _activatnvar_confusing_chararray_2[0x0];

}

void _activation_check_proc_09_func_275601399()
{
	
}

void _activation_check_proc_09_func_1706707083(int& _activatnvar_confusing_int_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_6 &= _activatnvar_generic_iterator;

}

void _activation_check_proc_09_func_1505275624(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_6, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_1 >>= 0xa;

	/* inline */ _activation_check_proc_09_func_1794437227(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_09_func_1706707083(_activatnvar_confusing_int_6, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1800964054(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_978890375(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xa] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_09_func_2089938760(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_09_func_224055112(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_09_func_790848727(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
	_activation_check_proc_09_func_1758510640(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_09_func_1758510640(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x7] |= _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_09_func_528823052(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x0] ^= _activatnvar_confusing_LLUUID_1.mData[0x4];

}

void _activation_check_proc_09_func_1102936824(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_09_func_80077781(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activation_check_proc_09_func_1102936824(_activatnvar_confusing_int_a);
}

void _activation_check_proc_09_func_2057249363(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_09_func_805452965(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_09_func_83555093(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_LLUUID_2.mData[0x6];

	/* inline */ _activation_check_proc_09_func_1432873972(_activatnvar_lace, _activatnvar_section2, _activatnvar_confusing_LLUUID_0, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1179745354(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_6.mData[0x6] *= _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_09_func_1926206052(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_09_func_1143874490(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_120808692(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	/* inline */ _activation_check_proc_09_func_1933532972(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_09_func_906764869(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

	/* inline */ _activation_check_proc_09_func_1509349938(_activatnvar_confusing_U8_0, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_09_func_687619764(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_09_func_1154074640(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_5[0x1] >>= _activatnvar_confusing_LLUUID_7.mData[0xc];

}

void _activation_check_proc_09_func_667554966(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_09_func_1684765577(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_secret;

	_activation_check_proc_09_func_353844604(_activatnvar_confusing_U8_2, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_09_func_353844604(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_09_func_1412511266(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_09_func_906953900(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xa] &= _activatnvar_secret.mData[0x9];

}

void _activation_check_proc_09_func_1074071698(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_09_func_378585618(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_chararray_0[0x6];

}

void _activation_check_proc_09_func_724820724(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_2 |= 0x6;

}

void _activation_check_proc_09_func_1351940963(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_9[0x0] *= _activatnvar_confusing_LLUUID_7.mData[0xf];

	_activation_check_proc_09_func_1113861247(_activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_09_func_1812982584(_activatnvar_confusing_U8_f, _activatnvar_section2);
}

void _activation_check_proc_09_func_1113861247(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("64c522a6-e091-b233-abac-aab697fb9464");

}

void _activation_check_proc_09_func_1799950348(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_09_func_1214928181(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_09_func_1978149071(LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_09_func_1026865463(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_3 |= 0xc;

	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_3 = false;

	/* inline */ _activation_check_proc_09_func_2012575038(_activatnvar_confusing_LLUUID_d, _activatnvar_fscked);
}

void _activation_check_proc_09_func_1484472126(LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_1++;

	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_1339061033(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_09_func_1339061033(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] &= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_09_func_987600503(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_09_func_281630398(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_09_func_104303477(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_09_func_1519453812(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
	/* inline */ _activation_check_proc_09_func_1598045079(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_d, _activatnvar_confusing_bool_4);
	_activation_check_proc_09_func_2004927771(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_09_func_1064424013(_activatnvar_t0, _activatnvar_so);
	/* inline */ _activation_check_proc_09_func_947972772(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_09_func_1064424013(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_09_func_2004927771(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_5.mData[0x8] *= _activatnvar_confusing_LLUUID_d.mData[0xc];

}

void _activation_check_proc_09_func_705825461(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_613073935(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_09_func_366008666(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = 0xd;

}

void _activation_check_proc_09_func_1337787421(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_09_func_1381270133(char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_char_6++;

	/* inline */ _activation_check_proc_09_func_196314057(_activatnvar_confusing_int_d);
}

void _activation_check_proc_09_func_1015070185(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_e[0x4] = _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_09_func_1177960202(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_09_func_988597045(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_1 += _activatnvar_confusing_int_0;

}

void _activation_check_proc_09_func_1758041368(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_1.mData[0x7] >>= _activatnvar_confusing_LLUUID_d.mData[0x5];

}

void _activation_check_proc_09_func_1310932244(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_f[0x5] += _activatnvar_ser_digest[0x8];

}

void _activation_check_proc_09_func_1921559922(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_09_func_991845805(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_09_func_1415161405(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_09_func_1395110772(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_3, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x0] != _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_3 = true;

	_activatnvar_generic_iterator++;
	_activation_check_proc_09_func_1415161405(_activatnvar_confusing_U8_4);
}

void _activation_check_proc_09_func_120403813(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_3 = false;

	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_09_func_1199758495(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] <<= _activatnvar_confusing_chararray_9[0xb];

}

void _activation_check_proc_09_func_1447020069(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("11ac863c-07aa-8ac4-0035-ee9c698fb892");

}

void _activation_check_proc_09_func_1474157715(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x4] != _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_b = true;

	
	_activation_check_proc_09_func_1447020069(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_09_func_838639961(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_code;

	/* inline */ _activation_check_proc_09_func_1818691216(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_09_func_1701845051(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_09_func_1400832589();
}

void _activation_check_proc_09_func_1974257023(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("131ec85b-6d3d-31ab-1ec7-5f9bd1fdcba7");

}

void _activation_check_proc_09_func_82399809(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_2 = _activatnvar_lace.mData[0x8];

	/* inline */ _activation_check_proc_09_func_183474653(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_09_func_53555895(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_2128602655(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1047082899(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_secret;

}

void _activation_check_proc_09_func_1660307937(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_09_func_1208051072(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_09_func_1208051072(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_8[0x8] >>= _activatnvar_confusing_LLUUID_2.mData[0x4];

}

void _activation_check_proc_09_func_1305518521(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xd] *= _activatnvar_confusing_LLUUID_4.mData[0x6];

}

void _activation_check_proc_09_func_533552786(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_09_func_1577924804(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_09_func_362791937(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_lace.mData[0x4];

}

void _activation_check_proc_09_func_1242762505(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_b += _activatnvar_confusing_chararray_d[0x6];

	_activation_check_proc_09_func_1280940181(_activatnvar_confusing_char_1, _activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_09_func_1280940181(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xa] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_09_func_1085945822(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_09_func_607188033(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_f)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xd] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_09_func_451242303(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_8[0x0];

}

void _activation_check_proc_09_func_1037088470(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_f = _activatnvar_section1.mData[0xb];

	_activatnvar_confusing_LLUUID_d.mData[0x7] &= _activatnvar_lace.mData[0x5];

}

void _activation_check_proc_09_func_2135251997(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_09_func_728240233(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_09_func_630330698(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xa] |= _activatnvar_confusing_chararray_4[0x5];

}

void _activation_check_proc_09_func_159424203(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_09_func_725054609(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_09_func_576152284(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("9422b1ed-e682-750f-265e-395d34d787b3");

}

void _activation_check_proc_09_func_2108342529(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_09_func_1947231709(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_09_func_1510002555(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x1] |= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_09_func_380982732(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_d >>= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_09_func_476052392(char& _activatnvar_feat, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_09_func_985549418(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] == 0xa) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_09_func_1746261246(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 |= 0xa;

}

void _activation_check_proc_09_func_671398979(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_U8_1;

}

void _activation_check_proc_09_func_1833956309(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_6.mData[0xe] &= _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_09_func_781516690(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_188819799(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_c)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xf] != _activatnvar_confusing_char_c) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_09_func_1158686423(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_679785079(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_c[0xc] *= _activatnvar_confusing_chararray_a[0xa];

	_activation_check_proc_09_func_188819799(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_d, _activatnvar_confusing_char_c);
	_activation_check_proc_09_func_1158686423(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_74034027(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_0[0x6] >>= _activatnvar_confusing_LLUUID_7.mData[0x6];

	/* inline */ _activation_check_proc_09_func_1400988094(_activatnvar_section2, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_09_func_120690779(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1009572365(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1365625512(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_09_func_793395744(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_09_func_24377644(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_09_func_104540589(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xc] ^= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_09_func_1734620348()
{
	
}

void _activation_check_proc_09_func_1013001765(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_914260380(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_329740757(char& _activatnvar_feat, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_09_func_312689458(_activatnvar_confusing_U8_0);
}

void _activation_check_proc_09_func_1765968631(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_09_func_1297598500(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_4 = _activatnvar_combined_id.mData[0x0];

	/* inline */ _activation_check_proc_09_func_664058415(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_09_func_1158196779(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_chararray_3[0xe];

}

void _activation_check_proc_09_func_831341756(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("ba623843-635b-d74e-0598-90e0cf0e9dd7");

	/* inline */ _activation_check_proc_09_func_1034386051(_activatnvar_confusing_bool_d, _activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_09_func_865428409(_activatnvar_confusing_U8_f, _activatnvar_confusing_char_9);
	_activation_check_proc_09_func_1668568249();
}

void _activation_check_proc_09_func_1668568249()
{
	
}

void _activation_check_proc_09_func_733431856(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_990729844(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1268526195(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] += _activatnvar_confusing_chararray_3[0x7];

	_activation_check_proc_09_func_299530769(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_09_func_1953294257(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_09_func_733431856(_activatnvar_generic_iterator);
	_activation_check_proc_09_func_1295335273(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
	_activation_check_proc_09_func_990729844(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_09_func_619969361(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_09_func_299530769(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x0] >>= _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_09_func_1295335273(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1704374921(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_09_func_195078553(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("0fe93d11-f394-46cd-7cf0-b5171e0bd130");

}

void _activation_check_proc_09_func_1637929088(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_510978053(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_09_func_1510427674(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_09_func_467750202(int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_5)
{
	
	/* inline */ _activation_check_proc_09_func_979173689(_activatnvar_confusing_bool_6);
	/* inline */ _activation_check_proc_09_func_1849427374(_activatnvar_confusing_U8_5);
	_activation_check_proc_09_func_1510427674(_activatnvar_t0, _activatnvar_pos, _activatnvar_so);
	_activation_check_proc_09_func_186232250(_activatnvar_confusing_int_8);
}

void _activation_check_proc_09_func_186232250(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_09_func_1388747191(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("f3335451-0036-9b9b-2bf0-cb8524afba21");

}

void _activation_check_proc_09_func_1402076931(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_0++;

	_activation_check_proc_09_func_983456180(_activatnvar_confusing_char_6);
}

void _activation_check_proc_09_func_983456180(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_09_func_1230616961(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_09_func_1555401576(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

	/* inline */ _activation_check_proc_09_func_871994323(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_09_func_1805112150(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_09_func_1896384472(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_09_func_1896384472(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_09_func_198743010(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_d;

	/* inline */ _activation_check_proc_09_func_343210408(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_09_func_164108406(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_09_func_46022402(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_9)
{
	
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_164108406(_activatnvar_confusing_chararray_e, _activatnvar_confusing_char_9);
}

void _activation_check_proc_09_func_1322337242(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_0.mData[0x0] ^= _activatnvar_confusing_chararray_b[0x6];

}

void _activation_check_proc_09_func_247513606(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xf] = _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_09_func_1212335736()
{
	
}

void _activation_check_proc_09_func_609725658(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

	_activation_check_proc_09_func_1212335736();
}

void _activation_check_proc_09_func_1322353530(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_09_func_285867529(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_6 &= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_09_func_1979957135(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x5] != 0x7) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_09_func_1663579081(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_09_func_1530524575(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_09_func_1530524575(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_a[0x6] = _activatnvar_confusing_chararray_e[0x6];

}

void _activation_check_proc_09_func_452282436(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x6] != 0xd) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_09_func_618678647(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x7] ^= _activatnvar_fscked.mData[0xb];

	_activation_check_proc_09_func_452282436(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_09_func_1928193190(_activatnvar_confusing_int_a);
}

void _activation_check_proc_09_func_168120106(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_a *= _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_09_func_900737386(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x7] += _activatnvar_confusing_LLUUID_8.mData[0xb];

}

void _activation_check_proc_09_func_1722101534(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_09_func_167625821(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_09_func_935262730(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_09_func_371903855(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1280208734(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_0 += _activatnvar_confusing_char_2;

	/* inline */ _activation_check_proc_09_func_267815463(_activatnvar_confusing_LLUUID_2, _activatnvar_section2);
}

void _activation_check_proc_09_func_1951814443(char& _activatnvar_confusing_char_7, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_U8_f = _activatnvar_confusing_char_7;

}

void _activation_check_proc_09_func_1530134853(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_09_func_1224606740(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_09_func_577995666(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_09_func_260238232(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_09_func_665565499(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x7] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_09_func_2133346376(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_09_func_1875400962(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_LLUUID_2.mData[0xd] *= _activatnvar_lace.mData[0xc];

	_activatnvar_confusing_chararray_f[0xd] = _activatnvar_confusing_LLUUID_9.mData[0x7];

	_activation_check_proc_09_func_2133346376(_activatnvar_confusing_int_6);
}

void _activation_check_proc_09_func_134027918(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_09_func_1313048950(int& _activatnvar_confusing_int_1, bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_a, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_a &= _activatnvar_confusing_int_1;

	/* inline */ _activation_check_proc_09_func_114797941(_activatnvar_doaccount, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_09_func_1004633500();
}

void _activation_check_proc_09_func_1004633500()
{
	
}

void _activation_check_proc_09_func_939315797(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("9fd8bce6-42c4-f2b5-1c07-14196e803afd");

}

void _activation_check_proc_09_func_1550165017(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1051100386(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("c7bf5c86-abcf-f663-43df-30677cd6a95f");

}

void _activation_check_proc_09_func_996335207(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("73ed3526-40b2-1c7b-dd84-261a4af27d10");

}

void _activation_check_proc_09_func_1449751740(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_pos)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_c >>= _activatnvar_pos;

}

void _activation_check_proc_09_func_716970482(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_67750394(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_09_func_1223209431(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_09_func_1223209431(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_67750394(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_09_func_1706628083(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_09_func_89318332(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] ^= _activatnvar_ser_digest[0xb];

	_activation_check_proc_09_func_1595761260(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_09_func_301452670(_activatnvar_confusing_char_a, _activatnvar_confusing_char_c);
	/* inline */ _activation_check_proc_09_func_496766209(_activatnvar_confusing_chararray_3, _activatnvar_confusing_char_b);
	_activation_check_proc_09_func_1777740600(_activatnvar_mac_digest, _activatnvar_confusing_chararray_7);
	_activation_check_proc_09_func_345665098(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_09_func_345665098(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("3d563a14-43d2-a8db-3702-ab750310f695");

}

void _activation_check_proc_09_func_301452670(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_char_c;

}

void _activation_check_proc_09_func_1777740600(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x1] <<= _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_09_func_1595761260(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_09_func_1955023411(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_LLUUID_5.mData[0x6] *= _activatnvar_lace.mData[0x0];

	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_e <<= _activatnvar_confusing_char_2;

	/* inline */ _activation_check_proc_09_func_1929978289(_activatnvar_confusing_bool_d, _activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_09_func_1218690821(_activatnvar_confusing_bool_2, _activatnvar_confusing_char_9, _activatnvar_confusing_char_3);
}

void _activation_check_proc_09_func_738524619(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_5.mData[0xf] <<= _activatnvar_mac_digest[0x7];

	/* inline */ _activation_check_proc_09_func_560452263(_activatnvar_confusing_int_a);
}

void _activation_check_proc_09_func_1753781471(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_t0, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_U8_9;

	_activation_check_proc_09_func_1858712074(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_09_func_1858712074(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_09_func_340840442(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1599381920(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_09_func_794316046(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1007161851(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activation_check_proc_09_func_794316046(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_72223763(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_U8_e++;

	_activation_check_proc_09_func_1053828863(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_09_func_1053828863(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_0 = 0x7;

}

void _activation_check_proc_09_func_73598578(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_09_func_1491259783(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_897904703(LLMD5*& _activatnvar_mmd5, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
}

void _activation_check_proc_09_func_1481661200(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x6] == _activatnvar_confusing_char_0) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_09_func_1635499536(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] >>= _activatnvar_confusing_LLUUID_b.mData[0xc];

	/* inline */ _activation_check_proc_09_func_64342715(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_09_func_183626657(_activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_09_func_1870682794(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_09_func_56931326(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x1] |= _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_09_func_1460728865(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_701747683(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b ^= 0x8;

}

void _activation_check_proc_09_func_342090682(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_09_func_2006345322(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_4 = 0x8;

}

void _activation_check_proc_09_func_799168852(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("d1e3f62b-77bd-06a4-bd13-7c7d6811a490");

	/* inline */ _activation_check_proc_09_func_450601857(_activatnvar_confusing_bool_5, _activatnvar_doaccount, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_09_func_1332690804(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("52c86b91-a0e4-e8c0-eb2a-12116ff72583");

}

void _activation_check_proc_09_func_1722340246(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1967123501(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e = _activatnvar_section2.mData[0xe];

}

void _activation_check_proc_09_func_1444639900(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_09_func_4549952(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_chararray_b[0x6];

	_activation_check_proc_09_func_1170069218(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_09_func_1380328711(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_b);
	_activation_check_proc_09_func_61007598(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_f);
	/* inline */ _activation_check_proc_09_func_62552208(_activatnvar_confusing_int_0);
	_activation_check_proc_09_func_1090876708(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_09_func_1090876708(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x8] &= _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_09_func_1170069218(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_09_func_61007598(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_09_func_1970065700(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 >>= _activatnvar_confusing_int_9;

}

void _activation_check_proc_09_func_1987772443(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_0)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x6] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_3;

	_activation_check_proc_09_func_1970065700(_activatnvar_confusing_int_9, _activatnvar_confusing_int_0);
	_activation_check_proc_09_func_1449232956();
}

void _activation_check_proc_09_func_1449232956()
{
	
}

void _activation_check_proc_09_func_620153251(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_09_func_203660611(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_3[0x0] <<= _activatnvar_confusing_LLUUID_9.mData[0x9];

}

void _activation_check_proc_09_func_1694320540(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_09_func_1046806079(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_09_func_1102167632(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_09_func_1594727549(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_09_func_1416627611(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_09_func_2122913889(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_a *= _activatnvar_confusing_U8_9;

	/* inline */ _activation_check_proc_09_func_2038550098(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_09_func_112165921(char& _activatnvar_confusing_char_3, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_3 += _activatnvar_pos;

}

void _activation_check_proc_09_func_1133670359(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_3 *= 0xc;

}

void _activation_check_proc_09_func_1739243095(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_2 <<= _activatnvar_t0;

	_activation_check_proc_09_func_1133670359(_activatnvar_confusing_U8_3, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_09_func_517831067(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 += _activatnvar_confusing_char_6;

}

void _activation_check_proc_09_func_1141602176(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_c[0x7] &= _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_09_func_1408910866(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_chararray_8[0xd];

}

void _activation_check_proc_09_func_889853396(U8& _activatnvar_t1, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
	/* inline */ _activation_check_proc_09_func_322780681(_activatnvar_confusing_chararray_a, _activatnvar_confusing_U8_c);
	_activation_check_proc_09_func_621872684(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_09_func_621872684(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_8.mData[0xf] <<= _activatnvar_confusing_chararray_3[0x9];

}

void _activation_check_proc_09_func_890763956(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xc] = _activatnvar_confusing_chararray_c[0x2];

}

void _activation_check_proc_09_func_1295861062(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_09_func_938502564(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_938502564(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_21666552(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_0 |= _activatnvar_confusing_int_1;

	_activation_check_proc_09_func_1422356542(_activatnvar_confusing_char_5, _activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_09_func_1422356542(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xe] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_09_func_460135724(bool& _activatnvar_confusing_bool_3, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_3;

	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_09_func_928968510(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_390449103(U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_U8_6 += _activatnvar_confusing_char_5;

}

void _activation_check_proc_09_func_1721717919(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_333305994(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_2 *= _activatnvar_confusing_char_c;

}

void _activation_check_proc_09_func_692994699(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_09_func_1256935514(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_7 >>= _activatnvar_pos;

}

void _activation_check_proc_09_func_311412746(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xf] != 0xf) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_09_func_213193578(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("b91ed2d3-cb9b-79ef-3213-8ce54a13bca2");

}

void _activation_check_proc_09_func_894483051(unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xa] >>= _activatnvar_confusing_chararray_1[0x9];

	/* inline */ _activation_check_proc_09_func_1988941749(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_09_func_287211903(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_09_func_582118277(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_char_6;

}

void _activation_check_proc_09_func_83491626()
{
	
}

void _activation_check_proc_09_func_369199010(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_09_func_1264750325(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_e = _activatnvar_section2.mData[0x5];

}

void _activation_check_proc_09_func_141007380(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_09_func_1570123418(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_c, DWORD& _activatnvar_serial, LLMD5& _activatnvar_smd5, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_09_func_1115682658(_activatnvar_smd5, _activatnvar_serial);
	_activation_check_proc_09_func_715253916(_activatnvar_smd5);
	_activation_check_proc_09_func_1264750325(_activatnvar_confusing_char_e, _activatnvar_section2);
	_activation_check_proc_09_func_141007380(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_09_func_1115682658(LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
}

void _activation_check_proc_09_func_715253916(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_09_func_352219447(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xb] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_a = true;

	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_09_func_1375837709(U8& _activatnvar_pos, LLUUID& _activatnvar_secret, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_09_func_530824361(_activatnvar_t0);
	_activation_check_proc_09_func_1850949946(_activatnvar_confusing_char_d, _activatnvar_secret, _activatnvar_confusing_chararray_c);
	_activation_check_proc_09_func_352219447(_activatnvar_pos, _activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_6, _activatnvar_t0, _activatnvar_so, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_09_func_530824361(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_09_func_1850949946(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xe] &= _activatnvar_confusing_chararray_c[0xd];

	_activatnvar_confusing_char_d &= _activatnvar_secret.mData[0xf];

}

void _activation_check_proc_09_func_1597514675(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_259802530(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_09_func_1058637716(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_09_func_699602293(char& _activatnvar_confusing_char_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_09_func_1018254919(_activatnvar_confusing_char_b);
}

void _activation_check_proc_09_func_1432576186(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_chararray_6[0x3];

	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_09_func_1017264270(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_1.mData[0x0];

	_activation_check_proc_09_func_1432576186(_activatnvar_feat, _activatnvar_generic_bool_1, _activatnvar_confusing_U8_4, _activatnvar_lace, _activatnvar_confusing_chararray_6, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1300761956(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xd] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_d = false;

	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

	/* inline */ _activation_check_proc_09_func_682116070(_activatnvar_confusing_bool_1, _activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_09_func_117898785(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_fscked.mData[0x9];

}

void _activation_check_proc_09_func_497912825(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_6 &= _activatnvar_confusing_int_3;

}

void _activation_check_proc_09_func_1870105623(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_09_func_1440413453(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_09_func_2037002897(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1813111642(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_890420827(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_t1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x0] == _activatnvar_t1) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_09_func_421633155(U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("2cb03893-b98f-c844-3aea-f5e00a84f795");

	_activation_check_proc_09_func_890420827(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_6, _activatnvar_t1);
	/* inline */ _activation_check_proc_09_func_974877102(_activatnvar_confusing_bool_9, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_09_func_834878374(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("677b7753-5a96-5404-387a-6a6487edbfbc");

}

void _activation_check_proc_09_func_1254837659(bool& _activatnvar_confusing_bool_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	/* inline */ _activation_check_proc_09_func_1664431057(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_09_func_1921775879(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_09_func_22018066(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_int_d++;

	_activation_check_proc_09_func_381541397(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_09_func_1902665671(_activatnvar_confusing_LLUUID_a, _activatnvar_combined_id);
}

void _activation_check_proc_09_func_381541397(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x4] += _activatnvar_confusing_LLUUID_0.mData[0x9];

}

void _activation_check_proc_09_func_1902665671(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_combined_id;

}

void _activation_check_proc_09_func_949921242(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 *= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_09_func_1490813403(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_09_func_1269128462(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_09_func_1232875361(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1232875361(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_517697786(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_581922812(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_09_func_137977712(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_c.mData[0xa] &= _activatnvar_confusing_chararray_5[0x1];

}

void _activation_check_proc_09_func_1199256592(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_3, char* _activatnvar_strbuf_0)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("a4ec6e88-9393-d508-0f80-2fc23ce71b2b");

	_activation_check_proc_09_func_137977712(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_09_func_2141515204(_activatnvar_code, _activatnvar_strbuf_0);
}

void _activation_check_proc_09_func_132034948(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 |= _activatnvar_confusing_int_7;

}

void _activation_check_proc_09_func_604779309(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_09_func_2128723490(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_09_func_1785220725(unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_LLUUID_9.mData[0xa] += _activatnvar_code.mData[0x9];

	_activation_check_proc_09_func_984565198(_activatnvar_confusing_int_3);
	_activation_check_proc_09_func_604779309(_activatnvar_confusing_char_c);
	_activation_check_proc_09_func_950342832(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_7);
	_activation_check_proc_09_func_2128723490(_activatnvar_confusing_int_4);
}

void _activation_check_proc_09_func_950342832(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] = _activatnvar_confusing_chararray_7[0x2];

}

void _activation_check_proc_09_func_984565198(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_09_func_1029894313(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_6 ^= 0x4;

}

void _activation_check_proc_09_func_1709307840(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_09_func_614582582(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x7] <<= _activatnvar_confusing_LLUUID_4.mData[0x8];

}

void _activation_check_proc_09_func_1354536831(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x5] == _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_9 = false;

	_activation_check_proc_09_func_614582582(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_09_func_2112548231(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_e |= 0x3;

	/* inline */ _activation_check_proc_09_func_710968238(_activatnvar_so, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_09_func_392609994(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("82e4593a-e1f1-8d08-331f-745027c7aeed");

}

void _activation_check_proc_09_func_1252331959(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_09_func_613458365(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_09_func_1493453373(_activatnvar_t0);
}

void _activation_check_proc_09_func_613458365(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_1.mData[0x2] >>= _activatnvar_confusing_LLUUID_4.mData[0xc];

}

void _activation_check_proc_09_func_1493453373(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_09_func_1843819102()
{
	
}

void _activation_check_proc_09_func_729699812(LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] ^= _activatnvar_section1.mData[0x6];

	/* inline */ _activation_check_proc_09_func_2125368540(_activatnvar_confusing_int_b);
}

void _activation_check_proc_09_func_2100810799(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
	_activation_check_proc_09_func_93234503(_activatnvar_code, _activatnvar_confusing_U8_3);
	/* inline */ _activation_check_proc_09_func_1174200780(_activatnvar_confusing_U8_0);
}

void _activation_check_proc_09_func_93234503(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_code.mData[0x8];

}

void _activation_check_proc_09_func_971503948(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_U8_f++;

	/* inline */ _activation_check_proc_09_func_2006508946(_activatnvar_confusing_int_b);
	_activation_check_proc_09_func_1669461725(_activatnvar_confusing_bool_1, _activatnvar_generic_bool_1);
	_activation_check_proc_09_func_226537557(_activatnvar_confusing_U8_8, _activatnvar_confusing_char_4);
}

void _activation_check_proc_09_func_226537557(U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_char_4;

}

void _activation_check_proc_09_func_1669461725(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_09_func_390721297(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1780100349(int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_09_func_1971000290(_activatnvar_confusing_int_0);
}

void _activation_check_proc_09_func_316973100(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_132091482(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_09_func_1433944119(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xb] ^= _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_09_func_816644200(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_9892169(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_09_func_806734494(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x9] != 0xb) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_09_func_618102142(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("b4b6bb8e-38ac-30c9-3c20-83f113f98675");

}

void _activation_check_proc_09_func_431804155(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] ^= _activatnvar_confusing_chararray_e[0xa];

	_activation_check_proc_09_func_618102142(_activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_09_func_22489586(_activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_09_func_967903502(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] |= _activatnvar_confusing_chararray_7[0x2];

}

void _activation_check_proc_09_func_2101158793(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_pos)
{
	_activatnvar_confusing_U8_f++;

	_activation_check_proc_09_func_705438902(_activatnvar_pos);
	/* inline */ _activation_check_proc_09_func_1570025079(_activatnvar_pos);
	_activation_check_proc_09_func_308670329(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_09_func_705438902(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_09_func_308670329(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f >>= 0xd;

}

void _activation_check_proc_09_func_2048004755(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
	/* inline */ _activation_check_proc_09_func_1476681654(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_09_func_1155635436(int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_09_func_1815239943(_activatnvar_confusing_U8_3, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_09_func_841206631(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1335698077(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_LLUUID_1.mData[0xb];

}

void _activation_check_proc_09_func_1740731407(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x5] == 0xe) _activatnvar_confusing_bool_0 = true;

	/* inline */ _activation_check_proc_09_func_1879130894(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_1);
	_activation_check_proc_09_func_1335698077(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_09_func_1760796589(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 11; _activatnvar_strbuf_0[0] ^= 74; _activatnvar_strbuf_0[1] = 123; _activatnvar_strbuf_0[1] ^= 24; _activatnvar_strbuf_0[2] = 48; _activatnvar_strbuf_0[2] ^= 68; _activatnvar_strbuf_0[3] = 85; _activatnvar_strbuf_0[3] ^= 60; _activatnvar_strbuf_0[4] = 114; _activatnvar_strbuf_0[4] ^= 4; _activatnvar_strbuf_0[5] = 50; _activatnvar_strbuf_0[5] ^= 83; _activatnvar_strbuf_0[6] = 17; _activatnvar_strbuf_0[6] ^= 101; _activatnvar_strbuf_0[7] = 109; _activatnvar_strbuf_0[7] ^= 4; _activatnvar_strbuf_0[8] = 19; _activatnvar_strbuf_0[8] ^= 124; _activatnvar_strbuf_0[9] = 90; _activatnvar_strbuf_0[9] ^= 52; _activatnvar_strbuf_0[10] = 8; _activatnvar_strbuf_0[10] ^= 75; _activatnvar_strbuf_0[11] = 28; _activatnvar_strbuf_0[11] ^= 115; _activatnvar_strbuf_0[12] = 108; _activatnvar_strbuf_0[12] ^= 8; _activatnvar_strbuf_0[13] = 69; _activatnvar_strbuf_0[13] ^= 32; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_09_func_858806932(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_09_func_258897827(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_09_func_1089546301(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_09_func_235414901(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] ^= _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_09_func_1677137634(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_09_func_284612870(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_09_func_1910772739(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_09_func_380990360(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_2;

	_activation_check_proc_09_func_359234808();
}

void _activation_check_proc_09_func_359234808()
{
	
}

void _activation_check_proc_09_func_1076594889(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_0 |= _activatnvar_confusing_int_8;

}

void _activation_check_proc_09_func_1109292377(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_t0)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_f = _activatnvar_t0;

}

void _activation_check_proc_09_func_1409338551(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_chararray_6[0x5];

	_activatnvar_so ^= _activatnvar_section2;
}

void _activation_check_proc_09_func_1060416690(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_char_8;

}

void _activation_check_proc_09_func_206275054(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_09_func_291071055(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_642864854(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_chararray_f[0x6] >>= _activatnvar_confusing_chararray_4[0x7];

	_activation_check_proc_09_func_291071055(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_code);
	/* inline */ _activation_check_proc_09_func_499671865(_activatnvar_confusing_U8_b, _activatnvar_confusing_U8_9);
	_activation_check_proc_09_func_206275054(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_443250819(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x9] >>= _activatnvar_ser_digest[0xf];

}

void _activation_check_proc_09_func_1123703185(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_09_func_583445819(U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_1 <<= _activatnvar_t1;

}

void _activation_check_proc_09_func_1262622638(unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xa] >>= _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_09_func_1819518912(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_09_func_893118916(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_t1, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
	_activation_check_proc_09_func_1262622638(_activatnvar_confusing_chararray_f);
	_activation_check_proc_09_func_583445819(_activatnvar_t1, _activatnvar_confusing_bool_3, _activatnvar_confusing_char_1);
	_activation_check_proc_09_func_1819518912(_activatnvar_combined_id, _activatnvar_name_digest);
	_activation_check_proc_09_func_1123703185(_activatnvar_combined_id, _activatnvar_confusing_U8_7, _activatnvar_name_digest, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_09_func_1536137999(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_4[0x1] ^= _activatnvar_name_digest[0x2];

	/* inline */ _activation_check_proc_09_func_1315467517(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_09_func_1582565175(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_09_func_993112703(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_09_func_936900807(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
	/* inline */ _activation_check_proc_09_func_1515105187(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_09_func_1192538622(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("09a54e0d-cf82-3d27-2485-0243c7ddcba0");

}

void _activation_check_proc_09_func_814150644(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_b, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_U8_2;

	/* inline */ _activation_check_proc_09_func_324898807(_activatnvar_confusing_int_c);
}

void _activation_check_proc_09_func_1738493724(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_09_func_964315486(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_2 <<= 0xd;

}

void _activation_check_proc_09_func_173084115(int& _activatnvar_confusing_int_e)
{
	
	/* inline */ _activation_check_proc_09_func_2094690273(_activatnvar_confusing_int_e);
}

void _activation_check_proc_09_func_1264526794(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_2[0xa] <<= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_09_func_1682625150(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_09_func_440863934()
{
	
}

void _activation_check_proc_09_func_754469677(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_09_func_1339839549(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_09_func_1298123556(int& _activatnvar_confusing_int_8, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_09_func_1238470818(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x2] |= _activatnvar_confusing_chararray_6[0x1];

	_activation_check_proc_09_func_1838186943();
}

void _activation_check_proc_09_func_1838186943()
{
	
}

void _activation_check_proc_09_func_938635787(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_958455067(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_09_func_1971404732(unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_LLUUID_b.mData[0xf] ^= _activatnvar_confusing_chararray_d[0x2];

	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_09_func_1005566496(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
	_activation_check_proc_09_func_958455067(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_09_func_1258544391(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_09_func_486762494(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_09_func_1670529744(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_09_func_865029269(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_8;

	/* inline */ _activation_check_proc_09_func_226772604(_activatnvar_secret, _activatnvar_confusing_char_5);
}

void _activation_check_proc_09_func_717591206(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_09_func_1630738587(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_09_func_824394273(char& _activatnvar_confusing_char_0, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_c.mData[0x7];

	_activation_check_proc_09_func_1144927986(_activatnvar_confusing_bool_a, _activatnvar_generic_bool_1);
}

void _activation_check_proc_09_func_1144927986(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_a &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_09_func_1039108525(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x3] += _activatnvar_combined_id.mData[0x8];

	_activation_check_proc_09_func_931405583(_activatnvar_confusing_bool_1, _activatnvar_doaccount);
}

void _activation_check_proc_09_func_931405583(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_doaccount;

}

void _activation_check_proc_09_func_175263058(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 &= 0xf;

}

void _activation_check_proc_09_func_1256975173(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x7] != _activatnvar_confusing_char_7) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_09_func_926238356(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_09_func_527405299(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_773640737(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_c &= _activatnvar_doaccount;

	_activation_check_proc_09_func_507221972(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_09_func_507221972(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("a6c16a8d-a8e4-8966-d16d-205fbdb74696");

}

void _activation_check_proc_09_func_878881612(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_09_func_776875372(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_09_func_776875372(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_09_func_1627580299(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_2.mData[0x9];

	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_09_func_1327127215(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1381505746(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_09_func_751598436(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_09_func_877011319(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_09_func_475691545(U8& _activatnvar_confusing_U8_b, U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x9] >>= _activatnvar_confusing_LLUUID_6.mData[0x5];

	_activation_check_proc_09_func_877011319(_activatnvar_confusing_U8_b);
	_activation_check_proc_09_func_751598436(_activatnvar_t0);
	_activation_check_proc_09_func_1381505746(_activatnvar_pos, _activatnvar_so, _activatnvar_t1);
}

void _activation_check_proc_09_func_726344313(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x1] <<= _activatnvar_confusing_chararray_1[0x5];

	_activation_check_proc_09_func_687628531(_activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_09_func_826418885(_activatnvar_pos);
}

void _activation_check_proc_09_func_826418885(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_09_func_687628531(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_09_func_154247846(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_2062571807(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_secret.mData[0x4];

}

void _activation_check_proc_09_func_1694976132()
{
	
}

void _activation_check_proc_09_func_1440084249(U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_7;

	_activation_check_proc_09_func_2062571807(_activatnvar_secret, _activatnvar_confusing_U8_c);
	_activation_check_proc_09_func_1694976132();
	/* inline */ _activation_check_proc_09_func_1332204592(_activatnvar_confusing_int_0);
	_activation_check_proc_09_func_154247846(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_191065472(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_09_func_182808667(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x5] &= _activatnvar_confusing_chararray_7[0x7];

}

void _activation_check_proc_09_func_1727845401(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_3 |= _activatnvar_fscked.mData[0xc];

}

void _activation_check_proc_09_func_153816686(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xa] &= _activatnvar_confusing_chararray_4[0xc];

}

void _activation_check_proc_09_func_83817997(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_fscked;

	_activation_check_proc_09_func_182808667(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_0);
	_activation_check_proc_09_func_153816686(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_09_func_1494334057(_activatnvar_t0);
	_activation_check_proc_09_func_1727845401(_activatnvar_confusing_char_3, _activatnvar_fscked);
	/* inline */ _activation_check_proc_09_func_1821662889(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_09_func_815907724(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_09_func_379354546(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1694584486(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_09_func_1506634472(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_0)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_c;

	_activation_check_proc_09_func_379354546(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
	_activation_check_proc_09_func_1694584486(_activatnvar_confusing_char_a);
}

void _activation_check_proc_09_func_2017139141(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_09_func_971954807()
{
	
}

void _activation_check_proc_09_func_478566659(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
	_activation_check_proc_09_func_971954807();
}

void _activation_check_proc_09_func_1359821348(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activation_check_proc_09_func_1141309506(_activatnvar_confusing_U8_4);
	/* inline */ _activation_check_proc_09_func_787264443(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_09_func_1141309506(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 <<= 0x9;

}

void _activation_check_proc_09_func_237981507(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
	/* inline */ _activation_check_proc_09_func_1087791673();
}

void _activation_check_proc_09_func_830955125(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_09_func_759654704(U8& _activatnvar_pos, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	/* inline */ _activation_check_proc_09_func_634522427(_activatnvar_pos);
}

void _activation_check_proc_09_func_1092816906(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_09_func_1531103310(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_09_func_1958902814(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_c)
{
	
	_activation_check_proc_09_func_1531103310(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_09_func_1518143987(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_09_func_147874949(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("f3e1ea71-b8d6-64a7-038e-3c3937944fa6");

}

void _activation_check_proc_09_func_1338616235()
{
	
}

void _activation_check_proc_09_func_1579573974(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_2 += _activatnvar_confusing_char_b;

}

void _activation_check_proc_09_func_1698022773(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_6.mData[0xf] &= _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_09_func_1551273069(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_09_func_1643187624(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	
	_activation_check_proc_09_func_1551273069(_activatnvar_confusing_char_3);
	_activation_check_proc_09_func_1698022773(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_09_func_1374332405(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_09_func_2121719882(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_09_func_1374332405(_activatnvar_pos);
}

void _activation_check_proc_09_func_462358590(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_f.mData[0x0] *= _activatnvar_mac_digest[0xb];

}

void _activation_check_proc_09_func_576922787(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_int_9 &= 0xb;

	if(_activatnvar_confusing_LLUUID_2.mData[0x3] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_09_func_944342844(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_282672578(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] = _activatnvar_confusing_chararray_8[0xf];

	_activation_check_proc_09_func_944342844(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1624837271()
{
	
}

void _activation_check_proc_09_func_940202160(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("282791a4-2aef-69cf-7053-7d87dc2aea0b");

	_activation_check_proc_09_func_1624837271();
	/* inline */ _activation_check_proc_09_func_1304709483();
}

void _activation_check_proc_09_func_1152524866(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_09_func_464758948(U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_U8_f++;

	/* inline */ _activation_check_proc_09_func_2028109951(_activatnvar_confusing_int_a);
}

void _activation_check_proc_09_func_657612618(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_4;

	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_09_func_452754572(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f *= 0xf;

	/* inline */ _activation_check_proc_09_func_1618345850(_activatnvar_confusing_char_9, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_09_func_28167746(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_09_func_1478726865(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("844198a7-123f-0d18-710c-4f31a609988c");

	/* inline */ _activation_check_proc_09_func_1630537151(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_09_func_906493882(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_09_func_1677529445(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_7.mData[0xf];

	_activatnvar_confusing_U8_d = _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_09_func_591054250(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("71b3949e-fef9-f628-a504-e22f5d293c0a");

	_activation_check_proc_09_func_1677529445(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_09_func_856951900(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_09_func_365407134(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_1653840516(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1653840516(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1688939246(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1853517353(int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_09_func_1688939246(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_2127422577(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1497221491(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x7] += _activatnvar_confusing_LLUUID_3.mData[0x6];

}

void _activation_check_proc_09_func_34832117(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_09_func_1055667333(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_09_func_34832117(_activatnvar_confusing_char_5);
}

void _activation_check_proc_09_func_133311151(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_char_8;

	_activation_check_proc_09_func_1676108048(_activatnvar_generic_bool_1, _activatnvar_confusing_char_1, _activatnvar_confusing_char_3);
}

void _activation_check_proc_09_func_1676108048(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_3 *= _activatnvar_confusing_char_1;

}

void _activation_check_proc_09_func_1713956420(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_09_func_623951111(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1837172003(bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_09_func_1498224841(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_09_func_1819733893(_activatnvar_confusing_U8_9);
	/* inline */ _activation_check_proc_09_func_1331325600(_activatnvar_confusing_int_1);
}

void _activation_check_proc_09_func_608952138(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xb] *= _activatnvar_confusing_LLUUID_4.mData[0x7];

}

void _activation_check_proc_09_func_1851166291(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_09_func_539628952(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x1] = _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_09_func_1230925849(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_09_func_391685117(LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_f &= 0xff;

	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1362053700(char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_09_func_2031766725(_activatnvar_confusing_char_5);
}

void _activation_check_proc_09_func_2031766725(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_09_func_1563045417(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] >>= _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_09_func_385598078(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x5] >>= _activatnvar_secret.mData[0x9];

	_activation_check_proc_09_func_961678044();
}

void _activation_check_proc_09_func_961678044()
{
	
}

void _activation_check_proc_09_func_1606041252(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_09_func_1459047815(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f >>= 0xe;

	/* inline */ _activation_check_proc_09_func_1830157917(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_09_func_283771194(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_09_func_2055831792(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_09_func_947661556(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1622303658(LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_a, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_code)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_d <<= _activatnvar_confusing_U8_8;

	_activation_check_proc_09_func_947661556(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1384124985(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 ^= 0xb;

}

void _activation_check_proc_09_func_158349754()
{
	
}

void _activation_check_proc_09_func_1718159937(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_0.mData[0xc];

}

void _activation_check_proc_09_func_1514892983(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_8.mData[0xc] = _activatnvar_combined_id.mData[0x9];

	/* inline */ _activation_check_proc_09_func_834346038(_activatnvar_confusing_char_f, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_09_func_74410908()
{
	
}

void _activation_check_proc_09_func_146048875(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_1, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activation_check_proc_09_func_328239489(_activatnvar_confusing_char_d, _activatnvar_confusing_U8_f, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_09_func_689091882(_activatnvar_confusing_char_c, _activatnvar_confusing_bool_d, _activatnvar_confusing_char_6);
}

void _activation_check_proc_09_func_328239489(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_d *= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_09_func_1417074047(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_09_func_1538082014(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_section2.mData[0xa];

}

void _activation_check_proc_09_func_649709033(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_f &= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_09_func_2114978550(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("fd570041-494c-6804-87b7-72c9c23185b0");

	/* inline */ _activation_check_proc_09_func_659871380(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_09_func_2615984(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_09_func_1654013872(_activatnvar_confusing_LLUUID_2, _activatnvar_generic_iterator, _activatnvar_combined_id);
	_activation_check_proc_09_func_683745371(_activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked);
	/* inline */ _activation_check_proc_09_func_1093696851(_activatnvar_confusing_char_8);
}

void _activation_check_proc_09_func_1654013872(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] &= _activatnvar_combined_id.mData[0xe];

	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_09_func_683745371(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1666635472(bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_e *= _activatnvar_confusing_int_0;

	/* inline */ _activation_check_proc_09_func_501614813(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_09_func_2039494679(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_09_func_1542056717(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_e;

	_activation_check_proc_09_func_1906607323(_activatnvar_confusing_U8_e, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_09_func_1906607323(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_09_func_1305902544(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_09_func_28394060(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_09_func_1595920134(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_1 &= 0x2;

}

void _activation_check_proc_09_func_1017662539(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_09_func_1275365186(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_09_func_578660175(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_09_func_506863005(LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
}

void _activation_check_proc_09_func_1611976879(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_09_func_909442513(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_09_func_1606606117(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_09_func_2027375479(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_09_func_1886624948(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xc] |= _activatnvar_confusing_LLUUID_8.mData[0x8];

}

void _activation_check_proc_09_func_645543694(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] >>= _activatnvar_confusing_LLUUID_5.mData[0x7];

	_activation_check_proc_09_func_1886624948(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_09_func_1234817896(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] *= _activatnvar_confusing_chararray_6[0x6];

	/* inline */ _activation_check_proc_09_func_590742534(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1872188509(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_09_func_121838886(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0xb] = _activatnvar_confusing_LLUUID_1.mData[0x2];

}

void _activation_check_proc_09_func_1502147690(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = 0xb;

	/* inline */ _activation_check_proc_09_func_1319718489(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_9);
	_activation_check_proc_09_func_1783003152(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_09_func_1783003152(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_d[0x9] <<= _activatnvar_confusing_LLUUID_4.mData[0x2];

}

void _activation_check_proc_09_func_1211913191(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e ^= _activatnvar_confusing_chararray_3[0x1];

}

void _activation_check_proc_09_func_1209301247(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_09_func_630839784(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_U8_4++;

	_activation_check_proc_09_func_1193742759(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_09_func_1193742759(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_09_func_1148224710(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x0] ^= _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_09_func_997027127(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_3 <<= _activatnvar_confusing_chararray_0[0x1];

	_activation_check_proc_09_func_1148224710(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_09_func_846110958(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_b, char& _activatnvar_feat, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_09_func_288761034(_activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_generic_bool_1, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_09_func_47324331(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_09_func_1443375974(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xa] <<= _activatnvar_confusing_LLUUID_9.mData[0x4];

}

void _activation_check_proc_09_func_281910498(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] ^= _activatnvar_secret.mData[0xf];

}

void _activation_check_proc_09_func_1852087560(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xa] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_09_func_1932955772()
{
	
}

void _activation_check_proc_09_func_920928688(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 += _activatnvar_confusing_int_5;

	_activation_check_proc_09_func_1932955772();
}

void _activation_check_proc_09_func_1427613833(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x6] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_09_func_1228250725(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_09_func_339053099(int& _activatnvar_confusing_int_b, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_chararray_8[0xb];

	_activation_check_proc_09_func_1228250725(_activatnvar_confusing_int_b);
}

void _activation_check_proc_09_func_511724746(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_09_func_1180465268(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_1[0x6] <<= _activatnvar_confusing_chararray_a[0xf];

}

void _activation_check_proc_09_func_420679029(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("099591b3-bb95-024b-e529-b01130ce71f3");

}

void _activation_check_proc_09_func_350454530(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_b)
{
	
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_09_func_170820195(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_t1;

}

void _activation_check_proc_09_func_1994137788()
{
	
}

void _activation_check_proc_09_func_399194684(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_LLUUID_c.mData[0x9];

	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_09_func_1247502123(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_471224305(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_662768095(_activatnvar_generic_iterator);
	_activation_check_proc_09_func_1247502123(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_09_func_662768095(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_09_func_666119654(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("8147a982-844e-4482-30aa-fdf626b5d915");

}

void _activation_check_proc_09_func_1870609213(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_LLUUID_c.mData[0x3];

}

void _activation_check_proc_09_func_432318695(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_544125994(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_so;

}

void _activation_check_proc_09_func_397648012(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_09_func_523233784(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_chararray_b[0x3];

}

void _activation_check_proc_09_func_35991428(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_09_func_590701283(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x5] |= _activatnvar_confusing_LLUUID_5.mData[0xc];

}

void _activation_check_proc_09_func_1748969175(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1085710821(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_09_func_321372511(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x2] ^= _activatnvar_confusing_chararray_0[0x9];

}

void _activation_check_proc_09_func_1445428111()
{
	
}

void _activation_check_proc_09_func_2001192332(bool& _activatnvar_confusing_bool_9, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_09_func_1637979127(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_9);
	_activation_check_proc_09_func_1445428111();
}

void _activation_check_proc_09_func_1637979127(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_09_func_511045581(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_6, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

	_activation_check_proc_09_func_2086565424(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_a);
	_activation_check_proc_09_func_1982703284(_activatnvar_confusing_int_6);
}

void _activation_check_proc_09_func_1982703284(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_09_func_2086565424(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_b[0xe] &= _activatnvar_confusing_chararray_a[0xd];

}

void _activation_check_proc_09_func_1124465061(U8& _activatnvar_confusing_U8_f)
{
	
	_activation_check_proc_09_func_207625496(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_09_func_207625496(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_09_func_1070624015(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_09_func_1533570399(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_684488733(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_09_func_76393871(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x8] *= _activatnvar_confusing_LLUUID_f.mData[0x6];

}

void _activation_check_proc_09_func_2147196339(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x6] += _activatnvar_confusing_LLUUID_b.mData[0x7];

}

void _activation_check_proc_09_func_534768454(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x1] == 0x3) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_09_func_341927396(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_c[0x7] *= _activatnvar_confusing_chararray_7[0xb];

}

void _activation_check_proc_09_func_268966075(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_1;

	_activation_check_proc_09_func_341927396(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_09_func_1326455343(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_642338691(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b >>= 0x0;

}

void _activation_check_proc_09_func_668515829(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_604422450(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_09_func_1799685050(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xa] <<= _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_09_func_1400687448(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x9] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_09_func_2053565379(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_09_func_737109832(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_2053565379(_activatnvar_confusing_int_4);
}

void _activation_check_proc_09_func_1218092885(U8& _activatnvar_pos, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xd] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_0;

	_activation_check_proc_09_func_1011872563(_activatnvar_pos, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_09_func_465487769(_activatnvar_pos);
}

void _activation_check_proc_09_func_1011872563(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_09_func_51158239(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_09_func_1726588333(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a = _activatnvar_confusing_int_3;

}

void _activation_check_proc_09_func_299155390(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_09_func_1145384093(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x3] += _activatnvar_confusing_LLUUID_c.mData[0xb];

}

void _activation_check_proc_09_func_596789576(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_79798193(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_chararray_4[0x9];

	_activation_check_proc_09_func_353285384(_activatnvar_secret, _activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_0, _activatnvar_combined_id);
}

void _activation_check_proc_09_func_353285384(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_f[0xa] >>= _activatnvar_secret.mData[0x4];

	_activatnvar_confusing_LLUUID_0.mData[0x9] &= _activatnvar_combined_id.mData[0x6];

}

void _activation_check_proc_09_func_115483966(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_b, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_09_func_1617276724(_activatnvar_confusing_U8_b, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_09_func_1617276724(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x0] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_09_func_24357991(DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
}

void _activation_check_proc_09_func_276584849(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_09_func_1325325146(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_09_func_954206801()
{
	
}

void _activation_check_proc_09_func_748878553(bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_int_c++;

	/* inline */ _activation_check_proc_09_func_2038537166(_activatnvar_confusing_char_8, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_09_func_906506667(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_09_func_954206801();
	_activation_check_proc_09_func_797185582(_activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_09_func_797185582(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xd] != 0x1) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_09_func_906506667(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x1] += _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_09_func_1492539591(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_09_func_720412458(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_chararray_2[0x5];

	_activation_check_proc_09_func_879695245(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_09_func_1107677260(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_c);
	_activation_check_proc_09_func_1492539591(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_09_func_879695245(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] += _activatnvar_confusing_chararray_7[0xa];

}

void _activation_check_proc_09_func_1370546086(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_09_func_1068025206(U8& _activatnvar_pos, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_6++;

	_activation_check_proc_09_func_1370546086(_activatnvar_combined_id, _activatnvar_pos);
	/* inline */ _activation_check_proc_09_func_2073312810(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_09_func_580723565(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x5] = _activatnvar_confusing_LLUUID_a.mData[0x0];

}

void _activation_check_proc_09_func_1425413666(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 = 0xf;

}

void _activation_check_proc_09_func_1553944878(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_09_func_1064029342(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_2)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_2 &= _activatnvar_confusing_char_c;

}

void _activation_check_proc_09_func_1418337494(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_doaccount;

}

void _activation_check_proc_09_func_1903005192(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_9 <<= _activatnvar_confusing_char_1;

	_activatnvar_confusing_LLUUID_3.mData[0x8] += _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_09_func_593278419()
{
	
}

void _activation_check_proc_09_func_910752237(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_7.mData[0x4];

	_activation_check_proc_09_func_593278419();
	_activation_check_proc_09_func_1903005192(_activatnvar_confusing_U8_9, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_4, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_1);
}

void _activation_check_proc_09_func_993001299(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x4] == 0x9) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_09_func_792375357(char& _activatnvar_confusing_char_9, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("3a83b809-98ad-e3b8-0f26-f17be4e5c92a");

	_activation_check_proc_09_func_1991041694(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_7, _activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_09_func_1300260535(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_0);
	_activation_check_proc_09_func_409748113(_activatnvar_confusing_char_9, _activatnvar_confusing_char_6, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_09_func_1300260535(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_09_func_1991041694(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x3] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_e = _activatnvar_generic_bool_0;

}

void _activation_check_proc_09_func_409748113(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_9 ^= _activatnvar_confusing_char_6;

}

void _activation_check_proc_09_func_318168698()
{
	
}

void _activation_check_proc_09_func_2114786158(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 <<= _activatnvar_pos;

}

void _activation_check_proc_09_func_254147383(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_09_func_1724278142(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_09_func_1263377365(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_09_func_1995093643(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_7 ^= 0x3;

}

void _activation_check_proc_09_func_302257414(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_09_func_414019133(_activatnvar_feat, _activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_414019133(char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_09_func_1505265689(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_0++;

	/* inline */ _activation_check_proc_09_func_243866117(_activatnvar_t0);
	/* inline */ _activation_check_proc_09_func_400426136(_activatnvar_pos, _activatnvar_so, _activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_09_func_851842006(bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_generic_bool_1;

	_activation_check_proc_09_func_593039487(_activatnvar_confusing_chararray_6, _activatnvar_confusing_char_6);
}

void _activation_check_proc_09_func_593039487(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 <<= _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_09_func_130954994(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_4 |= _activatnvar_confusing_U8_a;

	/* inline */ _activation_check_proc_09_func_1759227325(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_09_func_1443151139(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_09_func_2004347114(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_3.mData[0x7] |= _activatnvar_confusing_chararray_2[0xb];

}

void _activation_check_proc_09_func_931511076(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_09_func_2077666207(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_09_func_1035396063(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_09_func_742064508(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_09_func_742064508(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("c17f5a57-5bdf-3dc2-81c6-9b1d811a261b");

}

void _activation_check_proc_09_func_1956583396(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_09_func_1849006523(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

	_activatnvar_confusing_bool_8 &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_09_func_682453555(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_09_func_1019895815(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_09_func_379858701(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_09_func_2021809449(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_so;

}

void _activation_check_proc_09_func_938018917(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_09_func_409359478(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_c;

	_activation_check_proc_09_func_938018917(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_09_func_1917200757(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_8++;

	/* inline */ _activation_check_proc_09_func_1527446308(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_5);
	_activation_check_proc_09_func_1477438968(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_09_func_89769678(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_09_func_1477438968(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_7.mData[0x7] += _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_09_func_89769678(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_09_func_1138288154(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_09_func_641126635(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_641126635(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1003354704(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_09_func_53959362(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_09_func_242542911(bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_chararray_4[0x2];

}

void _activation_check_proc_09_func_1655873473(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_09_func_2087592359(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_e[0xd] |= _activatnvar_confusing_chararray_5[0x0];

}

void _activation_check_proc_09_func_358288447(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_09_func_1651587582(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_c, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_09_func_358288447(_activatnvar_generic_bool_1, _activatnvar_feat, _activatnvar_lace, _activatnvar_confusing_int_c, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1988842425(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_09_func_2010045344(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_d[0xe] *= _activatnvar_confusing_chararray_3[0x2];

}

void _activation_check_proc_09_func_1518832786(LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] &= _activatnvar_confusing_LLUUID_c.mData[0xc];

	/* inline */ _activation_check_proc_09_func_1762488448(_activatnvar_confusing_int_4);
}

void _activation_check_proc_09_func_167331089(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_8 &= 0xd;

}

void _activation_check_proc_09_func_551136168(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_09_func_369537885(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x6] ^= _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_09_func_1900609426(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_chararray_4[0xe];

	_activatnvar_confusing_LLUUID_0.mData[0x2] &= _activatnvar_confusing_chararray_d[0x7];

}

void _activation_check_proc_09_func_750853012(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_09_func_1570950511(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] >>= _activatnvar_confusing_LLUUID_f.mData[0xc];

	/* inline */ _activation_check_proc_09_func_1807738681(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_09_func_560772226(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_09_func_811530449(unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xd] ^= _activatnvar_confusing_LLUUID_2.mData[0x5];

	_activation_check_proc_09_func_1935012350(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_09_func_901076452(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_09_func_2139988136(_activatnvar_confusing_chararray_d, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1935012350(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d ^= 0x8;

}

void _activation_check_proc_09_func_311892778(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_09_func_667566692(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 += _activatnvar_confusing_char_0;

}

void _activation_check_proc_09_func_1969097241(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_a[0x4] ^= _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_09_func_226956280(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_2 ^= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_09_func_1745680594(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_09_func_772480899(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_6 = _activatnvar_code.mData[0xf];

	_activation_check_proc_09_func_130873471(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_09_func_130873471(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] *= _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_09_func_19330934(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_0;

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_09_func_1696391171(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_09_func_1250564203(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_d += 0xd;

	_activation_check_proc_09_func_1580390666(_activatnvar_generic_iterator);
}

void _activation_check_proc_09_func_1580390666(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_09_func_1013279741(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_5, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	
	_activation_check_proc_09_func_1345955439(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_09_func_554215823(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_09_func_14887121(_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_09_func_1288236001(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_09_func_1345955439(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_09_func_1091268284(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_LLUUID_e.mData[0xc];

}

void _activation_check_proc_09_func_2135802220(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
