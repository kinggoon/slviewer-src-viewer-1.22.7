// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation04.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 04

void _activation_check_proc_04_func_1720599665(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_04_func_1921970811(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_04_func_1643522717(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_04_func_1076777408(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_04_func_155671141(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_04_func_780764515(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1627444787(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_04_func_215342949(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_3.mData[0xd] &= _activatnvar_confusing_chararray_0[0xb];

	_activatnvar_confusing_U8_8 = _activatnvar_combined_id.mData[0x2];

	/* inline */ _activation_check_proc_04_func_1571432027(_activatnvar_confusing_char_c);
	_activation_check_proc_04_func_1627444787(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_04_func_723255316(_activatnvar_confusing_chararray_2, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_04_func_477418158(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_04_func_1164885980(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_04_func_501072923(_activatnvar_confusing_LLUUID_f);
	_activation_check_proc_04_func_1712811305(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_U8_a);
	_activation_check_proc_04_func_477418158(_activatnvar_confusing_int_8);
}

void _activation_check_proc_04_func_1712811305(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_LLUUID_e.mData[0x7];

}

void _activation_check_proc_04_func_990700962(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_04_func_1970030065(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_04_func_1701713206(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_04_func_440417381(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_04_func_2014657330(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_04_func_440417381(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_04_func_1998398823(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_U8_b &= _activatnvar_so.mData[0x3];

}

void _activation_check_proc_04_func_1672965731(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_04_func_134097765(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_04_func_1576023552(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_chararray_7[0x2];

}

void _activation_check_proc_04_func_1294888627()
{
	
}

void _activation_check_proc_04_func_1790112730(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_2016268569(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("700f127c-31d9-a15e-c23e-9b996602e885");

}

void _activation_check_proc_04_func_520535095(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_char_c;

}

void _activation_check_proc_04_func_1461224550(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_c)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_1823835748(_activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_04_func_274580421(_activatnvar_confusing_LLUUID_9);
	_activation_check_proc_04_func_520535095(_activatnvar_confusing_char_c, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_04_func_642413148(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_04_func_927865132(unsigned char* _activatnvar_name_digest, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x5] &= _activatnvar_name_digest[0xc];

	_activation_check_proc_04_func_642413148(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_04_func_629685006(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_f.mData[0xd] *= _activatnvar_confusing_LLUUID_4.mData[0x9];

}

void _activation_check_proc_04_func_1489234223(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1914768306(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xd] >>= _activatnvar_section2.mData[0xc];

}

void _activation_check_proc_04_func_1550606263(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_95925728(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1792103194(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_04_func_1244405365(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("2b797cb1-ec54-b3f9-0f8a-6eeac017acfb");

}

void _activation_check_proc_04_func_1961212403(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_81333163(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_04_func_1892920673(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_04_func_1706349712(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x1] = _activatnvar_confusing_LLUUID_f.mData[0x1];

}

void _activation_check_proc_04_func_1762711479(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_04_func_59441394(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_2)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x1] != _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_4 = false;

	_activation_check_proc_04_func_630284558(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_confusing_int_2);
}

void _activation_check_proc_04_func_630284558(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_2 >>= 0x8;

}

void _activation_check_proc_04_func_16539150(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("a6202f58-e94e-22f3-b66a-1c904dde754e");

}

void _activation_check_proc_04_func_675627187(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_0, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_04_func_2081452294(_activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_doaccount);
	_activation_check_proc_04_func_246645518(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_04_func_175627646(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_16539150(_activatnvar_confusing_LLUUID_6);
	_activation_check_proc_04_func_2135637347(_activatnvar_doaccount, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_04_func_745262960(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_745262960(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_246645518(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_04_func_2135637347(bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_04_func_955037642(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_c)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_int_c++;

	
	/* inline */ _activation_check_proc_04_func_1150877514(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_04_func_801253904(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_combined_id.mData[0xe];

}

void _activation_check_proc_04_func_1326937874(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_04_func_322162483(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xd] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_04_func_280739431(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_04_func_1704103924(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_04_func_1714137286(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_f[0x1] >>= _activatnvar_secret.mData[0x1];

}

void _activation_check_proc_04_func_760399135(bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xc] <<= _activatnvar_fscked.mData[0x3];

	_activation_check_proc_04_func_266930799(_activatnvar_confusing_int_c);
	_activation_check_proc_04_func_2039661383(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_04_func_475454(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_04_func_2039661383(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_04_func_266930799(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_04_func_883992127(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xc] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_04_func_1944942752(LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_secret)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_04_func_1533371403(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_04_func_1720174001(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_04_func_1533371403(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1720174001(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_04_func_1257497804(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_04_func_855088904(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_440063298(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_04_func_2093187080(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_lace;

}

void _activation_check_proc_04_func_189805801(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1125429077(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_LLUUID_f.mData[0x7];

}

void _activation_check_proc_04_func_259062772(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_04_func_235597758(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_5.mData[0x2] &= _activatnvar_confusing_chararray_8[0xc];

}

void _activation_check_proc_04_func_1362432864(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_04_func_1669522754(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] &= _activatnvar_confusing_chararray_f[0x9];

}

void _activation_check_proc_04_func_142654831(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] |= _activatnvar_lace.mData[0x9];

}

void _activation_check_proc_04_func_1070485849(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x5] = _activatnvar_confusing_LLUUID_b.mData[0xa];

}

void _activation_check_proc_04_func_1877972492(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b |= 0xc;

}

void _activation_check_proc_04_func_649583731(char& _activatnvar_feat, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activatnvar_confusing_chararray_b[0xc] &= _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_04_func_758870422(char& _activatnvar_feat, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_04_func_649583731(_activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_b, _activatnvar_doaccount, _activatnvar_lace);
	_activation_check_proc_04_func_1877972492(_activatnvar_confusing_U8_b);
}

void _activation_check_proc_04_func_945986090(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_f <<= _activatnvar_confusing_char_2;

}

void _activation_check_proc_04_func_2031915675(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_04_func_980173781(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_1;

	_activation_check_proc_04_func_2031915675(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_04_func_1609995415(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xb] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_04_func_2105860754(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_04_func_959478599(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_chararray_e[0x1];

	_activatnvar_confusing_char_4 &= _activatnvar_confusing_LLUUID_a.mData[0x3];

}

void _activation_check_proc_04_func_868898789(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_04_func_1220848116(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_combined_id;

}

void _activation_check_proc_04_func_1412538123(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] |= _activatnvar_confusing_chararray_1[0x2];

}

void _activation_check_proc_04_func_1878555988(char& _activatnvar_confusing_char_9, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	/* inline */ _activation_check_proc_04_func_1088381244(_activatnvar_confusing_char_9);
}

void _activation_check_proc_04_func_1605833092(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_04_func_474081258(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_04_func_2021373165(U8& _activatnvar_pos, int& _activatnvar_confusing_int_b, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
	_activation_check_proc_04_func_474081258(_activatnvar_confusing_int_b);
}

void _activation_check_proc_04_func_863967526(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1464236054(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x8] += _activatnvar_confusing_LLUUID_2.mData[0xd];

}

void _activation_check_proc_04_func_663940432(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_04_func_17603939(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("c247de83-04e3-4e5e-a135-7e6728b55220");

	/* inline */ _activation_check_proc_04_func_633823963(_activatnvar_confusing_int_b);
}

void _activation_check_proc_04_func_861895813(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("a986a466-3fb8-d676-2999-253a0da87885");

}

void _activation_check_proc_04_func_1636719632(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_7[0xf] += _activatnvar_confusing_chararray_2[0x1];

}

void _activation_check_proc_04_func_1139519310(unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_8)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_7 <<= _activatnvar_confusing_char_8;

	_activation_check_proc_04_func_1636719632(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_04_func_1092292992(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_a = false;

	/* inline */ _activation_check_proc_04_func_2070771269(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_04_func_286929932();
}

void _activation_check_proc_04_func_362850304(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_04_func_799600382(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_t0, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_04_func_127047589(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_b);
	_activation_check_proc_04_func_362850304(_activatnvar_t0);
}

void _activation_check_proc_04_func_2003467940()
{
	
}

void _activation_check_proc_04_func_892703291(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
}

void _activation_check_proc_04_func_621696932(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 <<= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_04_func_1288502455(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xf] != 0x6) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_04_func_138668926(unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_2[0xc] >>= _activatnvar_ser_digest[0xd];

	_activatnvar_confusing_int_6 *= 0xf;

}

void _activation_check_proc_04_func_1145621003(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_lace;

}

void _activation_check_proc_04_func_776187406(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("c1fe5cc8-7007-f27d-c94b-683bd2812a5a");

}

void _activation_check_proc_04_func_856468492(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_04_func_2009084191(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_04_func_1289239524(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_chararray_e[0xd];

}

void _activation_check_proc_04_func_1065994751(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x7] *= _activatnvar_confusing_LLUUID_2.mData[0x6];

}

void _activation_check_proc_04_func_1493883327(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] += _activatnvar_code.mData[0xc];

}

void _activation_check_proc_04_func_1045058284(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_04_func_1523101790(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_c)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_f *= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_04_func_1275305033(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_U8_2 *= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_04_func_1827136654(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_04_func_1294602451(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1642800210(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_04_func_529927857(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_04_func_718236385(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activation_check_proc_04_func_1646058771(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_04_func_1646058771(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_04_func_1942628191(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_04_func_903214907(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
	/* inline */ _activation_check_proc_04_func_689553744(_activatnvar_t0);
}

void _activation_check_proc_04_func_1352521900(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_04_func_620747549(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1191931843(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] <<= _activatnvar_confusing_chararray_a[0xf];

}

void _activation_check_proc_04_func_959809882(unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	_activation_check_proc_04_func_1191931843(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_04_func_1395280367(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_04_func_660715995(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	/* inline */ _activation_check_proc_04_func_745636787(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_984356080(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_663337878(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_04_func_690374654(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

	_activation_check_proc_04_func_1007290067(_activatnvar_confusing_LLUUID_3);
	_activation_check_proc_04_func_494647965(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_04_func_1007290067(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("8844425b-0890-37c4-9acf-de005dc2d7be");

}

void _activation_check_proc_04_func_494647965(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xb] += _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_04_func_830373997(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 = 0x8;

}

void _activation_check_proc_04_func_1902858199(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_383967557(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_04_func_490811684(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e *= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_04_func_1272664345(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_e)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_3 *= _activatnvar_confusing_char_e;

	_activation_check_proc_04_func_490811684(_activatnvar_confusing_chararray_e, _activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_04_func_2027908273(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_04_func_1247801529(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x7] |= _activatnvar_confusing_chararray_e[0x2];

}

void _activation_check_proc_04_func_415634286(unsigned char* _activatnvar_confusing_chararray_f, std::string& _activatnvar_fullname, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_d, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("45dc07c4-062f-43cb-d3cf-0f3ba6de1c67");

	/* inline */ _activation_check_proc_04_func_2096786371(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_04_func_573593568(_activatnvar_nmd5, _activatnvar_fullname);
	_activation_check_proc_04_func_574089088(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_04_func_573593568(LLMD5*& _activatnvar_nmd5, std::string& _activatnvar_fullname)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_04_func_574089088(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] ^= _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_04_func_1835667115(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_04_func_1783511507(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_04_func_971870314(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_04_func_1576539670(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_04_func_1416762360(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_04_func_1711287373(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_04_func_486960404(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_04_func_1133157027(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x3] >>= _activatnvar_fscked.mData[0xa];

	/* inline */ _activation_check_proc_04_func_210397840(_activatnvar_confusing_int_9);
}

void _activation_check_proc_04_func_423636787(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("d56e9980-e813-aafc-b75c-6e358fba6c14");

}

void _activation_check_proc_04_func_1456693647(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_f[0x4] ^= _activatnvar_confusing_LLUUID_b.mData[0x0];

}

void _activation_check_proc_04_func_319479583(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xc] != 0x1) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_04_func_695255432(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_04_func_1266020242(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] *= _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_04_func_162145345(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1920960759(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_04_func_594546680(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_a >>= _activatnvar_confusing_chararray_6[0x8];

	_activatnvar_confusing_char_f += _activatnvar_confusing_U8_0;

}

void _activation_check_proc_04_func_73551677(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_04_func_1440755416(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_04_func_389296269(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_04_func_750176282(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_04_func_1023563929(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_f, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
	/* inline */ _activation_check_proc_04_func_1688984713(_activatnvar_lace, _activatnvar_confusing_char_f);
	_activation_check_proc_04_func_750176282(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_04_func_1297516339(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	if(_activatnvar_confusing_LLUUID_5.mData[0xb] != 0xa) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_04_func_1299464733(int& _activatnvar_confusing_int_6, U8& _activatnvar_pos, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_confusing_int_6++;

	/* inline */ _activation_check_proc_04_func_12469375(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_04_func_79006010(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_04_func_111774465(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_1[0x8];

}

void _activation_check_proc_04_func_353067593(unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_58260631(_activatnvar_confusing_int_3);
	_activation_check_proc_04_func_551663452(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_04_func_111774465(_activatnvar_confusing_U8_9, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_04_func_551663452(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("44738f7c-6af9-6422-f038-e2ddd2e09c84");

}

void _activation_check_proc_04_func_588252823(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_676075526(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_04_func_2020447199(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1301209846(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xa] != 0x4) _activatnvar_confusing_bool_e = false;

	/* inline */ _activation_check_proc_04_func_37720657(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_04_func_781145551(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_b <<= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_04_func_252073302(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_167185001(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_04_func_49357094(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_04_func_819612504(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_6[0x7];

	/* inline */ _activation_check_proc_04_func_1350789254(_activatnvar_confusing_char_7);
	_activation_check_proc_04_func_49357094(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_04_func_697428970(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_char_a;

}

void _activation_check_proc_04_func_1857493736(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_a, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	_activation_check_proc_04_func_146781766(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_697428970(_activatnvar_confusing_char_a);
}

void _activation_check_proc_04_func_146781766(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_2088402461(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xb] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_04_func_2138802372(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_d[0x1] <<= _activatnvar_confusing_chararray_c[0x2];

}

void _activation_check_proc_04_func_1350987356(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_04_func_1638208701(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_957711151(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_1534390846(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_3);
	_activation_check_proc_04_func_1638208701(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_468236964(bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_c)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_04_func_285712749(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_04_func_151775767(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_char_b = _activatnvar_secret.mData[0x3];

}

void _activation_check_proc_04_func_579437743(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_04_func_1761835092(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_8[0xc] = _activatnvar_so.mData[0x0];

}

void _activation_check_proc_04_func_1121549796(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_1.mData[0x2] >>= _activatnvar_confusing_chararray_9[0x5];

	/* inline */ _activation_check_proc_04_func_362624073(_activatnvar_confusing_char_8);
}

void _activation_check_proc_04_func_278627261(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_04_func_1513780148(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_6.mData[0x4];

}

void _activation_check_proc_04_func_1354371864(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_04_func_1513780148(_activatnvar_confusing_char_e, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_1920538327(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("c1eec50a-ff24-34f0-9646-59586b6a99b4");

}

void _activation_check_proc_04_func_1734712987(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_3 *= _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_04_func_1553872319(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= _activatnvar_confusing_int_c;

}

void _activation_check_proc_04_func_544546907(unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_chararray_1[0x4] += _activatnvar_confusing_chararray_2[0x2];

	_activation_check_proc_04_func_1553872319(_activatnvar_confusing_int_c, _activatnvar_confusing_int_8);
}

void _activation_check_proc_04_func_322009611(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_04_func_2050504564(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] |= _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_04_func_2073197028(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_char_f++;

	/* inline */ _activation_check_proc_04_func_568755440(_activatnvar_confusing_bool_6, _activatnvar_confusing_U8_3, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_04_func_2086156659(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_f)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x6] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_04_func_853612512(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_chararray_1[0xf] |= _activatnvar_secret.mData[0x7];

	/* inline */ _activation_check_proc_04_func_1608977750(_activatnvar_confusing_int_c);
}

void _activation_check_proc_04_func_604476721(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x9] &= _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_04_func_1977194576(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] &= _activatnvar_confusing_chararray_2[0x7];

	_activatnvar_confusing_chararray_d[0x5] |= _activatnvar_confusing_chararray_a[0x9];

}

void _activation_check_proc_04_func_741625360(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_485676219(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_04_func_1908032963(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_LLUUID_e.mData[0x8];

}

void _activation_check_proc_04_func_2101940953(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xa] <<= _activatnvar_name_digest[0x8];

}

void _activation_check_proc_04_func_110874398(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_04_func_499987686(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_doaccount, unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_2101940953(_activatnvar_name_digest, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_04_func_1668955631(_activatnvar_doaccount);
	/* inline */ _activation_check_proc_04_func_461062557(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_a);
	_activation_check_proc_04_func_110874398(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_04_func_32588922(_activatnvar_confusing_LLUUID_a, _activatnvar_mac_digest);
}

void _activation_check_proc_04_func_596864752(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_1436204245(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_04_func_1436204245(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] *= _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_04_func_1704091992()
{
	
}

void _activation_check_proc_04_func_1291239363(unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_b[0x8] *= _activatnvar_confusing_LLUUID_f.mData[0xa];

	if(_activatnvar_confusing_LLUUID_2.mData[0x0] == _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_04_func_1704091992();
}

void _activation_check_proc_04_func_1233216058(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_04_func_802339087(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_f = true;

	/* inline */ _activation_check_proc_04_func_1035593038(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_U8_b);
	_activation_check_proc_04_func_507332016();
	_activation_check_proc_04_func_598455253(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_04_func_507332016()
{
	
}

void _activation_check_proc_04_func_598455253(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_04_func_1000107592(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_9[0x3] <<= _activatnvar_confusing_chararray_6[0x2];

}

void _activation_check_proc_04_func_786413723(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_510377033(int& _activatnvar_confusing_int_5, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
	_activation_check_proc_04_func_368320875(_activatnvar_confusing_int_5);
}

void _activation_check_proc_04_func_368320875(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= 0xf;

}

void _activation_check_proc_04_func_1976390149(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_generic_bool_0;

	/* inline */ _activation_check_proc_04_func_511671111();
}

void _activation_check_proc_04_func_1464022376(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_a, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_04_func_1152333959(_activatnvar_confusing_char_a, _activatnvar_confusing_char_1);
}

void _activation_check_proc_04_func_144954835(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_8.mData[0x1];

}

void _activation_check_proc_04_func_1896513105(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 <<= _activatnvar_confusing_int_a;

	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_04_func_1900552354(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_04_func_1105497550(U8& _activatnvar_t0, U8& _activatnvar_t1, U8& _activatnvar_pos, char& _activatnvar_confusing_char_0, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_04_func_695451942(_activatnvar_t0);
	/* inline */ _activation_check_proc_04_func_1823694281(_activatnvar_so, _activatnvar_t1, _activatnvar_pos);
	_activation_check_proc_04_func_1900552354(_activatnvar_confusing_char_0, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_04_func_695451942(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_04_func_2127442497(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_5;

	_activatnvar_confusing_U8_5 <<= 0x4;

}

void _activation_check_proc_04_func_1979454659(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_5 = false;

	/* inline */ _activation_check_proc_04_func_353087442(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_04_func_1259320665(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_secret;

}

void _activation_check_proc_04_func_668883105(LLUUID& _activatnvar_secret, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_04_func_1259320665(_activatnvar_confusing_LLUUID_b, _activatnvar_secret);
}

void _activation_check_proc_04_func_592947506(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_c)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_a *= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_04_func_1776918550(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
	_activation_check_proc_04_func_592947506(_activatnvar_confusing_U8_a, _activatnvar_confusing_bool_7, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_04_func_1184189890(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_04_func_1768897779(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x5] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_6;

	/* inline */ _activation_check_proc_04_func_965568382(_activatnvar_confusing_char_d);
}

void _activation_check_proc_04_func_1589886106(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x4] != _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_04_func_867192888(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_1[0xc] ^= _activatnvar_confusing_LLUUID_b.mData[0xb];

	_activation_check_proc_04_func_1902636099(_activatnvar_code, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_04_func_1902636099(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xe] >>= _activatnvar_code.mData[0x3];

}

void _activation_check_proc_04_func_2061844739(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_04_func_1726442772(bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_04_func_385773936(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = 0xd;

}

void _activation_check_proc_04_func_177302480(int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_fscked, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_04_func_475664121(_activatnvar_fscked, _activatnvar_confusing_char_e);
	_activation_check_proc_04_func_385773936(_activatnvar_confusing_int_9);
}

void _activation_check_proc_04_func_828507249(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1200955016(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x7] &= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_04_func_382471711(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("59a99b63-1994-4dce-5599-1b6b06a90706");

}

void _activation_check_proc_04_func_1070792217(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_chararray_4[0xa];

	_activation_check_proc_04_func_382471711(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_04_func_74735975(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_2045706092()
{
	
}

void _activation_check_proc_04_func_98343979(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_d.mData[0x8] *= _activatnvar_confusing_LLUUID_7.mData[0x7];

}

void _activation_check_proc_04_func_1047922291(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_04_func_929764317(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_d)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x4] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_9 = false;

	_activation_check_proc_04_func_1047922291(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_04_func_330472475()
{
	
}

void _activation_check_proc_04_func_940924334(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_04_func_331213495(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_char_7;

}

void _activation_check_proc_04_func_1724201341(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_04_func_1842071862(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_f, char& _activatnvar_feat, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_04_func_1873001392(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_f);
	_activation_check_proc_04_func_1708859907(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_7);
	_activation_check_proc_04_func_1071647568(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_6);
	_activation_check_proc_04_func_1724201341(_activatnvar_generic_bool_1, _activatnvar_lace, _activatnvar_feat, _activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1708859907(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_a[0xa] <<= _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_04_func_1071647568(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_04_func_483307779(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f |= _activatnvar_confusing_int_2;

}

void _activation_check_proc_04_func_146095566(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_0 <<= _activatnvar_confusing_char_6;

}

void _activation_check_proc_04_func_1719722242(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1828061104(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_04_func_1719722242(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1494361078(int& _activatnvar_confusing_int_d, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_generic_bool_1;

	/* inline */ _activation_check_proc_04_func_1411381095(_activatnvar_confusing_int_d);
}

void _activation_check_proc_04_func_224765346(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_04_func_348898960(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1134009668(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_915394816(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_122512231(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1879791959(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_04_func_1210204587(int& _activatnvar_confusing_int_1, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	_activation_check_proc_04_func_122512231(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_1879791959(_activatnvar_confusing_int_1);
}

void _activation_check_proc_04_func_1497809666(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_04_func_1542514276(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_04_func_1542514276(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_1[0x6] >>= _activatnvar_confusing_LLUUID_4.mData[0x4];

}

void _activation_check_proc_04_func_1151644432(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_04_func_1058303096(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_doaccount;

}

void _activation_check_proc_04_func_1127473596(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_1)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_1 *= _activatnvar_confusing_char_d;

	_activation_check_proc_04_func_1058303096(_activatnvar_confusing_bool_1, _activatnvar_doaccount);
}

void _activation_check_proc_04_func_1244110187(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_c ^= _activatnvar_confusing_char_b;

}

void _activation_check_proc_04_func_378374852(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_04_func_1670647965(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x9] == 0xe) _activatnvar_confusing_bool_7 = true;

	/* inline */ _activation_check_proc_04_func_1400757553(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_04_func_1548738426(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xb] *= _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_04_func_1294689534(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x8] &= _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_04_func_1879411066(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_04_func_1737360102(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_04_func_1473520761(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_2009358397(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("44ace0b6-03be-b7dc-6603-4740536cf591");

	/* inline */ _activation_check_proc_04_func_141590023(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_04_func_1723302633(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 >>= _activatnvar_confusing_char_8;

}

void _activation_check_proc_04_func_794866787(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_secret;

	/* inline */ _activation_check_proc_04_func_2069132145(_activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_04_func_1297467056(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_04_func_1277650037(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_04_func_1204424214(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_char_b *= 0x0;

	/* inline */ _activation_check_proc_04_func_745439098(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_f, _activatnvar_confusing_bool_1);
	_activation_check_proc_04_func_739677988(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_5);
	_activation_check_proc_04_func_1277650037(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_04_func_739677988(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_04_func_1059178847(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1569311349(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_553583927(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] = _activatnvar_confusing_chararray_9[0x6];

}

void _activation_check_proc_04_func_1360489212(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_04_func_1059178847(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_553583927(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_04_func_827294313(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_c);
	_activation_check_proc_04_func_1569311349(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_777322632(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x7] &= _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_04_func_1440510999(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_LLUUID_7.mData[0xc];

}

void _activation_check_proc_04_func_1133190942(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x4] == 0x2) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_04_func_235964496(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 <<= _activatnvar_confusing_chararray_c[0x1];

}

void _activation_check_proc_04_func_363206846(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_04_func_2054416848(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1848815236(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_0)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_0 |= 0x9;

}

void _activation_check_proc_04_func_2085211331(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x2] &= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_04_func_1926472256(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_04_func_12627441(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_char_a;

}

void _activation_check_proc_04_func_1380912548(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_04_func_963468793(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_e = 0xb;

	_activation_check_proc_04_func_12627441(_activatnvar_confusing_char_a, _activatnvar_confusing_U8_9);
	_activation_check_proc_04_func_1926472256(_activatnvar_confusing_char_f);
	_activation_check_proc_04_func_1380912548(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_1643927448(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c *= 0x0;

}

void _activation_check_proc_04_func_1785402007(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x0] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_04_func_2125297245(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_04_func_1242126732(int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

	/* inline */ _activation_check_proc_04_func_662835277(_activatnvar_confusing_int_2);
}

void _activation_check_proc_04_func_1670083122(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("c7a6232e-9ec7-a0be-2f9a-9a5c73d503be");

}

void _activation_check_proc_04_func_496564262()
{
	
}

void _activation_check_proc_04_func_892557911(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 28; _activatnvar_strbuf_0[0] ^= 41; _activatnvar_strbuf_0[1] = 47; _activatnvar_strbuf_0[1] ^= 27; _activatnvar_strbuf_0[2] = 61; _activatnvar_strbuf_0[2] ^= 13; _activatnvar_strbuf_0[3] = 59; _activatnvar_strbuf_0[3] ^= 9; _activatnvar_strbuf_0[4] = 112; _activatnvar_strbuf_0[4] ^= 67; _activatnvar_strbuf_0[5] = 70; _activatnvar_strbuf_0[5] ^= 118; _activatnvar_strbuf_0[6] = 67; _activatnvar_strbuf_0[6] ^= 123; _activatnvar_strbuf_0[7] = 23; _activatnvar_strbuf_0[7] ^= 39; _activatnvar_strbuf_0[8] = 39; _activatnvar_strbuf_0[8] ^= 10; _activatnvar_strbuf_0[9] = 91; _activatnvar_strbuf_0[9] ^= 107; _activatnvar_strbuf_0[10] = 98; _activatnvar_strbuf_0[10] ^= 82; _activatnvar_strbuf_0[11] = 21; _activatnvar_strbuf_0[11] ^= 45; _activatnvar_strbuf_0[12] = 18; _activatnvar_strbuf_0[12] ^= 35; _activatnvar_strbuf_0[13] = 2; _activatnvar_strbuf_0[13] ^= 47; _activatnvar_strbuf_0[14] = 107; _activatnvar_strbuf_0[14] ^= 91; _activatnvar_strbuf_0[15] = 82; _activatnvar_strbuf_0[15] ^= 96; _activatnvar_strbuf_0[16] = 73; _activatnvar_strbuf_0[16] ^= 121; _activatnvar_strbuf_0[17] = 113; _activatnvar_strbuf_0[17] ^= 73; _activatnvar_strbuf_0[18] = 25; _activatnvar_strbuf_0[18] ^= 52; _activatnvar_strbuf_0[19] = 79; _activatnvar_strbuf_0[19] ^= 127; _activatnvar_strbuf_0[20] = 108; _activatnvar_strbuf_0[20] ^= 8; _activatnvar_strbuf_0[21] = 120; _activatnvar_strbuf_0[21] ^= 72; _activatnvar_strbuf_0[22] = 41; _activatnvar_strbuf_0[22] ^= 74; _activatnvar_strbuf_0[23] = 119; _activatnvar_strbuf_0[23] ^= 90; _activatnvar_strbuf_0[24] = 15; _activatnvar_strbuf_0[24] ^= 63; _activatnvar_strbuf_0[25] = 36; _activatnvar_strbuf_0[25] ^= 22; _activatnvar_strbuf_0[26] = 99; _activatnvar_strbuf_0[26] ^= 87; _activatnvar_strbuf_0[27] = 86; _activatnvar_strbuf_0[27] ^= 53; _activatnvar_strbuf_0[28] = 69; _activatnvar_strbuf_0[28] ^= 125; _activatnvar_strbuf_0[29] = 73; _activatnvar_strbuf_0[29] ^= 113; _activatnvar_strbuf_0[30] = 7; _activatnvar_strbuf_0[30] ^= 53; _activatnvar_strbuf_0[31] = 2; _activatnvar_strbuf_0[31] ^= 55; _activatnvar_strbuf_0[32] = 114; _activatnvar_strbuf_0[32] ^= 74; _activatnvar_strbuf_0[33] = 52; _activatnvar_strbuf_0[33] ^= 5; _activatnvar_strbuf_0[34] = 11; _activatnvar_strbuf_0[34] ^= 62; _activatnvar_strbuf_0[35] = 117; _activatnvar_strbuf_0[35] ^= 68; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_04_func_388574214(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_8)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_a ^= _activatnvar_confusing_char_8;

}

void _activation_check_proc_04_func_1439616081(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_834726830(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_04_func_1609900248(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_b[0x6] *= _activatnvar_confusing_LLUUID_1.mData[0xa];

}

void _activation_check_proc_04_func_956149636(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_04_func_1176225422(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_a.mData[0xf];

}

void _activation_check_proc_04_func_717151965(unsigned char* _activatnvar_name_digest, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_chararray_1[0x9] = _activatnvar_name_digest[0x3];

	_activation_check_proc_04_func_956149636(_activatnvar_confusing_char_7);
	_activation_check_proc_04_func_1176225422(_activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_04_func_857484800(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_04_func_270901435(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_04_func_236274027(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 32; _activatnvar_strbuf_0[0] ^= 17; _activatnvar_strbuf_0[1] = 34; _activatnvar_strbuf_0[1] ^= 18; _activatnvar_strbuf_0[2] = 85; _activatnvar_strbuf_0[2] ^= 102; _activatnvar_strbuf_0[3] = 1; _activatnvar_strbuf_0[3] ^= 53; _activatnvar_strbuf_0[4] = 27; _activatnvar_strbuf_0[4] ^= 121; _activatnvar_strbuf_0[5] = 59; _activatnvar_strbuf_0[5] ^= 93; _activatnvar_strbuf_0[6] = 27; _activatnvar_strbuf_0[6] ^= 125; _activatnvar_strbuf_0[7] = 113; _activatnvar_strbuf_0[7] ^= 71; _activatnvar_strbuf_0[8] = 120; _activatnvar_strbuf_0[8] ^= 85; _activatnvar_strbuf_0[9] = 74; _activatnvar_strbuf_0[9] ^= 40; _activatnvar_strbuf_0[10] = 53; _activatnvar_strbuf_0[10] ^= 2; _activatnvar_strbuf_0[11] = 93; _activatnvar_strbuf_0[11] ^= 105; _activatnvar_strbuf_0[12] = 27; _activatnvar_strbuf_0[12] ^= 43; _activatnvar_strbuf_0[13] = 114; _activatnvar_strbuf_0[13] ^= 95; _activatnvar_strbuf_0[14] = 94; _activatnvar_strbuf_0[14] ^= 110; _activatnvar_strbuf_0[15] = 4; _activatnvar_strbuf_0[15] ^= 98; _activatnvar_strbuf_0[16] = 30; _activatnvar_strbuf_0[16] ^= 124; _activatnvar_strbuf_0[17] = 11; _activatnvar_strbuf_0[17] ^= 111; _activatnvar_strbuf_0[18] = 61; _activatnvar_strbuf_0[18] ^= 16; _activatnvar_strbuf_0[19] = 73; _activatnvar_strbuf_0[19] ^= 120; _activatnvar_strbuf_0[20] = 121; _activatnvar_strbuf_0[20] ^= 26; _activatnvar_strbuf_0[21] = 33; _activatnvar_strbuf_0[21] ^= 67; _activatnvar_strbuf_0[22] = 8; _activatnvar_strbuf_0[22] ^= 110; _activatnvar_strbuf_0[23] = 28; _activatnvar_strbuf_0[23] ^= 49; _activatnvar_strbuf_0[24] = 1; _activatnvar_strbuf_0[24] ^= 53; _activatnvar_strbuf_0[25] = 28; _activatnvar_strbuf_0[25] ^= 42; _activatnvar_strbuf_0[26] = 95; _activatnvar_strbuf_0[26] ^= 106; _activatnvar_strbuf_0[27] = 105; _activatnvar_strbuf_0[27] ^= 10; _activatnvar_strbuf_0[28] = 91; _activatnvar_strbuf_0[28] ^= 107; _activatnvar_strbuf_0[29] = 2; _activatnvar_strbuf_0[29] ^= 51; _activatnvar_strbuf_0[30] = 81; _activatnvar_strbuf_0[30] ^= 53; _activatnvar_strbuf_0[31] = 23; _activatnvar_strbuf_0[31] ^= 37; _activatnvar_strbuf_0[32] = 110; _activatnvar_strbuf_0[32] ^= 95; _activatnvar_strbuf_0[33] = 28; _activatnvar_strbuf_0[33] ^= 126; _activatnvar_strbuf_0[34] = 7; _activatnvar_strbuf_0[34] ^= 99; _activatnvar_strbuf_0[35] = 47; _activatnvar_strbuf_0[35] ^= 26; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_04_func_1434353846(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_7 &= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_04_func_734546517(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_5, char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_9 |= 0x3;

	_activation_check_proc_04_func_1434353846(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_c, _activatnvar_confusing_char_7);
	/* inline */ _activation_check_proc_04_func_1643192953(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_6);
	_activation_check_proc_04_func_270901435(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_2, _activatnvar_confusing_bool_5);
	_activation_check_proc_04_func_236274027(_activatnvar_strbuf_0);
}

void _activation_check_proc_04_func_1691001426(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
	_activatnvar_confusing_chararray_1[0x7] ^= _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_04_func_751067632(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_chararray_4[0x2];

}

void _activation_check_proc_04_func_1783873773(unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_f;

	_activation_check_proc_04_func_751067632(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_04_func_1252149253(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 ^= 0x5;

}

void _activation_check_proc_04_func_691571229(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b ^= _activatnvar_confusing_int_d;

	/* inline */ _activation_check_proc_04_func_1975747879(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_1252149253(_activatnvar_confusing_char_6);
}

void _activation_check_proc_04_func_826580330(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	/* inline */ _activation_check_proc_04_func_145995641(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1924981317(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 ^= _activatnvar_confusing_int_9;

}

void _activation_check_proc_04_func_1675139682(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_369580797(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

	/* inline */ _activation_check_proc_04_func_1598875565();
}

void _activation_check_proc_04_func_507970362(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
	/* inline */ _activation_check_proc_04_func_1121577134(_activatnvar_ser_digest, _activatnvar_smd5);
}

void _activation_check_proc_04_func_485079643(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_04_func_1668984308(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_04_func_705650070(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_04_func_116225128(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_960631910()
{
	
}

void _activation_check_proc_04_func_2049991405(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_so)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
}

void _activation_check_proc_04_func_232861840(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_2[0x0] ^= _activatnvar_so.mData[0x1];

}

void _activation_check_proc_04_func_805561433(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_1)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_585951036(_activatnvar_confusing_int_1);
}

void _activation_check_proc_04_func_688599519(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_9[0x8] *= _activatnvar_confusing_chararray_2[0x1];

}

void _activation_check_proc_04_func_1092446072(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_f)
{
	
	/* inline */ _activation_check_proc_04_func_1805249746(_activatnvar_confusing_U8_f, _activatnvar_confusing_char_0);
}

void _activation_check_proc_04_func_1200480729(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_6)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xb] == _activatnvar_confusing_char_6) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_04_func_241591716(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_7 *= _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_04_func_418010530(LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_04_func_241591716(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_04_func_311775759(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_04_func_805795460(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_04_func_913219437(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_04_func_25516371(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_04_func_1930159641(_activatnvar_confusing_bool_3, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_04_func_1669154518(_activatnvar_confusing_int_4, _activatnvar_confusing_int_8);
	_activation_check_proc_04_func_525475929(_activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_04_func_765803854(_activatnvar_t0, _activatnvar_confusing_int_4, _activatnvar_combined_id);
}

void _activation_check_proc_04_func_525475929(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("aa303085-b8cb-5f04-f698-9670809f2b75");

}

void _activation_check_proc_04_func_1653190987(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x5] <<= _activatnvar_confusing_chararray_9[0x7];

}

void _activation_check_proc_04_func_1223450379(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_04_func_1238720027(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_04_func_1834260528(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_04_func_875290701(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_LLUUID_8.mData[0xe];

}

void _activation_check_proc_04_func_430201386(U8& _activatnvar_confusing_U8_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_f++;

	_activation_check_proc_04_func_875290701(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_04_func_254847123(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_720466352(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_04_func_720466352(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("881165ba-8b30-0058-d0a4-30a65c68e7a2");

}

void _activation_check_proc_04_func_254847123(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_04_func_1842492757(bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_04_func_1734670745(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_04_func_841657232(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_LLUUID_5.mData[0x8];

	/* inline */ _activation_check_proc_04_func_560221519(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_04_func_405314632(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_04_func_1734670745(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_1906301435(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 ^= _activatnvar_confusing_int_3;

}

void _activation_check_proc_04_func_2016052164(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

	_activation_check_proc_04_func_1906301435(_activatnvar_confusing_int_3, _activatnvar_confusing_int_0);
}

void _activation_check_proc_04_func_1764449175(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_0[0x3] <<= _activatnvar_confusing_chararray_4[0xd];

}

void _activation_check_proc_04_func_513941496(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
	_activatnvar_pos &= 7;
}

void _activation_check_proc_04_func_1490432062(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xa;

	_activation_check_proc_04_func_1764449175(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_4);
	_activation_check_proc_04_func_513941496(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_04_func_1127590016(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_04_func_1521441855(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_3 += _activatnvar_confusing_U8_b;

	/* inline */ _activation_check_proc_04_func_821515713(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_1479206417(_activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1479206417(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1390962391(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_04_func_877154527(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] >>= _activatnvar_mac_digest[0x2];

}

void _activation_check_proc_04_func_1319272115(bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_04_func_775195399(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
	/* inline */ _activation_check_proc_04_func_61720700(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_04_func_1851381897(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x4] *= _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_04_func_215104391(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_04_func_930487583(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xb] <<= _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_04_func_1856926633(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_9)
{
	
	/* inline */ _activation_check_proc_04_func_1930051247(_activatnvar_confusing_int_9, _activatnvar_confusing_int_3);
}

void _activation_check_proc_04_func_347331991(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_04_func_279985410(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_c.mData[0x2];

}

void _activation_check_proc_04_func_2085356790(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_04_func_1702803665(bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_04_func_392645162(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_04_func_392645162(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_04_func_282961644(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_1559714948(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_2010491404(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_04_func_1683745676(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_2 |= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_04_func_1045984468(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_04_func_1114211960(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	/* inline */ _activation_check_proc_04_func_376749413(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_04_func_1926488785(char& _activatnvar_confusing_char_7, U8& _activatnvar_pos)
{
	
	_activation_check_proc_04_func_359749432(_activatnvar_confusing_char_7);
	/* inline */ _activation_check_proc_04_func_1344519667(_activatnvar_pos);
}

void _activation_check_proc_04_func_359749432(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_04_func_721262434(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x3] += _activatnvar_ser_digest[0x8];

}

void _activation_check_proc_04_func_2094038763(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_8 *= _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_04_func_456632586(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d <<= _activatnvar_confusing_U8_4;

	/* inline */ _activation_check_proc_04_func_1216950813(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_e);
	_activation_check_proc_04_func_2094038763(_activatnvar_confusing_char_8, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_04_func_918385404(U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x3] != _activatnvar_t1) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_04_func_1960191449(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_b, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= _activatnvar_confusing_int_b;

	_activation_check_proc_04_func_918385404(_activatnvar_t1, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_04_func_594075886(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_04_func_139905243(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
	/* inline */ _activation_check_proc_04_func_362775359(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_04_func_2080304122(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_04_func_73571343(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 += 0x1;

}

void _activation_check_proc_04_func_553267746(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_U8_a &= _activatnvar_code.mData[0x0];

	_activation_check_proc_04_func_1921508541(_activatnvar_confusing_int_b);
}

void _activation_check_proc_04_func_1921508541(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_04_func_1323043189(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_04_func_1822210247(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_04_func_751005360(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_6, U8& _activatnvar_pos, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
	_activation_check_proc_04_func_1822210247(_activatnvar_pos);
	_activation_check_proc_04_func_1323043189(_activatnvar_pos);
	/* inline */ _activation_check_proc_04_func_1237343840(_activatnvar_confusing_int_6);
	/* inline */ _activation_check_proc_04_func_1320241876(_activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_04_func_1982372131(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

	/* inline */ _activation_check_proc_04_func_1877703844(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_04_func_855977301(_activatnvar_fscked, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_04_func_855977301(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_fscked;

}

void _activation_check_proc_04_func_1135810433(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_04_func_1765983034(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_1[0x9] <<= _activatnvar_confusing_chararray_3[0x0];

	_activation_check_proc_04_func_495415157(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_04_func_98912021(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_04_func_98912021(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_04_func_495415157(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x0] &= _activatnvar_confusing_LLUUID_e.mData[0x7];

}

void _activation_check_proc_04_func_2032930218(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_04_func_910547827(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x7] &= _activatnvar_mac_digest[0xd];

}

void _activation_check_proc_04_func_490374435(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_2, char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 123; _activatnvar_strbuf_0[0] ^= 58; _activatnvar_strbuf_0[1] = 96; _activatnvar_strbuf_0[1] ^= 3; _activatnvar_strbuf_0[2] = 79; _activatnvar_strbuf_0[2] ^= 59; _activatnvar_strbuf_0[3] = 33; _activatnvar_strbuf_0[3] ^= 72; _activatnvar_strbuf_0[4] = 46; _activatnvar_strbuf_0[4] ^= 88; _activatnvar_strbuf_0[5] = 16; _activatnvar_strbuf_0[5] ^= 113; _activatnvar_strbuf_0[6] = 6; _activatnvar_strbuf_0[6] ^= 114; _activatnvar_strbuf_0[7] = 99; _activatnvar_strbuf_0[7] ^= 10; _activatnvar_strbuf_0[8] = 59; _activatnvar_strbuf_0[8] ^= 84; _activatnvar_strbuf_0[9] = 116; _activatnvar_strbuf_0[9] ^= 26; _activatnvar_strbuf_0[10] = 109; _activatnvar_strbuf_0[10] ^= 46; _activatnvar_strbuf_0[11] = 119; _activatnvar_strbuf_0[11] ^= 24; _activatnvar_strbuf_0[12] = 6; _activatnvar_strbuf_0[12] ^= 98; _activatnvar_strbuf_0[13] = 20; _activatnvar_strbuf_0[13] ^= 113; _activatnvar_strbuf_0[14] = 0;
	_activation_check_proc_04_func_910547827(_activatnvar_mac_digest, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_04_func_24944362(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_3;

	_activation_check_proc_04_func_2118301857(_activatnvar_confusing_LLUUID_6, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_04_func_561402878(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_2118301857(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] ^= _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_04_func_340122425(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a |= _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_04_func_878170291(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x2] += _activatnvar_mac_digest[0xf];

	_activation_check_proc_04_func_531386625(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_04_func_531386625(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_04_func_446964646(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_2[0x0] *= _activatnvar_confusing_LLUUID_8.mData[0xa];

}

void _activation_check_proc_04_func_1374817289(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_c.mData[0x9];

}

void _activation_check_proc_04_func_745686729(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1305599530(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_04_func_1900431433(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1384860937(unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_f ^= _activatnvar_confusing_int_7;

	/* inline */ _activation_check_proc_04_func_1677129541(_activatnvar_confusing_chararray_0, _activatnvar_code);
}

void _activation_check_proc_04_func_808734471(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1906342039(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_0 *= _activatnvar_confusing_char_9;

}

void _activation_check_proc_04_func_338324155(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_04_func_1135136567(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_b |= _activatnvar_confusing_int_0;

}

void _activation_check_proc_04_func_1788493668(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[7] = _activatnvar_fscked.mData[7];
}

void _activation_check_proc_04_func_241353346(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_04_func_944166135(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xa] != 0xe) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_04_func_1614346915(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x2] >>= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_04_func_161822072(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_04_func_1614346915(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_04_func_860927277(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] *= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_04_func_1914657648()
{
	
}

void _activation_check_proc_04_func_1231554415(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_1 <<= 0x3;

}

void _activation_check_proc_04_func_721314517(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_04_func_290373958(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_290373958(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1386990067(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_602824996()
{
	
}

void _activation_check_proc_04_func_1504302104(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	
	_activation_check_proc_04_func_1759403458(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_04_func_1759403458(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("aab21277-ef01-e4c8-d69c-0ec2edbe209e");

}

void _activation_check_proc_04_func_50628449(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_chararray_0[0xe];

	_activation_check_proc_04_func_1972881240(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_04_func_1972881240(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xa] <<= _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_04_func_81410042(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 *= _activatnvar_confusing_int_2;

}

void _activation_check_proc_04_func_1760264916(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x0] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_04_func_1352962532(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x3] == 0xe) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_04_func_78828531(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_04_func_1174985050(char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
	_activation_check_proc_04_func_78828531(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1591874359(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x4] == 0xa) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_04_func_1994960539(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

	/* inline */ _activation_check_proc_04_func_619901035(_activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_c, _activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_04_func_1024219724(_activatnvar_confusing_U8_4, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_04_func_1554973897(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x6] <<= _activatnvar_confusing_LLUUID_b.mData[0x6];

	/* inline */ _activation_check_proc_04_func_942791722(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_04_func_2120941298(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_04_func_1672855220(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x0] |= _activatnvar_name_digest[0xa];

}

void _activation_check_proc_04_func_2027780011(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 <<= _activatnvar_confusing_char_9;

}

void _activation_check_proc_04_func_2105972281(unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_9)
{
	
	_activation_check_proc_04_func_2027780011(_activatnvar_confusing_char_9, _activatnvar_confusing_char_7);
	_activation_check_proc_04_func_1672855220(_activatnvar_name_digest, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_04_func_1886035291(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_b |= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_04_func_1128018640(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_04_func_2065365087(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_c[0x7] <<= _activatnvar_confusing_LLUUID_2.mData[0xe];

}

void _activation_check_proc_04_func_83665586(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] |= _activatnvar_confusing_LLUUID_6.mData[0x4];

}

void _activation_check_proc_04_func_1374307953(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_chararray_4[0xf] >>= _activatnvar_confusing_LLUUID_4.mData[0xd];

	/* inline */ _activation_check_proc_04_func_668886800(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_8, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_04_func_1239431409(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_04_func_212559672(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_04_func_298297057();
	/* inline */ _activation_check_proc_04_func_1737282645();
}

void _activation_check_proc_04_func_1339330756(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_char_9 ^= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_04_func_2072357219(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_f.mData[0x1];

}

void _activation_check_proc_04_func_1032942094(bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_5 = 0x3;

	_activation_check_proc_04_func_1996071663(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1996071663(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1610000685(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_04_func_62860798(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("17f15eed-ccd9-2704-cc4b-9f72737fbb00");

}

void _activation_check_proc_04_func_524035035(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] |= _activatnvar_confusing_LLUUID_c.mData[0xe];

}

void _activation_check_proc_04_func_107128670(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_chararray_1[0x9];

}

void _activation_check_proc_04_func_1137623923(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xf] &= _activatnvar_confusing_LLUUID_8.mData[0x6];

	_activation_check_proc_04_func_83536018(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_04_func_107128670(_activatnvar_confusing_U8_7, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_04_func_83536018(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_681318834(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_04_func_546406297(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_04_func_203147663(_activatnvar_confusing_bool_1, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_04_func_546406297(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_3.mData[0xf] >>= _activatnvar_confusing_LLUUID_f.mData[0x9];

}

void _activation_check_proc_04_func_203147663(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x2] == 0x4) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_04_func_1868271324(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_04_func_834851687(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	_activatnvar_confusing_LLUUID_6.mData[0x1] >>= _activatnvar_confusing_chararray_3[0xf];

	/* inline */ _activation_check_proc_04_func_1738612765(_activatnvar_lace, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_04_func_997556219(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_04_func_1219127738(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0xa] *= _activatnvar_confusing_LLUUID_d.mData[0x6];

	/* inline */ _activation_check_proc_04_func_975879196(_activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_int_e);
}

void _activation_check_proc_04_func_850447464(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_e;

	
}

void _activation_check_proc_04_func_196112251(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] |= _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_04_func_2130858623(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_04_func_982474219(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1602264635(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xb] |= _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_04_func_1721133899(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] ^= _activatnvar_confusing_chararray_b[0x0];

	_activation_check_proc_04_func_982474219(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_04_func_1562957068(_activatnvar_confusing_U8_8, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_04_func_1815099052(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_04_func_1602264635(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_04_func_744749627(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_04_func_1700006835(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xb] += _activatnvar_confusing_chararray_d[0x7];

	/* inline */ _activation_check_proc_04_func_1403191917();
	_activation_check_proc_04_func_744749627(_activatnvar_confusing_char_e);
}

void _activation_check_proc_04_func_977762815(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_04_func_1516301585(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] = _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_04_func_493425054(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xf] <<= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_04_func_21964745(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_7;

	_activation_check_proc_04_func_493425054(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_04_func_981926487()
{
	
}

void _activation_check_proc_04_func_386942849(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("4e5c0ef0-813c-0bf2-66b3-1350b2b7cba1");

	_activation_check_proc_04_func_981926487();
}

void _activation_check_proc_04_func_1079568272(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_b.mData[0xa] *= _activatnvar_confusing_chararray_6[0x2];

}

void _activation_check_proc_04_func_296164976(bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x7] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_b = true;

	/* inline */ _activation_check_proc_04_func_1355680570(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_04_func_1506580855(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_a.mData[0x0] >>= _activatnvar_confusing_chararray_2[0x0];

}

void _activation_check_proc_04_func_136498769(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x6] == 0xe) _activatnvar_confusing_bool_f = false;

	_activation_check_proc_04_func_1506580855(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_04_func_830510242(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 100; _activatnvar_strbuf_0[0] ^= 93; _activatnvar_strbuf_0[1] = 75; _activatnvar_strbuf_0[1] ^= 123; _activatnvar_strbuf_0[2] = 75; _activatnvar_strbuf_0[2] ^= 120; _activatnvar_strbuf_0[3] = 10; _activatnvar_strbuf_0[3] ^= 62; _activatnvar_strbuf_0[4] = 54; _activatnvar_strbuf_0[4] ^= 84; _activatnvar_strbuf_0[5] = 74; _activatnvar_strbuf_0[5] ^= 46; _activatnvar_strbuf_0[6] = 34; _activatnvar_strbuf_0[6] ^= 23; _activatnvar_strbuf_0[7] = 107; _activatnvar_strbuf_0[7] ^= 92; _activatnvar_strbuf_0[8] = 43; _activatnvar_strbuf_0[8] ^= 6; _activatnvar_strbuf_0[9] = 17; _activatnvar_strbuf_0[9] ^= 115; _activatnvar_strbuf_0[10] = 68; _activatnvar_strbuf_0[10] ^= 115; _activatnvar_strbuf_0[11] = 84; _activatnvar_strbuf_0[11] ^= 48; _activatnvar_strbuf_0[12] = 72; _activatnvar_strbuf_0[12] ^= 112; _activatnvar_strbuf_0[13] = 39; _activatnvar_strbuf_0[13] ^= 10; _activatnvar_strbuf_0[14] = 107; _activatnvar_strbuf_0[14] ^= 95; _activatnvar_strbuf_0[15] = 23; _activatnvar_strbuf_0[15] ^= 116; _activatnvar_strbuf_0[16] = 78; _activatnvar_strbuf_0[16] ^= 44; _activatnvar_strbuf_0[17] = 46; _activatnvar_strbuf_0[17] ^= 76; _activatnvar_strbuf_0[18] = 54; _activatnvar_strbuf_0[18] ^= 27; _activatnvar_strbuf_0[19] = 74; _activatnvar_strbuf_0[19] ^= 114; _activatnvar_strbuf_0[20] = 4; _activatnvar_strbuf_0[20] ^= 97; _activatnvar_strbuf_0[21] = 6; _activatnvar_strbuf_0[21] ^= 100; _activatnvar_strbuf_0[22] = 4; _activatnvar_strbuf_0[22] ^= 98; _activatnvar_strbuf_0[23] = 27; _activatnvar_strbuf_0[23] ^= 54; _activatnvar_strbuf_0[24] = 123; _activatnvar_strbuf_0[24] ^= 79; _activatnvar_strbuf_0[25] = 21; _activatnvar_strbuf_0[25] ^= 35; _activatnvar_strbuf_0[26] = 76; _activatnvar_strbuf_0[26] ^= 121; _activatnvar_strbuf_0[27] = 15; _activatnvar_strbuf_0[27] ^= 108; _activatnvar_strbuf_0[28] = 65; _activatnvar_strbuf_0[28] ^= 113; _activatnvar_strbuf_0[29] = 79; _activatnvar_strbuf_0[29] ^= 124; _activatnvar_strbuf_0[30] = 106; _activatnvar_strbuf_0[30] ^= 9; _activatnvar_strbuf_0[31] = 115; _activatnvar_strbuf_0[31] ^= 65; _activatnvar_strbuf_0[32] = 74; _activatnvar_strbuf_0[32] ^= 123; _activatnvar_strbuf_0[33] = 42; _activatnvar_strbuf_0[33] ^= 75; _activatnvar_strbuf_0[34] = 78; _activatnvar_strbuf_0[34] ^= 42; _activatnvar_strbuf_0[35] = 85; _activatnvar_strbuf_0[35] ^= 96; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_04_func_1298766425(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_04_func_824042084(char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_d[0x0] = _activatnvar_confusing_chararray_8[0x4];

	/* inline */ _activation_check_proc_04_func_329260038(_activatnvar_confusing_U8_6, _activatnvar_confusing_U8_a);
	_activation_check_proc_04_func_1298766425(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_2);
	_activation_check_proc_04_func_830510242(_activatnvar_strbuf_0);
}

void _activation_check_proc_04_func_716569543(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_894947096(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_c, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_c++;

	/* inline */ _activation_check_proc_04_func_1250519879(_activatnvar_confusing_chararray_9, _activatnvar_fscked);
	_activation_check_proc_04_func_716569543(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1352395125(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_685497624(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_04_func_1860202023(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	_activation_check_proc_04_func_1654537168();
}

void _activation_check_proc_04_func_1654537168()
{
	
}

void _activation_check_proc_04_func_1593902775(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1867050157(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_c[0xa] &= _activatnvar_section2.mData[0x7];

	/* inline */ _activation_check_proc_04_func_379786927(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_04_func_143014850(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_0.mData[0x8];

}

void _activation_check_proc_04_func_1442233578(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_04_func_943093102(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_char_9;

}

void _activation_check_proc_04_func_1967684430(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_f.mData[0x7] >>= _activatnvar_confusing_chararray_2[0xf];

	_activatnvar_confusing_bool_3 &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_04_func_632746770(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_04_func_165869951(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_04_func_1371188435(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x2] |= _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_04_func_2014429095(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	
	_activation_check_proc_04_func_1761357168(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_04_func_1761357168(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xc] <<= _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_04_func_953366036(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_583117619(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x6] <<= _activatnvar_confusing_LLUUID_6.mData[0xf];

	/* inline */ _activation_check_proc_04_func_178740075(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
	_activation_check_proc_04_func_953366036(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1348269604(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 <<= _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_04_func_697525347(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
	_activation_check_proc_04_func_1883193157(_activatnvar_t1, _activatnvar_t0);
}

void _activation_check_proc_04_func_1883193157(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_04_func_1542467926(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_04_func_823649457(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f <<= _activatnvar_confusing_char_1;

}

void _activation_check_proc_04_func_286385552(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_7 = _activatnvar_confusing_int_4;

}

void _activation_check_proc_04_func_814685341(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] = _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_04_func_1017318520(bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_04_func_2025232513(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_04_func_1820565265(_activatnvar_confusing_U8_8, _activatnvar_confusing_chararray_1);
	_activation_check_proc_04_func_1542467926(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_1);
	_activation_check_proc_04_func_814685341(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_7);
	_activation_check_proc_04_func_823649457(_activatnvar_confusing_char_1, _activatnvar_confusing_U8_f);
	_activation_check_proc_04_func_286385552(_activatnvar_confusing_int_7, _activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_04_func_589291298(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_04_func_1045346897(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_04_func_948372766(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_so;

}

void _activation_check_proc_04_func_822156933(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_04_func_1414838183(int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_2.mData[0x4];

	_activation_check_proc_04_func_822156933(_activatnvar_confusing_int_e);
}

void _activation_check_proc_04_func_1210784388(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_b[0x9] >>= _activatnvar_confusing_LLUUID_6.mData[0xa];

}

void _activation_check_proc_04_func_20159152(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_5 >>= _activatnvar_confusing_char_3;

	_activation_check_proc_04_func_1210784388(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_826521791(U8& _activatnvar_t0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_pos, LLUUID& _activatnvar_secret, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
	_activatnvar_confusing_LLUUID_d.mData[0x6] >>= _activatnvar_secret.mData[0x6];

	_activation_check_proc_04_func_1272627950(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_04_func_1272627950(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_04_func_747860013(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_6;

	
}

void _activation_check_proc_04_func_119802882(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_3 &= _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_04_func_1675676728(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_a.mData[0x7];

	/* inline */ _activation_check_proc_04_func_2042894258(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_736218153(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x3] ^= _activatnvar_confusing_chararray_3[0x7];

	/* inline */ _activation_check_proc_04_func_1489586798(_activatnvar_confusing_char_3);
}

void _activation_check_proc_04_func_1129885643(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_04_func_1350780873(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
	/* inline */ _activation_check_proc_04_func_758566965(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_04_func_292792506(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("03b8802b-8112-1237-9c33-5b073e08fe3d");

}

void _activation_check_proc_04_func_1925441817(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_04_func_978506256(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_LLUUID_7.mData[0x5];

	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_f;

	_activation_check_proc_04_func_1214892208(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_04_func_1705405740(_activatnvar_confusing_int_8);
}

void _activation_check_proc_04_func_1214892208(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_04_func_1577309314(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
	/* inline */ _activation_check_proc_04_func_1432994536(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_04_func_2102664847(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_lace;

}

void _activation_check_proc_04_func_385204888(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 |= 0x2;

}

void _activation_check_proc_04_func_607266496(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x2] *= _activatnvar_confusing_chararray_5[0x7];

	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_04_func_682256456(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_04_func_1144642892(unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] |= _activatnvar_confusing_chararray_d[0x0];

	_activation_check_proc_04_func_813057449(_activatnvar_confusing_int_6);
}

void _activation_check_proc_04_func_813057449(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 <<= 0x5;

}

void _activation_check_proc_04_func_1511725895(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_04_func_1718533038(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_0)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_0 |= 0x4;

}

void _activation_check_proc_04_func_384375789(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_399479658(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_0++;

	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_a &= 0xd;

}

void _activation_check_proc_04_func_892621573(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_04_func_2069823101(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_254024706(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_3 >>= _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_04_func_181080799(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_60593627(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

	_activation_check_proc_04_func_181080799(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_523593941(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_655655249(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_f *= _activatnvar_confusing_char_4;

	_activation_check_proc_04_func_523593941(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_04_func_1918986255(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_04_func_134403644(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_822884338(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_chararray_2[0xd];

}

void _activation_check_proc_04_func_410597364(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_04_func_615840357(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x4] >>= _activatnvar_confusing_LLUUID_5.mData[0x0];

}

void _activation_check_proc_04_func_2144212369(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_9, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_f, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_04_func_232253837(_activatnvar_confusing_char_2, _activatnvar_confusing_U8_8);
	/* inline */ _activation_check_proc_04_func_172513338(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_strbuf_0);
	_activation_check_proc_04_func_822884338(_activatnvar_confusing_chararray_2, _activatnvar_confusing_U8_9);
	_activation_check_proc_04_func_410597364(_activatnvar_confusing_int_f);
	_activation_check_proc_04_func_615840357(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_04_func_1815580519(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_04_func_1451961116(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1461331932(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_04_func_1833868045(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_04_func_2015973215(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0x7;

}

void _activation_check_proc_04_func_1043932212(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_04_func_1532900421(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] &= _activatnvar_section2.mData[0x1];

	_activation_check_proc_04_func_1089360085(_activatnvar_combined_id, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_04_func_1089360085(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xe] |= _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_04_func_1117788405(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_2.mData[0xb];

}

void _activation_check_proc_04_func_1666019048(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f += 0x2;

}

void _activation_check_proc_04_func_747929001(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_0)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
	/* inline */ _activation_check_proc_04_func_2145452592(_activatnvar_t0, _activatnvar_so);
	_activation_check_proc_04_func_467037321(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_4, _activatnvar_confusing_int_0);
	_activation_check_proc_04_func_444164853(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_3);
	_activation_check_proc_04_func_216017816(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_04_func_444164853(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_4[0xd] <<= _activatnvar_confusing_chararray_3[0x1];

}

void _activation_check_proc_04_func_467037321(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_04_func_216017816(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_04_func_1870284677(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 &= _activatnvar_combined_id.mData[0x6];

}

void _activation_check_proc_04_func_676464883(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_7[0xc] ^= _activatnvar_confusing_LLUUID_3.mData[0xb];

}

void _activation_check_proc_04_func_1183360509(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_8.mData[0x1] >>= _activatnvar_confusing_chararray_f[0x9];

}

void _activation_check_proc_04_func_268563595(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_04_func_148296488(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_chararray_3[0x6] |= _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_04_func_908005550(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_902714783(_activatnvar_confusing_int_7);
	_activation_check_proc_04_func_343115448(_activatnvar_confusing_bool_4, _activatnvar_confusing_U8_c, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_e);
	_activation_check_proc_04_func_1219094441(_activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_04_func_98621426(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_04_func_902714783(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 *= 0x9;

}

void _activation_check_proc_04_func_1219094441(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("c1f1f5b0-2462-046a-702c-b59e6ef1853a");

}

void _activation_check_proc_04_func_343115448(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xb] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_04_func_1699645796(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_04_func_1322823780(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_04_func_1706279917(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] *= _activatnvar_confusing_chararray_c[0x4];

}

void _activation_check_proc_04_func_467198447(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 += _activatnvar_confusing_chararray_0[0xe];

	_activation_check_proc_04_func_1706279917(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_1716145774(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("4e7822b4-f22a-5183-2f2a-8c8440c07236");

	_activatnvar_pos |= 8;
}

void _activation_check_proc_04_func_68425134(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_04_func_865086518()
{
	
}

void _activation_check_proc_04_func_1468069572(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_04_func_1716067228(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_int_e += 0x3;

	/* inline */ _activation_check_proc_04_func_78830974(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_2042217743(_activatnvar_fscked, _activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_04_func_429618291(_activatnvar_secret, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_04_func_2042217743(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] <<= _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_04_func_1458500787(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x9] != 0x4) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_04_func_403188503()
{
	
}

void _activation_check_proc_04_func_278321149(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a >>= _activatnvar_confusing_chararray_b[0xd];

	/* inline */ _activation_check_proc_04_func_1312212786(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_3, _activatnvar_confusing_char_2);
	_activation_check_proc_04_func_403188503();
}

void _activation_check_proc_04_func_445464709(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x2] ^= _activatnvar_confusing_LLUUID_a.mData[0x2];

}

void _activation_check_proc_04_func_249607438(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_2107701273(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x6] == 0x5) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_04_func_1116127322(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_04_func_755718797(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x5] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_04_func_765626894(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_2131661225(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_04_func_742003785(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_1 |= _activatnvar_lace.mData[0x8];

}

void _activation_check_proc_04_func_1952785061(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_pos, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_combined_id)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_c <<= _activatnvar_confusing_char_c;

	/* inline */ _activation_check_proc_04_func_520042859(_activatnvar_confusing_char_5, _activatnvar_combined_id, _activatnvar_pos, _activatnvar_confusing_bool_1, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_04_func_22589686(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_04_func_401414057(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_04_func_1818865775(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_04_func_202293320(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_1[0xb] ^= _activatnvar_secret.mData[0x6];

}

void _activation_check_proc_04_func_483931566(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_section2.mData[0x0];

}

void _activation_check_proc_04_func_1637544134(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_U8_4 = _activatnvar_so.mData[0x2];

}

void _activation_check_proc_04_func_992124739(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_8[0x1] |= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_04_func_1223848783(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_d >>= _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_04_func_1965608211(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_c.mData[0xa] |= _activatnvar_name_digest[0x9];

}

void _activation_check_proc_04_func_551591719(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 |= 0x0;

}

void _activation_check_proc_04_func_1327892779(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_6)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_b ^= _activatnvar_confusing_U8_c;

	_activation_check_proc_04_func_551591719(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_04_func_1966221938(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_c, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_04_func_1734378467(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_04_func_869427654(_activatnvar_confusing_int_c);
}

void _activation_check_proc_04_func_869427654(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_04_func_1314290381(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activatnvar_confusing_LLUUID_b.mData[0x0] *= _activatnvar_combined_id.mData[0xb];

}

void _activation_check_proc_04_func_2022484159(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] <<= _activatnvar_confusing_LLUUID_d.mData[0x9];

}

void _activation_check_proc_04_func_2010060078(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xe] += _activatnvar_confusing_LLUUID_1.mData[0xd];

	/* inline */ _activation_check_proc_04_func_1715044910(_activatnvar_confusing_U8_c);
	/* inline */ _activation_check_proc_04_func_1218993785(_activatnvar_section1, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_04_func_1401631126(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_04_func_96418214(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_1 = false;

	_activation_check_proc_04_func_1401631126(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_1514551306(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_f.mData[0x5];

	_activation_check_proc_04_func_1938569621(_activatnvar_confusing_chararray_3, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_04_func_1938569621(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 >>= _activatnvar_confusing_chararray_3[0x5];

}

void _activation_check_proc_04_func_1061670251(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_04_func_1447253854(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_643938743(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_04_func_643938743(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] ^= _activatnvar_confusing_LLUUID_c.mData[0x7];

}

void _activation_check_proc_04_func_615859737(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_04_func_128923434(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_04_func_1766210471(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_2027592189(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_1834029775();
}

void _activation_check_proc_04_func_1834029775()
{
	
}

void _activation_check_proc_04_func_1104663823(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_04_func_692758838(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_0;

	/* inline */ _activation_check_proc_04_func_2038191397(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_b);
	_activation_check_proc_04_func_1104663823(_activatnvar_t0);
}

void _activation_check_proc_04_func_850482219(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_284547470(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_509984440(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_chararray_4[0x6];

	_activation_check_proc_04_func_1755006315(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_2);
	_activation_check_proc_04_func_953497547(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_d, _activatnvar_doaccount);
}

void _activation_check_proc_04_func_953497547(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_d = _activatnvar_doaccount;

}

void _activation_check_proc_04_func_1755006315(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_04_func_619506713()
{
	
}

void _activation_check_proc_04_func_1086670631(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_04_func_722602360(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("94ec2f8a-d152-3980-abd0-d235d2432566");

}

void _activation_check_proc_04_func_1262221954(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_04_func_1388965592(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_1211757183(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_04_func_364130328(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_6, int& _activatnvar_confusing_int_a, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_U8_0 >>= 0x2;

	_activation_check_proc_04_func_1642878832(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_04_func_1298524389(_activatnvar_confusing_bool_3, _activatnvar_confusing_U8_6, _activatnvar_confusing_char_d);
}

void _activation_check_proc_04_func_1642878832(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_04_func_1331294903(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x2] >>= _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_04_func_631187668(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0x8;

}

void _activation_check_proc_04_func_895975840(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_section1.mData[0x4];

}

void _activation_check_proc_04_func_635764698(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_04_func_895975840(_activatnvar_section1, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_04_func_1193645614(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1139244011(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_04_func_441373272(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x8] >>= _activatnvar_secret.mData[0xf];

}

void _activation_check_proc_04_func_1218636263(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_441373272(_activatnvar_secret, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_04_func_711333768(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x5] == 0x8) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_04_func_1400491960(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_04_func_455301526(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] = _activatnvar_confusing_LLUUID_3.mData[0x8];

}

void _activation_check_proc_04_func_1502565562(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_char_a++;

	_activation_check_proc_04_func_2005390105(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_04_func_1503621486(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_2005390105(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_116453603(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_04_func_1551752639(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_chararray_8[0xe] |= _activatnvar_combined_id.mData[0xb];

	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_04_func_130310939(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_04_func_434481833(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] ^= _activatnvar_confusing_LLUUID_3.mData[0x2];

}

void _activation_check_proc_04_func_306646280(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 <<= _activatnvar_confusing_chararray_9[0x2];

	_activation_check_proc_04_func_1052898105(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_04_func_1052898105(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_04_func_245986170(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1037441520(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_04_func_1192855826(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_04_func_1896197916(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_3;

	/* inline */ _activation_check_proc_04_func_518230109(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_04_func_603440078(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_LLUUID_5.mData[0xd];

}

void _activation_check_proc_04_func_405948827(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_chararray_a[0x3];

	_activation_check_proc_04_func_603440078(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_04_func_1289085022(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_650160594(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	/* inline */ _activation_check_proc_04_func_1727801012(_activatnvar_confusing_int_4);
	_activation_check_proc_04_func_1608923826(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_d);
	_activation_check_proc_04_func_319194925(_activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_1608923826(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] |= _activatnvar_confusing_chararray_d[0xa];

}

void _activation_check_proc_04_func_319194925(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_04_func_1688197193()
{
	
}

void _activation_check_proc_04_func_1472402991(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_846162052(U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_U8_f;

}

void _activation_check_proc_04_func_496045908(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_a, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] = _activatnvar_confusing_LLUUID_7.mData[0x9];

	/* inline */ _activation_check_proc_04_func_1756727743(_activatnvar_generic_bool_1, _activatnvar_lace, _activatnvar_confusing_int_1, _activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_generic_bool_0);
	_activation_check_proc_04_func_566415651(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_U8_b);
	/* inline */ _activation_check_proc_04_func_1467738596(_activatnvar_confusing_int_a);
	_activation_check_proc_04_func_846162052(_activatnvar_confusing_U8_8, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_04_func_566415651(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_LLUUID_3.mData[0xc];

}

void _activation_check_proc_04_func_1792608810(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_e = _activatnvar_confusing_char_d;

}

void _activation_check_proc_04_func_947509026(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_LLUUID_a.mData[0xb] ^= _activatnvar_confusing_LLUUID_7.mData[0x8];

	/* inline */ _activation_check_proc_04_func_2054462311();
	/* inline */ _activation_check_proc_04_func_1292142772(_activatnvar_confusing_int_8);
}

void _activation_check_proc_04_func_1106569285(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
	/* inline */ _activation_check_proc_04_func_695111999(_activatnvar_confusing_bool_8, _activatnvar_t0, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_04_func_491073804(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_04_func_2006125736(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_04_func_2069070912(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_04_func_348372279()
{
	
}

void _activation_check_proc_04_func_1027543647(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_6, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	/* inline */ _activation_check_proc_04_func_1487584038(_activatnvar_confusing_U8_6, _activatnvar_confusing_char_6);
}

void _activation_check_proc_04_func_239795575(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_04_func_852810568(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_d >>= 0x9;

}

void _activation_check_proc_04_func_823059472(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1857044880(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_41039871(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x9] ^= _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_04_func_1930609788(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] |= _activatnvar_confusing_chararray_5[0x4];

	_activation_check_proc_04_func_41039871(_activatnvar_fscked, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_04_func_709813660(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b <<= _activatnvar_generic_iterator;

}

void _activation_check_proc_04_func_1544882280(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_04_func_1578429275(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

	/* inline */ _activation_check_proc_04_func_1841482311(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_04_func_1044896639(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_996445224(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_1;

	/* inline */ _activation_check_proc_04_func_1236815093(_activatnvar_confusing_chararray_a, _activatnvar_confusing_U8_2);
	/* inline */ _activation_check_proc_04_func_809833948(_activatnvar_confusing_bool_3, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_04_func_1940098540(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_244124987(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1565947451(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_5;

	_activation_check_proc_04_func_1940098540(_activatnvar_secret, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_04_func_244124987(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_619975559(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_LLUUID_9.mData[0xe];

}

void _activation_check_proc_04_func_763401204(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_04_func_1499363089(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_f <<= _activatnvar_confusing_char_3;

}

void _activation_check_proc_04_func_1771200587(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xd] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_04_func_1224246764(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xe] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_04_func_96318144(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("47017c40-800e-b52e-97e9-64604347209b");

}

void _activation_check_proc_04_func_1586989751(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_04_func_96318144(_activatnvar_confusing_LLUUID_5);
	_activation_check_proc_04_func_455410225(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_04_func_1224246764(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_a, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_04_func_455410225(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x7] != 0xc) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_04_func_644107639(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_combined_id)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_f ^= _activatnvar_confusing_char_9;

	_activatnvar_confusing_char_1 |= _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_04_func_492967581(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_4[0xb] &= _activatnvar_confusing_chararray_f[0xd];

	_activation_check_proc_04_func_644107639(_activatnvar_confusing_char_f, _activatnvar_confusing_char_1, _activatnvar_confusing_char_9, _activatnvar_confusing_bool_a, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_04_func_790372354(_activatnvar_confusing_char_3);
}

void _activation_check_proc_04_func_987873224(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_04_func_2054043864(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_799628099(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_04_func_166331314(int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_int_7 *= 0x7;

	_activation_check_proc_04_func_990735336(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_04_func_990735336(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_04_func_756257619(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
	/* inline */ _activation_check_proc_04_func_415440029(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_04_func_1522937979(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1162186051(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_04_func_2072138965(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_747190566(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_2105024877(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_04_func_2072138965(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_2105024877(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("49e092fa-1105-6deb-2c4e-7299e5c5e77e");

}

void _activation_check_proc_04_func_1202432921(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_113036237(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_04_func_703267928(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_2007940338(_activatnvar_t1, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_04_func_1762839792(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_1440725588(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1440725588(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_683401739(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1305718062(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_feat, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_683401739(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_04_func_1616479538(_activatnvar_confusing_bool_e, _activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_b, _activatnvar_feat, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_04_func_301444623(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_04_func_1340105806(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_04_func_164713527(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_code;

}

void _activation_check_proc_04_func_1000726504(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_04_func_2059894685(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_04_func_201883395(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_2.mData[0x5];

}

void _activation_check_proc_04_func_1384518648(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activatnvar_pos |= 8;
}

void _activation_check_proc_04_func_1001617976(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_04_func_325156178()
{
	
}

void _activation_check_proc_04_func_760796329(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1997208100(char& _activatnvar_confusing_char_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_04_func_94930961(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_secret.mData[0x4];

}

void _activation_check_proc_04_func_222540831(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_a *= 0xc;

	/* inline */ _activation_check_proc_04_func_1784822313();
}

void _activation_check_proc_04_func_1976836393(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0x4] &= _activatnvar_lace.mData[0xf];

	_activation_check_proc_04_func_1591570595(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_04_func_1591570595(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_04_func_416781401(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_04_func_1201852980(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_1 <<= 0x9;

}

void _activation_check_proc_04_func_1764161133(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_U8_c++;

	/* inline */ _activation_check_proc_04_func_350444010(_activatnvar_confusing_bool_e, _activatnvar_confusing_char_f, _activatnvar_confusing_char_b);
}

void _activation_check_proc_04_func_2030846214(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x5] *= _activatnvar_lace.mData[0x6];

	
	_activation_check_proc_04_func_1171846329(_activatnvar_confusing_int_b, _activatnvar_confusing_int_6, _activatnvar_confusing_char_5);
	_activation_check_proc_04_func_558524905(_activatnvar_confusing_chararray_7);
}

void _activation_check_proc_04_func_558524905(unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xf] *= _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_04_func_1171846329(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_6, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

	_activatnvar_confusing_int_b += _activatnvar_confusing_int_6;

}

void _activation_check_proc_04_func_270463934(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_char_0++;

	/* inline */ _activation_check_proc_04_func_1800194600(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_1599592831(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_04_func_1599592831(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_04_func_1724853131(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_04_func_104406479(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_doaccount;

}

void _activation_check_proc_04_func_60351079(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_LLUUID_b.mData[0x4];

	/* inline */ _activation_check_proc_04_func_2057797757(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_04_func_1444157220(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_04_func_1208855159(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1195012135(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xa] = _activatnvar_confusing_chararray_6[0xa];

	/* inline */ _activation_check_proc_04_func_1170253706(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_04_func_389116437(_activatnvar_confusing_int_2);
}

void _activation_check_proc_04_func_858034325(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_2[0x1];

}

void _activation_check_proc_04_func_1411965826(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_04_func_2134559999(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_04_func_476036805(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] = _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_04_func_1372365136(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_3 = _activatnvar_confusing_U8_f;

	_activation_check_proc_04_func_476036805(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_d);
	_activation_check_proc_04_func_2134559999(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_04_func_1690547138(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_04_func_1572400804(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_04_func_1336101892(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_04_func_82863062(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_04_func_851765857(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_04_func_368111503()
{
	
}

void _activation_check_proc_04_func_1856956906(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x4] = _activatnvar_confusing_chararray_e[0xd];

	_activation_check_proc_04_func_368111503();
}

void _activation_check_proc_04_func_1464463968(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_char_2;

}

void _activation_check_proc_04_func_1039807051(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1383771769(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_a *= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_04_func_825215055(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_996502074(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_secret)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_c = false;

	_activatnvar_confusing_char_a &= _activatnvar_secret.mData[0xa];

}

void _activation_check_proc_04_func_1411604772(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x4] += _activatnvar_confusing_chararray_7[0x6];

}

void _activation_check_proc_04_func_864979272(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 >>= 0xa;

	_activation_check_proc_04_func_47758595(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_04_func_1411604772(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_47758595(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] >>= _activatnvar_confusing_LLUUID_b.mData[0xa];

}

void _activation_check_proc_04_func_374845949(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_t0, char& _activatnvar_confusing_char_3)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_04_func_1358994867(_activatnvar_t0, _activatnvar_confusing_char_3, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_04_func_1358994867(U8& _activatnvar_t0, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_3 += _activatnvar_t0;

}

void _activation_check_proc_04_func_2100022344(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_a = _activatnvar_generic_bool_0;

}

void _activation_check_proc_04_func_44320212(bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_b, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_int_b ^= 0x5;

	_activation_check_proc_04_func_2100022344(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_a, _activatnvar_generic_bool_0);
	_activation_check_proc_04_func_1069646824(_activatnvar_confusing_int_0);
}

void _activation_check_proc_04_func_1069646824(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_04_func_984535535(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_894893378(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_e, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_8;

	_activation_check_proc_04_func_984535535(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_04_func_952161961(_activatnvar_confusing_char_e);
}

void _activation_check_proc_04_func_836146468(bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_04_func_750466800(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_5[0x1] ^= _activatnvar_confusing_chararray_7[0x0];

}

void _activation_check_proc_04_func_1531506690(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_04_func_750466800(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_04_func_579166175(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_04_func_1476816545(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_7 = false;

	_activation_check_proc_04_func_579166175(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_04_func_1950812307(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_04_func_329075329(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x0] != _activatnvar_t0) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_04_func_757101086(_activatnvar_confusing_chararray_0, _activatnvar_confusing_U8_7);
	_activation_check_proc_04_func_1950812307(_activatnvar_confusing_int_7);
	_activation_check_proc_04_func_2117745298(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_04_func_757101086(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_chararray_0[0xe];

}

void _activation_check_proc_04_func_2117745298(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] += _activatnvar_confusing_LLUUID_8.mData[0x4];

}

void _activation_check_proc_04_func_1314645414(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_676411731(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_04_func_601005902(_activatnvar_confusing_char_1);
}

void _activation_check_proc_04_func_601005902(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_04_func_442893433(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_04_func_1547129890(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_04_func_559015995(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_04_func_1008899824(LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_1888545821(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_04_func_1163592326(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_9);
	_activation_check_proc_04_func_1539020111(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_04_func_525184997(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_04_func_1539020111(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_525184997(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_04_func_1223890708(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_04_func_1614701026(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_LLUUID_5.mData[0x4] ^= _activatnvar_combined_id.mData[0x2];

	_activation_check_proc_04_func_1638013116(_activatnvar_confusing_U8_b);
}

void _activation_check_proc_04_func_1638013116(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_04_func_1928932177(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_04_func_1470698903(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_9 ^= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_04_func_887194995(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_04_func_677951325(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a = 0xd;

}

void _activation_check_proc_04_func_2016561963(U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_a, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_8 = _activatnvar_confusing_char_3;

	_activation_check_proc_04_func_677951325(_activatnvar_confusing_int_a);
}

void _activation_check_proc_04_func_1668245173(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_04_func_771016502(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_combined_id;

}

void _activation_check_proc_04_func_444585860(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x7] <<= _activatnvar_ser_digest[0x8];

}

void _activation_check_proc_04_func_792248844(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x2] &= _activatnvar_confusing_LLUUID_3.mData[0x9];

	/* inline */ _activation_check_proc_04_func_537718650(_activatnvar_confusing_int_c);
}

void _activation_check_proc_04_func_1008193533(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xd] = _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_04_func_1534321970(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_04_func_1077392217(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x5] != 0x7) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_04_func_1107378347(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_3[0xa] ^= _activatnvar_so.mData[0xb];

}

void _activation_check_proc_04_func_1491776283(int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_int_5 *= _activatnvar_confusing_int_9;

	_activation_check_proc_04_func_1077392217(_activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_04_func_1107378347(_activatnvar_confusing_chararray_3, _activatnvar_so);
}

void _activation_check_proc_04_func_624537821(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_28501667(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_04_func_490117277(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_2 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_04_func_1406554392(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_secret;

	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_c[0x2];

}

void _activation_check_proc_04_func_56039862(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_04_func_66643012(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 >>= _activatnvar_confusing_char_d;

}

void _activation_check_proc_04_func_2060088324(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_9++;

	/* inline */ _activation_check_proc_04_func_1644229156(_activatnvar_confusing_LLUUID_8, _activatnvar_section2);
}

void _activation_check_proc_04_func_1368893740(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_section1;

}

void _activation_check_proc_04_func_1799457243(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_a += _activatnvar_confusing_chararray_7[0x0];

	_activation_check_proc_04_func_1368893740(_activatnvar_confusing_LLUUID_c, _activatnvar_section1);
	_activation_check_proc_04_func_208844420(_activatnvar_confusing_LLUUID_8, _activatnvar_lace);
}

void _activation_check_proc_04_func_208844420(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_lace;

}

void _activation_check_proc_04_func_1970566496(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a ^= _activatnvar_confusing_chararray_e[0xa];

}

void _activation_check_proc_04_func_1452284288(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_04_func_468608830(U8& _activatnvar_pos, int& _activatnvar_confusing_int_1)
{
	_activatnvar_pos |= 8;
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_04_func_1781321076(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xd] |= _activatnvar_confusing_LLUUID_c.mData[0xe];

	/* inline */ _activation_check_proc_04_func_1140823583(_activatnvar_pos);
}

void _activation_check_proc_04_func_691022571(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_chararray_5[0x6];

}

void _activation_check_proc_04_func_1084185106(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_char_6 &= _activatnvar_secret.mData[0x8];

	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_2 |= 0x1;

}

void _activation_check_proc_04_func_1013047094(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x3] *= _activatnvar_confusing_LLUUID_3.mData[0xc];

}

void _activation_check_proc_04_func_1365347461(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_4 <<= _activatnvar_confusing_chararray_d[0xa];

}

void _activation_check_proc_04_func_710278867(char& _activatnvar_confusing_char_4, BOOL& _activatnvar_success, unsigned char* _activatnvar_confusing_chararray_d, DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	_activation_check_proc_04_func_1365347461(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_04_func_1556511700(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("deb042e1-363e-6644-f2be-d245ac486038");

}

void _activation_check_proc_04_func_1595749931(U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_04_func_1849052745(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_04_func_1336380151(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_04_func_1841481797(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_04_func_1938307821(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xe;

}

void _activation_check_proc_04_func_397717521(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_1841481797(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_04_func_1710344637(_activatnvar_code, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_generic_iterator);
	_activation_check_proc_04_func_1938307821(_activatnvar_confusing_int_d);
}

void _activation_check_proc_04_func_551439586(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("1ec17f85-e020-0d97-b4b1-9d2caad4b2d7");

}

void _activation_check_proc_04_func_919990026(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_c[0x4] >>= _activatnvar_confusing_LLUUID_a.mData[0x0];

	_activation_check_proc_04_func_2098541134(_activatnvar_confusing_chararray_0, _activatnvar_confusing_char_c);
}

void _activation_check_proc_04_func_2098541134(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c |= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_04_func_1648838213(LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
}

void _activation_check_proc_04_func_2013774093(DWORD& _activatnvar_serial, int& _activatnvar_confusing_int_6, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_5, LLMD5& _activatnvar_smd5, BOOL& _activatnvar_success, bool& _activatnvar_confusing_bool_b)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
	/* inline */ _activation_check_proc_04_func_725465146(_activatnvar_confusing_U8_5, _activatnvar_confusing_bool_b, _activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_04_func_1490078938(_activatnvar_confusing_int_6);
	_activation_check_proc_04_func_1648838213(_activatnvar_smd5, _activatnvar_serial);
}

void _activation_check_proc_04_func_1488790434(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_04_func_396314014(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_f.mData[0xb] = _activatnvar_mac_digest[0x4];

}

void _activation_check_proc_04_func_2143652568(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_LLUUID_e.mData[0x5];

}

void _activation_check_proc_04_func_1009449131(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xf] *= _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_04_func_1131668244(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_9 = LLUUID("cb479236-e63b-c995-7138-efee94b96870");

	/* inline */ _activation_check_proc_04_func_108695923(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_2015907991(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_04_func_382769382(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_04_func_382769382(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_04_func_1171460131(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("99b0e192-50d7-7e7d-f835-bc516fc40bce");

}

void _activation_check_proc_04_func_496101425(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x8] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_04_func_392099976(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_04_func_1359770922(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_916570183(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_3)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xb] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_04_func_369947867(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_generic_bool_1;

	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_0[0xf];

	_activatnvar_confusing_int_b |= _activatnvar_confusing_int_9;

}

void _activation_check_proc_04_func_1081143952(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
	_activatnvar_strbuf_0[0] = 80; _activatnvar_strbuf_0[0] ^= 102; _activatnvar_strbuf_0[1] = 85; _activatnvar_strbuf_0[1] ^= 101; _activatnvar_strbuf_0[2] = 77; _activatnvar_strbuf_0[2] ^= 121; _activatnvar_strbuf_0[3] = 53; _activatnvar_strbuf_0[3] ^= 4; _activatnvar_strbuf_0[4] = 85; _activatnvar_strbuf_0[4] ^= 102; _activatnvar_strbuf_0[5] = 120; _activatnvar_strbuf_0[5] ^= 27; _activatnvar_strbuf_0[6] = 80; _activatnvar_strbuf_0[6] ^= 96; _activatnvar_strbuf_0[7] = 26; _activatnvar_strbuf_0[7] ^= 40; _activatnvar_strbuf_0[8] = 15; _activatnvar_strbuf_0[8] ^= 34; _activatnvar_strbuf_0[9] = 33; _activatnvar_strbuf_0[9] ^= 17; _activatnvar_strbuf_0[10] = 112; _activatnvar_strbuf_0[10] ^= 66; _activatnvar_strbuf_0[11] = 38; _activatnvar_strbuf_0[11] ^= 18; _activatnvar_strbuf_0[12] = 56; _activatnvar_strbuf_0[12] ^= 14; _activatnvar_strbuf_0[13] = 10; _activatnvar_strbuf_0[13] ^= 39; _activatnvar_strbuf_0[14] = 116; _activatnvar_strbuf_0[14] ^= 68; _activatnvar_strbuf_0[15] = 60; _activatnvar_strbuf_0[15] ^= 12; _activatnvar_strbuf_0[16] = 8; _activatnvar_strbuf_0[16] ^= 59; _activatnvar_strbuf_0[17] = 1; _activatnvar_strbuf_0[17] ^= 49; _activatnvar_strbuf_0[18] = 106; _activatnvar_strbuf_0[18] ^= 71; _activatnvar_strbuf_0[19] = 124; _activatnvar_strbuf_0[19] ^= 78; _activatnvar_strbuf_0[20] = 18; _activatnvar_strbuf_0[20] ^= 35; _activatnvar_strbuf_0[21] = 5; _activatnvar_strbuf_0[21] ^= 53; _activatnvar_strbuf_0[22] = 56; _activatnvar_strbuf_0[22] ^= 1; _activatnvar_strbuf_0[23] = 98; _activatnvar_strbuf_0[23] ^= 79; _activatnvar_strbuf_0[24] = 74; _activatnvar_strbuf_0[24] ^= 114; _activatnvar_strbuf_0[25] = 75; _activatnvar_strbuf_0[25] ^= 115; _activatnvar_strbuf_0[26] = 105; _activatnvar_strbuf_0[26] ^= 92; _activatnvar_strbuf_0[27] = 18; _activatnvar_strbuf_0[27] ^= 35; _activatnvar_strbuf_0[28] = 70; _activatnvar_strbuf_0[28] ^= 114; _activatnvar_strbuf_0[29] = 101; _activatnvar_strbuf_0[29] ^= 92; _activatnvar_strbuf_0[30] = 58; _activatnvar_strbuf_0[30] ^= 10; _activatnvar_strbuf_0[31] = 77; _activatnvar_strbuf_0[31] ^= 44; _activatnvar_strbuf_0[32] = 31; _activatnvar_strbuf_0[32] ^= 124; _activatnvar_strbuf_0[33] = 108; _activatnvar_strbuf_0[33] ^= 84; _activatnvar_strbuf_0[34] = 30; _activatnvar_strbuf_0[34] ^= 123; _activatnvar_strbuf_0[35] = 43; _activatnvar_strbuf_0[35] ^= 24; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_04_func_383612094(U8& _activatnvar_t0, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_fscked;

	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_7;

	/* inline */ _activation_check_proc_04_func_1174946204(_activatnvar_t0);
}

void _activation_check_proc_04_func_1844479626(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_04_func_1230769857(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1230769857(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1954566827(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x1] = _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_04_func_182705186(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_04_func_1525914765(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xb] >>= _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_04_func_615395170(bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_04_func_1789849935(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_3[0xb] += _activatnvar_confusing_LLUUID_6.mData[0xb];

}

void _activation_check_proc_04_func_404429318(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xe] *= _activatnvar_confusing_chararray_0[0x1];

}

void _activation_check_proc_04_func_2096988213(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_04_func_404429318(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_04_func_986510031(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("c34885bb-5d5c-5651-8657-4b20ca737a9e");

	/* inline */ _activation_check_proc_04_func_1908246043(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_04_func_1676231417(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_chararray_6[0x3];

}

void _activation_check_proc_04_func_425034476(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_LLUUID_c.mData[0xa];

}

void _activation_check_proc_04_func_1575411539(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("534daca4-a608-16b0-c1f1-7ef570b3668b");

}

void _activation_check_proc_04_func_1909317263()
{
	
}

void _activation_check_proc_04_func_265118913(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_6, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activation_check_proc_04_func_1938826277(_activatnvar_confusing_char_3, _activatnvar_confusing_int_6);
}

void _activation_check_proc_04_func_1938826277(char& _activatnvar_confusing_char_3, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_char_3++;

	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_04_func_1225598644(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] = _activatnvar_confusing_LLUUID_1.mData[0x9];

}

void _activation_check_proc_04_func_390180828(bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_c = true;

	_activation_check_proc_04_func_1225598644(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_04_func_466714767(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_3, _activatnvar_confusing_int_f);
}

void _activation_check_proc_04_func_466714767(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_04_func_1523670310(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x7] &= _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_04_func_294426113(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("877ecb68-dd2f-bfb1-494d-19743516b1f2");

}

void _activation_check_proc_04_func_780055693(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_a <<= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_04_func_66008417(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_341698742(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_1395005932()
{
	
}

void _activation_check_proc_04_func_26680065(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xb] == 0xb) _activatnvar_confusing_bool_7 = false;

	/* inline */ _activation_check_proc_04_func_162105578(_activatnvar_confusing_U8_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_04_func_1816274391(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_1)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_1 ^= 0x2;

}

void _activation_check_proc_04_func_788653801(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_04_func_1328654276(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 += 0x5;

}

void _activation_check_proc_04_func_1004456826(int& _activatnvar_confusing_int_2, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_63138825(_activatnvar_confusing_int_2);
	_activation_check_proc_04_func_1328654276(_activatnvar_confusing_int_6);
}

void _activation_check_proc_04_func_1771518952(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_04_func_1358139647(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_a ^= _activatnvar_confusing_U8_e;

	_activation_check_proc_04_func_176667212(_activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_char_b);
}

void _activation_check_proc_04_func_176667212(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xf] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_04_func_263812743(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_LLUUID_e.mData[0xd];

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_670617241(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 ^= 0x1;

}

void _activation_check_proc_04_func_2015498716(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1899962038(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_char_a ^= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_04_func_1041013143(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_LLUUID_9.mData[0x3];

}

void _activation_check_proc_04_func_178054413(char& _activatnvar_confusing_char_6, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_6 = _activatnvar_feat;

}

void _activation_check_proc_04_func_1622596122(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_04_func_678749079(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_04_func_314315892(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_0 &= 0xa;

}

void _activation_check_proc_04_func_712863120(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_04_func_459121092(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("e53dbf14-fd07-e224-1475-c7c6ac842996");

}

void _activation_check_proc_04_func_2091741842(U8& _activatnvar_t1, char& _activatnvar_confusing_char_8, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_04_func_503271320(_activatnvar_confusing_char_8, _activatnvar_t1);
}

void _activation_check_proc_04_func_503086413(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_04_func_77119083(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_04_func_1032460255(U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_U8_a++;

	_activation_check_proc_04_func_77119083(_activatnvar_confusing_int_e);
}

void _activation_check_proc_04_func_198343671(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_6[0x0] *= _activatnvar_confusing_chararray_5[0x7];

}

void _activation_check_proc_04_func_150164335(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_8.mData[0x4] = _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_04_func_2035611563(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_char_9++;

	_activation_check_proc_04_func_1434355848(_activatnvar_confusing_int_7);
}

void _activation_check_proc_04_func_1434355848(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_04_func_51738667(bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_a;

	_activation_check_proc_04_func_2048361317(_activatnvar_confusing_int_7);
}

void _activation_check_proc_04_func_2048361317(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_04_func_640028672(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_b <<= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_04_func_1084708243(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_1468237454(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_04_func_816567109(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_e = 0x2;

	/* inline */ _activation_check_proc_04_func_974976369(_activatnvar_generic_iterator, _activatnvar_confusing_int_0, _activatnvar_section2, _activatnvar_secret);
	/* inline */ _activation_check_proc_04_func_544923812(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1897233306(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_04_func_1030609437(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x3] >>= _activatnvar_lace.mData[0xc];

	/* inline */ _activation_check_proc_04_func_1029445875(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_04_func_1453527660(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_0);
	_activation_check_proc_04_func_1898751779(_activatnvar_confusing_int_8, _activatnvar_confusing_char_0, _activatnvar_confusing_bool_4);
	/* inline */ _activation_check_proc_04_func_763703042(_activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_04_func_1351112669(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_1897233306(_activatnvar_confusing_int_6);
}

void _activation_check_proc_04_func_1898751779(int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_int_8 ^= 0x6;

	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_0 ^= 0x1;

}

void _activation_check_proc_04_func_1453527660(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xe] != 0xc) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_04_func_548586677()
{
	
}

void _activation_check_proc_04_func_634737631(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_a[0xb] &= _activatnvar_confusing_LLUUID_f.mData[0x9];

}

void _activation_check_proc_04_func_882133277(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_04_func_2060477189(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_04_func_1544017119(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_2044175763(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_04_func_1791808999(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_04_func_1647556463(unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_d[0xa] &= _activatnvar_confusing_chararray_7[0xe];

	_activation_check_proc_04_func_1791808999(_activatnvar_confusing_int_6);
}

void _activation_check_proc_04_func_2006789646(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = 0x4;

}

void _activation_check_proc_04_func_591048458(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_1++;

	_activation_check_proc_04_func_1459689541(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_04_func_2006789646(_activatnvar_confusing_int_e);
}

void _activation_check_proc_04_func_1459689541(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_LLUUID_5.mData[0x1];

}

void _activation_check_proc_04_func_988880204(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

	_activation_check_proc_04_func_1426581794(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_c);
}

void _activation_check_proc_04_func_1426581794(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c += _activatnvar_confusing_chararray_9[0x6];

}

void _activation_check_proc_04_func_263713081(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x4] += _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_04_func_1411942515(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_04_func_1049084949(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_04_func_239472436(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_fscked);
}

void _activation_check_proc_04_func_1556233035(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] *= _activatnvar_secret.mData[0x8];

}

void _activation_check_proc_04_func_353029298(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] *= _activatnvar_confusing_LLUUID_3.mData[0xb];

}

void _activation_check_proc_04_func_284574230(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f |= _activatnvar_combined_id.mData[0xe];

	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_5 *= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_04_func_1860259785(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_1 *= _activatnvar_confusing_char_8;

}

void _activation_check_proc_04_func_762059541(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("6406c701-32c6-c4f5-592e-3205999c2017");

	_activation_check_proc_04_func_1727324557(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_04_func_1727324557(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_1[0x2] >>= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_04_func_1149749452(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_04_func_746080824(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_04_func_1053591181(_activatnvar_generic_bool_0);
}

void _activation_check_proc_04_func_1215840557(U8& _activatnvar_t0, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x3] ^= _activatnvar_section2.mData[0xe];

	_activation_check_proc_04_func_1673396582(_activatnvar_t0);
}

void _activation_check_proc_04_func_1673396582(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_04_func_1848971915(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

	/* inline */ _activation_check_proc_04_func_2055811544(_activatnvar_generic_iterator);
}

void _activation_check_proc_04_func_1380982356(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_LLUUID_5.mData[0x9] >>= _activatnvar_name_digest[0xf];

	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_a = _activatnvar_confusing_char_7;

}

void _activation_check_proc_04_func_397149902(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_04_func_67991652(_activatnvar_generic_iterator);
	_activation_check_proc_04_func_1380982356(_activatnvar_confusing_bool_9, _activatnvar_confusing_U8_a, _activatnvar_confusing_LLUUID_5, _activatnvar_name_digest, _activatnvar_confusing_char_7);
}

void _activation_check_proc_04_func_1520973363(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_04_func_213355210(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_04_func_59716110(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= _activatnvar_confusing_int_4;

}

void _activation_check_proc_04_func_124253058(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_04_func_2056388187(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_04_func_1446664394(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
