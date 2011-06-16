// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation10.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 10

void _activation_check_proc_10_func_808493578(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x8] == 0x9) _activatnvar_confusing_bool_4 = false;

	/* inline */ _activation_check_proc_10_func_59412432(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_10_func_1077849275(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_363038231(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] |= _activatnvar_fscked.mData[0x3];

}

void _activation_check_proc_10_func_1816824409(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_10_func_1516905095(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_10_func_1816824409(_activatnvar_confusing_chararray_f, _activatnvar_confusing_char_7);
}

void _activation_check_proc_10_func_1162870322(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_fscked;

}

void _activation_check_proc_10_func_1003446338(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x0] ^= _activatnvar_confusing_chararray_a[0x4];

	/* inline */ _activation_check_proc_10_func_1504485459(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_10_func_294616840(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_10_func_446777071(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_1[0xb] *= _activatnvar_confusing_chararray_4[0x2];

	/* inline */ _activation_check_proc_10_func_1153533112(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_10_func_1120966043(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 += 0xa;

}

void _activation_check_proc_10_func_221067713(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_5.mData[0xe] *= _activatnvar_lace.mData[0xa];

}

void _activation_check_proc_10_func_32931686(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] >>= _activatnvar_confusing_LLUUID_2.mData[0xa];

	_activation_check_proc_10_func_221067713(_activatnvar_confusing_LLUUID_5, _activatnvar_lace);
}

void _activation_check_proc_10_func_1181261453(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x5] == 0x4) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_10_func_520048332(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_3)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_3 = _activatnvar_confusing_U8_f;

	/* inline */ _activation_check_proc_10_func_1156956779(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_10_func_353487623(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_10_func_1323779005(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_10_func_1258396603(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_9 <<= _activatnvar_confusing_char_c;

}

void _activation_check_proc_10_func_1299010043(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_0)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_d |= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_10_func_16087467(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_10_func_1601843523(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_10_func_1446805435(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] >>= _activatnvar_so.mData[0x4];

}

void _activation_check_proc_10_func_1999931398(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_f;

	_activation_check_proc_10_func_1446805435(_activatnvar_so, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_10_func_1935567865(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_10_func_1466194240(char& _activatnvar_confusing_char_c, U8& _activatnvar_t0, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_c |= _activatnvar_t0;

}

void _activation_check_proc_10_func_622247808(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_10_func_930455746(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_10_func_934653361(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_10_func_513624081(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 >>= _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_10_func_601369541(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_2 += _activatnvar_confusing_U8_0;

	_activatnvar_confusing_LLUUID_7 = LLUUID("aefd7550-e198-2996-0519-587e21ae0b8c");

}

void _activation_check_proc_10_func_1632867591(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_so.mData[0xb];

}

void _activation_check_proc_10_func_171001718(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x4] = _activatnvar_confusing_LLUUID_3.mData[0xf];

}

void _activation_check_proc_10_func_291116842(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_6[0x9] = _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_10_func_1860979994(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x6] != _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_3;

	_activation_check_proc_10_func_1226443163(_activatnvar_confusing_U8_1, _activatnvar_confusing_U8_e);
	_activation_check_proc_10_func_607419598(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_10_func_1226443163(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_1 <<= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_10_func_607419598(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_10_func_249542241(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_10_func_1542565479(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] >>= _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_10_func_1905571431(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_469977118(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_10_func_1846516332(U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_10_func_469977118(_activatnvar_confusing_U8_0);
}

void _activation_check_proc_10_func_1148205541(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_8 <<= _activatnvar_confusing_char_f;

}

void _activation_check_proc_10_func_1086450902(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xd] *= _activatnvar_lace.mData[0x9];

}

void _activation_check_proc_10_func_1716701672(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_7.mData[0xa];

	/* inline */ _activation_check_proc_10_func_1894451946(_activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_10_func_14320333(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_6 <<= _activatnvar_confusing_char_d;

}

void _activation_check_proc_10_func_809812989(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] |= _activatnvar_confusing_LLUUID_f.mData[0xf];

	_activatnvar_confusing_LLUUID_b = LLUUID("bbce8576-77d6-1e95-24f3-0c8740f191b6");

}

void _activation_check_proc_10_func_1254499358(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_10_func_1562145828(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
	/* inline */ _activation_check_proc_10_func_794420002(_activatnvar_confusing_U8_5, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_10_func_1934148291(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_c, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_10_func_1212196909(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_10_func_1779626870(_activatnvar_confusing_bool_1, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_c);
	_activation_check_proc_10_func_1710338704(_activatnvar_confusing_bool_8, _activatnvar_confusing_char_9, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_10_func_1710338704(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_d >>= _activatnvar_confusing_char_9;

}

void _activation_check_proc_10_func_1482813633(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1040817808(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] |= _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_10_func_27772861(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_U8_d &= _activatnvar_t1;

	_activation_check_proc_10_func_1632181515(_activatnvar_confusing_char_e);
}

void _activation_check_proc_10_func_1632181515(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_10_func_2021178111(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_823316125(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] |= _activatnvar_confusing_LLUUID_d.mData[0x4];

}

void _activation_check_proc_10_func_1035311881(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_LLUUID_2.mData[0xc];

}

void _activation_check_proc_10_func_679595370(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_424772058(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_10_func_1258131866(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1840809133()
{
	
}

void _activation_check_proc_10_func_2124002583(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_10_func_1940937199(_activatnvar_confusing_int_2);
	_activation_check_proc_10_func_1840809133();
	_activation_check_proc_10_func_1258131866(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_34929894(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_10_func_422098208(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_2)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x2] != _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_10_func_1701682198(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_10_func_657415763(char& _activatnvar_confusing_char_f, U8& _activatnvar_t1)
{
	_activatnvar_confusing_char_f *= _activatnvar_t1;

}

void _activation_check_proc_10_func_759681465(U8& _activatnvar_t1, char& _activatnvar_confusing_char_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_657415763(_activatnvar_confusing_char_f, _activatnvar_t1);
}

void _activation_check_proc_10_func_57271153(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_10_func_1013144691(int& _activatnvar_confusing_int_9, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_a |= _activatnvar_section2.mData[0x2];

	/* inline */ _activation_check_proc_10_func_1315853544(_activatnvar_confusing_int_9);
}

void _activation_check_proc_10_func_1135860401(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_b = _activatnvar_doaccount;

}

void _activation_check_proc_10_func_442903048(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 116; _activatnvar_strbuf_0[0] ^= 65; _activatnvar_strbuf_0[1] = 9; _activatnvar_strbuf_0[1] ^= 61; _activatnvar_strbuf_0[2] = 126; _activatnvar_strbuf_0[2] ^= 78; _activatnvar_strbuf_0[3] = 24; _activatnvar_strbuf_0[3] ^= 42; _activatnvar_strbuf_0[4] = 17; _activatnvar_strbuf_0[4] ^= 34; _activatnvar_strbuf_0[5] = 60; _activatnvar_strbuf_0[5] ^= 12; _activatnvar_strbuf_0[6] = 7; _activatnvar_strbuf_0[6] ^= 63; _activatnvar_strbuf_0[7] = 94; _activatnvar_strbuf_0[7] ^= 110; _activatnvar_strbuf_0[8] = 54; _activatnvar_strbuf_0[8] ^= 27; _activatnvar_strbuf_0[9] = 108; _activatnvar_strbuf_0[9] ^= 92; _activatnvar_strbuf_0[10] = 49; _activatnvar_strbuf_0[10] ^= 1; _activatnvar_strbuf_0[11] = 94; _activatnvar_strbuf_0[11] ^= 102; _activatnvar_strbuf_0[12] = 103; _activatnvar_strbuf_0[12] ^= 86; _activatnvar_strbuf_0[13] = 126; _activatnvar_strbuf_0[13] ^= 83; _activatnvar_strbuf_0[14] = 59; _activatnvar_strbuf_0[14] ^= 11; _activatnvar_strbuf_0[15] = 7; _activatnvar_strbuf_0[15] ^= 53; _activatnvar_strbuf_0[16] = 15; _activatnvar_strbuf_0[16] ^= 63; _activatnvar_strbuf_0[17] = 105; _activatnvar_strbuf_0[17] ^= 81; _activatnvar_strbuf_0[18] = 119; _activatnvar_strbuf_0[18] ^= 90; _activatnvar_strbuf_0[19] = 44; _activatnvar_strbuf_0[19] ^= 28; _activatnvar_strbuf_0[20] = 83; _activatnvar_strbuf_0[20] ^= 55; _activatnvar_strbuf_0[21] = 62; _activatnvar_strbuf_0[21] ^= 14; _activatnvar_strbuf_0[22] = 111; _activatnvar_strbuf_0[22] ^= 12; _activatnvar_strbuf_0[23] = 91; _activatnvar_strbuf_0[23] ^= 118; _activatnvar_strbuf_0[24] = 23; _activatnvar_strbuf_0[24] ^= 39; _activatnvar_strbuf_0[25] = 117; _activatnvar_strbuf_0[25] ^= 71; _activatnvar_strbuf_0[26] = 101; _activatnvar_strbuf_0[26] ^= 81; _activatnvar_strbuf_0[27] = 87; _activatnvar_strbuf_0[27] ^= 52; _activatnvar_strbuf_0[28] = 8; _activatnvar_strbuf_0[28] ^= 48; _activatnvar_strbuf_0[29] = 109; _activatnvar_strbuf_0[29] ^= 85; _activatnvar_strbuf_0[30] = 19; _activatnvar_strbuf_0[30] ^= 33; _activatnvar_strbuf_0[31] = 64; _activatnvar_strbuf_0[31] ^= 117; _activatnvar_strbuf_0[32] = 52; _activatnvar_strbuf_0[32] ^= 12; _activatnvar_strbuf_0[33] = 74; _activatnvar_strbuf_0[33] ^= 123; _activatnvar_strbuf_0[34] = 109; _activatnvar_strbuf_0[34] ^= 88; _activatnvar_strbuf_0[35] = 97; _activatnvar_strbuf_0[35] ^= 80; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_10_func_574621101(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_10_func_129349967(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_c)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_c >>= 0x8;

	/* inline */ _activation_check_proc_10_func_624314842(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1568844515(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1379949745(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_6[0x4] <<= _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_10_func_317500624(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_670087731(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_10_func_1082609993(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x5] >>= _activatnvar_confusing_LLUUID_7.mData[0x4];

}

void _activation_check_proc_10_func_27439101(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_10_func_484192411(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] >>= _activatnvar_fscked.mData[0xf];

}

void _activation_check_proc_10_func_1915331104(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_chararray_0[0x0];

	_activation_check_proc_10_func_484192411(_activatnvar_fscked, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_10_func_744007980(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_10_func_583698178(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_10_func_964342613(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_0 = LLUUID("7e60589b-9e78-847b-d2e7-46b35115b0b6");

}

void _activation_check_proc_10_func_1723248049(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_1.mData[0x9];

}

void _activation_check_proc_10_func_350119218(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_10_func_455404657(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_9 = true;

	/* inline */ _activation_check_proc_10_func_695614667(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_10_func_155895670(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_c)
{
	
	_activation_check_proc_10_func_1159784161(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_10_func_1960204399(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_U8_c);
	_activation_check_proc_10_func_579204486(_activatnvar_confusing_LLUUID_5);
	_activation_check_proc_10_func_1674498203(_activatnvar_confusing_int_c, _activatnvar_confusing_int_5);
}

void _activation_check_proc_10_func_1159784161(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_10_func_579204486(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("9a4fa89d-a328-c52b-6460-c4fb7ee92316");

}

void _activation_check_proc_10_func_1674498203(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 ^= _activatnvar_confusing_int_c;

}

void _activation_check_proc_10_func_1421531667(unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_b >>= 0x1;

	_activation_check_proc_10_func_259990756(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_10_func_1369291691();
}

void _activation_check_proc_10_func_259990756(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_471243820(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 += _activatnvar_confusing_int_b;

}

void _activation_check_proc_10_func_1107683731(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("0e07930c-4963-9070-559c-63a83e8b7a40");

	_activation_check_proc_10_func_471243820(_activatnvar_confusing_int_b, _activatnvar_confusing_int_1);
	_activation_check_proc_10_func_1394946891(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_10_func_1394946891(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_10_func_1307295179(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_10_func_1235318777(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_630226260(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_10_func_1840518118(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_e &= _activatnvar_doaccount;

}

void _activation_check_proc_10_func_557783910(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_10_func_474057053(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_2115893602(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_845231770(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("430f0109-da4a-8854-fe79-6b60989b7985");

}

void _activation_check_proc_10_func_117580499(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_chararray_c[0x1];

	_activation_check_proc_10_func_845231770(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_10_func_1425702907(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x3] >>= _activatnvar_confusing_chararray_c[0x4];

}

void _activation_check_proc_10_func_206143978(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_10_func_1115811276(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_pos, int& _activatnvar_confusing_int_7, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
	_activation_check_proc_10_func_206143978(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_10_func_1016287787(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_10_func_471684869(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_6 >>= _activatnvar_confusing_int_f;

	_activation_check_proc_10_func_1026810942(_activatnvar_generic_iterator);
	_activation_check_proc_10_func_617010430(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_10_func_1026810942(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_617010430(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1531501641(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_10_func_2031699574(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x7] &= _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_10_func_96572985(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_10_func_59629888(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_10_func_1813602306(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_10_func_571002551(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_section2, U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_confusing_chararray_2[0x7] >>= _activatnvar_section2.mData[0x1];

	_activation_check_proc_10_func_59629888(_activatnvar_t0, _activatnvar_pos, _activatnvar_so);
	_activation_check_proc_10_func_1813602306(_activatnvar_t0, _activatnvar_so);
	/* inline */ _activation_check_proc_10_func_1089999257(_activatnvar_confusing_chararray_8, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_10_func_163555073(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_10_func_967069955(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_U8_7 += _activatnvar_confusing_char_0;

	/* inline */ _activation_check_proc_10_func_1641841497(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	_activation_check_proc_10_func_163555073(_activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_10_func_1222231577(_activatnvar_generic_bool_0);
}

void _activation_check_proc_10_func_646066316(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_5.mData[0x0];

	/* inline */ _activation_check_proc_10_func_827373577(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_10_func_137481707(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_10_func_805401513(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_2115711984(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_10_func_1248334395(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_10_func_1468836154(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_1918938517(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
	/* inline */ _activation_check_proc_10_func_1723824816(_activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_10_func_1079503585(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1918938517(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1327490814(bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

	_activation_check_proc_10_func_1206150563(_activatnvar_confusing_int_5, _activatnvar_confusing_int_8);
}

void _activation_check_proc_10_func_1206150563(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= _activatnvar_confusing_int_5;

}

void _activation_check_proc_10_func_1536308934(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_10_func_41794475(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_10_func_41794475(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_10_func_1465604634(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_4++;

	/* inline */ _activation_check_proc_10_func_689218712(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_a);
	_activation_check_proc_10_func_1161266523(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_10_func_1161266523(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xf] >>= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_10_func_394654913(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_10_func_2023460883(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_10_func_945353965(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_9, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
	_activation_check_proc_10_func_2023460883(_activatnvar_pos);
	/* inline */ _activation_check_proc_10_func_451210839(_activatnvar_pos);
	_activation_check_proc_10_func_1573346040(_activatnvar_confusing_int_9);
	_activation_check_proc_10_func_394654913(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_10_func_1573346040(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 |= 0xc;

}

void _activation_check_proc_10_func_2033034329(char& _activatnvar_confusing_char_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x0] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_10_func_1912211620(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_763085424(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_636960009(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_so;

}

void _activation_check_proc_10_func_408940893(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_6.mData[0x6] |= _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_10_func_979778257(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
}

void _activation_check_proc_10_func_128911535(char& _activatnvar_feat, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_b, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_10_func_675796914(_activatnvar_confusing_int_b);
	_activation_check_proc_10_func_991104325(_activatnvar_confusing_int_2);
}

void _activation_check_proc_10_func_991104325(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_10_func_1687743266(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_1 = false;

	/* inline */ _activation_check_proc_10_func_1336495037(_activatnvar_confusing_char_f);
}

void _activation_check_proc_10_func_609156889(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_10_func_27496639(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_chararray_8[0x0];

	_activation_check_proc_10_func_861473635(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_10_func_861473635(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x6] |= _activatnvar_lace.mData[0x9];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_637045440(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_42453076(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_9)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_b = _activatnvar_confusing_U8_9;

}

void _activation_check_proc_10_func_1400575760(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x1] |= _activatnvar_confusing_LLUUID_0.mData[0xb];

}

void _activation_check_proc_10_func_1141576539(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_e++;

	_activation_check_proc_10_func_2077465039(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_2, _activatnvar_ser_digest);
	_activation_check_proc_10_func_1220762097(_activatnvar_confusing_char_9, _activatnvar_confusing_chararray_d);
	_activation_check_proc_10_func_1556215028(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_10_func_1556215028(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("e11d0863-0365-5d7e-d469-befd386ea02d");

}

void _activation_check_proc_10_func_1220762097(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_10_func_2077465039(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("1f31f722-bfb1-ac57-826d-19495ce84264");

	_activatnvar_confusing_chararray_9[0x6] <<= _activatnvar_ser_digest[0x3];

}

void _activation_check_proc_10_func_1147610168(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_10_func_528955641(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_774062377(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_b;

	_activation_check_proc_10_func_528955641(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_868850129(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a >>= 0x3;

}

void _activation_check_proc_10_func_298470656(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_10_func_1475684805(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_10_func_1185157382(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_10_func_551543208()
{
	
}

void _activation_check_proc_10_func_1942233724(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("cc3d15a9-2bd4-82dc-0ba4-f608e3340c09");

}

void _activation_check_proc_10_func_689418987(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_1 ^= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_10_func_1599432937(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_char_6;

	_activation_check_proc_10_func_689418987(_activatnvar_confusing_U8_1, _activatnvar_confusing_bool_f, _activatnvar_confusing_U8_9);
	/* inline */ _activation_check_proc_10_func_1560189045(_activatnvar_confusing_U8_9, _activatnvar_confusing_U8_e, _activatnvar_generic_bool_0);
}

void _activation_check_proc_10_func_1930825832(U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_10_func_921958706(int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x3] = _activatnvar_fscked.mData[0xd];

	_activation_check_proc_10_func_1930825832(_activatnvar_confusing_U8_9, _activatnvar_confusing_U8_f);
	/* inline */ _activation_check_proc_10_func_799169145(_activatnvar_confusing_int_4);
}

void _activation_check_proc_10_func_1025738561(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_section2;

	/* inline */ _activation_check_proc_10_func_222161849();
}

void _activation_check_proc_10_func_1332587369(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_10_func_1530120221(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] <<= _activatnvar_confusing_LLUUID_8.mData[0x0];

}

void _activation_check_proc_10_func_530793512(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id)
{
	
	_activation_check_proc_10_func_941005894(_activatnvar_confusing_LLUUID_1, _activatnvar_combined_id);
}

void _activation_check_proc_10_func_941005894(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_1.mData[0x7] ^= _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_10_func_551799426(LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_10_func_1574410817(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_10_func_181735625(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_10_func_1338092699(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_5.mData[0xc] >>= _activatnvar_secret.mData[0x5];

	/* inline */ _activation_check_proc_10_func_2075249779(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_10_func_1188196709(DWORD& _activatnvar_serial, DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_serial = 0;
	_activation_check_proc_10_func_1924818435(_activatnvar_gvi_flags);
}

void _activation_check_proc_10_func_1924818435(DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_gvi_flags = 0;
}

void _activation_check_proc_10_func_1045207635(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x9] >>= _activatnvar_ser_digest[0x3];

}

void _activation_check_proc_10_func_1838649547(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_10_func_1335039874(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_e)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xd] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_10_func_1735145959(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_1271176292(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_10_func_1787123305(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_10_func_1271176292(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_488850657(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_10_func_1093936560(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1733342638(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_10_func_1516964776(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_d *= _activatnvar_confusing_chararray_1[0xe];

	_activatnvar_confusing_chararray_a[0x8] >>= _activatnvar_confusing_chararray_c[0x0];

}

void _activation_check_proc_10_func_46864092(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("cb9a870b-756c-24b3-055a-07bf553a7386");

}

void _activation_check_proc_10_func_1683137407(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_0, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activation_check_proc_10_func_46864092(_activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_10_func_1524047166(_activatnvar_doaccount, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_10_func_393666260(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_509538322(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 += _activatnvar_confusing_int_9;

}

void _activation_check_proc_10_func_1044267791(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x7] != 0xc) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_10_func_168869171(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_f.mData[0x1];

	_activatnvar_confusing_chararray_c[0x8] &= _activatnvar_confusing_LLUUID_2.mData[0x6];

}

void _activation_check_proc_10_func_1922421393(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_10_func_2136877951(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_c = _activatnvar_code.mData[0x3];

	_activation_check_proc_10_func_2058519056(_activatnvar_confusing_chararray_5, _activatnvar_confusing_char_d);
}

void _activation_check_proc_10_func_2058519056(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d *= _activatnvar_confusing_chararray_5[0xa];

}

void _activation_check_proc_10_func_68495273(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_712514983(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xc] != _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_10_func_1382152736()
{
	
}

void _activation_check_proc_10_func_601796590(U8& _activatnvar_t0, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

	/* inline */ _activation_check_proc_10_func_292409171(_activatnvar_t0);
}

void _activation_check_proc_10_func_2105172344(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_10_func_1096837280(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1346201308(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_c |= _activatnvar_confusing_int_f;

	_activation_check_proc_10_func_292907291(_activatnvar_confusing_int_4);
}

void _activation_check_proc_10_func_292907291(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_10_func_438233475(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_10_func_10582228(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_f.mData[0x0] |= _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_10_func_1943819901(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("d9297681-ea59-f945-b87a-c5fc20d36950");

}

void _activation_check_proc_10_func_1147165998(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_3 <<= _activatnvar_confusing_char_e;

}

void _activation_check_proc_10_func_1052988313(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_lace;

	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_10_func_1030189758(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_10_func_237613635(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xc] = _activatnvar_confusing_chararray_4[0xc];

}

void _activation_check_proc_10_func_1279071188(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_10_func_1197101746(int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_int_1 |= _activatnvar_confusing_int_e;

	_activation_check_proc_10_func_27436601();
	/* inline */ _activation_check_proc_10_func_1137301347(_activatnvar_confusing_chararray_d, _activatnvar_code, _activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_10_func_1747905976(_activatnvar_confusing_char_f, _activatnvar_confusing_char_2, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_10_func_27436601()
{
	
}

void _activation_check_proc_10_func_1939987927(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_LLUUID_4.mData[0x5];

	_activatnvar_confusing_char_3 |= _activatnvar_confusing_chararray_2[0x4];

}

void _activation_check_proc_10_func_924856501(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_chararray_9[0x1];

	/* inline */ _activation_check_proc_10_func_806638515(_activatnvar_confusing_int_5);
}

void _activation_check_proc_10_func_1381568535(unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_10_func_1111143935(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_6);
	_activation_check_proc_10_func_1349701516(_activatnvar_combined_id, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_10_func_368904851(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_10_func_1111143935(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_10_func_1349701516(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xd] *= _activatnvar_combined_id.mData[0x2];

}

void _activation_check_proc_10_func_595740649(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_10_func_1186258128(U8& _activatnvar_t0, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_c = _activatnvar_t0;

}

void _activation_check_proc_10_func_1796300257(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b <<= 0xf;

	_activation_check_proc_10_func_1186258128(_activatnvar_t0, _activatnvar_confusing_char_c, _activatnvar_confusing_bool_a);
	_activation_check_proc_10_func_401316393(_activatnvar_t0);
	_activation_check_proc_10_func_595740649(_activatnvar_confusing_U8_f, _activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_10_func_1397821178(_activatnvar_t0);
}

void _activation_check_proc_10_func_401316393(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_10_func_807628008(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_pos, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_secret;

	_activation_check_proc_10_func_693237008(_activatnvar_pos);
}

void _activation_check_proc_10_func_693237008(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_10_func_927156018(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_10_func_1837808255(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1876383909(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_a[0x5] &= _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_10_func_1266406282(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_10_func_873147874(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_0;

	_activation_check_proc_10_func_1266406282(_activatnvar_confusing_bool_0, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_10_func_1354476616(_activatnvar_confusing_char_e, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_10_func_1538981501(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_10_func_1804917781(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xc] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_a = _activatnvar_generic_bool_0;

}

void _activation_check_proc_10_func_713830550(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_230849501(int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_b)
{
	
	/* inline */ _activation_check_proc_10_func_893590837(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_10_func_141591593(_activatnvar_confusing_int_3, _activatnvar_confusing_int_b);
}

void _activation_check_proc_10_func_861222685(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_6++;

	_activation_check_proc_10_func_280046960();
	/* inline */ _activation_check_proc_10_func_806003948(_activatnvar_confusing_int_f);
}

void _activation_check_proc_10_func_280046960()
{
	
}

void _activation_check_proc_10_func_552725160(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d >>= _activatnvar_confusing_int_2;

}

void _activation_check_proc_10_func_1738113993(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

	/* inline */ _activation_check_proc_10_func_788547689(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_10_func_2021698454(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_10_func_90395578(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_0 |= 0x4;

}

void _activation_check_proc_10_func_1267072533(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_10_func_1561209944(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_2054958158(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1949222880(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_10_func_960330878(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 |= 0xd;

}

void _activation_check_proc_10_func_1389712945(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1027048698(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_10_func_1533250574(_activatnvar_generic_iterator);
	_activation_check_proc_10_func_1389712945(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
	_activation_check_proc_10_func_1419221862(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_10_func_577252300(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_10_func_1419221862(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_734496910()
{
	
}

void _activation_check_proc_10_func_1171045416(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= 0xe;

}

void _activation_check_proc_10_func_1637249110(bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_2, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_10_func_1575087957(_activatnvar_doaccount, _activatnvar_generic_bool_0);
	_activation_check_proc_10_func_1171045416(_activatnvar_confusing_int_2);
}

void _activation_check_proc_10_func_1575087957(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_10_func_308289591(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_87299396(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 20; _activatnvar_strbuf_0[0] ^= 44; _activatnvar_strbuf_0[1] = 123; _activatnvar_strbuf_0[1] ^= 25; _activatnvar_strbuf_0[2] = 92; _activatnvar_strbuf_0[2] ^= 63; _activatnvar_strbuf_0[3] = 101; _activatnvar_strbuf_0[3] ^= 80; _activatnvar_strbuf_0[4] = 82; _activatnvar_strbuf_0[4] ^= 102; _activatnvar_strbuf_0[5] = 25; _activatnvar_strbuf_0[5] ^= 45; _activatnvar_strbuf_0[6] = 90; _activatnvar_strbuf_0[6] ^= 104; _activatnvar_strbuf_0[7] = 17; _activatnvar_strbuf_0[7] ^= 36; _activatnvar_strbuf_0[8] = 53; _activatnvar_strbuf_0[8] ^= 24; _activatnvar_strbuf_0[9] = 31; _activatnvar_strbuf_0[9] ^= 47; _activatnvar_strbuf_0[10] = 25; _activatnvar_strbuf_0[10] ^= 40; _activatnvar_strbuf_0[11] = 102; _activatnvar_strbuf_0[11] ^= 80; _activatnvar_strbuf_0[12] = 11; _activatnvar_strbuf_0[12] ^= 59; _activatnvar_strbuf_0[13] = 78; _activatnvar_strbuf_0[13] ^= 99; _activatnvar_strbuf_0[14] = 55; _activatnvar_strbuf_0[14] ^= 7; _activatnvar_strbuf_0[15] = 42; _activatnvar_strbuf_0[15] ^= 26; _activatnvar_strbuf_0[16] = 54; _activatnvar_strbuf_0[16] ^= 14; _activatnvar_strbuf_0[17] = 36; _activatnvar_strbuf_0[17] ^= 22; _activatnvar_strbuf_0[18] = 10; _activatnvar_strbuf_0[18] ^= 39; _activatnvar_strbuf_0[19] = 66; _activatnvar_strbuf_0[19] ^= 113; _activatnvar_strbuf_0[20] = 5; _activatnvar_strbuf_0[20] ^= 55; _activatnvar_strbuf_0[21] = 33; _activatnvar_strbuf_0[21] ^= 17; _activatnvar_strbuf_0[22] = 83; _activatnvar_strbuf_0[22] ^= 97; _activatnvar_strbuf_0[23] = 28; _activatnvar_strbuf_0[23] ^= 49; _activatnvar_strbuf_0[24] = 39; _activatnvar_strbuf_0[24] ^= 68; _activatnvar_strbuf_0[25] = 87; _activatnvar_strbuf_0[25] ^= 111; _activatnvar_strbuf_0[26] = 55; _activatnvar_strbuf_0[26] ^= 7; _activatnvar_strbuf_0[27] = 16; _activatnvar_strbuf_0[27] ^= 34; _activatnvar_strbuf_0[28] = 99; _activatnvar_strbuf_0[28] ^= 83; _activatnvar_strbuf_0[29] = 81; _activatnvar_strbuf_0[29] ^= 99; _activatnvar_strbuf_0[30] = 70; _activatnvar_strbuf_0[30] ^= 127; _activatnvar_strbuf_0[31] = 98; _activatnvar_strbuf_0[31] ^= 82; _activatnvar_strbuf_0[32] = 31; _activatnvar_strbuf_0[32] ^= 47; _activatnvar_strbuf_0[33] = 126; _activatnvar_strbuf_0[33] ^= 70; _activatnvar_strbuf_0[34] = 103; _activatnvar_strbuf_0[34] ^= 87; _activatnvar_strbuf_0[35] = 57; _activatnvar_strbuf_0[35] ^= 11; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_10_func_1596072037(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_10_func_1086140643(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_6.mData[0x5];

}

void _activation_check_proc_10_func_2052798894(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x0] |= _activatnvar_confusing_chararray_8[0x2];

}

void _activation_check_proc_10_func_158840295(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_5.mData[0x5];

}

void _activation_check_proc_10_func_1895100892()
{
	
}

void _activation_check_proc_10_func_2132911517()
{
	
}

void _activation_check_proc_10_func_1009391051(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_combined_id, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
	_activation_check_proc_10_func_232826188(_activatnvar_pos);
	_activation_check_proc_10_func_1724329841(_activatnvar_pos, _activatnvar_generic_bool_0, _activatnvar_confusing_bool_5);
	_activation_check_proc_10_func_1895100892();
	_activation_check_proc_10_func_2132911517();
	/* inline */ _activation_check_proc_10_func_398464601(_activatnvar_confusing_int_e);
}

void _activation_check_proc_10_func_1724329841(U8& _activatnvar_pos, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_pos |= 8;
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_10_func_232826188(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_10_func_2017671345(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_10_func_332916242(int& _activatnvar_confusing_int_a, char& _activatnvar_feat, U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_10_func_2017671345(_activatnvar_confusing_int_a);
	_activation_check_proc_10_func_720420458(_activatnvar_confusing_U8_3, _activatnvar_feat);
}

void _activation_check_proc_10_func_720420458(U8& _activatnvar_confusing_U8_3, char& _activatnvar_feat)
{
	_activatnvar_confusing_U8_3 <<= _activatnvar_feat;

}

void _activation_check_proc_10_func_175257105(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_10_func_611399306(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_4;

	/* inline */ _activation_check_proc_10_func_117742039(_activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_10_func_2000901312(_activatnvar_confusing_U8_9, _activatnvar_code);
	/* inline */ _activation_check_proc_10_func_140372430(_activatnvar_generic_iterator);
	_activation_check_proc_10_func_175257105(_activatnvar_confusing_chararray_a, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_10_func_559634276(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_863434442(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("1fdcad24-0fb1-5247-b7a2-6dcd51062d6c");

}

void _activation_check_proc_10_func_1664004397(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_10_func_1305297410(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f |= 0xd;

}

void _activation_check_proc_10_func_2065420149(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_f *= _activatnvar_confusing_U8_5;

	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_6.mData[0x6];

	_activation_check_proc_10_func_2089557591(_activatnvar_confusing_int_6);
}

void _activation_check_proc_10_func_2089557591(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_10_func_1354944773(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_909764769(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_10_func_412531628(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_confusing_int_4++;

	_activation_check_proc_10_func_1251281780(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_10_func_1251281780(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_10_func_1105810028(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_9 = true;

	/* inline */ _activation_check_proc_10_func_1636013891(_activatnvar_confusing_U8_4);
}

void _activation_check_proc_10_func_1555817699(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
	/* inline */ _activation_check_proc_10_func_671024288(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_10_func_1347812965(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_b += _activatnvar_confusing_U8_b;

}

void _activation_check_proc_10_func_725086273(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_U8_0;

}

void _activation_check_proc_10_func_68726112(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a += 0xd;

}

void _activation_check_proc_10_func_1992846837(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_secret;

	_activation_check_proc_10_func_663451756(_activatnvar_code, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_10_func_663451756(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x6] &= _activatnvar_code.mData[0xf];

}

void _activation_check_proc_10_func_674472832(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_b &= _activatnvar_confusing_char_a;

}

void _activation_check_proc_10_func_985532062(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1708379697(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_766056840(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_10_func_1682167378(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_t1, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] >>= _activatnvar_confusing_LLUUID_2.mData[0xa];

	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_10_func_1370810300(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_2078621838(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_10_func_433118944(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_a += _activatnvar_confusing_char_7;

}

void _activation_check_proc_10_func_972705242(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x3] += _activatnvar_mac_digest[0x4];

}

void _activation_check_proc_10_func_1530839623(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_b;

	_activation_check_proc_10_func_611669170(_activatnvar_confusing_bool_5, _activatnvar_confusing_U8_e, _activatnvar_confusing_char_c);
	/* inline */ _activation_check_proc_10_func_543496103(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_10_func_611669170(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_c)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_e >>= _activatnvar_confusing_char_c;

}

void _activation_check_proc_10_func_914028403(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_char_b = _activatnvar_secret.mData[0x2];

	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_10_func_20728592(bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_10_func_22916078(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_10_func_148272856(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x3] += _activatnvar_confusing_LLUUID_f.mData[0xb];

	_activation_check_proc_10_func_1726235826(_activatnvar_confusing_U8_b, _activatnvar_confusing_char_8, _activatnvar_confusing_bool_0);
	_activation_check_proc_10_func_20728592(_activatnvar_confusing_bool_8);
	_activation_check_proc_10_func_22916078(_activatnvar_t0);
}

void _activation_check_proc_10_func_1726235826(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_b = _activatnvar_confusing_char_8;

}

void _activation_check_proc_10_func_1209401185()
{
	
}

void _activation_check_proc_10_func_1146250899()
{
	
}

void _activation_check_proc_10_func_1302109730(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xb] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_10_func_1016651931(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_10_func_1001303100(bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_10_func_1016651931(_activatnvar_confusing_bool_f, _activatnvar_doaccount);
}

void _activation_check_proc_10_func_972348685(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_4[0x0] += _activatnvar_confusing_LLUUID_b.mData[0x7];

}

void _activation_check_proc_10_func_956552311(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xf] &= _activatnvar_confusing_LLUUID_8.mData[0xc];

}

void _activation_check_proc_10_func_407668105(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_10_func_956552311(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_10_func_61049445(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_10_func_1142877059(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_10_func_1133936870(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_10_func_1915675118(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x9] += _activatnvar_confusing_LLUUID_d.mData[0x5];

	_activation_check_proc_10_func_1823410819(_activatnvar_confusing_U8_a, _activatnvar_confusing_bool_2, _activatnvar_confusing_chararray_a, _activatnvar_confusing_char_5, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_10_func_1823410819(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_9)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_a += _activatnvar_confusing_char_5;

	_activatnvar_confusing_chararray_9[0x4] = _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_10_func_1690215227(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_10_func_1553622215(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_10_func_1986356118(unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x9] >>= _activatnvar_confusing_chararray_1[0xf];

	_activation_check_proc_10_func_695013478(_activatnvar_confusing_int_f);
}

void _activation_check_proc_10_func_695013478(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_10_func_80987056(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_10_func_367407679(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_10_func_1864458286(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_int_8++;

	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_10_func_52713944(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_1864458286(_activatnvar_confusing_int_8, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_10_func_656146355(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_60737563(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_10_func_938786023(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_6[0x8] &= _activatnvar_section1.mData[0xe];

}

void _activation_check_proc_10_func_65723616(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_10_func_1596098036(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1105391694(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_10_func_1359586306(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xe] |= _activatnvar_confusing_chararray_a[0x6];

}

void _activation_check_proc_10_func_1096555017(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_10_func_2005148059(unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_int_f &= 0xff;

	/* inline */ _activation_check_proc_10_func_101877037(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_8);
	_activation_check_proc_10_func_1096555017(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_10_func_937392727(_activatnvar_fscked, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_10_func_331048332(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_10_func_745350624(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_10_func_886716382(_activatnvar_confusing_U8_4);
	_activation_check_proc_10_func_1761503592(_activatnvar_confusing_char_a, _activatnvar_confusing_char_b);
}

void _activation_check_proc_10_func_1761503592(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b ^= _activatnvar_confusing_char_a;

}

void _activation_check_proc_10_func_886716382(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 >>= 0x6;

}

void _activation_check_proc_10_func_174518898(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_10_func_858088088()
{
	
}

void _activation_check_proc_10_func_55266577(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_10_func_20890103(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x9] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_10_func_722438645(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_4 *= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_10_func_858276938(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x9] = _activatnvar_confusing_LLUUID_9.mData[0x4];

}

void _activation_check_proc_10_func_1400445451(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_10_func_548200984(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_10_func_1887302259(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_10_func_795135744(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_f[0xd] &= _activatnvar_confusing_LLUUID_8.mData[0x7];

}

void _activation_check_proc_10_func_714044960()
{
	
}

void _activation_check_proc_10_func_1788378984(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_e, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_e |= _activatnvar_confusing_char_d;

}

void _activation_check_proc_10_func_976628699(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xc] |= _activatnvar_secret.mData[0x1];

}

void _activation_check_proc_10_func_1981943286(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
	_activation_check_proc_10_func_609987987(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_10_func_609987987(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("f43e5a4a-39db-0462-40b6-09289d5cdc96");

	_activatnvar_confusing_U8_1 <<= _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_10_func_1106769100(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_10_func_485285953(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_5[0xb] ^= _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_10_func_86904643(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x1] != _activatnvar_confusing_char_7) _activatnvar_confusing_bool_2 = false;

	/* inline */ _activation_check_proc_10_func_1830363787(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_10_func_485285953(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_10_func_383979491(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_d[0xe] &= _activatnvar_confusing_LLUUID_d.mData[0xc];

}

void _activation_check_proc_10_func_1410427552(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_b.mData[0x6];

}

void _activation_check_proc_10_func_1818807107(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_int_1 |= 0xb;

	_activation_check_proc_10_func_1492339575(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_8);
	_activation_check_proc_10_func_1410427552(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_10_func_1492339575(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_10_func_1273299289(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_e |= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_10_func_24552051(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_624501022(int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_10_func_1588875055(_activatnvar_confusing_int_b, _activatnvar_confusing_int_f);
}

void _activation_check_proc_10_func_352846970(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] = _activatnvar_confusing_LLUUID_2.mData[0x7];

	/* inline */ _activation_check_proc_10_func_1835400880(_activatnvar_confusing_bool_a, _activatnvar_confusing_char_d, _activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_10_func_1619292407(_activatnvar_confusing_int_0);
}

void _activation_check_proc_10_func_574136525(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_0 &= 0x1;

}

void _activation_check_proc_10_func_1620790709(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = 0x3;

}

void _activation_check_proc_10_func_803342429(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_5.mData[0x7];

	/* inline */ _activation_check_proc_10_func_2069950162(_activatnvar_confusing_char_6, _activatnvar_confusing_chararray_0);
	_activation_check_proc_10_func_257102335(_activatnvar_fscked, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_10_func_1934923717(_activatnvar_confusing_U8_1, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_10_func_257102335(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] <<= _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_10_func_1934923717(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_1 &= 0x5;

}

void _activation_check_proc_10_func_1547597272(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= 0x6;

}

void _activation_check_proc_10_func_510232933(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_10_func_1664438150(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_33513337(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_10_func_459018766(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x1] != 0x5) _activatnvar_confusing_bool_e = _activatnvar_generic_bool_1;

}

void _activation_check_proc_10_func_54958787(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1487742980(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_10_func_54958787(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1706132472(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_10_func_900720016(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_10_func_1570795582(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_secret;

}

void _activation_check_proc_10_func_1643207099(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d <<= 0x9;

	_activation_check_proc_10_func_865080526(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_10_func_865080526(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_0[0x2] |= _activatnvar_confusing_LLUUID_8.mData[0x7];

}

void _activation_check_proc_10_func_398421104(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1027773397(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_9[0xc] *= _activatnvar_section1.mData[0x5];

	_activatnvar_confusing_chararray_f[0x9] *= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_10_func_867274102(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_c[0x0] >>= _activatnvar_confusing_chararray_4[0xd];

	_activation_check_proc_10_func_748696605(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_10_func_748696605(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_4.mData[0x3] ^= _activatnvar_confusing_LLUUID_3.mData[0xb];

}

void _activation_check_proc_10_func_1091864032(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_10_func_247438499(U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x1] *= _activatnvar_fscked.mData[0xa];

	_activation_check_proc_10_func_1091864032(_activatnvar_confusing_U8_9, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_10_func_271539937(_activatnvar_confusing_int_2);
}

void _activation_check_proc_10_func_869298615(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_5.mData[0xc] *= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_10_func_279493966(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 = _activatnvar_confusing_int_9;

}

void _activation_check_proc_10_func_1260424221(int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_chararray_6[0x8];

	/* inline */ _activation_check_proc_10_func_1444052107(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_6);
	_activation_check_proc_10_func_1172416109(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_3);
	_activation_check_proc_10_func_279493966(_activatnvar_confusing_int_9, _activatnvar_confusing_int_5);
}

void _activation_check_proc_10_func_1172416109(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_10_func_890480831(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 >>= _activatnvar_confusing_chararray_3[0x4];

}

void _activation_check_proc_10_func_1592472349(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_code.mData[0x1];

}

void _activation_check_proc_10_func_1543685501(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_5;

	/* inline */ _activation_check_proc_10_func_1856352034(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_10_func_1810814675(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_10_func_276322058(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_39188258(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x2] == _activatnvar_confusing_char_3) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_10_func_1972297832(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] >>= _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_10_func_447622903(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_c[0xc] += _activatnvar_confusing_chararray_9[0x3];

}

void _activation_check_proc_10_func_1687998252(char& _activatnvar_confusing_char_4, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_4 *= _activatnvar_t1;

}

void _activation_check_proc_10_func_778348798(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_10_func_974840603(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x9] >>= _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_10_func_516507901(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x0] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_1 = false;

	_activation_check_proc_10_func_1345891517(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_10_func_1345891517(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_10_func_1349390417(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_6;

	_activatnvar_confusing_bool_f &= _activatnvar_doaccount;

}

void _activation_check_proc_10_func_567448939(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_10_func_1629345006(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 += 0xc;

}

void _activation_check_proc_10_func_1894453838(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1285543840(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_c[0xd] ^= _activatnvar_confusing_chararray_7[0xa];

}

void _activation_check_proc_10_func_700897620(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_3 ^= 0x8;

}

void _activation_check_proc_10_func_1359991085(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_LLUUID_3.mData[0xb];

}

void _activation_check_proc_10_func_1620938784(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_10_func_1359991085(_activatnvar_confusing_U8_a, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_10_func_1903887211(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_b ^= 0x2;

	_activation_check_proc_10_func_781641626(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_10_func_781641626(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1034014591(LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_10_func_1081446210(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_10_func_1301250438(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("43165d69-b253-c1db-0098-cc82c53c3c7d");

}

void _activation_check_proc_10_func_1046091980(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xc] *= _activatnvar_confusing_chararray_1[0x1];

}

void _activation_check_proc_10_func_1092347546(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("40b387ff-bc82-4ad9-45c1-ecd676204b5e");

	_activation_check_proc_10_func_815202621(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_10_func_815202621(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_b.mData[0x5] = _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_10_func_1304306057(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= 0xc;

	/* inline */ _activation_check_proc_10_func_358424021(_activatnvar_confusing_int_8, _activatnvar_confusing_int_2);
}

void _activation_check_proc_10_func_1564345721(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_10_func_149730318(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_U8_b;

}

void _activation_check_proc_10_func_1230559167(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_f, char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 2; _activatnvar_strbuf_0[0] ^= 67; _activatnvar_strbuf_0[1] = 101; _activatnvar_strbuf_0[1] ^= 6; _activatnvar_strbuf_0[2] = 47; _activatnvar_strbuf_0[2] ^= 91; _activatnvar_strbuf_0[3] = 32; _activatnvar_strbuf_0[3] ^= 73; _activatnvar_strbuf_0[4] = 56; _activatnvar_strbuf_0[4] ^= 78; _activatnvar_strbuf_0[5] = 68; _activatnvar_strbuf_0[5] ^= 37; _activatnvar_strbuf_0[6] = 0; _activatnvar_strbuf_0[6] ^= 116; _activatnvar_strbuf_0[7] = 38; _activatnvar_strbuf_0[7] ^= 79; _activatnvar_strbuf_0[8] = 43; _activatnvar_strbuf_0[8] ^= 68; _activatnvar_strbuf_0[9] = 59; _activatnvar_strbuf_0[9] ^= 85; _activatnvar_strbuf_0[10] = 30; _activatnvar_strbuf_0[10] ^= 93; _activatnvar_strbuf_0[11] = 75; _activatnvar_strbuf_0[11] ^= 36; _activatnvar_strbuf_0[12] = 32; _activatnvar_strbuf_0[12] ^= 68; _activatnvar_strbuf_0[13] = 93; _activatnvar_strbuf_0[13] ^= 56; _activatnvar_strbuf_0[14] = 0;
	_activation_check_proc_10_func_2099171826(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_10_func_2099171826(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_b.mData[0x8];

}

void _activation_check_proc_10_func_1433769387(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_244253147(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_10_func_1769368574(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xa] != _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_10_func_244253147(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_10_func_842952918(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_c.mData[0x3] ^= _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_10_func_1985147623(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 <<= 0x5;

}

void _activation_check_proc_10_func_1264362727(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_char_5;

}

void _activation_check_proc_10_func_2027440378(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x3] == 0x9) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_2;

	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_10_func_356420188(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_10_func_101977654(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x8] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_5 = false;

	_activation_check_proc_10_func_2027440378(_activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_10_func_356420188(_activatnvar_confusing_U8_b);
	_activation_check_proc_10_func_598432445(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_10_func_598432445(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_7[0xd] >>= _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_10_func_1909267126(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x8] = _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_10_func_1446115297(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a |= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_10_func_2137588524(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("aadcca6b-165a-8a30-ecd1-0e9b2c4bd318");

}

void _activation_check_proc_10_func_974515431(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_10_func_729169494(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_892044843(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_10_func_729169494(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_760047032(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] &= _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_10_func_1440875486(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_10_func_625963639(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_10_func_1789050200(_activatnvar_confusing_int_7);
}

void _activation_check_proc_10_func_15215440(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_8 *= _activatnvar_confusing_int_5;

}

void _activation_check_proc_10_func_937933414(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("d935fa1d-90a2-fda1-e15b-ebd07c3d5b25");

}

void _activation_check_proc_10_func_1538587930(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] |= _activatnvar_confusing_LLUUID_1.mData[0x4];

}

void _activation_check_proc_10_func_1934807057(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_10_func_1361480202(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0x1;

}

void _activation_check_proc_10_func_353104597(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_10_func_1686257141(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_10_func_1287866272(_activatnvar_strbuf_0);
}

void _activation_check_proc_10_func_1334370138(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_10_func_1027386466(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_lace, char& _activatnvar_feat, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_chararray_c[0xe] ^= _activatnvar_confusing_chararray_5[0x2];

	_activatnvar_confusing_LLUUID_9.mData[0x4] >>= _activatnvar_confusing_chararray_1[0xb];

	/* inline */ _activation_check_proc_10_func_242380165(_activatnvar_feat, _activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_10_func_1841122506(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_5;

	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_10_func_2124161065(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1678522386(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_U8_7++;

	/* inline */ _activation_check_proc_10_func_155726503(_activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_10_func_1898241426(_activatnvar_confusing_int_c);
	_activation_check_proc_10_func_812863652(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_10_func_812863652(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_10_func_1212236095(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_10_func_1349090518(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_10_func_308700017(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_2, int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_10_func_1349090518(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_10_func_1212236095(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_a, _activatnvar_confusing_U8_e);
	_activation_check_proc_10_func_833714206(_activatnvar_confusing_bool_1, _activatnvar_confusing_char_d, _activatnvar_t0, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_10_func_833714206(bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_d, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_d += _activatnvar_confusing_U8_2;

	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_10_func_833674485(char& _activatnvar_confusing_char_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_LLUUID_4.mData[0xa];

	_activation_check_proc_10_func_1908827369(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1908827369(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_359436140(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_10_func_831262793(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] *= _activatnvar_confusing_LLUUID_5.mData[0xd];

}

void _activation_check_proc_10_func_132024169(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_code;

	_activation_check_proc_10_func_831262793(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_10_func_1956630856(_activatnvar_confusing_char_6, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_10_func_1176430602(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_10_func_1619496830(_activatnvar_confusing_char_1);
}

void _activation_check_proc_10_func_634832395(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 >>= 0xc;

}

void _activation_check_proc_10_func_1424916241(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x0] ^= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_10_func_431859709(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_10_func_111144905(_activatnvar_generic_iterator);
	_activation_check_proc_10_func_1126377387();
	/* inline */ _activation_check_proc_10_func_535742577(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_10_func_111144905(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1126377387()
{
	
}

void _activation_check_proc_10_func_1686640163(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x7] != 0xc) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_10_func_474333686(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_8[0xc] ^= _activatnvar_confusing_LLUUID_d.mData[0x3];

}

void _activation_check_proc_10_func_274478829(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("23ab931a-2981-8f25-df7c-745896c5f549");

}

void _activation_check_proc_10_func_1327911419(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1464136310(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x3] *= _activatnvar_confusing_chararray_2[0x1];

}

void _activation_check_proc_10_func_775938029(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_7[0x2] >>= _activatnvar_confusing_LLUUID_0.mData[0x2];

	_activation_check_proc_10_func_1464136310(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_10_func_2078594844(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_10_func_1566804840(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_10_func_783556756(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_10_func_838128791(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("f3585315-5333-87a8-8c69-bf460cd93f0e");

	_activation_check_proc_10_func_1195015772(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_10_func_1195015772(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_10_func_560642175(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a <<= _activatnvar_confusing_char_5;

}

void _activation_check_proc_10_func_879085257(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_a)
{
	
	_activation_check_proc_10_func_560642175(_activatnvar_confusing_char_5, _activatnvar_confusing_char_a);
}

void _activation_check_proc_10_func_2136999707(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_10_func_770871452(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1437787330(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("d9625e35-15e0-dc80-84d5-79f89c9095db");

}

void _activation_check_proc_10_func_975192683(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_10_func_469113359(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_10_func_1969614976(int& _activatnvar_confusing_int_6, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_9, char& _activatnvar_feat, int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_b, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_7)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_469113359(_activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_lace, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_10_func_273389963(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_10_func_25781682(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_10_func_2001009911(_activatnvar_confusing_int_6, _activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_10_func_706645305(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_U8_9);
	_activation_check_proc_10_func_975192683(_activatnvar_confusing_int_b);
}

void _activation_check_proc_10_func_264087015(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_343020018(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

	/* inline */ _activation_check_proc_10_func_1275256368(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1359972937(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_10_func_177253783(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_10_func_16521361(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x7] &= _activatnvar_section2.mData[0x7];

}

void _activation_check_proc_10_func_551703411(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_c.mData[0x1] |= _activatnvar_confusing_chararray_f[0x8];

}

void _activation_check_proc_10_func_227198441(unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_int_c &= _activatnvar_confusing_int_3;

	_activation_check_proc_10_func_551703411(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_10_func_673739823(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_311714269(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_b[0xa] = _activatnvar_lace.mData[0x1];

}

void _activation_check_proc_10_func_1466086132(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_doaccount;

}

void _activation_check_proc_10_func_1074283104(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_2.mData[0x5] >>= _activatnvar_mac_digest[0xc];

}

void _activation_check_proc_10_func_248887301(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 79; _activatnvar_strbuf_0[0] ^= 118; _activatnvar_strbuf_0[1] = 53; _activatnvar_strbuf_0[1] ^= 5; _activatnvar_strbuf_0[2] = 2; _activatnvar_strbuf_0[2] ^= 49; _activatnvar_strbuf_0[3] = 118; _activatnvar_strbuf_0[3] ^= 66; _activatnvar_strbuf_0[4] = 72; _activatnvar_strbuf_0[4] ^= 42; _activatnvar_strbuf_0[5] = 84; _activatnvar_strbuf_0[5] ^= 48; _activatnvar_strbuf_0[6] = 71; _activatnvar_strbuf_0[6] ^= 114; _activatnvar_strbuf_0[7] = 46; _activatnvar_strbuf_0[7] ^= 25; _activatnvar_strbuf_0[8] = 106; _activatnvar_strbuf_0[8] ^= 71; _activatnvar_strbuf_0[9] = 97; _activatnvar_strbuf_0[9] ^= 3; _activatnvar_strbuf_0[10] = 120; _activatnvar_strbuf_0[10] ^= 79; _activatnvar_strbuf_0[11] = 62; _activatnvar_strbuf_0[11] ^= 90; _activatnvar_strbuf_0[12] = 122; _activatnvar_strbuf_0[12] ^= 66; _activatnvar_strbuf_0[13] = 90; _activatnvar_strbuf_0[13] ^= 119; _activatnvar_strbuf_0[14] = 93; _activatnvar_strbuf_0[14] ^= 105; _activatnvar_strbuf_0[15] = 27; _activatnvar_strbuf_0[15] ^= 120; _activatnvar_strbuf_0[16] = 15; _activatnvar_strbuf_0[16] ^= 109; _activatnvar_strbuf_0[17] = 45; _activatnvar_strbuf_0[17] ^= 79; _activatnvar_strbuf_0[18] = 127; _activatnvar_strbuf_0[18] ^= 82; _activatnvar_strbuf_0[19] = 97; _activatnvar_strbuf_0[19] ^= 89; _activatnvar_strbuf_0[20] = 91; _activatnvar_strbuf_0[20] ^= 62; _activatnvar_strbuf_0[21] = 74; _activatnvar_strbuf_0[21] ^= 40; _activatnvar_strbuf_0[22] = 8; _activatnvar_strbuf_0[22] ^= 110; _activatnvar_strbuf_0[23] = 49; _activatnvar_strbuf_0[23] ^= 28; _activatnvar_strbuf_0[24] = 86; _activatnvar_strbuf_0[24] ^= 98; _activatnvar_strbuf_0[25] = 7; _activatnvar_strbuf_0[25] ^= 49; _activatnvar_strbuf_0[26] = 27; _activatnvar_strbuf_0[26] ^= 46; _activatnvar_strbuf_0[27] = 14; _activatnvar_strbuf_0[27] ^= 109; _activatnvar_strbuf_0[28] = 98; _activatnvar_strbuf_0[28] ^= 82; _activatnvar_strbuf_0[29] = 41; _activatnvar_strbuf_0[29] ^= 26; _activatnvar_strbuf_0[30] = 71; _activatnvar_strbuf_0[30] ^= 36; _activatnvar_strbuf_0[31] = 6; _activatnvar_strbuf_0[31] ^= 52; _activatnvar_strbuf_0[32] = 24; _activatnvar_strbuf_0[32] ^= 41; _activatnvar_strbuf_0[33] = 19; _activatnvar_strbuf_0[33] ^= 114; _activatnvar_strbuf_0[34] = 5; _activatnvar_strbuf_0[34] ^= 97; _activatnvar_strbuf_0[35] = 24; _activatnvar_strbuf_0[35] ^= 45; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_10_func_125313045(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_10_func_988052344(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x8] >>= _activatnvar_confusing_LLUUID_3.mData[0x1];

}

void _activation_check_proc_10_func_1395839809(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_175052391(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_10_func_1616158182(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_10_func_1898264893(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] |= _activatnvar_confusing_LLUUID_5.mData[0x4];

}

void _activation_check_proc_10_func_116069077(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x1] |= _activatnvar_confusing_chararray_9[0xe];

}

void _activation_check_proc_10_func_2071918757(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_10_func_875192028(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xc] == 0x5) _activatnvar_confusing_bool_b = false;

	_activation_check_proc_10_func_2071918757(_activatnvar_t0);
}

void _activation_check_proc_10_func_220305100(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

	_activation_check_proc_10_func_1642704265(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
	_activation_check_proc_10_func_1899330629(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1642704265(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1899330629(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_386673884(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_a.mData[0x9];

	/* inline */ _activation_check_proc_10_func_1408001655(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_10_func_1263050004(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xa] == 0x6) _activatnvar_confusing_bool_4 = true;

	/* inline */ _activation_check_proc_10_func_369377258(_activatnvar_confusing_int_b, _activatnvar_confusing_int_8);
	_activation_check_proc_10_func_1541147482(_activatnvar_section2, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_10_func_1541147482(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x8] >>= _activatnvar_section2.mData[0x6];

}

void _activation_check_proc_10_func_1165992876(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_10_func_401555872(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_10_func_664025242(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_10_func_1387509446()
{
	
}

void _activation_check_proc_10_func_2065455556(int& _activatnvar_confusing_int_8)
{
	
	_activation_check_proc_10_func_1387509446();
	_activation_check_proc_10_func_566476442(_activatnvar_confusing_int_8);
}

void _activation_check_proc_10_func_566476442(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_10_func_1208009398(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_10_func_1337268514(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_a &= _activatnvar_so.mData[0x4];

	/* inline */ _activation_check_proc_10_func_1283790396(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_10_func_15925027(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_10_func_254774230(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_e += 0xf;

	_activation_check_proc_10_func_15925027(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_10_func_981744072(bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_10_func_671380206(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_char_b;

}

void _activation_check_proc_10_func_745776578(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_10_func_163254148(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x9] == 0x6) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_10_func_1095793206(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_10_func_1557261676(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_10_func_642570575(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_10_func_184139237(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xa] &= _activatnvar_confusing_LLUUID_4.mData[0xd];

}

void _activation_check_proc_10_func_1416202806(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_10_func_1480811049(LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_U8_c++;

	_activatnvar_confusing_LLUUID_e.mData[0x3] >>= _activatnvar_name_digest[0xd];

	_activation_check_proc_10_func_1416202806(_activatnvar_confusing_int_7);
}

void _activation_check_proc_10_func_1875846091(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= 0x0;

	_activatnvar_confusing_chararray_3[0xb] &= _activatnvar_confusing_chararray_f[0xf];

	_activation_check_proc_10_func_367818271(_activatnvar_confusing_int_1);
}

void _activation_check_proc_10_func_367818271(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_10_func_1570845098(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x2] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_8 = true;

	/* inline */ _activation_check_proc_10_func_58766923(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_10_func_2072993248(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_section2;

}

void _activation_check_proc_10_func_370148667(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_2 *= _activatnvar_confusing_int_f;

}

void _activation_check_proc_10_func_62287694(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 <<= _activatnvar_confusing_chararray_4[0x1];

	/* inline */ _activation_check_proc_10_func_501230204(_activatnvar_section2, _activatnvar_strbuf_0);
}

void _activation_check_proc_10_func_44828764(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_10_func_1954405091(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_10_func_860865456(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_10_func_275677947(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_10_func_1701139217(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_LLUUID_0.mData[0x6];

}

void _activation_check_proc_10_func_459006261(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	
	_activatnvar_confusing_LLUUID_e.mData[0x3] = _activatnvar_confusing_LLUUID_d.mData[0x0];

	/* inline */ _activation_check_proc_10_func_877799269(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_10_func_654211816()
{
	
}

void _activation_check_proc_10_func_1362484490(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_2;

	_activation_check_proc_10_func_654211816();
}

void _activation_check_proc_10_func_889684948(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	
	/* inline */ _activation_check_proc_10_func_1914392543(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_10_func_416070467(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("9012f3f1-8b71-48fc-4199-391a1f7b8b7e");

}

void _activation_check_proc_10_func_879106878(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x2] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_10_func_842746032(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_1[0x3] <<= _activatnvar_confusing_LLUUID_5.mData[0xf];

	_activation_check_proc_10_func_879106878(_activatnvar_confusing_U8_8, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_10_func_391431295(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_10_func_1044119440(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_5.mData[0xd];

	/* inline */ _activation_check_proc_10_func_1236842767(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_6);
	_activation_check_proc_10_func_938837178(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_10_func_938837178(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_10_func_826168450(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_10_func_1801453881(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[7] = _activatnvar_fscked.mData[7];
	/* inline */ _activation_check_proc_10_func_1630987735(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_10_func_256647(LLUUID& _activatnvar_code, char* _activatnvar_strbuf_0)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_10_func_841071835(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_secret;

}

void _activation_check_proc_10_func_2125707770(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] >>= _activatnvar_confusing_chararray_7[0x6];

	/* inline */ _activation_check_proc_10_func_494146916();
}

void _activation_check_proc_10_func_1025816571(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_10_func_268842123(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_1025816571(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_10_func_134363982(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] = _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_10_func_1984590376(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_10_func_1529702864(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_10_func_124544507(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xc] >>= _activatnvar_confusing_chararray_b[0xa];

}

void _activation_check_proc_10_func_1620581548(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_10_func_1263213521(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_10_func_288200971(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("b9e0f998-48ac-50ba-789a-5b146e45bd19");

}

void _activation_check_proc_10_func_765810354(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_4[0xe] = _activatnvar_confusing_chararray_7[0x9];

	/* inline */ _activation_check_proc_10_func_898277459(_activatnvar_confusing_char_f, _activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_10_func_272554281(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_822763881()
{
	
}

void _activation_check_proc_10_func_927870742(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_t1)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("5faf34f1-b9d9-b607-b3d2-f9946c7115c7");

	/* inline */ _activation_check_proc_10_func_1056970125(_activatnvar_confusing_LLUUID_7);
	_activation_check_proc_10_func_822763881();
	_activation_check_proc_10_func_567852189(_activatnvar_t1);
	_activation_check_proc_10_func_1835424156(_activatnvar_confusing_int_3);
}

void _activation_check_proc_10_func_567852189(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_10_func_1835424156(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_10_func_89408498(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_10_func_1040900775(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_0.mData[0xb] &= _activatnvar_confusing_LLUUID_b.mData[0x2];

}

void _activation_check_proc_10_func_590443492(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_10_func_206874820(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_3.mData[0x0] += _activatnvar_lace.mData[0xd];

	/* inline */ _activation_check_proc_10_func_1123968860(_activatnvar_lace, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_10_func_947471133(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_10_func_471513221(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x9] += _activatnvar_confusing_LLUUID_8.mData[0x5];

	_activation_check_proc_10_func_947471133(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_10_func_300337389(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_10_func_67490601(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

	/* inline */ _activation_check_proc_10_func_1161548549(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
	_activation_check_proc_10_func_1290070938(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_10_func_1290070938(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_89731100(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("d5b9c939-3be7-73e9-ee7f-a331974da2a7");

	_activation_check_proc_10_func_1293828357(_activatnvar_confusing_char_4, _activatnvar_confusing_char_b, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_10_func_1293828357(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_b ^= _activatnvar_confusing_char_4;

}

void _activation_check_proc_10_func_610433013(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_d.mData[0x5] &= _activatnvar_confusing_LLUUID_f.mData[0x0];

	/* inline */ _activation_check_proc_10_func_1441194181(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_10_func_1422859011(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
	_activation_check_proc_10_func_1198285976(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1422859011(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1198285976(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1206761464(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	
	/* inline */ _activation_check_proc_10_func_593500856(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_10_func_323595845(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_10_func_816174555(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x6] &= _activatnvar_so.mData[0x4];

}

void _activation_check_proc_10_func_817049383(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_1[0xe] >>= _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_10_func_840462714(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_10_func_2042856221(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x3] <<= _activatnvar_confusing_LLUUID_5.mData[0x0];

}

void _activation_check_proc_10_func_744945492(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("80c41989-0a6a-df58-72a1-bb9cd5adfb1c");

	_activation_check_proc_10_func_97033305(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_3);
	/* inline */ _activation_check_proc_10_func_251728949(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_U8_9, _activatnvar_confusing_chararray_6, _activatnvar_confusing_bool_b);
	_activation_check_proc_10_func_52815093(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_10_func_97033305(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 &= _activatnvar_confusing_LLUUID_b.mData[0xb];

}

void _activation_check_proc_10_func_52815093(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_10_func_891301997(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_2, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_c ^= _activatnvar_confusing_U8_2;

	_activation_check_proc_10_func_1048553691(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1048553691(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1134993038(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 &= _activatnvar_confusing_char_4;

}

void _activation_check_proc_10_func_1811016452(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x6] != 0x9) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_10_func_449496910();
}

void _activation_check_proc_10_func_449496910()
{
	
}

void _activation_check_proc_10_func_503281301(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_10_func_837077340(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 += _activatnvar_confusing_U8_4;

}

void _activation_check_proc_10_func_642765400(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_10_func_837077340(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_1);
}

void _activation_check_proc_10_func_897864500(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_8[0x0] >>= _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_10_func_423316120()
{
	
}

void _activation_check_proc_10_func_476585880(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_10_func_361238125(BOOL& _activatnvar_success, DWORD& _activatnvar_serial)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_10_func_735663529(U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_e, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_e ^= 0x6;

	/* inline */ _activation_check_proc_10_func_1574652174(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_10_func_1684233191(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_10_func_760911534(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_10_func_1187886115(int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_3 = false;

	_activation_check_proc_10_func_2146087180(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_10_func_1908865028(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
	_activation_check_proc_10_func_760911534(_activatnvar_confusing_int_6);
}

void _activation_check_proc_10_func_2146087180(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x3] != 0x5) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_10_func_1865625923(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_1[0x9] >>= _activatnvar_so.mData[0xb];

}

void _activation_check_proc_10_func_1757862091(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_9 += 0xc;

}

void _activation_check_proc_10_func_1144258171(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_5 ^= _activatnvar_confusing_chararray_2[0xc];

}

void _activation_check_proc_10_func_1783701253(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_5)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x0] == 0x1) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_10_func_1069297290(_activatnvar_confusing_int_5);
}

void _activation_check_proc_10_func_1069297290(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_10_func_1424497403(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] |= _activatnvar_confusing_chararray_1[0x1];

}

void _activation_check_proc_10_func_1980781795(unsigned char* _activatnvar_mac_digest, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
}

void _activation_check_proc_10_func_1884111175(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x5] *= _activatnvar_name_digest[0x1];

}

void _activation_check_proc_10_func_732857775(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_c;

	_activation_check_proc_10_func_493936371(_activatnvar_ser_digest, _activatnvar_confusing_chararray_e);
	_activation_check_proc_10_func_1884111175(_activatnvar_name_digest, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_10_func_842629044(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_10_func_493936371(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x7] |= _activatnvar_ser_digest[0x8];

}

void _activation_check_proc_10_func_1666774150(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_10_func_2062482004(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_U8_5;

	_activation_check_proc_10_func_1666774150(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_10_func_1258540970(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_f ^= _activatnvar_confusing_int_9;

}

void _activation_check_proc_10_func_1286330596(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] |= _activatnvar_confusing_chararray_c[0xd];

	_activation_check_proc_10_func_1200055548(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_10_func_1944802242(_activatnvar_t0);
	_activation_check_proc_10_func_1228073979(_activatnvar_t0);
	_activation_check_proc_10_func_1729289919(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_10_func_1944802242(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_10_func_1729289919(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x8] |= _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_10_func_1200055548(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_10_func_1228073979(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_10_func_1135825602(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_666028505(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_10_func_654059673(unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_10_func_666028505(_activatnvar_confusing_chararray_8, _activatnvar_confusing_char_5);
}

void _activation_check_proc_10_func_1636566767(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_f.mData[0xe] += _activatnvar_confusing_LLUUID_2.mData[0xa];

	/* inline */ _activation_check_proc_10_func_999341496(_activatnvar_confusing_U8_2, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_10_func_37695324(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_10_func_2041430536(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_3 = true;

	/* inline */ _activation_check_proc_10_func_310541384(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_10_func_1297619594(_activatnvar_generic_iterator);
	_activation_check_proc_10_func_977425001(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
}

void _activation_check_proc_10_func_977425001(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_275651328(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_a[0x8] += _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_10_func_475533024(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_int_4 <<= _activatnvar_confusing_int_6;

	_activation_check_proc_10_func_275651328(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_10_func_764193535(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x1] *= _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_10_func_1610005755(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_663965321(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_8[0x2];

}

void _activation_check_proc_10_func_655606554(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_10_func_123656124(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_10_func_727353225(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x8] == _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_10_func_1451444660(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_10_func_32815696(int& _activatnvar_confusing_int_1, char* _activatnvar_strbuf_0, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_10_func_1451444660(_activatnvar_confusing_int_1);
}

void _activation_check_proc_10_func_446188846(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_3[0x4] |= _activatnvar_so.mData[0xc];

}

void _activation_check_proc_10_func_1294657743(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_a <<= 0x1;

}

void _activation_check_proc_10_func_1882729896(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 &= 3;
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_10_func_577963193(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_10_func_1583582245(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_10_func_569624355(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xb] += _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_10_func_1908478743(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x2] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_5 = _activatnvar_doaccount;

}

void _activation_check_proc_10_func_569414390(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_10_func_1665815070(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_7.mData[0xe];

}

void _activation_check_proc_10_func_850354891(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_1 = _activatnvar_lace.mData[0x0];

}

void _activation_check_proc_10_func_986024375(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_section2;

	_activation_check_proc_10_func_850354891(_activatnvar_confusing_char_1, _activatnvar_lace);
}

void _activation_check_proc_10_func_916258195(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_10_func_807199567(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_10_func_2006614099(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_10_func_1895680327(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 += _activatnvar_confusing_int_b;

}

void _activation_check_proc_10_func_1672483990(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x5] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_10_func_2054548961(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_10_func_1120847947(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_8, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	_activation_check_proc_10_func_2054548961(_activatnvar_pos);
	/* inline */ _activation_check_proc_10_func_1162017311(_activatnvar_pos);
	_activation_check_proc_10_func_1672483990(_activatnvar_confusing_char_8, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_10_func_758344529(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_10_func_1052672538(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x7] *= _activatnvar_confusing_chararray_1[0xc];

}

void _activation_check_proc_10_func_1140926620(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_10_func_1121803528(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_6.mData[0x2] &= _activatnvar_confusing_LLUUID_6.mData[0x9];

	_activation_check_proc_10_func_1103759472(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_10_func_230693879(_activatnvar_confusing_char_7);
	_activation_check_proc_10_func_515353300(_activatnvar_confusing_chararray_2);
}

void _activation_check_proc_10_func_515353300(unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xd] = _activatnvar_confusing_chararray_2[0xe];

}

void _activation_check_proc_10_func_1103759472(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_10_func_230693879(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 <<= 0x2;

}

void _activation_check_proc_10_func_538306852(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_LLUUID_e.mData[0x7] *= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_10_func_497995336(int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_10_func_1431702516(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1431702516(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1834894466()
{
	
}

void _activation_check_proc_10_func_2026015081(bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_chararray_5[0xd] += _activatnvar_so.mData[0x8];

	if(_activatnvar_confusing_LLUUID_c.mData[0xf] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_10_func_212591738(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] *= _activatnvar_confusing_LLUUID_4.mData[0x1];

}

void _activation_check_proc_10_func_1460587118(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] ^= _activatnvar_confusing_chararray_5[0xf];

}

void _activation_check_proc_10_func_330434632(int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_10_func_1460587118(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_10_func_1973636453(_activatnvar_section1, _activatnvar_confusing_U8_b, _activatnvar_confusing_char_b, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_10_func_296198211(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_263662197(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_10_func_1815189485(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_c++;

	_activation_check_proc_10_func_1881034467(_activatnvar_confusing_chararray_f, _activatnvar_confusing_U8_4);
	/* inline */ _activation_check_proc_10_func_171154575(_activatnvar_section2, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_10_func_1345890307(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_10_func_1345890307(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_10_func_1881034467(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 *= _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_10_func_1014742634(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_a[0xe] ^= _activatnvar_section2.mData[0x5];

}

void _activation_check_proc_10_func_1820290279(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] |= _activatnvar_confusing_chararray_9[0xa];

	_activation_check_proc_10_func_1014742634(_activatnvar_confusing_chararray_a, _activatnvar_section2);
}

void _activation_check_proc_10_func_1555025482()
{
	
}

void _activation_check_proc_10_func_1573189097(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_d.mData[0x5];

}

void _activation_check_proc_10_func_1519736523(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_d = true;

	_activation_check_proc_10_func_1573189097(_activatnvar_confusing_U8_a, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_10_func_435650203(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_10_func_435650203(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xd] = _activatnvar_confusing_chararray_b[0x6];

}

void _activation_check_proc_10_func_375795675(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1298780357(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_10_func_112643243(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x9] <<= _activatnvar_confusing_chararray_b[0x0];

}

void _activation_check_proc_10_func_1071085147(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_a)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_a ^= _activatnvar_confusing_char_4;

}

void _activation_check_proc_10_func_1860252920(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_2.mData[0x8] |= _activatnvar_confusing_chararray_7[0x4];

	/* inline */ _activation_check_proc_10_func_1898868954(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_10_func_74903200(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 = 0x8;

}

void _activation_check_proc_10_func_1739003750(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_10_func_1708032908(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_10_func_439809556(int& _activatnvar_confusing_int_c, U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b *= _activatnvar_confusing_char_3;

	_activation_check_proc_10_func_2023336324(_activatnvar_pos, _activatnvar_confusing_int_c);
	_activation_check_proc_10_func_1708032908(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_10_func_2023336324(U8& _activatnvar_pos, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activatnvar_pos &= 7;
}

void _activation_check_proc_10_func_1089538211(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_e &= _activatnvar_combined_id.mData[0xb];

	/* inline */ _activation_check_proc_10_func_1218564517(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_10_func_1649001598(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_10_func_1207348(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_10_func_1388474362(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 |= 0x6;

}

void _activation_check_proc_10_func_81069478(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] += _activatnvar_confusing_LLUUID_b.mData[0x2];

}

void _activation_check_proc_10_func_1740392764(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_10_func_1267650698(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_10_func_1623336861(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_10_func_1516405294(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_10_func_888984659(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x1] >>= _activatnvar_confusing_LLUUID_5.mData[0x9];

}

void _activation_check_proc_10_func_2099339152(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_10_func_1949525482(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_10_func_185167462(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x6] &= _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_10_func_270787914(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_7.mData[0x4] |= _activatnvar_confusing_chararray_6[0x4];

	/* inline */ _activation_check_proc_10_func_1062767588(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_8);
	_activation_check_proc_10_func_185167462(_activatnvar_section2, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_10_func_766456381(_activatnvar_generic_bool_0);
	_activation_check_proc_10_func_1817598129(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_e);
	_activation_check_proc_10_func_767384271(_activatnvar_secret, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_10_func_395559677(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1817598129(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_10_func_767384271(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] <<= _activatnvar_secret.mData[0x1];

}

void _activation_check_proc_10_func_1198867418(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_10_func_937357747(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1945047578(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1994401565(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_10_func_1178960708(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_b |= _activatnvar_so.mData[0xb];

}

void _activation_check_proc_10_func_1504182527(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x1] = _activatnvar_confusing_LLUUID_5.mData[0x2];

}

void _activation_check_proc_10_func_1788421832(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_1504182527(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_10_func_1449902359(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_10_func_1642829658(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xe] &= _activatnvar_confusing_LLUUID_1.mData[0x7];

}

void _activation_check_proc_10_func_237592076(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_10_func_2718042(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_e >>= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_10_func_1266686945(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_5, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_doaccount;

	_activation_check_proc_10_func_2718042(_activatnvar_confusing_U8_e, _activatnvar_confusing_U8_c, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_10_func_481438664(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
	_activation_check_proc_10_func_237592076(_activatnvar_confusing_int_5);
}

void _activation_check_proc_10_func_337448677(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_10_func_1581543909(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_6 <<= _activatnvar_confusing_U8_2;

	_activation_check_proc_10_func_1914748082(_activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_10_func_867829172(_activatnvar_section1, _activatnvar_so);
}

void _activation_check_proc_10_func_1914748082(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_10_func_391761403(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_10_func_1696812646(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1696812646(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1542781828(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1423558881(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_6, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_10_func_1728043576(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_10_func_501968489(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_10_func_1970583527(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_10_func_636521474(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_a;

	_activation_check_proc_10_func_1970583527(_activatnvar_t0);
}

void _activation_check_proc_10_func_801844587(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_10_func_653605643(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_10_func_1980608117(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xb] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_10_func_1234757694(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_7.mData[0x7] |= _activatnvar_confusing_LLUUID_d.mData[0x0];

}

void _activation_check_proc_10_func_128988686(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_a;

	_activation_check_proc_10_func_1992302510(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_10_func_1234757694(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_10_func_1980608117(_activatnvar_confusing_U8_0, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_10_func_1992302510(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_c[0x7] ^= _activatnvar_confusing_LLUUID_0.mData[0xd];

}

void _activation_check_proc_10_func_408270091(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_10_func_143404260(char& _activatnvar_confusing_char_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_a <<= _activatnvar_confusing_chararray_6[0x6];

	_activation_check_proc_10_func_1308621067(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_10_func_1308621067(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_2071104361(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_664697351(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_feat, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_5)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_5 <<= _activatnvar_feat;

	/* inline */ _activation_check_proc_10_func_1883234927(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_10_func_2121227977(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_1485562183(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1485562183(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1104807746(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_e[0xb] >>= _activatnvar_confusing_LLUUID_6.mData[0xd];

	/* inline */ _activation_check_proc_10_func_2146241952(_activatnvar_name_digest, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_10_func_1749912572(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_d)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x7] == _activatnvar_feat) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_1;

	/* inline */ _activation_check_proc_10_func_401908951(_activatnvar_confusing_int_d);
}

void _activation_check_proc_10_func_1060561371(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_763186657(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_8.mData[0xb] <<= _activatnvar_confusing_chararray_a[0xa];

}

void _activation_check_proc_10_func_448801110(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_5 *= 0x1;

	/* inline */ _activation_check_proc_10_func_1058796708(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_10_func_1376491777(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_10_func_839707149(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f *= 0x3;

	_activatnvar_pos |= 8;
}

void _activation_check_proc_10_func_971488174(bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_10_func_265005281(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_10_func_595986671(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_10_func_362736646(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

	/* inline */ _activation_check_proc_10_func_1491266194(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_10_func_1369970507(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_10_func_648161292(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_9;

	/* inline */ _activation_check_proc_10_func_1157224209(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_10_func_1074945408(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_10_func_426293776(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_10_func_1650025064(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_c;

	_activation_check_proc_10_func_850483797(_activatnvar_confusing_int_1, _activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_10_func_363627844(_activatnvar_confusing_U8_d, _activatnvar_so);
	_activation_check_proc_10_func_426293776(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_10_func_850483797(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e <<= _activatnvar_confusing_int_1;

}

void _activation_check_proc_10_func_293621952(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_10_func_2109879337(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_10_func_1656576145(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("ffbc2b9c-c57d-b922-123e-920256b3c464");

	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_10_func_1327941754(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x2] += _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_10_func_923928874(bool& _activatnvar_confusing_bool_e, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_e;

	_activation_check_proc_10_func_510193410(_activatnvar_confusing_int_0);
	_activation_check_proc_10_func_1327941754(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_10_func_510193410(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_10_func_659550496(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_f &= _activatnvar_confusing_int_0;

}

void _activation_check_proc_10_func_294787000(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_U8_f >>= _activatnvar_confusing_char_3;

}

void _activation_check_proc_10_func_1277801206(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x4] = _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_10_func_295946829(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_LLUUID_8.mData[0x4];

}

void _activation_check_proc_10_func_1188504356(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_fscked.mData[0xe];

}

void _activation_check_proc_10_func_1631945150(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_10_func_81576871(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_10_func_1991876800(_activatnvar_confusing_LLUUID_d, _activatnvar_combined_id);
}

void _activation_check_proc_10_func_277623392(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_8[0x2] += _activatnvar_confusing_LLUUID_d.mData[0x3];

}

void _activation_check_proc_10_func_2041294262(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_10_func_1916162686(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_char_6;

}

void _activation_check_proc_10_func_474923917(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_chararray_c[0x4] <<= _activatnvar_confusing_LLUUID_c.mData[0x7];

	_activation_check_proc_10_func_1916162686(_activatnvar_confusing_char_6, _activatnvar_confusing_U8_9);
	/* inline */ _activation_check_proc_10_func_375273872(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_10_func_75106249(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_b[0x5] ^= _activatnvar_confusing_chararray_4[0xf];

	/* inline */ _activation_check_proc_10_func_1358034628();
	/* inline */ _activation_check_proc_10_func_2025699967(_activatnvar_confusing_char_9, _activatnvar_confusing_U8_0, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_10_func_1298406302(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_10_func_457247466(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_477545741(bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_int_e |= _activatnvar_confusing_int_a;

	if(_activatnvar_confusing_LLUUID_a.mData[0x8] == _activatnvar_confusing_char_0) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_10_func_1772979832(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_e[0x7] ^= _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_10_func_809265686(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_10_func_992364727(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xa] == 0xe) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_10_func_1218953956(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x1] >>= _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_10_func_1202446928(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d += _activatnvar_confusing_char_0;

}

void _activation_check_proc_10_func_261339339()
{
	
}

void _activation_check_proc_10_func_1417918028(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_char_8 >>= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_10_func_1579369368(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_5, LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xe] = _activatnvar_confusing_chararray_7[0xd];

	_activation_check_proc_10_func_1417918028(_activatnvar_confusing_char_8, _activatnvar_confusing_U8_5);
	_activation_check_proc_10_func_261339339();
	/* inline */ _activation_check_proc_10_func_2061561100(_activatnvar_smd5);
}

void _activation_check_proc_10_func_1713468795(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_10_func_1587622351(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_code.mData[0x3];

	/* inline */ _activation_check_proc_10_func_1425336651(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_10_func_1384496300(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xb] &= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_10_func_1190162349(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] = _activatnvar_lace.mData[0x9];

}

void _activation_check_proc_10_func_1571675995(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_lace.mData[0x0];

	_activation_check_proc_10_func_1190162349(_activatnvar_lace, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_10_func_1268569690(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_combined_id;

}

void _activation_check_proc_10_func_1745246727(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_10_func_1268569690(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_10_func_1213768341(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_10_func_363603408(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_b)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] != _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_4;

	_activation_check_proc_10_func_1213768341(_activatnvar_confusing_U8_f, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_10_func_574779620(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_10_func_772577363(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_10_func_17436723(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_secret;

	_activation_check_proc_10_func_1825047736(_activatnvar_confusing_char_8);
}

void _activation_check_proc_10_func_1825047736(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_10_func_307786206(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("400c58df-df4d-8f80-61d0-ec87c0529cc5");

}

void _activation_check_proc_10_func_1348081160(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_10_func_1084184100(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_e[0xc] &= _activatnvar_confusing_LLUUID_5.mData[0x5];

}

void _activation_check_proc_10_func_1012538208(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_3)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x2] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_10_func_1397867988(bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_7 *= _activatnvar_confusing_char_e;

}

void _activation_check_proc_10_func_1104560880()
{
	
}

void _activation_check_proc_10_func_934285791(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_10_func_1512153274(unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_10_func_1650530756(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_10_func_734204520(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_10_func_1197671841(_activatnvar_ser_digest, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_10_func_1054339983(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("6e730112-eb18-f795-8964-53b102f3bfab");

}

void _activation_check_proc_10_func_1214075225(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

	
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_10_func_863820068(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1371222144(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1487019950(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a = 0x7;

	/* inline */ _activation_check_proc_10_func_1759217959(_activatnvar_secret, _activatnvar_strbuf_0);
}

void _activation_check_proc_10_func_350213053(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_10_func_117041667(bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_10_func_350213053(_activatnvar_confusing_int_f);
}

void _activation_check_proc_10_func_514416878(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_325113281(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] += _activatnvar_confusing_chararray_2[0x7];

	_activation_check_proc_10_func_2128004882();
	/* inline */ _activation_check_proc_10_func_816755395(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_10_func_2128004882()
{
	
}

void _activation_check_proc_10_func_1805174130(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_LLUUID_1.mData[0x9];

}

void _activation_check_proc_10_func_1763907655(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] |= _activatnvar_code.mData[0x6];

}

void _activation_check_proc_10_func_1064794311(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_383728553(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_t1)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x2] == _activatnvar_t1) _activatnvar_confusing_bool_2 = true;

	/* inline */ _activation_check_proc_10_func_853677725(_activatnvar_generic_iterator);
	_activation_check_proc_10_func_1064794311(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
	/* inline */ _activation_check_proc_10_func_1330148148(_activatnvar_confusing_U8_c, _activatnvar_t1);
}

void _activation_check_proc_10_func_1030741993(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] <<= _activatnvar_so.mData[0x3];

}

void _activation_check_proc_10_func_965809384(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_chararray_5[0xb];

	/* inline */ _activation_check_proc_10_func_351291246(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_10_func_2089755403(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_chararray_1[0xb] >>= _activatnvar_code.mData[0xe];

}

void _activation_check_proc_10_func_111388442(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0x8;

}

void _activation_check_proc_10_func_229521447(LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_10_func_1437440693(_activatnvar_feat, _activatnvar_doaccount, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_898687990(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xb] ^= _activatnvar_confusing_chararray_5[0x5];

	/* inline */ _activation_check_proc_10_func_847782121(_activatnvar_confusing_U8_a, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_10_func_1709648841(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	
	_activatnvar_confusing_LLUUID_3 = LLUUID("01b27670-7865-3cf3-514d-dd4adeb08256");

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_10_func_1063206121(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_10_func_1063206121(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x7] &= _activatnvar_confusing_LLUUID_7.mData[0x3];

}

void _activation_check_proc_10_func_1857401781(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] <<= _activatnvar_confusing_LLUUID_0.mData[0xa];

}

void _activation_check_proc_10_func_706964309(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = 0x8;

}

void _activation_check_proc_10_func_170298692(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("f182be5b-ad87-44b3-95c2-895129c6a030");

	_activatnvar_confusing_LLUUID_1 = _activatnvar_combined_id;

	_activation_check_proc_10_func_706964309(_activatnvar_confusing_char_4);
}

void _activation_check_proc_10_func_35216288(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_10_func_644183029(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1465392395(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_5 &= _activatnvar_confusing_char_f;

}

void _activation_check_proc_10_func_2068895038(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 |= _activatnvar_confusing_LLUUID_3.mData[0x1];

	_activation_check_proc_10_func_1465392395(_activatnvar_confusing_bool_a, _activatnvar_confusing_char_5, _activatnvar_confusing_char_f);
}

void _activation_check_proc_10_func_1683352148(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_10_func_313457195(_activatnvar_confusing_bool_5, _activatnvar_confusing_U8_e);
	_activation_check_proc_10_func_688896476(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_char_0);
	_activation_check_proc_10_func_1694179607(_activatnvar_code, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_10_func_872165778(_activatnvar_generic_iterator);
	_activation_check_proc_10_func_199717639(_activatnvar_confusing_int_9);
}

void _activation_check_proc_10_func_199717639(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 |= 0x0;

}

void _activation_check_proc_10_func_688896476(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_5.mData[0x7];

}

void _activation_check_proc_10_func_1694179607(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_code;

}

void _activation_check_proc_10_func_872165778(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1712318909(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xb] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_10_func_1294715749(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_10_func_1712318909(_activatnvar_confusing_bool_e, _activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_10_func_2076180360(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xf] &= _activatnvar_confusing_LLUUID_a.mData[0xb];

}

void _activation_check_proc_10_func_1766721841(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_b *= _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_10_func_2005861128(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_462337996(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_10_func_714193452(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_10_func_1002318782(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_a, U8& _activatnvar_pos)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_10_func_714193452(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_10_func_818132502(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_10_func_1888701202(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_10_func_1956587195(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] &= _activatnvar_confusing_LLUUID_f.mData[0x6];

}

void _activation_check_proc_10_func_1333655339(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("065615dd-dd34-caa3-0ac9-c781562300b9");

}

void _activation_check_proc_10_func_1616148382(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("0fb1fcc1-466b-c3cb-9314-fb43e180c580");

}

void _activation_check_proc_10_func_1116671802(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_2 <<= 0x8;

	_activation_check_proc_10_func_1333655339(_activatnvar_confusing_LLUUID_7);
	_activation_check_proc_10_func_1616148382(_activatnvar_confusing_LLUUID_2);
	_activation_check_proc_10_func_309291483(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_1);
	_activation_check_proc_10_func_1783166318();
	_activation_check_proc_10_func_507550378(_activatnvar_confusing_U8_c);
}

void _activation_check_proc_10_func_309291483(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_b.mData[0x0] = _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_10_func_1783166318()
{
	
}

void _activation_check_proc_10_func_507550378(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_10_func_1956447225(char& _activatnvar_confusing_char_4, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_4 <<= 0xc;

}

void _activation_check_proc_10_func_446023610(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xb] += _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_10_func_43343013(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xe] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_10_func_1669064375(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 >>= 0xf;

	_activation_check_proc_10_func_1880376642(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_10_func_1880376642(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_10_func_556051582(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x3] = _activatnvar_lace.mData[0x7];

}

void _activation_check_proc_10_func_2035002357(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_6, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_generic_iterator++;
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_6 += 0x0;

	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1952920560(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_10_func_160366653(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_9[0xd] |= _activatnvar_confusing_LLUUID_7.mData[0xf];

}

void _activation_check_proc_10_func_447117529(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_e.mData[0x4] *= _activatnvar_confusing_LLUUID_3.mData[0x8];

}

void _activation_check_proc_10_func_898706465(int& _activatnvar_confusing_int_c)
{
	
	_activation_check_proc_10_func_2056688128(_activatnvar_confusing_int_c);
}

void _activation_check_proc_10_func_2056688128(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_10_func_1510348354(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_10_func_119871392(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_2002878990(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_c;

	_activation_check_proc_10_func_1285414898(_activatnvar_confusing_char_8, _activatnvar_combined_id);
	_activation_check_proc_10_func_705399954(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_9);
	_activation_check_proc_10_func_119871392(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1285414898(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_8 = _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_10_func_705399954(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_chararray_9[0x2];

}

void _activation_check_proc_10_func_478928057(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_10_func_1516026314(bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_8)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_b <<= 0xb;

	_activatnvar_confusing_chararray_8[0xc] *= _activatnvar_confusing_chararray_a[0x5];

	/* inline */ _activation_check_proc_10_func_1518669121(_activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_10_func_1031926399(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_10_func_478928057(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_10_func_1190090908(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_1, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
	_activatnvar_confusing_char_4 <<= _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_10_func_432330713(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_6 &= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_10_func_2050040839(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_e ^= _activatnvar_confusing_char_6;

}

void _activation_check_proc_10_func_207505101(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_10_func_1928216420(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_chararray_5[0x2];

}

void _activation_check_proc_10_func_1459432185(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_10_func_449534258(_activatnvar_confusing_U8_f, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_10_func_449534258(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d <<= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_10_func_1312773501(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x9] |= _activatnvar_confusing_LLUUID_1.mData[0x3];

}

void _activation_check_proc_10_func_741287521(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_c)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
	/* inline */ _activation_check_proc_10_func_544655990(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_e);
	_activation_check_proc_10_func_505556891(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_2, _activatnvar_name_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_10_func_1899825451(_activatnvar_confusing_int_c);
}

void _activation_check_proc_10_func_505556891(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_2 = false;

	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_10_func_783146629(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_section2;

}

void _activation_check_proc_10_func_1332545380(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_10_func_283255288(int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
	_activation_check_proc_10_func_1332545380(_activatnvar_confusing_int_d);
}

void _activation_check_proc_10_func_839278876()
{
	
}

void _activation_check_proc_10_func_1128126006(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_0++;

	_activation_check_proc_10_func_1817178640(_activatnvar_confusing_bool_b, _activatnvar_confusing_U8_2, _activatnvar_confusing_char_8);
}

void _activation_check_proc_10_func_1817178640(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_8)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_2 &= _activatnvar_confusing_char_8;

}

void _activation_check_proc_10_func_1619530329(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_10_func_934957632()
{
	
}

void _activation_check_proc_10_func_1888600228(U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_6, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_10_func_5332416(_activatnvar_confusing_U8_8, _activatnvar_confusing_char_6);
}

void _activation_check_proc_10_func_5332416(U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_char_6;

}

void _activation_check_proc_10_func_1397564951(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_9[0xf] += _activatnvar_combined_id.mData[0x4];

}

void _activation_check_proc_10_func_1954495166(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_10_func_2007843877(unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_int_6 = 0x0;

	_activation_check_proc_10_func_1954495166(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_9);
	_activation_check_proc_10_func_871777321(_activatnvar_confusing_chararray_9, _activatnvar_mac_digest);
	_activation_check_proc_10_func_607907653(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_10_func_607907653(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_0[0xa] = _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_10_func_871777321(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_9[0x4] += _activatnvar_mac_digest[0xd];

}

void _activation_check_proc_10_func_1650079004(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 *= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_10_func_2118094191(bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_10_func_394385332(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_720057636(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_5.mData[0x6] = _activatnvar_confusing_chararray_9[0xc];

}

void _activation_check_proc_10_func_1731213817(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_a[0xe] &= _activatnvar_mac_digest[0xc];

}

void _activation_check_proc_10_func_803169120(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_8, bool& _activatnvar_doaccount, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x5] != _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_6 = false;

	_activation_check_proc_10_func_1731213817(_activatnvar_confusing_chararray_a, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_10_func_1619296503(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_4);
	/* inline */ _activation_check_proc_10_func_239613503(_activatnvar_doaccount, _activatnvar_confusing_char_8, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_10_func_1867658684(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_10_func_791519718(_activatnvar_confusing_chararray_d, _activatnvar_combined_id, _activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_10_func_922168883(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] = _activatnvar_confusing_LLUUID_5.mData[0x9];

}

void _activation_check_proc_10_func_2099232962(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_d &= 0x0;

}

void _activation_check_proc_10_func_48449624(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_10_func_455562956(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_10_func_355320042(bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_c)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_c += 0x2;

}

void _activation_check_proc_10_func_1056537923(U8& _activatnvar_t0, bool& _activatnvar_doaccount, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_d <<= 0xd;

	/* inline */ _activation_check_proc_10_func_871121357(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_10_func_875438032(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_10_func_1180780845(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_10_func_1350440217(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_t1, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_section2, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	/* inline */ _activation_check_proc_10_func_2053145066(_activatnvar_so, _activatnvar_section2);
	_activation_check_proc_10_func_1097793337(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_8, _activatnvar_confusing_bool_8);
	_activation_check_proc_10_func_1830805980(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_char_4);
}

void _activation_check_proc_10_func_1097793337(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x4] != _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_10_func_1830805980(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_LLUUID_a.mData[0xb];

	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_10_func_949228053(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_9[0x1] <<= _activatnvar_confusing_chararray_4[0xd];

	/* inline */ _activation_check_proc_10_func_1303617142(_activatnvar_confusing_LLUUID_e, _activatnvar_t0, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_10_func_319664613(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_10_func_1560857302(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_10_func_949383047(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_e += _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_10_func_841939354(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 *= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_10_func_1178633337(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_10_func_294043259(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_737322064(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x5] += _activatnvar_confusing_chararray_9[0x4];

	_activation_check_proc_10_func_2010774307(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_10_func_2010774307(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_10_func_1315021497(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_10_func_1045978160(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x4] |= _activatnvar_ser_digest[0x8];

}

void _activation_check_proc_10_func_1496750498(U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_4 <<= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_10_func_1576956496(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_10_func_795865456(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_10_func_795865456(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_918280806(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("14e0a305-2c7b-2bee-c78f-9dd973cf68dd");

}

void _activation_check_proc_10_func_1000281661(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_U8_e++;

	_activation_check_proc_10_func_234027363(_activatnvar_confusing_char_9);
	_activation_check_proc_10_func_138066949(_activatnvar_confusing_bool_7, _activatnvar_generic_bool_1);
}

void _activation_check_proc_10_func_234027363(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_10_func_138066949(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_10_func_214494818(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_10_func_708881340(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_10_func_278389243(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_LLUUID_a.mData[0xa];

}

void _activation_check_proc_10_func_1069893873(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_9 ^= _activatnvar_confusing_char_d;

}

void _activation_check_proc_10_func_126132162(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_10_func_1022387973()
{
	
}

void _activation_check_proc_10_func_706948468(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] &= _activatnvar_confusing_chararray_6[0xf];

	_activatnvar_confusing_LLUUID_3 = LLUUID("dbcbb2d4-89b0-2a71-5086-bb98c9876c22");

}

void _activation_check_proc_10_func_2112920870(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("b2a369a9-a585-6564-e127-beb467f72723");

}

void _activation_check_proc_10_func_257581118(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x3] ^= _activatnvar_section1.mData[0xd];

}

void _activation_check_proc_10_func_1772089646(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_10_func_257581118(_activatnvar_section1, _activatnvar_confusing_chararray_e);
	_activation_check_proc_10_func_1205515030(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_10_func_1582995937(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_10_func_1205515030(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_646841989(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_so;

}

void _activation_check_proc_10_func_1821158410(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_U8_e >>= 0x3;

	/* inline */ _activation_check_proc_10_func_1503038256(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_10_func_209772993(_activatnvar_confusing_char_1, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_10_func_301371334(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_d ^= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_10_func_950905352(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_10_func_1251620299(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_1, std::string& _activatnvar_fullname, LLUUID& _activatnvar_confusing_LLUUID_2, LLMD5*& _activatnvar_nmd5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_secret;

	_activation_check_proc_10_func_1023294433(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_6);
	_activation_check_proc_10_func_1205167923(_activatnvar_fullname);
	/* inline */ _activation_check_proc_10_func_234394451(_activatnvar_fullname, _activatnvar_nmd5);
}

void _activation_check_proc_10_func_1023294433(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_6)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x1] == _activatnvar_confusing_char_6) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_10_func_1205167923(std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
}

void _activation_check_proc_10_func_935860098(bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_4;

	_activation_check_proc_10_func_99450618(_activatnvar_confusing_int_4);
}

void _activation_check_proc_10_func_99450618(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_10_func_1890365746(bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_f, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_2;

	_activation_check_proc_10_func_372513045(_activatnvar_confusing_int_f);
}

void _activation_check_proc_10_func_372513045(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_10_func_898106479(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] |= _activatnvar_fscked.mData[0xe];

}

void _activation_check_proc_10_func_966393781(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_10_func_1713731824(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_1141161578(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xc] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_5;

	_activation_check_proc_10_func_898106479(_activatnvar_confusing_LLUUID_e, _activatnvar_fscked);
	_activation_check_proc_10_func_966393781(_activatnvar_generic_bool_0);
	_activation_check_proc_10_func_1713731824(_activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_593449714(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

	/* inline */ _activation_check_proc_10_func_1786641405(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_10_func_483567537(bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_10_func_148930145(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_1691948979(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x6] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_0 = true;

	_activation_check_proc_10_func_2028100424(_activatnvar_confusing_LLUUID_7, _activatnvar_lace);
}

void _activation_check_proc_10_func_2028100424(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] <<= _activatnvar_lace.mData[0x8];

}

void _activation_check_proc_10_func_447418641(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_c;

	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_10_func_441679137(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_239191590(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_LLUUID_9.mData[0xb];

	/* inline */ _activation_check_proc_10_func_1010596269(_activatnvar_confusing_char_d, _activatnvar_confusing_U8_7, _activatnvar_generic_iterator, _activatnvar_confusing_bool_a, _activatnvar_section1, _activatnvar_section2);
	/* inline */ _activation_check_proc_10_func_1102034891(_activatnvar_confusing_int_9, _activatnvar_generic_iterator);
	_activation_check_proc_10_func_441679137(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_10_func_1147233140(bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_10_func_967938286(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_10_func_1147233140(_activatnvar_confusing_bool_0);
}

void _activation_check_proc_10_func_1165372795(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_10_func_1004604601(char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_10_func_1165372795(_activatnvar_confusing_char_6);
}

void _activation_check_proc_10_func_889227288(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_10_func_665919913(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_5)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_U8_2 += _activatnvar_confusing_char_5;

}

void _activation_check_proc_10_func_1078699533(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_lace;

}

void _activation_check_proc_10_func_92592491(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
}

void _activation_check_proc_10_func_1131764472(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
	/* inline */ _activation_check_proc_10_func_454967613(_activatnvar_confusing_LLUUID_f);
	_activation_check_proc_10_func_665919913(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_2, _activatnvar_confusing_char_5);
	_activation_check_proc_10_func_1078699533(_activatnvar_confusing_LLUUID_6, _activatnvar_lace);
	_activation_check_proc_10_func_92592491(_activatnvar_name_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_10_func_1314296971(_activatnvar_confusing_U8_b, _activatnvar_confusing_char_b);
}

void _activation_check_proc_10_func_482783322(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_10_func_826100394(U8& _activatnvar_pos, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_d &= 0x5;

	_activation_check_proc_10_func_1583186399(_activatnvar_pos);
	_activation_check_proc_10_func_1650721726(_activatnvar_confusing_bool_d, _activatnvar_confusing_char_8, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_10_func_1650721726(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_8 >>= _activatnvar_confusing_char_8;

}

void _activation_check_proc_10_func_1583186399(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_10_func_776757689(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_10_func_1261636500()
{
	
}

void _activation_check_proc_10_func_2106631485(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_0;

	_activation_check_proc_10_func_977916308(_activatnvar_confusing_chararray_2, _activatnvar_confusing_chararray_5);
	_activation_check_proc_10_func_1261636500();
	/* inline */ _activation_check_proc_10_func_153165428(_activatnvar_confusing_int_4);
}

void _activation_check_proc_10_func_977916308(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_2[0x1] *= _activatnvar_confusing_chararray_5[0xd];

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
