// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation02.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 02

void _activation_check_proc_02_func_2143814249(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x6] += _activatnvar_so.mData[0x9];

}

void _activation_check_proc_02_func_912167824(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_02_func_917363455(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_3;

}

void _activation_check_proc_02_func_2084536882(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_02_func_917363455(_activatnvar_confusing_int_3, _activatnvar_confusing_int_7);
}

void _activation_check_proc_02_func_440378518(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_7[0xa] ^= _activatnvar_secret.mData[0x2];

}

void _activation_check_proc_02_func_1576095514(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] += _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_02_func_782587877(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 4; _activatnvar_strbuf_0[0] ^= 53; _activatnvar_strbuf_0[1] = 40; _activatnvar_strbuf_0[1] ^= 24; _activatnvar_strbuf_0[2] = 38; _activatnvar_strbuf_0[2] ^= 21; _activatnvar_strbuf_0[3] = 46; _activatnvar_strbuf_0[3] ^= 26; _activatnvar_strbuf_0[4] = 117; _activatnvar_strbuf_0[4] ^= 23; _activatnvar_strbuf_0[5] = 73; _activatnvar_strbuf_0[5] ^= 47; _activatnvar_strbuf_0[6] = 67; _activatnvar_strbuf_0[6] ^= 37; _activatnvar_strbuf_0[7] = 67; _activatnvar_strbuf_0[7] ^= 117; _activatnvar_strbuf_0[8] = 9; _activatnvar_strbuf_0[8] ^= 36; _activatnvar_strbuf_0[9] = 81; _activatnvar_strbuf_0[9] ^= 51; _activatnvar_strbuf_0[10] = 97; _activatnvar_strbuf_0[10] ^= 86; _activatnvar_strbuf_0[11] = 103; _activatnvar_strbuf_0[11] ^= 83; _activatnvar_strbuf_0[12] = 103; _activatnvar_strbuf_0[12] ^= 87; _activatnvar_strbuf_0[13] = 102; _activatnvar_strbuf_0[13] ^= 75; _activatnvar_strbuf_0[14] = 80; _activatnvar_strbuf_0[14] ^= 96; _activatnvar_strbuf_0[15] = 38; _activatnvar_strbuf_0[15] ^= 64; _activatnvar_strbuf_0[16] = 42; _activatnvar_strbuf_0[16] ^= 72; _activatnvar_strbuf_0[17] = 5; _activatnvar_strbuf_0[17] ^= 97; _activatnvar_strbuf_0[18] = 20; _activatnvar_strbuf_0[18] ^= 57; _activatnvar_strbuf_0[19] = 61; _activatnvar_strbuf_0[19] ^= 12; _activatnvar_strbuf_0[20] = 112; _activatnvar_strbuf_0[20] ^= 19; _activatnvar_strbuf_0[21] = 76; _activatnvar_strbuf_0[21] ^= 46; _activatnvar_strbuf_0[22] = 122; _activatnvar_strbuf_0[22] ^= 28; _activatnvar_strbuf_0[23] = 123; _activatnvar_strbuf_0[23] ^= 86; _activatnvar_strbuf_0[24] = 46; _activatnvar_strbuf_0[24] ^= 26; _activatnvar_strbuf_0[25] = 111; _activatnvar_strbuf_0[25] ^= 89; _activatnvar_strbuf_0[26] = 104; _activatnvar_strbuf_0[26] ^= 93; _activatnvar_strbuf_0[27] = 52; _activatnvar_strbuf_0[27] ^= 87; _activatnvar_strbuf_0[28] = 34; _activatnvar_strbuf_0[28] ^= 18; _activatnvar_strbuf_0[29] = 34; _activatnvar_strbuf_0[29] ^= 19; _activatnvar_strbuf_0[30] = 45; _activatnvar_strbuf_0[30] ^= 73; _activatnvar_strbuf_0[31] = 121; _activatnvar_strbuf_0[31] ^= 75; _activatnvar_strbuf_0[32] = 31; _activatnvar_strbuf_0[32] ^= 46; _activatnvar_strbuf_0[33] = 6; _activatnvar_strbuf_0[33] ^= 100; _activatnvar_strbuf_0[34] = 95; _activatnvar_strbuf_0[34] ^= 59; _activatnvar_strbuf_0[35] = 24; _activatnvar_strbuf_0[35] ^= 45; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_02_func_1321519375(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 = _activatnvar_confusing_int_c;

}

void _activation_check_proc_02_func_846055519(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] &= _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_02_func_1181446507(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1004266872(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_02_func_562914244(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_d)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_d &= 0x4;

}

void _activation_check_proc_02_func_1444627870(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_d.mData[0xa];

	/* inline */ _activation_check_proc_02_func_1368979757(_activatnvar_so, _activatnvar_section2);
	_activation_check_proc_02_func_562914244(_activatnvar_confusing_bool_7, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_02_func_829688079(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_1[0xa] = _activatnvar_confusing_chararray_7[0x7];

}

void _activation_check_proc_02_func_526595412(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x0] != 0x1) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_02_func_389127970(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("2f17a854-88e5-70c6-8fd2-5d26d3bf9885");

	_activation_check_proc_02_func_526595412(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_02_func_1597902675(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_02_func_1041143834(LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_b, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_02_func_2117932496(_activatnvar_pos, _activatnvar_t0, _activatnvar_confusing_LLUUID_7, _activatnvar_so, _activatnvar_confusing_bool_a);
	_activation_check_proc_02_func_1597902675(_activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_02_func_477518823(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_7.mData[0xc] ^= _activatnvar_confusing_LLUUID_d.mData[0xa];

}

void _activation_check_proc_02_func_2017161679(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_chararray_8[0x5] >>= _activatnvar_confusing_LLUUID_0.mData[0x1];

	/* inline */ _activation_check_proc_02_func_2006831860(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_02_func_436624494(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] |= _activatnvar_confusing_chararray_3[0x3];

}

void _activation_check_proc_02_func_1577739810(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_02_func_1054633062(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1832324413(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_02_func_1529560524(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1696524198(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 *= _activatnvar_confusing_chararray_a[0xc];

}

void _activation_check_proc_02_func_1160311774(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("1b8be2cc-d355-3c59-96ff-c6c56c1daaf3");

}

void _activation_check_proc_02_func_76257791(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1568045946(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_02_func_1865172961(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_02_func_2141633799(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_2;

	/* inline */ _activation_check_proc_02_func_786189758(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_02_func_384931051(_activatnvar_confusing_LLUUID_a);
	_activation_check_proc_02_func_80549715(_activatnvar_confusing_U8_8);
	/* inline */ _activation_check_proc_02_func_1290330827(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_384931051(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("2dcaf22e-1624-feaf-ffbf-34e1ad120ad6");

}

void _activation_check_proc_02_func_80549715(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_02_func_1888731859(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_d;

	/* inline */ _activation_check_proc_02_func_723669653(_activatnvar_confusing_U8_1, _activatnvar_fscked);
}

void _activation_check_proc_02_func_186450283(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x0] <<= _activatnvar_confusing_LLUUID_8.mData[0xe];

}

void _activation_check_proc_02_func_998939535(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_978667028(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_8.mData[0x7];

}

void _activation_check_proc_02_func_1686177246(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_475038970(int& _activatnvar_confusing_int_6, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_f >>= _activatnvar_confusing_char_4;

	/* inline */ _activation_check_proc_02_func_425155686(_activatnvar_confusing_LLUUID_c, _activatnvar_code);
	/* inline */ _activation_check_proc_02_func_441967514(_activatnvar_confusing_int_6);
	/* inline */ _activation_check_proc_02_func_1140287035(_activatnvar_pos);
}

void _activation_check_proc_02_func_201526414(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_02_func_940397195(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_4 |= _activatnvar_confusing_char_f;

}

void _activation_check_proc_02_func_1515225460(U8& _activatnvar_confusing_U8_4, char* _activatnvar_strbuf_0, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_02_func_940397195(_activatnvar_confusing_bool_8, _activatnvar_confusing_char_f, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_02_func_771574330(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_562559229(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_e[0x0] &= _activatnvar_confusing_chararray_b[0x3];

	/* inline */ _activation_check_proc_02_func_2073319985(_activatnvar_confusing_LLUUID_a, _activatnvar_section2, _activatnvar_lace, _activatnvar_confusing_LLUUID_2, _activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_58562256(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_02_func_1735864226(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_02_func_392880511(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_a[0x0] ^= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_02_func_94966983(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_02_func_899158347(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_02_func_2097254498(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_02_func_398526090(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_1062897383(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1927590265(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_02_func_1062897383(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_02_func_1250288525(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_02_func_1469354519(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_7.mData[0xe];

}

void _activation_check_proc_02_func_1939155727(int& _activatnvar_confusing_int_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_02_func_269250635(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_269250635(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_228683540(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 += _activatnvar_confusing_int_a;

}

void _activation_check_proc_02_func_2128474667(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_02_func_1780466713(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x8] != 0x5) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_02_func_2048089497(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_02_func_1416658921(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_char_a;

}

void _activation_check_proc_02_func_689702908(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_U8_3;

}

void _activation_check_proc_02_func_1373609060(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] &= _activatnvar_confusing_chararray_6[0xa];

	/* inline */ _activation_check_proc_02_func_449347541(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_e);
	_activation_check_proc_02_func_1315048155(_activatnvar_confusing_LLUUID_6, _activatnvar_secret);
}

void _activation_check_proc_02_func_1315048155(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_secret;

}

void _activation_check_proc_02_func_73755812(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xa;

}

void _activation_check_proc_02_func_1700767644(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xb] == 0xf) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_02_func_714265357(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_02_func_1282153929(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("48ea58ab-724f-5b41-221a-3490cfb37304");

}

void _activation_check_proc_02_func_894299643(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("fdc7949a-46ea-0994-cabb-b7ba61793de3");

}

void _activation_check_proc_02_func_1099031653(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] += _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_02_func_1864549741(int& _activatnvar_generic_iterator, LLMD5*& _activatnvar_mmd5, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_02_func_1813144250(int& _activatnvar_generic_iterator, LLMD5*& _activatnvar_mmd5, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 >>= 0x6;

	_activation_check_proc_02_func_1864549741(_activatnvar_generic_iterator, _activatnvar_mmd5, _activatnvar_mac_digest);
}

void _activation_check_proc_02_func_1781469247(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_02_func_766396296(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xd] != _activatnvar_confusing_char_7) _activatnvar_confusing_bool_d = true;

	/* inline */ _activation_check_proc_02_func_1644742463(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_02_func_1866625115(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x3] == _activatnvar_feat) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_02_func_1969380129(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_9.mData[0x7];

}

void _activation_check_proc_02_func_2071659042(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_63372783(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_d++;

	_activation_check_proc_02_func_1969380129(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_9, _activatnvar_generic_iterator);
	_activation_check_proc_02_func_2071659042(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code, _activatnvar_combined_id);
	_activation_check_proc_02_func_1866625115(_activatnvar_confusing_LLUUID_8, _activatnvar_feat, _activatnvar_confusing_bool_d);
	/* inline */ _activation_check_proc_02_func_1217893709(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_744717734(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	
	/* inline */ _activation_check_proc_02_func_1218674543(_activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_02_func_2068136903(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_02_func_1379929582(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_02_func_1230998080(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_02_func_67517161(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_9, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_02_func_1457969676(_activatnvar_generic_bool_1, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_02_func_2068136903(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_02_func_1182813864(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_2);
	_activation_check_proc_02_func_1379929582(_activatnvar_confusing_U8_3);
	_activation_check_proc_02_func_1230998080(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_4);
	_activation_check_proc_02_func_365689433(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_a);
	_activation_check_proc_02_func_1835235833(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_02_func_1835235833(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_02_func_1457969676(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_02_func_365689433(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_02_func_1710479017(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_5)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_7 = false;

	/* inline */ _activation_check_proc_02_func_1466105957(_activatnvar_confusing_int_0, _activatnvar_confusing_int_5);
}

void _activation_check_proc_02_func_179467213(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_02_func_1204229269(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1770816038(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_163095669(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_9)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_1 <<= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_02_func_822439355(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_02_func_550771872(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_02_func_626572574(_activatnvar_confusing_char_6, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_02_func_626572574(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_6 *= _activatnvar_confusing_chararray_c[0xc];

}

void _activation_check_proc_02_func_832177791(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_02_func_1960201199(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] <<= _activatnvar_secret.mData[0x6];

}

void _activation_check_proc_02_func_647074020(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xe] &= _activatnvar_confusing_LLUUID_4.mData[0x4];

}

void _activation_check_proc_02_func_1304881101(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_a[0x3] &= _activatnvar_confusing_LLUUID_9.mData[0xf];

}

void _activation_check_proc_02_func_1700755563(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_2082953002(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_1[0x5] <<= _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_02_func_995790724(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_1[0x0] <<= _activatnvar_name_digest[0xf];

}

void _activation_check_proc_02_func_1048366456(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1727197789(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_02_func_1354820318(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_02_func_2055884969(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_244529772(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_b[0x1] &= _activatnvar_so.mData[0x0];

}

void _activation_check_proc_02_func_832892893(U8& _activatnvar_t0)
{
	
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_02_func_406656161(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_02_func_832892893(_activatnvar_t0);
}

void _activation_check_proc_02_func_1524109190(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_U8_c;

	/* inline */ _activation_check_proc_02_func_1889365486(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_02_func_1297747150(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_02_func_465910174(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_02_func_1297747150(_activatnvar_t0, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_02_func_477898727(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_02_func_243628343(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x7] >>= _activatnvar_fscked.mData[0x8];

	_activation_check_proc_02_func_107644057(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_02_func_107644057(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xc] >>= _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_02_func_2134466570(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_02_func_730659970(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x2] != _activatnvar_confusing_char_c) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_02_func_711854565(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_02_func_730659970(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_e, _activatnvar_confusing_char_c, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_02_func_1821751015(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_1209494873(_activatnvar_confusing_LLUUID_a);
	_activation_check_proc_02_func_186851606(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_02_func_436563756(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_02_func_1822924602(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_02_func_1209494873(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("a7da1110-b712-8579-6730-0a5a3848bbfb");

}

void _activation_check_proc_02_func_186851606(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_02_func_1822924602(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_02_func_288660785(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
	_activatnvar_confusing_LLUUID_4.mData[0x7] = _activatnvar_confusing_chararray_b[0x7];

}

void _activation_check_proc_02_func_903626411(DWORD& _activatnvar_serial, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
	_activation_check_proc_02_func_1177522496(_activatnvar_smd5);
	/* inline */ _activation_check_proc_02_func_1546703562();
}

void _activation_check_proc_02_func_1177522496(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_02_func_44174076(unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_02_func_491379357(_activatnvar_confusing_chararray_e, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_02_func_1465131622(_activatnvar_confusing_char_9);
}

void _activation_check_proc_02_func_491379357(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_e[0xc] <<= _activatnvar_ser_digest[0xe];

}

void _activation_check_proc_02_func_2144012817(unsigned char* _activatnvar_name_digest, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_02_func_693833686(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] <<= _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_02_func_667666330(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_d[0xf] &= _activatnvar_confusing_chararray_7[0xa];

}

void _activation_check_proc_02_func_987860414(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] ^= _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_02_func_53084265(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x1] |= _activatnvar_confusing_LLUUID_0.mData[0x8];

	_activation_check_proc_02_func_987860414(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_02_func_2065283774(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_c[0x8] &= _activatnvar_confusing_chararray_6[0xd];

	/* inline */ _activation_check_proc_02_func_1393091756(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_02_func_782007902(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xc] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_3;

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1363464596(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_02_func_1867523456(int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_02_func_81241330(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
	/* inline */ _activation_check_proc_02_func_2065181093(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_U8_2, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_02_func_81241330(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1742959823(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_02_func_685330663(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e += 0x2;

}

void _activation_check_proc_02_func_508817049(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x6] |= _activatnvar_confusing_LLUUID_3.mData[0x7];

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_350596933(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_02_func_61159825(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1346843476(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_02_func_1069075800(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_02_func_2008309074(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_0 = _activatnvar_doaccount;

}

void _activation_check_proc_02_func_1187950311(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_t1, bool& _activatnvar_doaccount, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
	/* inline */ _activation_check_proc_02_func_1260065517(_activatnvar_confusing_chararray_3, _activatnvar_confusing_U8_0);
	_activation_check_proc_02_func_2008309074(_activatnvar_confusing_bool_8, _activatnvar_doaccount, _activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_02_func_890235553(_activatnvar_confusing_int_c, _activatnvar_confusing_int_3);
}

void _activation_check_proc_02_func_237016843(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] >>= _activatnvar_section2.mData[0x5];

	_activation_check_proc_02_func_546022683(_activatnvar_confusing_U8_2, _activatnvar_generic_bool_0, _activatnvar_generic_iterator, _activatnvar_confusing_U8_e);
	_activation_check_proc_02_func_1957818511(_activatnvar_confusing_char_e);
}

void _activation_check_proc_02_func_546022683(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_generic_iterator++;
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_e += _activatnvar_confusing_U8_2;

}

void _activation_check_proc_02_func_1957818511(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_02_func_1991123505(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("ab772ff2-3542-d9a8-5e00-c0dde9c79741");

}

void _activation_check_proc_02_func_131606026(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_LLUUID_4.mData[0x4] <<= _activatnvar_confusing_LLUUID_4.mData[0x1];

	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_2 += _activatnvar_confusing_U8_9;

}

void _activation_check_proc_02_func_385203390(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xd] |= _activatnvar_confusing_LLUUID_7.mData[0x3];

}

void _activation_check_proc_02_func_1495800200(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1040991920(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_8, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_1495800200(_activatnvar_generic_iterator);
	_activation_check_proc_02_func_828239508(_activatnvar_confusing_int_9);
	_activation_check_proc_02_func_525649755(_activatnvar_confusing_U8_8, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_02_func_525649755(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_8 *= _activatnvar_confusing_chararray_b[0x2];

}

void _activation_check_proc_02_func_828239508(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = 0xd;

}

void _activation_check_proc_02_func_2096857650(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("f21452ab-5969-b0cc-3151-a25cfc3a9548");

	/* inline */ _activation_check_proc_02_func_744791384(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_02_func_940318880(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("fd6d8820-52b4-bb2d-5077-c297cfb83a23");

}

void _activation_check_proc_02_func_1411406077(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_02_func_437105364(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_02_func_1014515927(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b <<= _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_02_func_485648450(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xb] = _activatnvar_confusing_chararray_0[0xb];

}

void _activation_check_proc_02_func_1733043729(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 24; _activatnvar_strbuf_0[0] ^= 41; _activatnvar_strbuf_0[1] = 57; _activatnvar_strbuf_0[1] ^= 9; _activatnvar_strbuf_0[2] = 67; _activatnvar_strbuf_0[2] ^= 112; _activatnvar_strbuf_0[3] = 87; _activatnvar_strbuf_0[3] ^= 99; _activatnvar_strbuf_0[4] = 60; _activatnvar_strbuf_0[4] ^= 94; _activatnvar_strbuf_0[5] = 59; _activatnvar_strbuf_0[5] ^= 93; _activatnvar_strbuf_0[6] = 79; _activatnvar_strbuf_0[6] ^= 41; _activatnvar_strbuf_0[7] = 87; _activatnvar_strbuf_0[7] ^= 97; _activatnvar_strbuf_0[8] = 30; _activatnvar_strbuf_0[8] ^= 51; _activatnvar_strbuf_0[9] = 5; _activatnvar_strbuf_0[9] ^= 103; _activatnvar_strbuf_0[10] = 63; _activatnvar_strbuf_0[10] ^= 8; _activatnvar_strbuf_0[11] = 64; _activatnvar_strbuf_0[11] ^= 116; _activatnvar_strbuf_0[12] = 113; _activatnvar_strbuf_0[12] ^= 65; _activatnvar_strbuf_0[13] = 67; _activatnvar_strbuf_0[13] ^= 110; _activatnvar_strbuf_0[14] = 16; _activatnvar_strbuf_0[14] ^= 32; _activatnvar_strbuf_0[15] = 84; _activatnvar_strbuf_0[15] ^= 50; _activatnvar_strbuf_0[16] = 75; _activatnvar_strbuf_0[16] ^= 41; _activatnvar_strbuf_0[17] = 82; _activatnvar_strbuf_0[17] ^= 54; _activatnvar_strbuf_0[18] = 33; _activatnvar_strbuf_0[18] ^= 12; _activatnvar_strbuf_0[19] = 109; _activatnvar_strbuf_0[19] ^= 92; _activatnvar_strbuf_0[20] = 29; _activatnvar_strbuf_0[20] ^= 126; _activatnvar_strbuf_0[21] = 71; _activatnvar_strbuf_0[21] ^= 37; _activatnvar_strbuf_0[22] = 94; _activatnvar_strbuf_0[22] ^= 56; _activatnvar_strbuf_0[23] = 114; _activatnvar_strbuf_0[23] ^= 95; _activatnvar_strbuf_0[24] = 36; _activatnvar_strbuf_0[24] ^= 16; _activatnvar_strbuf_0[25] = 58; _activatnvar_strbuf_0[25] ^= 12; _activatnvar_strbuf_0[26] = 48; _activatnvar_strbuf_0[26] ^= 5; _activatnvar_strbuf_0[27] = 84; _activatnvar_strbuf_0[27] ^= 55; _activatnvar_strbuf_0[28] = 38; _activatnvar_strbuf_0[28] ^= 22; _activatnvar_strbuf_0[29] = 76; _activatnvar_strbuf_0[29] ^= 125; _activatnvar_strbuf_0[30] = 95; _activatnvar_strbuf_0[30] ^= 59; _activatnvar_strbuf_0[31] = 23; _activatnvar_strbuf_0[31] ^= 37; _activatnvar_strbuf_0[32] = 90; _activatnvar_strbuf_0[32] ^= 107; _activatnvar_strbuf_0[33] = 9; _activatnvar_strbuf_0[33] ^= 107; _activatnvar_strbuf_0[34] = 2; _activatnvar_strbuf_0[34] ^= 102; _activatnvar_strbuf_0[35] = 63; _activatnvar_strbuf_0[35] ^= 10; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_02_func_2124019567(LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_2, char* _activatnvar_strbuf_0, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_pos)
{
	_activatnvar_confusing_char_5++;

	if(_activatnvar_confusing_LLUUID_c.mData[0x7] == _activatnvar_pos) _activatnvar_confusing_bool_2 = true;

	/* inline */ _activation_check_proc_02_func_1579566229(_activatnvar_section1, _activatnvar_strbuf_0);
	_activation_check_proc_02_func_1733043729(_activatnvar_strbuf_0);
}

void _activation_check_proc_02_func_1236524779(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("8bd6e841-8395-3d78-2079-2fc4b9469327");

}

void _activation_check_proc_02_func_1148152385(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x8] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_d = false;

	_activation_check_proc_02_func_42765834(_activatnvar_confusing_bool_c, _activatnvar_confusing_U8_b);
	_activation_check_proc_02_func_599081025(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_02_func_670425442(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_02_func_599081025(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("a6b5f8f8-059d-df85-d1db-54a8a9dcc4c4");

}

void _activation_check_proc_02_func_42765834(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_b ^= 0xb;

}

void _activation_check_proc_02_func_670425442(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1540998275(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_02_func_456279996(int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_8 = true;

	/* inline */ _activation_check_proc_02_func_101216932(_activatnvar_confusing_int_6);
}

void _activation_check_proc_02_func_670094322(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xc] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_02_func_1493210316(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_7)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_int_f &= 0x9;

	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_02_func_1520973914(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_140734205(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_02_func_1330803989(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_3[0x5];

}

void _activation_check_proc_02_func_1760029885(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] <<= _activatnvar_confusing_LLUUID_e.mData[0x6];

	/* inline */ _activation_check_proc_02_func_851100241(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_686218621(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_02_func_705154844(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xd] *= _activatnvar_lace.mData[0x4];

}

void _activation_check_proc_02_func_573744919(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_02_func_921814187();
	/* inline */ _activation_check_proc_02_func_1603422886(_activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_02_func_1797205892(_activatnvar_confusing_U8_9, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_a, _activatnvar_confusing_char_c, _activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_02_func_921814187()
{
	
}

void _activation_check_proc_02_func_997006681(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x6] &= _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_02_func_712679719(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("ca8148b3-ef34-d400-2618-17d96f8f5728");

}

void _activation_check_proc_02_func_1574662061(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("6b56ca42-a057-efee-852f-13849daf3e11");

}

void _activation_check_proc_02_func_1485167246(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_02_func_1528341106(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_02_func_1213596870(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_2.mData[0xa];

}

void _activation_check_proc_02_func_714223442(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_02_func_1213596870(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_c);
}

void _activation_check_proc_02_func_1290325319(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1049877796(U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_02_func_1661171750(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("2891c2be-2e44-675c-18c5-d45a3f2b8372");

	/* inline */ _activation_check_proc_02_func_867259518(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_02_func_49453821(_activatnvar_confusing_int_7);
}

void _activation_check_proc_02_func_49453821(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_02_func_366634074(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_8 >>= _activatnvar_confusing_chararray_0[0x6];

	/* inline */ _activation_check_proc_02_func_1051833856(_activatnvar_confusing_char_0, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_02_func_1948502459(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1315454419(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_LLUUID_2.mData[0xa];

}

void _activation_check_proc_02_func_866851130(bool& _activatnvar_doaccount, U8& _activatnvar_t0, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_doaccount;

	_activation_check_proc_02_func_681615648(_activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_02_func_681615648(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_02_func_1179865487(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_02_func_60163626(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_1179865487(_activatnvar_confusing_int_b);
}

void _activation_check_proc_02_func_1872884157(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_02_func_1083367358(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_a.mData[0x7];

	/* inline */ _activation_check_proc_02_func_1467357613(_activatnvar_confusing_char_3, _activatnvar_confusing_char_5);
	_activation_check_proc_02_func_1021418092(_activatnvar_confusing_int_6);
	_activation_check_proc_02_func_1211642777(_activatnvar_confusing_int_c);
	_activation_check_proc_02_func_1372805415(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_02_func_1651349803(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_02_func_2099592503(_activatnvar_confusing_int_a);
}

void _activation_check_proc_02_func_1211642777(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_02_func_1021418092(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 >>= 0xb;

}

void _activation_check_proc_02_func_1651349803(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_02_func_1372805415(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] *= _activatnvar_confusing_LLUUID_d.mData[0x5];

}

void _activation_check_proc_02_func_1133182580(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x3] ^= _activatnvar_section2.mData[0x6];

}

void _activation_check_proc_02_func_1745465781(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_02_func_62335824(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_02_func_857144874(int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_1 <<= _activatnvar_t0;

	_activation_check_proc_02_func_1172689081(_activatnvar_confusing_LLUUID_9, _activatnvar_code);
	_activation_check_proc_02_func_1086455523(_activatnvar_generic_iterator, _activatnvar_confusing_int_7);
}

void _activation_check_proc_02_func_1172689081(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_code;

}

void _activation_check_proc_02_func_1086455523(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 ^= _activatnvar_generic_iterator;

}

void _activation_check_proc_02_func_1131062827(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_2.mData[0x1] ^= _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_02_func_1995652327(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x5] != 0x6) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_02_func_33803001(unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_a;

	_activation_check_proc_02_func_1686566214(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_02_func_1995652327(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_02_func_60659534(_activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked);
	_activation_check_proc_02_func_1586529192(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_02_func_61067999(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_7);
	_activation_check_proc_02_func_1091139600(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_02_func_1686566214(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_0[0x9] = _activatnvar_confusing_LLUUID_c.mData[0xb];

}

void _activation_check_proc_02_func_1091139600(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x6] *= _activatnvar_confusing_chararray_e[0x5];

}

void _activation_check_proc_02_func_1586529192(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_60659534(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_164693800(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xf;

}

void _activation_check_proc_02_func_448786298(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_1324686770(_activatnvar_confusing_U8_d, _activatnvar_confusing_bool_1);
	/* inline */ _activation_check_proc_02_func_1818711650(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_02_func_1324686770(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_d = 0xe;

}

void _activation_check_proc_02_func_1341858082(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_chararray_4[0xf];

	/* inline */ _activation_check_proc_02_func_2051248055(_activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_02_func_1788749117(_activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_02_func_647030557(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 = _activatnvar_confusing_int_e;

	/* inline */ _activation_check_proc_02_func_226039949(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_02_func_464574025(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 >>= _activatnvar_confusing_int_c;

}

void _activation_check_proc_02_func_1763365475(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x8] += _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_02_func_12159948(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("f668b6f1-c352-fef6-1527-e3dd498e3c97");

	/* inline */ _activation_check_proc_02_func_2146708319(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_02_func_272807088(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_02_func_1095047412(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_02_func_1672422163(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_02_func_664234988(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
	
}

void _activation_check_proc_02_func_582170015(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_02_func_339360079(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_8[0x2] ^= _activatnvar_confusing_LLUUID_1.mData[0x7];

}

void _activation_check_proc_02_func_1736826839(unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	
	/* inline */ _activation_check_proc_02_func_1874389796(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	_activation_check_proc_02_func_2086486976(_activatnvar_confusing_int_8);
}

void _activation_check_proc_02_func_2086486976(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_02_func_1790296898(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_chararray_2[0x7];

}

void _activation_check_proc_02_func_1664279052(U8& _activatnvar_t0, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
	/* inline */ _activation_check_proc_02_func_744233280(_activatnvar_confusing_int_a, _activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_02_func_940726082(_activatnvar_t0);
}

void _activation_check_proc_02_func_1806473846(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_b ^= _activatnvar_confusing_int_d;

}

void _activation_check_proc_02_func_1658567911(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x1] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_02_func_1324195829(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_0 ^= _activatnvar_confusing_char_8;

}

void _activation_check_proc_02_func_1045903959(int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_7, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_int_f <<= _activatnvar_confusing_int_d;

	_activatnvar_confusing_int_7 &= 0xe;

	_activation_check_proc_02_func_1658567911(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_1, _activatnvar_confusing_char_5);
	_activation_check_proc_02_func_1324195829(_activatnvar_confusing_char_0, _activatnvar_confusing_char_8);
}

void _activation_check_proc_02_func_589795234(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_02_func_571130102(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_LLUUID_2.mData[0x7] <<= _activatnvar_confusing_chararray_b[0xa];

	/* inline */ _activation_check_proc_02_func_1597798678(_activatnvar_confusing_int_0);
}

void _activation_check_proc_02_func_232241629(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xc] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_02_func_1742568770(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("cd23ba06-b59a-c29a-4692-8c888920e39a");

	_activation_check_proc_02_func_232241629(_activatnvar_confusing_char_1, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_02_func_1895502684(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_4++;

	_activatnvar_confusing_int_3 &= 0xff;

	_activatnvar_confusing_char_5 += _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_02_func_1236556144(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_int_b &= 0xff;

	_activation_check_proc_02_func_1698635140();
	/* inline */ _activation_check_proc_02_func_141658024(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_02_func_1698635140()
{
	
}

void _activation_check_proc_02_func_1113079337(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_02_func_1083866069(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_9[0x2] >>= _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_02_func_26715880(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xf] += _activatnvar_confusing_chararray_c[0x5];

	/* inline */ _activation_check_proc_02_func_1838524389(_activatnvar_confusing_U8_0);
}

void _activation_check_proc_02_func_1937623299(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_02_func_816617994(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_char_f;

	_activatnvar_confusing_LLUUID_2.mData[0x2] &= _activatnvar_confusing_LLUUID_f.mData[0x8];

	/* inline */ _activation_check_proc_02_func_194241896(_activatnvar_t0, _activatnvar_confusing_chararray_2, _activatnvar_confusing_chararray_a);
	_activation_check_proc_02_func_1937623299(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_02_func_1967074133(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] |= _activatnvar_ser_digest[0x8];

	_activation_check_proc_02_func_735338185();
}

void _activation_check_proc_02_func_735338185()
{
	
}

void _activation_check_proc_02_func_2030886229(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1009711953(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("db072fa2-7770-ae4a-c3ef-aa708bbe1cc8");

	_activation_check_proc_02_func_2030886229(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_02_func_1853933890(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_02_func_1853933890(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b += _activatnvar_confusing_chararray_5[0x7];

}

void _activation_check_proc_02_func_1591669118(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("60380edf-5e40-fb32-052e-f0e3e022125b");

	
	_activatnvar_confusing_U8_d >>= _activatnvar_confusing_U8_5;

	_activation_check_proc_02_func_1240924951(_activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_02_func_1683548511(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_02_func_168803828(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_U8_4, _activatnvar_confusing_U8_2);
	_activation_check_proc_02_func_1768077313(_activatnvar_generic_iterator);
	_activation_check_proc_02_func_1226081645(_activatnvar_confusing_bool_4, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_02_func_602926483(_activatnvar_mac_digest, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_02_func_1752643671(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_02_func_1231673215(_activatnvar_lace, _activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_feat);
	_activation_check_proc_02_func_2778379(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_f);
	_activation_check_proc_02_func_450631702(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_8);
}

void _activation_check_proc_02_func_1226081645(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x6] != 0xf) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_02_func_2778379(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x2] != 0xb) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_02_func_1768077313(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1231673215(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_02_func_450631702(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_LLUUID_3.mData[0xa];

}

void _activation_check_proc_02_func_168803828(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_LLUUID_d.mData[0x0];

	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_char_6;

}

void _activation_check_proc_02_func_1240924951(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xb] != 0x1) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_02_func_1489846246(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] >>= _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_02_func_2094174088(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_02_func_1617092439(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_1[0x2];

	_activation_check_proc_02_func_583383422(_activatnvar_confusing_int_9);
	_activation_check_proc_02_func_2094174088(_activatnvar_pos);
	_activation_check_proc_02_func_1815631468(_activatnvar_pos);
	_activation_check_proc_02_func_1489846246(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_02_func_583383422(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_02_func_1815631468(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_02_func_307316502(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b = 0x2;

}

void _activation_check_proc_02_func_735820601(int& _activatnvar_confusing_int_b, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] &= _activatnvar_confusing_chararray_e[0x6];

	_activation_check_proc_02_func_307316502(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_02_func_2123772411(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_02_func_411098(_activatnvar_confusing_U8_f, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_02_func_349379213(char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_02_func_1973579635(_activatnvar_confusing_char_1);
}

void _activation_check_proc_02_func_2043745274(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_150384122(int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_02_func_1288318776(_activatnvar_confusing_chararray_2, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_02_func_1791775199(_activatnvar_confusing_int_d);
}

void _activation_check_proc_02_func_1288318776(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_2[0xc] ^= _activatnvar_ser_digest[0x7];

}

void _activation_check_proc_02_func_707320823(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_d[0xa] >>= _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_02_func_1500815424(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_02_func_780779472(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("8b81ad75-0e7d-dd27-d529-8c248edfe4bf");

}

void _activation_check_proc_02_func_1760387167(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] = _activatnvar_confusing_chararray_7[0x3];

}

void _activation_check_proc_02_func_1864789537(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_02_func_1378045017(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	
	_activation_check_proc_02_func_1864789537(_activatnvar_confusing_int_f);
	_activation_check_proc_02_func_1760387167(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_02_func_1906967280(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_02_func_2071702202(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_8 = 0x1;

	_activation_check_proc_02_func_925606940(_activatnvar_generic_iterator);
	_activation_check_proc_02_func_1452710448(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_c);
	_activation_check_proc_02_func_866685385(_activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_char_5);
	_activation_check_proc_02_func_1632304428(_activatnvar_confusing_char_3);
}

void _activation_check_proc_02_func_925606940(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1632304428(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_02_func_866685385(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xd] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_02_func_1452710448(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_02_func_279988027(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_b |= _activatnvar_confusing_U8_3;

	_activatnvar_confusing_LLUUID_5.mData[0x1] >>= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_02_func_391884988(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_c.mData[0x3] >>= _activatnvar_confusing_LLUUID_4.mData[0x8];

}

void _activation_check_proc_02_func_548637647(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_02_func_1536699580(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x5] &= _activatnvar_confusing_chararray_f[0x5];

}

void _activation_check_proc_02_func_1063574019(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_02_func_497356336(_activatnvar_t0);
}

void _activation_check_proc_02_func_1594097226(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 |= _activatnvar_confusing_int_f;

}

void _activation_check_proc_02_func_24823788(int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_char_a++;

	_activation_check_proc_02_func_1594097226(_activatnvar_confusing_int_f, _activatnvar_confusing_int_8);
}

void _activation_check_proc_02_func_773262857(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] ^= _activatnvar_confusing_LLUUID_b.mData[0x4];

}

void _activation_check_proc_02_func_16249319(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_02_func_360879906(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_b)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xa] != 0x0) _activatnvar_confusing_bool_2 = true;

	/* inline */ _activation_check_proc_02_func_588395209(_activatnvar_doaccount);
	/* inline */ _activation_check_proc_02_func_1077128475(_activatnvar_confusing_int_b);
}

void _activation_check_proc_02_func_377387717(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1778590788(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_473120738(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_char_3 *= _activatnvar_confusing_U8_5;

	_activation_check_proc_02_func_146846051(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_146846051(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_195955717(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] |= _activatnvar_confusing_chararray_a[0xc];

}

void _activation_check_proc_02_func_185446648(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_02_func_1754964047(DWORD& _activatnvar_serial, U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_0 >>= _activatnvar_confusing_chararray_8[0x0];

	/* inline */ _activation_check_proc_02_func_303071560(_activatnvar_serial);
	_activation_check_proc_02_func_185446648(_activatnvar_confusing_int_b);
}

void _activation_check_proc_02_func_991072213(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1383115738(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_1 *= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_02_func_846875781(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_02_func_2026347157(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_02_func_14037393(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x8] = _activatnvar_confusing_chararray_0[0xc];

	_activatnvar_confusing_U8_0 &= _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_02_func_1624700911(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_02_func_430620543(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_5[0x7] *= _activatnvar_so.mData[0xa];

}

void _activation_check_proc_02_func_2122850068(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x3] |= _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_02_func_935994973(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_1++;

	_activation_check_proc_02_func_2122850068(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_02_func_1260233144(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_2005376179(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_02_func_1111585135(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_02_func_2005376179(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_2131849705(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_02_func_1251018978(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_02_func_1102122080(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1358807890(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_02_func_397952373(std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
}

void _activation_check_proc_02_func_1212923283(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x0] *= _activatnvar_confusing_LLUUID_9.mData[0x9];

}

void _activation_check_proc_02_func_821117264()
{
	
}

void _activation_check_proc_02_func_1378612636(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_02_func_1172040376(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_f, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_a = true;

	_activation_check_proc_02_func_1121955292(_activatnvar_confusing_int_f);
	_activation_check_proc_02_func_1678646715(_activatnvar_confusing_int_a);
}

void _activation_check_proc_02_func_1121955292(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_02_func_1678646715(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_02_func_845655237(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d += 0x0;

}

void _activation_check_proc_02_func_198551173(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_02_func_1689321808(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
	_activatnvar_confusing_LLUUID_1.mData[0xf] >>= _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_02_func_1230482258(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_2084423254(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_7[0xe] *= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_02_func_1680008648(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_code.mData[0x3];

	_activation_check_proc_02_func_2084423254(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_02_func_651920700(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1974945208(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f = _activatnvar_secret.mData[0xc];

}

void _activation_check_proc_02_func_1836791359(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 |= 0x9;

}

void _activation_check_proc_02_func_1878036633(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("3799ee1b-9dc8-83af-dabf-3024b3d07eee");

}

void _activation_check_proc_02_func_1470262932(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("f2ee9810-86ca-f909-a7a5-73d8ff72be03");

}

void _activation_check_proc_02_func_984528174(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_2[0x9] &= _activatnvar_confusing_chararray_5[0x4];

	_activation_check_proc_02_func_1878036633(_activatnvar_confusing_LLUUID_3);
	_activation_check_proc_02_func_1470262932(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_02_func_671009202(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_5)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_5 <<= 0xb;

}

void _activation_check_proc_02_func_878318346(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_chararray_a[0xe];

	_activation_check_proc_02_func_67301448(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_02_func_67301448(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_02_func_687561082(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_8)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_8 >>= 0x8;

}

void _activation_check_proc_02_func_1650784300(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 ^= 0x7;

}

void _activation_check_proc_02_func_1022338628(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_02_func_1602264548(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 *= 0x0;

}

void _activation_check_proc_02_func_782950684(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b >>= 0x1;

	/* inline */ _activation_check_proc_02_func_2132492073(_activatnvar_confusing_int_f);
}

void _activation_check_proc_02_func_1931296386(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_02_func_1636884976(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_02_func_110918929(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_02_func_1253513168(LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x3] &= _activatnvar_so.mData[0x7];

	_activation_check_proc_02_func_110918929(_activatnvar_confusing_int_f);
}

void _activation_check_proc_02_func_1100147164(bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_2[0x9];

	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_02_func_33998429(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 ^= 0xb;

}

void _activation_check_proc_02_func_2012593772(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_02_func_1961954372(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1274069579(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_9[0xf] += _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_02_func_1748214688(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xf] == _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_02_func_1903463620(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x7] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_02_func_2065859491(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1677049204(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("84451ccb-8499-156e-d028-a403e44fa207");

}

void _activation_check_proc_02_func_468806601(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_02_func_1754060265(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	
	_activation_check_proc_02_func_468806601(_activatnvar_confusing_chararray_f, _activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_02_func_842473040(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_02_func_1651750131(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_1365544651(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_7 = _activatnvar_combined_id.mData[0x1];

}

void _activation_check_proc_02_func_6204556(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 <<= 0x0;

}

void _activation_check_proc_02_func_2084863742(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_1[0x2] >>= _activatnvar_confusing_chararray_c[0x8];

	/* inline */ _activation_check_proc_02_func_1259208245(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_9, _activatnvar_confusing_char_4);
	_activation_check_proc_02_func_6204556(_activatnvar_confusing_char_2);
}

void _activation_check_proc_02_func_1278312311()
{
	
}

void _activation_check_proc_02_func_1156636190(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_f[0x7] ^= _activatnvar_ser_digest[0x0];

	_activation_check_proc_02_func_767667972(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_02_func_767667972(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] += _activatnvar_confusing_LLUUID_b.mData[0xb];

}

void _activation_check_proc_02_func_1439973033(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1421434695(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_02_func_802672168(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_02_func_1047046168(int& _activatnvar_confusing_int_d, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("106edb68-c501-bf39-a78d-16df9f57bbd3");

	_activation_check_proc_02_func_802672168(_activatnvar_confusing_U8_d, _activatnvar_confusing_U8_9);
	_activation_check_proc_02_func_2123649787(_activatnvar_confusing_int_d);
}

void _activation_check_proc_02_func_2123649787(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_02_func_2041069866(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xe] == _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_02_func_1319052477(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_f[0xf] &= _activatnvar_confusing_LLUUID_7.mData[0x9];

}

void _activation_check_proc_02_func_418188889(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_02_func_1344337125(_activatnvar_confusing_U8_5, _activatnvar_confusing_char_1, _activatnvar_confusing_bool_a);
	_activation_check_proc_02_func_1319052477(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_02_func_874283132(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_char_c);
}

void _activation_check_proc_02_func_874283132(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_f.mData[0x1];

}

void _activation_check_proc_02_func_1344337125(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_5 |= _activatnvar_confusing_char_1;

}

void _activation_check_proc_02_func_1426459586(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_02_func_1977472324(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_9 <<= _activatnvar_confusing_U8_0;

	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_02_func_1558349574(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_02_func_1472370482(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_2060266518(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1340973511(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_758259706(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_chararray_5[0x4];

}

void _activation_check_proc_02_func_1560960821(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_02_func_1902238807(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] = _activatnvar_section2.mData[0x2];

}

void _activation_check_proc_02_func_1962798981(bool& _activatnvar_generic_bool_1, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_2 = _activatnvar_generic_bool_1;

}

void _activation_check_proc_02_func_1058246594(bool& _activatnvar_generic_bool_1, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activation_check_proc_02_func_1962798981(_activatnvar_generic_bool_1, _activatnvar_doaccount, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_02_func_774990042()
{
	
}

void _activation_check_proc_02_func_1463293768(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_0[0x3] += _activatnvar_secret.mData[0xe];

}

void _activation_check_proc_02_func_1097053731(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_02_func_684584626(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_char_1;

}

void _activation_check_proc_02_func_1390800652()
{
	
}

void _activation_check_proc_02_func_207312145(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_0 += _activatnvar_confusing_int_3;

}

void _activation_check_proc_02_func_1972185618()
{
	
}

void _activation_check_proc_02_func_1399888858(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_chararray_1[0x7];

}

void _activation_check_proc_02_func_1817279646(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1350290499(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_5 = _activatnvar_lace.mData[0x4];

}

void _activation_check_proc_02_func_446268563(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_523552513(_activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_02_func_523552513(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_02_func_338800723(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_c;

	_activatnvar_confusing_char_b |= _activatnvar_confusing_char_b;

	_activatnvar_confusing_U8_8 = _activatnvar_confusing_chararray_d[0x9];

}

void _activation_check_proc_02_func_605376762(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_02_func_373251148(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_a |= _activatnvar_confusing_int_f;

}

void _activation_check_proc_02_func_1752027497(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_02_func_1032265995(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_5 *= _activatnvar_confusing_char_c;

}

void _activation_check_proc_02_func_81602472(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_02_func_881445472(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xa] <<= _activatnvar_confusing_LLUUID_7.mData[0x0];

}

void _activation_check_proc_02_func_1291944916(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_d[0x0] *= _activatnvar_lace.mData[0xb];

}

void _activation_check_proc_02_func_221127820(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xc] == 0x3) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_02_func_2064592930(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_2;

}

void _activation_check_proc_02_func_1893418582(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_02_func_161438897(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_02_func_960784752(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_2[0x1] <<= _activatnvar_confusing_LLUUID_e.mData[0x2];

}

void _activation_check_proc_02_func_7988900(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_02_func_1739376077(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_02_func_379383098(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] ^= _activatnvar_section1.mData[0x6];

}

void _activation_check_proc_02_func_1715255325(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_02_func_1316620153(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_02_func_159026463(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_02_func_751083995(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_02_func_269871647(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_2, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_e &= _activatnvar_confusing_int_6;

	_activatnvar_confusing_char_2 = _activatnvar_confusing_U8_7;

}

void _activation_check_proc_02_func_442560234(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x5] <<= _activatnvar_confusing_LLUUID_4.mData[0x5];

}

void _activation_check_proc_02_func_1280675576(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_8, char& _activatnvar_feat)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("dd68064f-1ca9-a3fb-3e0d-7a435af30a7b");

	_activation_check_proc_02_func_1227619161(_activatnvar_confusing_U8_8, _activatnvar_confusing_bool_5, _activatnvar_feat);
}

void _activation_check_proc_02_func_1227619161(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_5, char& _activatnvar_feat)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_8 |= _activatnvar_feat;

}

void _activation_check_proc_02_func_1713401976(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_LLUUID_8.mData[0xa];

}

void _activation_check_proc_02_func_1710933641(int& _activatnvar_confusing_int_2)
{
	
	/* inline */ _activation_check_proc_02_func_1729152453(_activatnvar_confusing_int_2);
}

void _activation_check_proc_02_func_709492560(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("dece309d-060d-9554-3577-454f2195ac3f");

}

void _activation_check_proc_02_func_1026581860(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_02_func_790785898(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_02_func_2036541335(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_128637391(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_02_func_1254250740(U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_7 += _activatnvar_confusing_U8_2;

}

void _activation_check_proc_02_func_930623943(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_02_func_1315597762(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xa] |= _activatnvar_confusing_LLUUID_b.mData[0xb];

	_activation_check_proc_02_func_1366721249(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_02_func_1366721249(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_02_func_1889738024(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x6] += _activatnvar_confusing_chararray_c[0x0];

}

void _activation_check_proc_02_func_135460710(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_592795951(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_592795951(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_02_func_1206925305(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xe] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_02_func_469036032(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_02_func_155194302(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xb] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_02_func_1705892889(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("dd5eb493-12d8-a9aa-cd68-0e007fd9ecab");

}

void _activation_check_proc_02_func_1506036363(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_02_func_2000622798(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_7 *= _activatnvar_confusing_chararray_8[0x2];

}

void _activation_check_proc_02_func_111130407(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activatnvar_confusing_char_9 |= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_02_func_305764802(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_02_func_793282327(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_LLUUID_f.mData[0x4];

	_activation_check_proc_02_func_1458287833(_activatnvar_confusing_int_2);
	_activation_check_proc_02_func_305764802(_activatnvar_pos);
	_activation_check_proc_02_func_554911093(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_02_func_1458287833(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_02_func_554911093(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x0] |= _activatnvar_confusing_LLUUID_2.mData[0x4];

}

void _activation_check_proc_02_func_624041951(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_02_func_1033051492(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x3] == 0x6) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_b;

	_activation_check_proc_02_func_624041951(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_02_func_530067381(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_02_func_490594463(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_02_func_222059240(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_02_func_304772213(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f >>= 0x7;

	_activation_check_proc_02_func_222059240(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_02_func_819745158(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_02_func_991778306(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_02_func_1943873583(U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 += _activatnvar_confusing_U8_8;

}

void _activation_check_proc_02_func_1790028466(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_02_func_447791349(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_9, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
	/* inline */ _activation_check_proc_02_func_372140732(_activatnvar_confusing_char_9, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_02_func_1432008958(bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_02_func_150086486(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] &= _activatnvar_confusing_chararray_1[0x0];

	_activatnvar_confusing_LLUUID_1 = LLUUID("2b3d82d1-de4e-be3a-ddd4-888c76190b30");

}

void _activation_check_proc_02_func_1724537867(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_02_func_489214675(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_e.mData[0xe];

}

void _activation_check_proc_02_func_1216116532(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d |= 0xf;

}

void _activation_check_proc_02_func_853996406(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("8b0ea728-b56b-974e-92a9-912dbdd9b160");

}

void _activation_check_proc_02_func_1592845681(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_02_func_579264461(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x6] <<= _activatnvar_confusing_LLUUID_8.mData[0x8];

}

void _activation_check_proc_02_func_408558725(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_7[0x4] &= _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_02_func_1861155419(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_02_func_1287490823(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xc] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_02_func_535769751(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

	_activation_check_proc_02_func_1287490823(_activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_02_func_1938589780(_activatnvar_confusing_char_e, _activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_02_func_1364101826(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_4;

	_activation_check_proc_02_func_386983604(_activatnvar_confusing_int_0);
}

void _activation_check_proc_02_func_386983604(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_02_func_205254681(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_d, U8& _activatnvar_confusing_U8_b, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= _activatnvar_confusing_int_d;

	_activation_check_proc_02_func_1960973908(_activatnvar_confusing_U8_b);
	_activation_check_proc_02_func_1689389153(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_02_func_1960973908(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_02_func_1689389153(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x6] != 0x9) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_02_func_616914722(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_02_func_1382358020(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("49e766ca-50c3-3a7d-b9d5-545078930396");

}

void _activation_check_proc_02_func_1534177002(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_02_func_1259995295(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_secret;

	_activation_check_proc_02_func_425679889(_activatnvar_confusing_bool_0);
}

void _activation_check_proc_02_func_425679889(bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_02_func_1209026821(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("7d72109e-8692-3bdc-a6ea-cdc4a28cb7a1");

}

void _activation_check_proc_02_func_683355594(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 ^= 0xf;

	_activation_check_proc_02_func_1209026821(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_02_func_60103729(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("3398c960-6d54-1449-c685-3debe91c2d06");

}

void _activation_check_proc_02_func_757875321(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_02_func_1083595242(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_02_func_567975039(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1388301844(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x0] ^= _activatnvar_confusing_chararray_8[0x4];

}

void _activation_check_proc_02_func_1254012754(bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_b |= 0x5;

	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_8 *= _activatnvar_confusing_U8_6;

	_activatnvar_confusing_chararray_8[0x6] *= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_02_func_490682864(U8& _activatnvar_t0, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_02_func_1575131879(_activatnvar_t0);
	/* inline */ _activation_check_proc_02_func_983185953(_activatnvar_t0);
}

void _activation_check_proc_02_func_1575131879(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_2131524506(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_8 &= 0xc;

}

void _activation_check_proc_02_func_1742362273(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_231192560(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_02_func_812708213(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_1[0x0] ^= _activatnvar_confusing_LLUUID_c.mData[0x2];

	/* inline */ _activation_check_proc_02_func_1813553923(_activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_02_func_615246522(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_a = _activatnvar_confusing_U8_a;

}

void _activation_check_proc_02_func_1210821740(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_02_func_1155607954(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_0, U8& _activatnvar_t1, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_3)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_0 <<= _activatnvar_confusing_U8_3;

	_activation_check_proc_02_func_1210821740(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
}

void _activation_check_proc_02_func_735669055(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_02_func_1874728333(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_4, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] |= _activatnvar_confusing_LLUUID_a.mData[0xf];

	_activation_check_proc_02_func_735669055(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_02_func_927592691(_activatnvar_confusing_char_4, _activatnvar_confusing_char_a);
	_activation_check_proc_02_func_1872850454(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_02_func_1872850454(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_02_func_956256175(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_b.mData[0x5] &= _activatnvar_ser_digest[0x3];

}

void _activation_check_proc_02_func_476056958(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= _activatnvar_section2.mData[0xe];

}

void _activation_check_proc_02_func_856588255(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_02_func_1795417009(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1090083253(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_02_func_1259058163(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_secret;

}

void _activation_check_proc_02_func_2046816517(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_5 |= 0x2;

}

void _activation_check_proc_02_func_1430996264(int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = _activatnvar_confusing_int_4;

	_activation_check_proc_02_func_2046816517(_activatnvar_confusing_char_5, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_02_func_28259014(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 <<= 0x2;

}

void _activation_check_proc_02_func_255735030(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_02_func_255721968(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_02_func_2107678999(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
}

void _activation_check_proc_02_func_1019631227(U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x4] == _activatnvar_t1) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_02_func_595547861(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_c)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xe] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_02_func_1723454241(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 |= 0x8;

}

void _activation_check_proc_02_func_2002699702(unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= _activatnvar_section1.mData[0x6];

	_activation_check_proc_02_func_970973807(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_02_func_442114313(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
	_activation_check_proc_02_func_232814133(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_02_func_522295737(_activatnvar_section2, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_02_func_1082478360(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_02_func_362477997(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_362477997(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_970973807(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_232814133(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_LLUUID_9.mData[0x4];

}

void _activation_check_proc_02_func_1082478360(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] ^= _activatnvar_confusing_chararray_7[0x5];

}

void _activation_check_proc_02_func_890464929(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_02_func_1256220884(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xb] += _activatnvar_confusing_LLUUID_4.mData[0xf];

}

void _activation_check_proc_02_func_644461221(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("7168375e-cbca-38cc-dc2b-56648b482074");

}

void _activation_check_proc_02_func_1713239625(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_02_func_290243206(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_f |= 0x3;

	_activatnvar_confusing_LLUUID_0 = LLUUID("04265a4d-674f-02d6-e0ae-e9e425d7f42a");

}

void _activation_check_proc_02_func_263893654(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1026682274(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_chararray_8[0x9];

	/* inline */ _activation_check_proc_02_func_21680495();
}

void _activation_check_proc_02_func_1413246302(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_759533742(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1190168506(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x3] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_02_func_1820455529(bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_02_func_762906888(DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_gvi_flags = 0;
}

void _activation_check_proc_02_func_994614286(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_LLUUID_e.mData[0x0];

}

void _activation_check_proc_02_func_135554274(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_780594431(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_02_func_100873900(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("4338389a-ce7f-e1a8-06ba-15902ddf6eb3");

}

void _activation_check_proc_02_func_1809338552(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xe] == _activatnvar_confusing_char_d) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_02_func_100873900(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_02_func_1402595173(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_chararray_9[0x3];

}

void _activation_check_proc_02_func_417734967(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 |= 0xf;

}

void _activation_check_proc_02_func_306921283(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_02_func_2123568764(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_3 ^= 0x6;

	_activation_check_proc_02_func_306921283(_activatnvar_confusing_chararray_4, _activatnvar_confusing_char_d);
}

void _activation_check_proc_02_func_1649217280(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_3, char& _activatnvar_feat)
{
	_activatnvar_confusing_U8_3 = _activatnvar_feat;

	_activation_check_proc_02_func_671749691(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_02_func_671749691(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_02_func_328006618(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_02_func_188644668(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xf] += _activatnvar_code.mData[0xf];

}

void _activation_check_proc_02_func_517807002(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_02_func_1313422749(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_02_func_636901871(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_6.mData[0x0] ^= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_02_func_1038782157(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_605536571(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_02_func_560924958(_activatnvar_combined_id, _activatnvar_confusing_char_a, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_02_func_398846036(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x1] == _activatnvar_confusing_U8_f) _activatnvar_confusing_bool_8 = true;

	/* inline */ _activation_check_proc_02_func_944093797(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_02_func_1500688680(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_02_func_1457502947(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_8;

	/* inline */ _activation_check_proc_02_func_1060372108();
}

void _activation_check_proc_02_func_1052096977(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_02_func_947571038(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] <<= _activatnvar_secret.mData[0x1];

}

void _activation_check_proc_02_func_1987886957(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("f4fb53c1-47e2-9c58-173d-f8d7f85d5661");

}

void _activation_check_proc_02_func_404516848(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_6 &= _activatnvar_confusing_char_a;

	/* inline */ _activation_check_proc_02_func_390232708(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_02_func_2036322059(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	
}

void _activation_check_proc_02_func_60603878(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1686359310(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_chararray_5[0xc];

}

void _activation_check_proc_02_func_1734754914(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_02_func_2026345174(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_3 >>= _activatnvar_confusing_U8_0;

	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_02_func_1294916126(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_02_func_830474774(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_02_func_1686582320(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_c;

	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_02_func_1142996086(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] *= _activatnvar_confusing_LLUUID_8.mData[0x8];

}

void _activation_check_proc_02_func_492967298(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x2] != _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_0 = false;

	_activation_check_proc_02_func_1142996086(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_02_func_1122525127(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_02_func_691472910(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 += _activatnvar_confusing_chararray_5[0x9];

}

void _activation_check_proc_02_func_1133811118(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1238456342(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_a = _activatnvar_confusing_U8_6;

}

void _activation_check_proc_02_func_322605765(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_7[0x5] ^= _activatnvar_confusing_LLUUID_c.mData[0x2];

}

void _activation_check_proc_02_func_406715863(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_int_4 ^= 0xc;

	_activatnvar_confusing_U8_b &= 0x1;

	_activation_check_proc_02_func_322605765(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_02_func_1077924464(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_02_func_1077924464(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("34f95d72-de74-0b67-32e6-0f4b93130fb0");

}

void _activation_check_proc_02_func_1494259350(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_9)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xe] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_02_func_46593531(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] >>= _activatnvar_confusing_chararray_e[0xd];

}

void _activation_check_proc_02_func_1296197071(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x8] |= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_02_func_368271013(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_1296197071(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_2);
	/* inline */ _activation_check_proc_02_func_1512387470(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_1077251087(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x1] != 0xd) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_02_func_1710115200(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 |= 0x5;

}

void _activation_check_proc_02_func_767891058(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_02_func_1458386120(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_2.mData[0x1] >>= _activatnvar_confusing_LLUUID_d.mData[0x8];

	/* inline */ _activation_check_proc_02_func_999928388(_activatnvar_confusing_char_9);
}

void _activation_check_proc_02_func_555136520(LLUUID& _activatnvar_so, U8& _activatnvar_t1, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_8, U8& _activatnvar_t0)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
	/* inline */ _activation_check_proc_02_func_543577228(_activatnvar_confusing_int_c, _activatnvar_confusing_int_8);
	_activation_check_proc_02_func_12143391(_activatnvar_confusing_int_8);
}

void _activation_check_proc_02_func_12143391(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_02_func_141860852(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_9 ^= 0xb;

}

void _activation_check_proc_02_func_1932943379(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] >>= _activatnvar_confusing_chararray_0[0x1];

	_activation_check_proc_02_func_117288613(_activatnvar_confusing_chararray_b, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_02_func_117288613(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 >>= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_02_func_52559995(LLMD5*& _activatnvar_mmd5, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_secret, LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xc] += _activatnvar_secret.mData[0xe];

	/* inline */ _activation_check_proc_02_func_521934069(_activatnvar_smd5, _activatnvar_ser_digest);
	_activation_check_proc_02_func_538175867(_activatnvar_mmd5);
}

void _activation_check_proc_02_func_538175867(LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
}

void _activation_check_proc_02_func_852592811(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_379488720(int& _activatnvar_confusing_int_2, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_3, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_char_3;

	_activatnvar_confusing_int_2 &= _activatnvar_confusing_int_6;

}

void _activation_check_proc_02_func_1256664738(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_1.mData[0xd] = _activatnvar_confusing_chararray_a[0x4];

	_activation_check_proc_02_func_1012882994(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_e);
	_activation_check_proc_02_func_1118472597(_activatnvar_confusing_int_9);
}

void _activation_check_proc_02_func_1118472597(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_02_func_1012882994(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x5] <<= _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_02_func_12581673(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

	_activatnvar_confusing_U8_a = _activatnvar_confusing_chararray_a[0x6];

}

void _activation_check_proc_02_func_977309322(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_c.mData[0x3] *= _activatnvar_confusing_chararray_5[0xd];

	_activation_check_proc_02_func_12581673(_activatnvar_confusing_chararray_a, _activatnvar_confusing_U8_a, _activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_02_func_188051786(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_02_func_763386924(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] = _activatnvar_confusing_chararray_b[0xf];

}

void _activation_check_proc_02_func_598812594(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_02_func_300633496(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_char_c >>= _activatnvar_confusing_U8_3;

	/* inline */ _activation_check_proc_02_func_1213573399(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_02_func_783018157(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_02_func_384449751(int& _activatnvar_confusing_int_2, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_02_func_783018157(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_02_func_594313406(unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x7] *= _activatnvar_confusing_chararray_a[0xf];

}

void _activation_check_proc_02_func_950270793(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xe] >>= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_02_func_548156326(unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_02_func_950270793(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_02_func_1078613470()
{
	
}

void _activation_check_proc_02_func_852718104(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

	_activation_check_proc_02_func_1078613470();
}

void _activation_check_proc_02_func_1141928635(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 += 0xa;

}

void _activation_check_proc_02_func_1474790619(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_02_func_449057763(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] |= _activatnvar_confusing_chararray_6[0xf];

	_activation_check_proc_02_func_1474790619(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_340065675(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_secret)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x9] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_b = true;

	_activation_check_proc_02_func_1198111634(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
}

void _activation_check_proc_02_func_1198111634(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_456866984(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_02_func_671300899(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x7] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_b = false;

	_activation_check_proc_02_func_2105588975(_activatnvar_confusing_chararray_e, _activatnvar_confusing_U8_d);
	_activation_check_proc_02_func_585815670(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_2);
	_activation_check_proc_02_func_456866984(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_02_func_533637454(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_02_func_585815670(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_02_func_2105588975(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_02_func_521427555(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_fscked;

	_activation_check_proc_02_func_371009959(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_U8_7);
	/* inline */ _activation_check_proc_02_func_952861827(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
	/* inline */ _activation_check_proc_02_func_1524290571(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_371009959(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_02_func_395027744()
{
	
}

void _activation_check_proc_02_func_513711232(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_5 &= _activatnvar_confusing_char_a;

}

void _activation_check_proc_02_func_1927404181(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("5fa644de-a388-d2d8-2a05-f95b4f478f13");

}

void _activation_check_proc_02_func_2057045388(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_02_func_922178501(_activatnvar_fscked, _activatnvar_combined_id, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_1295719876(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1622993932(LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_f |= _activatnvar_confusing_int_6;

	_activation_check_proc_02_func_1295719876(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_02_func_981974258(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_LLUUID_8.mData[0x0];

}

void _activation_check_proc_02_func_1490564044(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f += 0x3;

}

void _activation_check_proc_02_func_1814984410(int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_7;

	_activation_check_proc_02_func_1030508842(_activatnvar_confusing_int_8);
}

void _activation_check_proc_02_func_1030508842(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_02_func_1786732250(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("1e576890-98a2-752a-de06-74cd052b393e");

}

void _activation_check_proc_02_func_663299736(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

	/* inline */ _activation_check_proc_02_func_971352365(_activatnvar_confusing_char_2);
}

void _activation_check_proc_02_func_1192586349(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d = 0xa;

}

void _activation_check_proc_02_func_772337448(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 116; _activatnvar_strbuf_0[0] ^= 77; _activatnvar_strbuf_0[1] = 116; _activatnvar_strbuf_0[1] ^= 68; _activatnvar_strbuf_0[2] = 86; _activatnvar_strbuf_0[2] ^= 101; _activatnvar_strbuf_0[3] = 29; _activatnvar_strbuf_0[3] ^= 41; _activatnvar_strbuf_0[4] = 64; _activatnvar_strbuf_0[4] ^= 34; _activatnvar_strbuf_0[5] = 123; _activatnvar_strbuf_0[5] ^= 31; _activatnvar_strbuf_0[6] = 0; _activatnvar_strbuf_0[6] ^= 53; _activatnvar_strbuf_0[7] = 114; _activatnvar_strbuf_0[7] ^= 69; _activatnvar_strbuf_0[8] = 21; _activatnvar_strbuf_0[8] ^= 56; _activatnvar_strbuf_0[9] = 105; _activatnvar_strbuf_0[9] ^= 11; _activatnvar_strbuf_0[10] = 123; _activatnvar_strbuf_0[10] ^= 76; _activatnvar_strbuf_0[11] = 4; _activatnvar_strbuf_0[11] ^= 96; _activatnvar_strbuf_0[12] = 76; _activatnvar_strbuf_0[12] ^= 116; _activatnvar_strbuf_0[13] = 94; _activatnvar_strbuf_0[13] ^= 115; _activatnvar_strbuf_0[14] = 56; _activatnvar_strbuf_0[14] ^= 12; _activatnvar_strbuf_0[15] = 108; _activatnvar_strbuf_0[15] ^= 15; _activatnvar_strbuf_0[16] = 113; _activatnvar_strbuf_0[16] ^= 19; _activatnvar_strbuf_0[17] = 111; _activatnvar_strbuf_0[17] ^= 13; _activatnvar_strbuf_0[18] = 103; _activatnvar_strbuf_0[18] ^= 74; _activatnvar_strbuf_0[19] = 103; _activatnvar_strbuf_0[19] ^= 95; _activatnvar_strbuf_0[20] = 52; _activatnvar_strbuf_0[20] ^= 81; _activatnvar_strbuf_0[21] = 18; _activatnvar_strbuf_0[21] ^= 112; _activatnvar_strbuf_0[22] = 32; _activatnvar_strbuf_0[22] ^= 70; _activatnvar_strbuf_0[23] = 108; _activatnvar_strbuf_0[23] ^= 65; _activatnvar_strbuf_0[24] = 68; _activatnvar_strbuf_0[24] ^= 112; _activatnvar_strbuf_0[25] = 116; _activatnvar_strbuf_0[25] ^= 66; _activatnvar_strbuf_0[26] = 58; _activatnvar_strbuf_0[26] ^= 15; _activatnvar_strbuf_0[27] = 74; _activatnvar_strbuf_0[27] ^= 41; _activatnvar_strbuf_0[28] = 112; _activatnvar_strbuf_0[28] ^= 64; _activatnvar_strbuf_0[29] = 50; _activatnvar_strbuf_0[29] ^= 1; _activatnvar_strbuf_0[30] = 23; _activatnvar_strbuf_0[30] ^= 116; _activatnvar_strbuf_0[31] = 125; _activatnvar_strbuf_0[31] ^= 79; _activatnvar_strbuf_0[32] = 23; _activatnvar_strbuf_0[32] ^= 38; _activatnvar_strbuf_0[33] = 49; _activatnvar_strbuf_0[33] ^= 80; _activatnvar_strbuf_0[34] = 108; _activatnvar_strbuf_0[34] ^= 8; _activatnvar_strbuf_0[35] = 20; _activatnvar_strbuf_0[35] ^= 33; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_02_func_245510483(char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_6[0x3] &= _activatnvar_confusing_chararray_f[0x8];

	_activation_check_proc_02_func_772337448(_activatnvar_strbuf_0);
}

void _activation_check_proc_02_func_1791228871(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_02_func_1650973754(unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_int_b |= _activatnvar_confusing_int_1;

	_activatnvar_confusing_chararray_a[0xa] += _activatnvar_confusing_chararray_8[0xd];

}

void _activation_check_proc_02_func_90767607(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_02_func_5263340(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_LLUUID_e.mData[0xb] *= _activatnvar_combined_id.mData[0x5];

	_activatnvar_confusing_int_1 <<= _activatnvar_generic_iterator;

}

void _activation_check_proc_02_func_844311609(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_3 *= _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_02_func_457976393(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_d;

	_activation_check_proc_02_func_844311609(_activatnvar_confusing_U8_3, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_02_func_1020946909(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_02_func_312104220(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_02_func_1792235466(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
	/* inline */ _activation_check_proc_02_func_1249899093(_activatnvar_lace, _activatnvar_fscked);
	_activation_check_proc_02_func_312104220(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_02_func_988140454(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_02_func_1109179656(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_02_func_1767903626(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_02_func_596276057(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x8] &= _activatnvar_lace.mData[0x4];

}

void _activation_check_proc_02_func_179940523(char& _activatnvar_confusing_char_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_02_func_1946094054()
{
	
}

void _activation_check_proc_02_func_1594784683(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_02_func_2005227498(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_02_func_667791286(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] = _activatnvar_confusing_LLUUID_4.mData[0x4];

}

void _activation_check_proc_02_func_79791679(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_U8_a;

}

void _activation_check_proc_02_func_1438610666(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 >>= 0xe;

}

void _activation_check_proc_02_func_152084510(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xb] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_02_func_2019404535(unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xb] |= _activatnvar_confusing_chararray_2[0x8];

}

void _activation_check_proc_02_func_1391761833(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 += 0x3;

}

void _activation_check_proc_02_func_962132954(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_02_func_2055455192(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_404734231(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_f |= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_02_func_1801324843(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_e.mData[0x8];

}

void _activation_check_proc_02_func_759546946(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("ee235333-ad36-11b6-3014-1a1358616a62");

	_activation_check_proc_02_func_1801324843(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_02_func_1887254472(unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x6] *= _activatnvar_confusing_chararray_1[0x4];

}

void _activation_check_proc_02_func_937479972(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_1 *= _activatnvar_confusing_char_f;

}

void _activation_check_proc_02_func_2068846379(int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_02_func_874739714(_activatnvar_confusing_int_c);
}

void _activation_check_proc_02_func_703342469()
{
	
}

void _activation_check_proc_02_func_858276929(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e += 0x4;

}

void _activation_check_proc_02_func_373205196(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1953297725(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b *= _activatnvar_confusing_chararray_2[0xd];

}

void _activation_check_proc_02_func_974116396(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_f[0x7] |= _activatnvar_name_digest[0xe];

}

void _activation_check_proc_02_func_1565566556(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_0.mData[0x7] += _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_02_func_1727598907(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xe] <<= _activatnvar_confusing_chararray_2[0xf];

}

void _activation_check_proc_02_func_1387135593(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_103579419(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_lace;

}

void _activation_check_proc_02_func_1086722126(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
	/* inline */ _activation_check_proc_02_func_1808074757(_activatnvar_pos);
}

void _activation_check_proc_02_func_892587983(U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 += _activatnvar_confusing_U8_c;

}

void _activation_check_proc_02_func_1233811436(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("d904757c-f155-6821-bdad-ea5b9546d2a9");

}

void _activation_check_proc_02_func_1803476483(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_4 = false;

	_activation_check_proc_02_func_1108238314(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_U8_2, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_02_func_1108238314(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x7] != _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_02_func_1238674119(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_02_func_977558425(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_pos)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x7] == _activatnvar_pos) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_02_func_2040871682(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_02_func_1208187406(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_8.mData[0xb] = _activatnvar_ser_digest[0xd];

}

void _activation_check_proc_02_func_186012127(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_02_func_2055530086(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_chararray_1[0x5];

	_activation_check_proc_02_func_186012127(_activatnvar_confusing_int_5);
}

void _activation_check_proc_02_func_8405187(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_02_func_1280390733(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x1] <<= _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_02_func_34714499(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_t0, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activation_check_proc_02_func_888213649(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_d);
	/* inline */ _activation_check_proc_02_func_1292370912(_activatnvar_t0);
}

void _activation_check_proc_02_func_888213649(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xe] != 0xa) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_02_func_167512029(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_02_func_1290413090(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_5)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_7 &= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_02_func_368935358(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_2, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_char_2++;

	_activation_check_proc_02_func_1290413090(_activatnvar_generic_bool_0, _activatnvar_confusing_char_7, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_02_func_375878814(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_02_func_672370177(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] <<= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_02_func_1851014503(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_c[0xa] *= _activatnvar_confusing_chararray_f[0xe];

	/* inline */ _activation_check_proc_02_func_16091737(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_02_func_434900539(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_02_func_678963301(_activatnvar_lace, _activatnvar_confusing_char_2);
}

void _activation_check_proc_02_func_1035430736(U8& _activatnvar_t0)
{
	
	/* inline */ _activation_check_proc_02_func_819552022(_activatnvar_t0);
}

void _activation_check_proc_02_func_43356871(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_527411865(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_870239735(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_c.mData[0x7] = _activatnvar_confusing_LLUUID_9.mData[0x1];

}

void _activation_check_proc_02_func_477511980(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("67dd4aac-9bcc-b41f-8190-30e2d1d1c225");

}

void _activation_check_proc_02_func_1470850692(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_7.mData[0xa] += _activatnvar_confusing_LLUUID_b.mData[0x4];

	_activation_check_proc_02_func_1109617763(_activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_02_func_775080577(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_02_func_2146643210(_activatnvar_confusing_int_d);
	_activation_check_proc_02_func_1562562438(_activatnvar_confusing_LLUUID_f, _activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_02_func_61670155();
}

void _activation_check_proc_02_func_1562562438(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_f.mData[0xe] += _activatnvar_confusing_LLUUID_5.mData[0x5];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1109617763(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_LLUUID_4.mData[0xd];

}

void _activation_check_proc_02_func_391364583(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x7] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_02_func_141921403(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 ^= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_02_func_42943628(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] = _activatnvar_fscked.mData[0xf];

	_activation_check_proc_02_func_1145951904(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_02_func_1145951904(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_0[0x5] += _activatnvar_confusing_LLUUID_a.mData[0x9];

}

void _activation_check_proc_02_func_212102675(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1194284574(int& _activatnvar_confusing_int_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_7++;

	_activation_check_proc_02_func_929448210(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_929448210(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1772709268(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_1013305511(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_section1;

}

void _activation_check_proc_02_func_162126803(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x5] += _activatnvar_confusing_LLUUID_4.mData[0xc];

	/* inline */ _activation_check_proc_02_func_856633777(_activatnvar_confusing_int_e);
}

void _activation_check_proc_02_func_1026484051(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_02_func_1377758563(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1867334103(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x0] <<= _activatnvar_mac_digest[0x0];

	_activation_check_proc_02_func_1377758563(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
	/* inline */ _activation_check_proc_02_func_317042135(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_1278658975(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_02_func_229369323(_activatnvar_confusing_bool_a, _activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_02_func_1959504115(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_02_func_735851610(_activatnvar_generic_iterator);
	_activation_check_proc_02_func_1199329451(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_02_func_1199329451(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_combined_id;

}

void _activation_check_proc_02_func_2087189943(bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_3;

	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_02_func_531709440(_activatnvar_confusing_int_c);
}

void _activation_check_proc_02_func_1571908515(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_02_func_1204254502(_activatnvar_code, _activatnvar_confusing_chararray_f);
	_activation_check_proc_02_func_846815389(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_3, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_02_func_846815389(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x6] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_02_func_682912889(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_a <<= _activatnvar_confusing_char_0;

}

void _activation_check_proc_02_func_1678866878(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	/* inline */ _activation_check_proc_02_func_738969191(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_02_func_1178063341(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_c.mData[0x8];

	_activation_check_proc_02_func_80327152(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_02_func_80327152(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_6[0x8];

}

void _activation_check_proc_02_func_130602825(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_2)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_9 ^= _activatnvar_confusing_char_2;

}

void _activation_check_proc_02_func_1491830855(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_2, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_f |= _activatnvar_confusing_int_6;

	_activation_check_proc_02_func_130602825(_activatnvar_confusing_bool_9, _activatnvar_confusing_U8_9, _activatnvar_confusing_char_2);
}

void _activation_check_proc_02_func_949483805()
{
	
}

void _activation_check_proc_02_func_1785354002(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_02_func_1861499101(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 >>= 0xf;

}

void _activation_check_proc_02_func_689280738(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("2eef0549-01f2-ec07-0b4c-c949ae123b7b");

}

void _activation_check_proc_02_func_541973039(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_8[0xd] >>= _activatnvar_confusing_LLUUID_3.mData[0xf];

	_activation_check_proc_02_func_689280738(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_02_func_152057521(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("0b567dbe-7cf8-c6c0-dd3b-d9553402275c");

}

void _activation_check_proc_02_func_2000314932(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_02_func_1196882126(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_c *= _activatnvar_confusing_char_6;

}

void _activation_check_proc_02_func_920167871(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_02_func_1715537909(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_02_func_27762418(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_02_func_42337641(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_308109245(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

	_activation_check_proc_02_func_558850293(_activatnvar_confusing_U8_3, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_02_func_2013715279(_activatnvar_confusing_int_8);
	_activation_check_proc_02_func_42337641(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_558850293(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_chararray_e[0xf];

}

void _activation_check_proc_02_func_528454291(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_0 = _activatnvar_combined_id.mData[0xc];

}

void _activation_check_proc_02_func_61218731(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_02_func_1832755200(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_02_func_770264093(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1865712034(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
}

void _activation_check_proc_02_func_931976622(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[7] = _activatnvar_fscked.mData[7];
}

void _activation_check_proc_02_func_939694863(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_2 &= 0x0;

	_activation_check_proc_02_func_1865712034(_activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_02_func_931976622(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_02_func_1574779858(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0x0;

}

void _activation_check_proc_02_func_1334474884(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1543413645(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_02_func_1899515755(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_189914223(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= _activatnvar_confusing_int_2;

}

void _activation_check_proc_02_func_2122666103(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_2131293246(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_02_func_1425330576(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_chararray_b[0x0];

}

void _activation_check_proc_02_func_1880319908(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_856445764(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_02_func_524030640(_activatnvar_confusing_int_c, _activatnvar_confusing_int_3);
}

void _activation_check_proc_02_func_498991264(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_02_func_715766885(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_b.mData[0xf] <<= _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_02_func_942392142(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_2[0xd] *= _activatnvar_confusing_LLUUID_a.mData[0xd];

}

void _activation_check_proc_02_func_1229746012(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_c.mData[0x3];

	_activation_check_proc_02_func_942392142(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_02_func_1551529248(LLMD5*& _activatnvar_nmd5, std::string& _activatnvar_fullname)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_02_func_1344938513()
{
	
}

void _activation_check_proc_02_func_859964505(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_173405832(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_02_func_1149144307(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_02_func_256576388(unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x2] <<= _activatnvar_confusing_chararray_e[0x2];

}

void _activation_check_proc_02_func_1021769734(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1463910942(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 <<= _activatnvar_confusing_char_f;

}

void _activation_check_proc_02_func_734924747(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_02_func_113043859(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_5 >>= _activatnvar_confusing_int_b;

}

void _activation_check_proc_02_func_626605958(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1712793667(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_code.mData[0x2];

}

void _activation_check_proc_02_func_797603052(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_combined_id;

}

void _activation_check_proc_02_func_1453116168(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_02_func_1252774098(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1555014905()
{
	
}

void _activation_check_proc_02_func_1530150866(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xf] == 0xd) _activatnvar_confusing_bool_3 = _activatnvar_doaccount;

}

void _activation_check_proc_02_func_590776141(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_combined_id, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
	_activatnvar_confusing_LLUUID_1.mData[0x7] |= _activatnvar_name_digest[0x2];

	_activation_check_proc_02_func_1530150866(_activatnvar_confusing_LLUUID_2, _activatnvar_doaccount, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_02_func_214215362(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_02_func_1588325623(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_02_func_1373701493(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_1[0x2] += _activatnvar_name_digest[0x3];

}

void _activation_check_proc_02_func_1536270892(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 >>= _activatnvar_confusing_char_6;

}

void _activation_check_proc_02_func_938110422(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_6[0xf] >>= _activatnvar_confusing_LLUUID_f.mData[0x7];

}

void _activation_check_proc_02_func_732168295(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] += _activatnvar_confusing_LLUUID_9.mData[0x4];

}

void _activation_check_proc_02_func_1260696927(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_2 = _activatnvar_section2.mData[0x2];

	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_LLUUID_4.mData[0x7];

}

void _activation_check_proc_02_func_968290230(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_02_func_1495486461(U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a ^= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_02_func_1239539994(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 <<= 0x0;

}

void _activation_check_proc_02_func_574137938(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_so)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
	_activation_check_proc_02_func_1495486461(_activatnvar_confusing_U8_2, _activatnvar_confusing_char_a);
	_activation_check_proc_02_func_1239539994(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_02_func_250236624(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_02_func_1161851537(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_02_func_733264710(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] >>= _activatnvar_ser_digest[0x4];

}

void _activation_check_proc_02_func_2028729426(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_02_func_824957908(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xc] <<= _activatnvar_confusing_LLUUID_7.mData[0xc];

}

void _activation_check_proc_02_func_627214059(DWORD& _activatnvar_serial, DWORD& _activatnvar_gvi_flags, BOOL& _activatnvar_success, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_4 = false;

	_activation_check_proc_02_func_1414334587(_activatnvar_serial, _activatnvar_success, _activatnvar_gvi_flags);
}

void _activation_check_proc_02_func_1414334587(DWORD& _activatnvar_serial, BOOL& _activatnvar_success, DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_02_func_8834401(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_02_func_276911497(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_02_func_321794950(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 >>= 0xb;

}

void _activation_check_proc_02_func_2138388319(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_7[0x0] *= _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_02_func_1056156991(LLUUID& _activatnvar_code, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_02_func_190129540(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked);
	_activation_check_proc_02_func_1696761447(_activatnvar_confusing_bool_2, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_02_func_1664884519(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_02_func_346239055(_activatnvar_confusing_int_0);
	_activation_check_proc_02_func_660193741(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_02_func_346239055(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_02_func_660193741(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_02_func_1696761447(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_02_func_56614158(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_2 *= _activatnvar_confusing_int_1;

}

void _activation_check_proc_02_func_1548376762(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_3++;

	_activation_check_proc_02_func_56614158(_activatnvar_confusing_int_2, _activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_02_func_1257677876(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_02_func_978511274(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_02_func_1547251105(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_02_func_2042033865(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_LLUUID_5.mData[0xc] <<= _activatnvar_confusing_chararray_8[0xc];

	_activation_check_proc_02_func_449718071(_activatnvar_confusing_U8_d, _activatnvar_confusing_U8_b, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_02_func_449718071(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_b = _activatnvar_confusing_U8_d;

}

void _activation_check_proc_02_func_1768126283(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_5)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_5 = 0x9;

}

void _activation_check_proc_02_func_231035542(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_02_func_1800845298(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_02_func_62190781(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_b <<= _activatnvar_confusing_char_f;

}

void _activation_check_proc_02_func_252890927(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_chararray_e[0xe];

	_activatnvar_confusing_LLUUID_e.mData[0xe] *= _activatnvar_confusing_chararray_6[0x1];

}

void _activation_check_proc_02_func_496537634(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_5)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_2 &= _activatnvar_confusing_char_8;

	_activation_check_proc_02_func_252890927(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_02_func_811185125(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x8] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_02_func_2072933534(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_02_func_1048091029(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_02_func_1528335888(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_02_func_200751478(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 *= 0x3;

	_activation_check_proc_02_func_326298144(_activatnvar_confusing_int_7);
}

void _activation_check_proc_02_func_326298144(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_02_func_1337277089(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("e738723d-6170-52b5-07ac-a486f819a9dc");

	/* inline */ _activation_check_proc_02_func_1063024502(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_02_func_1639420513(_activatnvar_confusing_LLUUID_6, _activatnvar_lace);
}

void _activation_check_proc_02_func_898140882(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_02_func_891694947(U8& _activatnvar_pos, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d |= _activatnvar_pos;

	/* inline */ _activation_check_proc_02_func_766797689(_activatnvar_t0);
}

void _activation_check_proc_02_func_1501162686(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_02_func_1768457079(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_02_func_1299791651(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_a)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xa] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_02_func_1019147685(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("9b7e4295-b4c4-f472-dff7-39b1ee2ce03f");

}

void _activation_check_proc_02_func_702764666(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_1 = false;

	_activation_check_proc_02_func_767702313(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_02_func_767702313(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_7[0x8] = _activatnvar_confusing_LLUUID_d.mData[0xb];

}

void _activation_check_proc_02_func_2115833767(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_chararray_f[0xa];

	/* inline */ _activation_check_proc_02_func_1491875353(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_02_func_714380798(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_02_func_692465892(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_02_func_1770740732(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_02_func_910224005(int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_1[0x2] = _activatnvar_confusing_LLUUID_c.mData[0x4];

	/* inline */ _activation_check_proc_02_func_685336398(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_02_func_529757862(_activatnvar_confusing_int_2);
}

void _activation_check_proc_02_func_262131207(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_02_func_894912878(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_02_func_1778239588(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_0[0x6] *= _activatnvar_section1.mData[0x2];

}

void _activation_check_proc_02_func_1964448903(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_02_func_916738801(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_02_func_2138444414();
	/* inline */ _activation_check_proc_02_func_1597224009(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_a);
	_activation_check_proc_02_func_1490670313(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_02_func_2138444414()
{
	
}

void _activation_check_proc_02_func_1490670313(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("90a6f91e-2608-6ba7-5d2f-3222a88a4dbc");

}

void _activation_check_proc_02_func_1564886778(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_02_func_252771595(_activatnvar_generic_bool_0);
}

void _activation_check_proc_02_func_252771595(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_02_func_1397360486(char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_c |= _activatnvar_confusing_char_5;

}

void _activation_check_proc_02_func_1557841237(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_b *= 0x1;

}

void _activation_check_proc_02_func_1717917671(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_02_func_937094282(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_02_func_1717917671(_activatnvar_pos);
	_activation_check_proc_02_func_1974078520(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_char_c);
	_activation_check_proc_02_func_1103743745(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_02_func_1975869286(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_02_func_1974078520(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_02_func_1103743745(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_02_func_327218348(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] = _activatnvar_confusing_chararray_0[0x8];

}

void _activation_check_proc_02_func_574173821(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_02_func_1233818200(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 <<= 0x7;

}

void _activation_check_proc_02_func_1178612874(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_02_func_1886100308(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_6.mData[0x6] ^= _activatnvar_confusing_chararray_c[0x1];

	/* inline */ _activation_check_proc_02_func_2026684346(_activatnvar_confusing_chararray_f, _activatnvar_mac_digest);
	_activation_check_proc_02_func_1221307488(_activatnvar_confusing_U8_2, _activatnvar_generic_bool_0, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_02_func_1221307488(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_e |= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_02_func_1997623159(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_9 += _activatnvar_confusing_chararray_0[0xd];

}

void _activation_check_proc_02_func_1529005890(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_3.mData[0x0];

}

void _activation_check_proc_02_func_2041047913(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_02_func_840135602(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x9] ^= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_02_func_138376062(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_combined_id.mData[0xd];

}

void _activation_check_proc_02_func_1361071808(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 >>= _activatnvar_confusing_int_1;

}

void _activation_check_proc_02_func_927239149(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_02_func_1039973114(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_02_func_549812171(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] |= _activatnvar_confusing_LLUUID_a.mData[0x0];

}

void _activation_check_proc_02_func_859142480(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_c.mData[0xd];

}

void _activation_check_proc_02_func_1710243104(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1258732760(int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_int_f = 0xd;

	/* inline */ _activation_check_proc_02_func_1928846787(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_1414956342(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_202062796(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_02_func_1457322823(_activatnvar_confusing_LLUUID_5);
	_activation_check_proc_02_func_1650512515(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_0);
	_activation_check_proc_02_func_762388225(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_02_func_1414956342(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_02_func_2074367971(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_02_func_1650512515(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] += _activatnvar_confusing_chararray_0[0x1];

}

void _activation_check_proc_02_func_762388225(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_9.mData[0x8] <<= _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_02_func_939411828(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x5] &= _activatnvar_confusing_LLUUID_9.mData[0x9];

}

void _activation_check_proc_02_func_1977796282(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_02_func_939411828(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_02_func_1399059710(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_02_func_1637348584(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_a = _activatnvar_section1.mData[0x7];

	_activation_check_proc_02_func_1399059710(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_02_func_12428585(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 99; _activatnvar_strbuf_0[0] ^= 34; _activatnvar_strbuf_0[1] = 3; _activatnvar_strbuf_0[1] ^= 96; _activatnvar_strbuf_0[2] = 31; _activatnvar_strbuf_0[2] ^= 107; _activatnvar_strbuf_0[3] = 22; _activatnvar_strbuf_0[3] ^= 127; _activatnvar_strbuf_0[4] = 62; _activatnvar_strbuf_0[4] ^= 72; _activatnvar_strbuf_0[5] = 29; _activatnvar_strbuf_0[5] ^= 124; _activatnvar_strbuf_0[6] = 19; _activatnvar_strbuf_0[6] ^= 103; _activatnvar_strbuf_0[7] = 37; _activatnvar_strbuf_0[7] ^= 76; _activatnvar_strbuf_0[8] = 18; _activatnvar_strbuf_0[8] ^= 125; _activatnvar_strbuf_0[9] = 92; _activatnvar_strbuf_0[9] ^= 50; _activatnvar_strbuf_0[10] = 124; _activatnvar_strbuf_0[10] ^= 63; _activatnvar_strbuf_0[11] = 29; _activatnvar_strbuf_0[11] ^= 114; _activatnvar_strbuf_0[12] = 113; _activatnvar_strbuf_0[12] ^= 21; _activatnvar_strbuf_0[13] = 56; _activatnvar_strbuf_0[13] ^= 93; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_02_func_717964853(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("f0a0e5f3-e92c-6ddc-2474-a28030f21856");

}

void _activation_check_proc_02_func_1043372859(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("1c082099-8d0a-7ed1-d116-a78f8962a306");

	/* inline */ _activation_check_proc_02_func_889880019(_activatnvar_confusing_int_3);
}

void _activation_check_proc_02_func_84184295(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_02_func_1694549303(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_02_func_847818809(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

	_activation_check_proc_02_func_48084737(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_02_func_97918803(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_02_func_48084737(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_02_func_30304081(bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_int_d++;

	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_5 = _activatnvar_confusing_char_5;

	_activation_check_proc_02_func_454415510(_activatnvar_confusing_int_e);
}

void _activation_check_proc_02_func_454415510(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0xc;

}

void _activation_check_proc_02_func_1379484734(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_8 += _activatnvar_confusing_int_0;

}

void _activation_check_proc_02_func_1622575997(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xd] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_7 = false;

	_activation_check_proc_02_func_1379484734(_activatnvar_confusing_int_8, _activatnvar_confusing_int_0);
}

void _activation_check_proc_02_func_224128595(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_02_func_1958585223(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1079819091(bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_a.mData[0x6];

	_activation_check_proc_02_func_1958585223(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_02_func_1523698092(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_02_func_1128768636(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_02_func_818762129(_activatnvar_confusing_U8_d, _activatnvar_confusing_bool_c, _activatnvar_confusing_char_6);
}

void _activation_check_proc_02_func_75082994(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x9] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_1 = true;

	_activatnvar_confusing_LLUUID_5 = _activatnvar_lace;

}

void _activation_check_proc_02_func_1438583876(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_0)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_0 |= 0xe;

}

void _activation_check_proc_02_func_1103623729(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_450930378()
{
	
}

void _activation_check_proc_02_func_64579483(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_02_func_450930378();
}

void _activation_check_proc_02_func_809846798(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_code.mData[0xd];

}

void _activation_check_proc_02_func_2126888492(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_2143491535(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_0 <<= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_02_func_1681822013(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_2059943114(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_f++;

	/* inline */ _activation_check_proc_02_func_1299822175(_activatnvar_generic_bool_0);
	_activation_check_proc_02_func_1681822013(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_1603655286(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1226158285(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_266769414(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_02_func_1653068815(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_02_func_1024310072(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1557788250(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_a.mData[0x4];

	_activation_check_proc_02_func_1666981853(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_02_func_1666981853(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("8bc8a181-babd-8464-5480-c94c21b6ef22");

}

void _activation_check_proc_02_func_1016915920(bool& _activatnvar_confusing_bool_b, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_e)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_e *= _activatnvar_confusing_char_9;

	/* inline */ _activation_check_proc_02_func_1111896335(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_234667481(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("8f7ddafd-3afa-78aa-03eb-e302d2edeca9");

}

void _activation_check_proc_02_func_1813858082(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_02_func_1713447469(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_581566967(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_02_func_2140063081(_activatnvar_lace, _activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_feat);
}

void _activation_check_proc_02_func_2140063081(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_02_func_711818425(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_2 = false;

	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_02_func_31204367(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	
	/* inline */ _activation_check_proc_02_func_1520815229();
	/* inline */ _activation_check_proc_02_func_37158145(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_1);
	_activation_check_proc_02_func_370129388(_activatnvar_confusing_int_3);
	_activation_check_proc_02_func_1903753040(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_02_func_370129388(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_02_func_1903753040(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x4] >>= _activatnvar_confusing_LLUUID_8.mData[0x1];

}

void _activation_check_proc_02_func_1946174078(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_8[0x6] &= _activatnvar_confusing_chararray_3[0x0];

}

void _activation_check_proc_02_func_1581156719(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_8)
{
	
	_activation_check_proc_02_func_1946174078(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_02_func_256643299(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_02_func_395433509(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_U8_8++;

	_activation_check_proc_02_func_416101126(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
	_activation_check_proc_02_func_797637102(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_416101126(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator = 4;
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_797637102(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_11137784(U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_int_0 <<= 0xa;

	_activatnvar_confusing_char_6 = _activatnvar_confusing_U8_9;

}

void _activation_check_proc_02_func_843515660(U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_U8_a *= _activatnvar_confusing_char_e;

}

void _activation_check_proc_02_func_1950289516(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] <<= _activatnvar_confusing_LLUUID_b.mData[0x0];

}

void _activation_check_proc_02_func_618039668(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_9)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x4] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_02_func_843515660(_activatnvar_confusing_U8_a, _activatnvar_confusing_char_e);
	_activation_check_proc_02_func_1950289516(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_02_func_11137784(_activatnvar_confusing_U8_9, _activatnvar_confusing_int_0, _activatnvar_confusing_char_6);
	/* inline */ _activation_check_proc_02_func_2139271949(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_02_func_2078368722(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x4] += _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_02_func_2049322178(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_b)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xe] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_02_func_168574224(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_a)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_a = 0x2;

}

void _activation_check_proc_02_func_1406407702(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_c = 0x7;

}

void _activation_check_proc_02_func_28238573(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("cd81f798-2c6b-6952-90db-b4be79782ced");

	/* inline */ _activation_check_proc_02_func_647483015(_activatnvar_generic_iterator);
	_activation_check_proc_02_func_870097622(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_02_func_168574224(_activatnvar_confusing_bool_e, _activatnvar_confusing_char_a);
	/* inline */ _activation_check_proc_02_func_1307402124(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
	_activation_check_proc_02_func_1406407702(_activatnvar_confusing_U8_c, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_02_func_870097622(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_f.mData[0xe] &= _activatnvar_confusing_LLUUID_8.mData[0xa];

}

void _activation_check_proc_02_func_1319666346(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_02_func_929481622(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_b[0x7] = _activatnvar_confusing_LLUUID_d.mData[0x9];

}

void _activation_check_proc_02_func_1906682594(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x6] = _activatnvar_confusing_LLUUID_5.mData[0x8];

	_activation_check_proc_02_func_929481622(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_02_func_320479251(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] >>= _activatnvar_confusing_LLUUID_9.mData[0x9];

}

void _activation_check_proc_02_func_1730517360(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_code;

	_activation_check_proc_02_func_462875514(_activatnvar_generic_iterator);
}

void _activation_check_proc_02_func_462875514(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_1803905440(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x9] >>= _activatnvar_confusing_LLUUID_4.mData[0xe];

}

void _activation_check_proc_02_func_1844921191(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x3] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_02_func_1706508227(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("e9bb1ded-daa6-08fa-9f9d-a31360d17f06");

}

void _activation_check_proc_02_func_1436095737(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_02_func_1334303948(char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_02_func_1548154756(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

	/* inline */ _activation_check_proc_02_func_42326411(_activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_02_func_677525161(_activatnvar_pos);
	/* inline */ _activation_check_proc_02_func_2119128503(_activatnvar_pos);
}

void _activation_check_proc_02_func_677525161(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_02_func_2101335790(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("5bf99628-d757-239d-edbe-56ec832e6398");

}

void _activation_check_proc_02_func_1179384600(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x2] |= _activatnvar_confusing_LLUUID_d.mData[0xf];

}

void _activation_check_proc_02_func_322606496(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_02_func_1296923455(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_02_func_1282204109(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_02_func_659575052(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e *= _activatnvar_confusing_chararray_9[0xb];

}

void _activation_check_proc_02_func_952233958(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_chararray_b[0x0];

	/* inline */ _activation_check_proc_02_func_1711304927(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_02_func_1292645929(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_02_func_1730916162(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_02_func_2113019461(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_02_func_473545590(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_02_func_674946296(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_02_func_540912937(_activatnvar_confusing_U8_c, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_02_func_1778232009(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] ^= _activatnvar_confusing_chararray_b[0x3];

	_activation_check_proc_02_func_658435404(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_02_func_658435404(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("98952e83-e70a-4aeb-d6f8-4cdbd61d3f77");

}

void _activation_check_proc_02_func_1047549401(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x7] += _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_02_func_2002251969(int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x8] >>= _activatnvar_lace.mData[0x9];

	_activation_check_proc_02_func_1540575698(_activatnvar_confusing_int_5);
	_activation_check_proc_02_func_1629974022();
}

void _activation_check_proc_02_func_1629974022()
{
	
}

void _activation_check_proc_02_func_1540575698(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_02_func_1326345958(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_3[0x1] >>= _activatnvar_secret.mData[0x8];

}

void _activation_check_proc_02_func_552775595(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_02_func_314959263(_activatnvar_generic_bool_0);
	_activation_check_proc_02_func_1496730074(_activatnvar_confusing_bool_5, _activatnvar_generic_bool_1);
}

void _activation_check_proc_02_func_1496730074(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_02_func_612158749(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_02_func_1027734941(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_so)
{
	
	_activation_check_proc_02_func_1276775113(_activatnvar_confusing_LLUUID_7, _activatnvar_so);
}

void _activation_check_proc_02_func_1276775113(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_so;

}

void _activation_check_proc_02_func_289453105(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_0)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_0 *= 0x7;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
