// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation1d.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 1d

void _activation_check_proc_1d_func_1866207583(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xc] ^= _activatnvar_confusing_chararray_0[0x6];

}

void _activation_check_proc_1d_func_1218567073(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xc] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1d_func_36907463(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d = 0x7;

}

void _activation_check_proc_1d_func_1755751571(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x0] |= _activatnvar_confusing_LLUUID_4.mData[0x9];

	/* inline */ _activation_check_proc_1d_func_2076749786(_activatnvar_generic_bool_1, _activatnvar_confusing_int_8, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_1d_func_672020107(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_2[0xe] = _activatnvar_confusing_LLUUID_f.mData[0x9];

	_activatnvar_confusing_LLUUID_6 = LLUUID("9687f582-138e-83fe-e790-3bea80f15fbe");

}

void _activation_check_proc_1d_func_165765342(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_1d_func_25026892(_activatnvar_confusing_LLUUID_c);
	_activation_check_proc_1d_func_672020107(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1d_func_606058866(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_877261846(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_1d_func_1243333310(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x3] <<= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_1d_func_151956052(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_f.mData[0xe];

}

void _activation_check_proc_1d_func_267560128(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_1d_func_5472844(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1d_func_5472844(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0x0;

}

void _activation_check_proc_1d_func_1465199101(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1d_func_1791443759(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_1d_func_839179701(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_1)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_1 += _activatnvar_confusing_U8_2;

}

void _activation_check_proc_1d_func_1159352771(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1412945907(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1020839027(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_1412945907(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1d_func_1068266897(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1410490828(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x3] <<= _activatnvar_confusing_chararray_9[0x6];

}

void _activation_check_proc_1d_func_710743227(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_pos, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_chararray_2[0xc];

	/* inline */ _activation_check_proc_1d_func_923304823(_activatnvar_combined_id, _activatnvar_pos);
	/* inline */ _activation_check_proc_1d_func_1718885822(_activatnvar_confusing_char_3, _activatnvar_confusing_chararray_b);
	_activation_check_proc_1d_func_205302443(_activatnvar_pos);
}

void _activation_check_proc_1d_func_205302443(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1d_func_1388808242(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1625859251(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 <<= 0xd;

}

void _activation_check_proc_1d_func_472111018(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_1388808242(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
	/* inline */ _activation_check_proc_1d_func_465730906(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1d_func_976835137(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_U8_c);
	_activation_check_proc_1d_func_1625859251(_activatnvar_confusing_int_4);
}

void _activation_check_proc_1d_func_446804059(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_1d_func_302507751(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_8;

	/* inline */ _activation_check_proc_1d_func_80071580(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1d_func_1488853660(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_e)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x3] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_1d_func_963258673(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1910053194(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_e, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("9b530ac8-cf73-4520-7269-001347927153");

	_activation_check_proc_1d_func_963258673(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	/* inline */ _activation_check_proc_1d_func_1081253566(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1d_func_2144809450(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_2);
	/* inline */ _activation_check_proc_1d_func_1709085854(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1d_func_155039001(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_U8_c *= _activatnvar_confusing_char_8;

}

void _activation_check_proc_1d_func_599946098(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_63056(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_8)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_4 *= 0x2;

	_activation_check_proc_1d_func_599946098(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
	_activation_check_proc_1d_func_155039001(_activatnvar_confusing_U8_c, _activatnvar_confusing_char_8);
}

void _activation_check_proc_1d_func_895732815(char* _activatnvar_strbuf_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a >>= 0x7;

	/* inline */ _activation_check_proc_1d_func_524543887(_activatnvar_strbuf_0);
}

void _activation_check_proc_1d_func_805427721(char& _activatnvar_confusing_char_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_8.mData[0x0];

	_activation_check_proc_1d_func_385285729(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_1d_func_385285729(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1092938881(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_1d_func_1951539170(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_1d_func_785463924(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2, LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
	/* inline */ _activation_check_proc_1d_func_143523034(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_1d_func_879414458(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1d_func_879414458(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] <<= _activatnvar_confusing_LLUUID_c.mData[0x0];

}

void _activation_check_proc_1d_func_2077773025(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_819081327(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x1] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1d_func_33333669(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1d_func_1186773296(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("ade39e3c-a244-bfaa-a83b-bda75ed8f615");

}

void _activation_check_proc_1d_func_841385613(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1506222076(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_7 = 0x3;

}

void _activation_check_proc_1d_func_903466994(char& _activatnvar_feat, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_841385613(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1d_func_1976274684(_activatnvar_confusing_bool_1, _activatnvar_feat, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_b);
	_activation_check_proc_1d_func_1506222076(_activatnvar_confusing_bool_c, _activatnvar_confusing_char_7);
}

void _activation_check_proc_1d_func_893924123(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_1d_func_1594502241(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1d_func_1890802326(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

	/* inline */ _activation_check_proc_1d_func_2063491190(_activatnvar_fscked, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1d_func_278776161(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_1d_func_1398621121(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_b *= _activatnvar_confusing_char_8;

}

void _activation_check_proc_1d_func_1125688973(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_a.mData[0x2];

	/* inline */ _activation_check_proc_1d_func_299687267(_activatnvar_confusing_U8_4);
	_activation_check_proc_1d_func_1324182939(_activatnvar_confusing_int_b, _activatnvar_confusing_int_0);
	_activation_check_proc_1d_func_1990277561(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1d_func_1840694601(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1990277561(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1324182939(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 <<= _activatnvar_confusing_int_b;

}

void _activation_check_proc_1d_func_1043831070(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 74; _activatnvar_strbuf_0[0] ^= 114; _activatnvar_strbuf_0[1] = 38; _activatnvar_strbuf_0[1] ^= 68; _activatnvar_strbuf_0[2] = 9; _activatnvar_strbuf_0[2] ^= 106; _activatnvar_strbuf_0[3] = 82; _activatnvar_strbuf_0[3] ^= 103; _activatnvar_strbuf_0[4] = 13; _activatnvar_strbuf_0[4] ^= 57; _activatnvar_strbuf_0[5] = 9; _activatnvar_strbuf_0[5] ^= 61; _activatnvar_strbuf_0[6] = 31; _activatnvar_strbuf_0[6] ^= 45; _activatnvar_strbuf_0[7] = 19; _activatnvar_strbuf_0[7] ^= 38; _activatnvar_strbuf_0[8] = 63; _activatnvar_strbuf_0[8] ^= 18; _activatnvar_strbuf_0[9] = 82; _activatnvar_strbuf_0[9] ^= 98; _activatnvar_strbuf_0[10] = 108; _activatnvar_strbuf_0[10] ^= 93; _activatnvar_strbuf_0[11] = 43; _activatnvar_strbuf_0[11] ^= 29; _activatnvar_strbuf_0[12] = 3; _activatnvar_strbuf_0[12] ^= 51; _activatnvar_strbuf_0[13] = 95; _activatnvar_strbuf_0[13] ^= 114; _activatnvar_strbuf_0[14] = 65; _activatnvar_strbuf_0[14] ^= 113; _activatnvar_strbuf_0[15] = 1; _activatnvar_strbuf_0[15] ^= 49; _activatnvar_strbuf_0[16] = 101; _activatnvar_strbuf_0[16] ^= 93; _activatnvar_strbuf_0[17] = 25; _activatnvar_strbuf_0[17] ^= 43; _activatnvar_strbuf_0[18] = 34; _activatnvar_strbuf_0[18] ^= 15; _activatnvar_strbuf_0[19] = 88; _activatnvar_strbuf_0[19] ^= 107; _activatnvar_strbuf_0[20] = 67; _activatnvar_strbuf_0[20] ^= 113; _activatnvar_strbuf_0[21] = 53; _activatnvar_strbuf_0[21] ^= 5; _activatnvar_strbuf_0[22] = 69; _activatnvar_strbuf_0[22] ^= 119; _activatnvar_strbuf_0[23] = 108; _activatnvar_strbuf_0[23] ^= 65; _activatnvar_strbuf_0[24] = 14; _activatnvar_strbuf_0[24] ^= 109; _activatnvar_strbuf_0[25] = 16; _activatnvar_strbuf_0[25] ^= 40; _activatnvar_strbuf_0[26] = 65; _activatnvar_strbuf_0[26] ^= 113; _activatnvar_strbuf_0[27] = 48; _activatnvar_strbuf_0[27] ^= 2; _activatnvar_strbuf_0[28] = 91; _activatnvar_strbuf_0[28] ^= 107; _activatnvar_strbuf_0[29] = 41; _activatnvar_strbuf_0[29] ^= 27; _activatnvar_strbuf_0[30] = 87; _activatnvar_strbuf_0[30] ^= 110; _activatnvar_strbuf_0[31] = 118; _activatnvar_strbuf_0[31] ^= 70; _activatnvar_strbuf_0[32] = 68; _activatnvar_strbuf_0[32] ^= 116; _activatnvar_strbuf_0[33] = 119; _activatnvar_strbuf_0[33] ^= 79; _activatnvar_strbuf_0[34] = 73; _activatnvar_strbuf_0[34] ^= 121; _activatnvar_strbuf_0[35] = 48; _activatnvar_strbuf_0[35] ^= 2; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1d_func_1552176423(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_1d_func_1043831070(_activatnvar_strbuf_0);
}

void _activation_check_proc_1d_func_157661015(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_chararray_d[0x9];

}

void _activation_check_proc_1d_func_1073691457()
{
	
}

void _activation_check_proc_1d_func_1207664583(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_3)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_3 *= 0x5;

}

void _activation_check_proc_1d_func_1162984230(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_777766209(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_3)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_1162984230(_activatnvar_generic_iterator);
	_activation_check_proc_1d_func_1073691457();
	_activation_check_proc_1d_func_1207664583(_activatnvar_generic_bool_1, _activatnvar_confusing_char_3);
}

void _activation_check_proc_1d_func_2106937255(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_97877050(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_1d_func_290257704(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_e)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_2 *= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_1d_func_1322781051(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_f++;

	_activation_check_proc_1d_func_374208819(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1d_func_374208819(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_1d_func_263095138(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] >>= _activatnvar_confusing_chararray_5[0x8];

	_activation_check_proc_1d_func_1081738602(_activatnvar_confusing_LLUUID_a);
	_activation_check_proc_1d_func_1775946137(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1d_func_1081738602(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("b37e2828-d91c-844d-2b0f-a265a3e58e4e");

}

void _activation_check_proc_1d_func_1775946137(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("b7271be0-1e6e-eafe-a762-1c8f0822b024");

}

void _activation_check_proc_1d_func_433648741(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
}

void _activation_check_proc_1d_func_559976350(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_537834504(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1d_func_146974713(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_6.mData[0x4];

}

void _activation_check_proc_1d_func_1213671615(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_967153227(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_1d_func_1210900398(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

	_activation_check_proc_1d_func_967153227(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_1d_func_1453855300(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_d++;

	_activation_check_proc_1d_func_987665471(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_0);
	_activation_check_proc_1d_func_1725783191(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1d_func_1725783191(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_7[0xd] += _activatnvar_confusing_LLUUID_5.mData[0x4];

}

void _activation_check_proc_1d_func_987665471(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1d_func_1895397717(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] ^= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_1d_func_95886277(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_2.mData[0xf];

	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_1d_func_1364627871()
{
	
}

void _activation_check_proc_1d_func_114741372(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("c6e73d59-a081-1af9-d841-77248498bf26");

}

void _activation_check_proc_1d_func_1963247499(LLUUID& _activatnvar_code, char* _activatnvar_strbuf_0)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_1d_func_594401016(LLUUID& _activatnvar_code, char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 102; _activatnvar_strbuf_0[0] ^= 39; _activatnvar_strbuf_0[1] = 102; _activatnvar_strbuf_0[1] ^= 5; _activatnvar_strbuf_0[2] = 80; _activatnvar_strbuf_0[2] ^= 36; _activatnvar_strbuf_0[3] = 13; _activatnvar_strbuf_0[3] ^= 100; _activatnvar_strbuf_0[4] = 17; _activatnvar_strbuf_0[4] ^= 103; _activatnvar_strbuf_0[5] = 101; _activatnvar_strbuf_0[5] ^= 4; _activatnvar_strbuf_0[6] = 112; _activatnvar_strbuf_0[6] ^= 4; _activatnvar_strbuf_0[7] = 123; _activatnvar_strbuf_0[7] ^= 18; _activatnvar_strbuf_0[8] = 68; _activatnvar_strbuf_0[8] ^= 43; _activatnvar_strbuf_0[9] = 33; _activatnvar_strbuf_0[9] ^= 79; _activatnvar_strbuf_0[10] = 10; _activatnvar_strbuf_0[10] ^= 73; _activatnvar_strbuf_0[11] = 51; _activatnvar_strbuf_0[11] ^= 92; _activatnvar_strbuf_0[12] = 27; _activatnvar_strbuf_0[12] ^= 127; _activatnvar_strbuf_0[13] = 65; _activatnvar_strbuf_0[13] ^= 36; _activatnvar_strbuf_0[14] = 0;
	_activation_check_proc_1d_func_1963247499(_activatnvar_code, _activatnvar_strbuf_0);
}

void _activation_check_proc_1d_func_1670572810(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_chararray_b[0x8];

	if(_activatnvar_confusing_LLUUID_0.mData[0xb] == 0x5) _activatnvar_confusing_bool_a = true;

	/* inline */ _activation_check_proc_1d_func_1586433156(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1d_func_1050082170(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_1d_func_319074908(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_f &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_1d_func_810009863(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1d_func_1600664210(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_1d_func_2139750883(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_707522(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_7[0x5] &= _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_1d_func_1824745068(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] <<= _activatnvar_confusing_LLUUID_7.mData[0xc];

	/* inline */ _activation_check_proc_1d_func_1470394024(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1d_func_1986123833(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_a, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_char_8;

	/* inline */ _activation_check_proc_1d_func_1889465127(_activatnvar_confusing_int_2, _activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_1d_func_1218399231(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1d_func_1966812853(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_7[0xa] *= _activatnvar_confusing_LLUUID_b.mData[0x2];

}

void _activation_check_proc_1d_func_619844800(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_7 *= 0xe;

	_activation_check_proc_1d_func_2135985586(_activatnvar_confusing_char_2, _activatnvar_confusing_chararray_4);
	_activation_check_proc_1d_func_1059188805(_activatnvar_name_digest, _activatnvar_combined_id);
	_activation_check_proc_1d_func_822411909(_activatnvar_confusing_char_5, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1d_func_822411909(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_5 ^= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_1d_func_1059188805(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
}

void _activation_check_proc_1d_func_2135985586(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_chararray_4[0x1];

}

void _activation_check_proc_1d_func_130325604(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_8[0x1] >>= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_1d_func_669164422(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_3)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_3 ^= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_1d_func_819817102()
{
	
}

void _activation_check_proc_1d_func_784524340(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t1)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x1] != _activatnvar_t1) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_1d_func_1978776393(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t1, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_3.mData[0x0];

	_activation_check_proc_1d_func_784524340(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_5, _activatnvar_t1);
}

void _activation_check_proc_1d_func_409667028()
{
	
}

void _activation_check_proc_1d_func_2060403164(bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_b |= 0x8;

}

void _activation_check_proc_1d_func_96937015(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_145957332(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f >>= 0x7;

}

void _activation_check_proc_1d_func_1490346492(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1d_func_1139214035(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_1d_func_2122480083(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_1139214035(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_1d_func_346727229(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_1d_func_1380419468(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1d_func_367086951(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1795567616(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_2[0xa];

}

void _activation_check_proc_1d_func_1352281425(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_LLUUID_4.mData[0xf];

	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_2.mData[0x1];

	/* inline */ _activation_check_proc_1d_func_1113934541(_activatnvar_confusing_int_0);
	_activation_check_proc_1d_func_1795567616(_activatnvar_confusing_chararray_2, _activatnvar_confusing_U8_c);
	/* inline */ _activation_check_proc_1d_func_1928383785(_activatnvar_confusing_int_4, _activatnvar_confusing_int_1, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_1d_func_881361519(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1d_func_1899950218(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1d_func_1259662112(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1d_func_1090093794(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_1d_func_1259662112(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1d_func_2097007646(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x3] &= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_1d_func_1081084973(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_1d_func_44004142(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] <<= _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_1d_func_757755165(bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1d_func_857397133(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_2053958745(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_1d_func_715373587(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_0);
	_activation_check_proc_1d_func_668797271(_activatnvar_confusing_char_7);
	/* inline */ _activation_check_proc_1d_func_567981585();
}

void _activation_check_proc_1d_func_715373587(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_1d_func_2053958745(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_668797271(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= 0xf;

}

void _activation_check_proc_1d_func_1258926097(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1d_func_609680250(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_817539360(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_4 ^= _activatnvar_confusing_chararray_2[0xf];

}

void _activation_check_proc_1d_func_1664571942(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_1d_func_1608297601(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_2137607423(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_8[0xd] >>= _activatnvar_confusing_LLUUID_0.mData[0x8];

	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_786635222()
{
	
}

void _activation_check_proc_1d_func_1521374715(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x9] <<= _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_1d_func_1828859505(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1282784742(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_1474801893()
{
	
}

void _activation_check_proc_1d_func_666096082(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x5] |= _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_1d_func_2046366160(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_char_a;

}

void _activation_check_proc_1d_func_1055038924(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x7] >>= _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_1d_func_424422844(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1d_func_901301667(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_U8_0, _activatnvar_confusing_bool_c);
	_activation_check_proc_1d_func_1055038924(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_1d_func_1732170366(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1960188621(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_884466041(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_1d_func_563242149(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1d_func_561576330(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1577295108(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1d_func_759163223(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_1d_func_1577295108(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1d_func_239792923(unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_1d_func_411080294(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_1d_func_2049509298(_activatnvar_confusing_bool_7, _activatnvar_confusing_U8_2, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1d_func_365187905(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1d_func_166359872(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x5] |= _activatnvar_confusing_LLUUID_b.mData[0x8];

}

void _activation_check_proc_1d_func_917330553(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_LLUUID_d.mData[0xd];

}

void _activation_check_proc_1d_func_1250951607(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 >>= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_1d_func_1234996472(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_1d_func_1999020412(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("af7f5faa-35d9-fc73-7bb0-3d3d8927e128");

}

void _activation_check_proc_1d_func_1052035626(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_1d_func_1999020412(_activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_1d_func_1729841727(_activatnvar_confusing_LLUUID_7, _activatnvar_secret);
}

void _activation_check_proc_1d_func_1087020722(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_1d_func_1005082703(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xc] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_1d_func_1087020722(_activatnvar_confusing_bool_b, _activatnvar_generic_bool_1);
}

void _activation_check_proc_1d_func_390565778(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_so;

	/* inline */ _activation_check_proc_1d_func_1961972708();
	/* inline */ _activation_check_proc_1d_func_308952695(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1d_func_1330176184(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_chararray_0[0x3] <<= _activatnvar_confusing_LLUUID_2.mData[0xe];

	_activation_check_proc_1d_func_1633555199(_activatnvar_confusing_LLUUID_9, _activatnvar_mac_digest);
}

void _activation_check_proc_1d_func_1633555199(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_9.mData[0xb] = _activatnvar_mac_digest[0x8];

}

void _activation_check_proc_1d_func_853959480(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1d_func_1306997723(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_8, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_2;

	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
	/* inline */ _activation_check_proc_1d_func_1968640944(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_1d_func_2072030527(_activatnvar_confusing_char_8, _activatnvar_confusing_bool_7);
	_activation_check_proc_1d_func_853959480(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1d_func_746721682(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xd] *= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_1d_func_593911245(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_1d_func_999544086(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_1d_func_1649559758(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_6)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
	_activation_check_proc_1d_func_651046631(_activatnvar_confusing_int_6);
}

void _activation_check_proc_1d_func_651046631(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1d_func_628891888(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_842033371(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	_activation_check_proc_1d_func_204240422(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1d_func_204240422(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("04bee8ec-6e56-cd48-c116-a5c320b7a5a9");

}

void _activation_check_proc_1d_func_1971600857(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("428f2499-5416-cf09-ec68-73bfcfd2d766");

}

void _activation_check_proc_1d_func_1137107300()
{
	
}

void _activation_check_proc_1d_func_1446165887(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_1523372754(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1d_func_1142237206(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_section1)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_2 |= _activatnvar_confusing_U8_1;

	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_section1;

}

void _activation_check_proc_1d_func_269711166(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_1d_func_2124685949(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_1d_func_180998325(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_1;

	_activation_check_proc_1d_func_645097382(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_1d_func_1456660098(_activatnvar_pos);
}

void _activation_check_proc_1d_func_1456660098(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1d_func_645097382(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xd] *= _activatnvar_confusing_LLUUID_7.mData[0xd];

}

void _activation_check_proc_1d_func_1213056375(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1d_func_1695444796(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_a;

	_activation_check_proc_1d_func_1213056375(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_1d_func_1794059248(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1d_func_571650670(U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 ^= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_1d_func_257279773(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_1d_func_1487095361(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x9] *= _activatnvar_confusing_chararray_6[0x3];

}

void _activation_check_proc_1d_func_1324238572(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_1d_func_1858457702(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x6] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_1d_func_1729360170(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_char_0;

}

void _activation_check_proc_1d_func_1030325792(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_1d_func_281279459(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1d_func_1301410671(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	/* inline */ _activation_check_proc_1d_func_1992422004(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_1d_func_281279459(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_177640726(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_d.mData[0xc] *= _activatnvar_ser_digest[0x1];

	/* inline */ _activation_check_proc_1d_func_1066700452(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_1d_func_1149774195(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_330364496(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_330364496(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_678670809(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1d_func_133453526(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_4 *= _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_1d_func_722295775(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x4] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_5 = true;

	/* inline */ _activation_check_proc_1d_func_2038947185(_activatnvar_t0);
	_activation_check_proc_1d_func_133453526(_activatnvar_confusing_U8_4, _activatnvar_confusing_chararray_f);
	_activation_check_proc_1d_func_599615558(_activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1d_func_599615558(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xd] == 0x0) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_1d_func_239436944(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 <<= _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_1d_func_45033561(bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_int_9++;

	/* inline */ _activation_check_proc_1d_func_167729273(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_1d_func_1663063603(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_e.mData[0x6];

}

void _activation_check_proc_1d_func_875232958(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1d_func_821714558(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_1d_func_302677025(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("3a7b5698-7a07-0608-0e30-0e8d8efd32aa");

	/* inline */ _activation_check_proc_1d_func_430459701(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_9);
	_activation_check_proc_1d_func_1522229919(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1d_func_1522229919(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] >>= _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_1d_func_1626087006(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_8 &= 0xff;

	/* inline */ _activation_check_proc_1d_func_910049393(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1d_func_1223741006(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x8] != _activatnvar_confusing_char_c) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1d_func_1502719125(U8& _activatnvar_confusing_U8_3)
{
	
	/* inline */ _activation_check_proc_1d_func_116383938(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_1d_func_1429172202(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_1d_func_282907306(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("179e45bf-945c-fe8e-5801-2149245eb4d6");

	/* inline */ _activation_check_proc_1d_func_1423552822(_activatnvar_t0);
}

void _activation_check_proc_1d_func_48013317(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_int_a &= 0xff;

	/* inline */ _activation_check_proc_1d_func_1674047415();
	/* inline */ _activation_check_proc_1d_func_58214894(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_543602580(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1d_func_431852594(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1d_func_700382592(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x4] != 0x9) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_1d_func_945953017(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1d_func_1921800292(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_6)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_6 >>= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_1d_func_633919094(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

	/* inline */ _activation_check_proc_1d_func_360274356(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_U8_a, _activatnvar_confusing_bool_d, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1d_func_1222299632(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_1d_func_496592941(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

	_activation_check_proc_1d_func_747791955(_activatnvar_pos);
	_activation_check_proc_1d_func_1718658385(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_1d_func_1718658385(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_1d_func_747791955(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1d_func_263336853(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1700807385(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f >>= _activatnvar_confusing_char_a;

}

void _activation_check_proc_1d_func_110797802(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_1d_func_1423014784(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_8[0x7] >>= _activatnvar_confusing_chararray_9[0x3];

}

void _activation_check_proc_1d_func_1814546605(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_e |= 0x9;

}

void _activation_check_proc_1d_func_2026564206(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_1d_func_1554915250(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_541339474(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_1d_func_407250841(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("f0a809f8-ac3b-6d7f-c1e6-67aaa9733bc8");

}

void _activation_check_proc_1d_func_1439643108(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_0)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_0 <<= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_1d_func_1497298261(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_confusing_chararray_b[0x7] ^= _activatnvar_confusing_chararray_4[0x1];

	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_1d_func_1552822649(_activatnvar_confusing_LLUUID_3, _activatnvar_so);
}

void _activation_check_proc_1d_func_1552822649(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] <<= _activatnvar_so.mData[0xe];

}

void _activation_check_proc_1d_func_536127877(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x4] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1d_func_2110820159(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_8 >>= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_1d_func_837298819(unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_6[0xc] >>= _activatnvar_confusing_chararray_f[0x6];

	_activation_check_proc_1d_func_2110820159(_activatnvar_confusing_U8_8, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_1d_func_990216936(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_1d_func_1325083267(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_1d_func_2068779677(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_1d_func_1435637289(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1d_func_2068779677(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_1d_func_2015671646(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_t0, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_c)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_1d_func_491559793(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_1d_func_1689303212(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1d_func_246346934(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_1d_func_1270557757(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_1d_func_206079564(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
	_activation_check_proc_1d_func_1270557757(_activatnvar_confusing_U8_0, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_1d_func_1722974794(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1d_func_61752809(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_fscked.mData[0x5];

	_activation_check_proc_1d_func_1491084179(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_8);
	_activation_check_proc_1d_func_1261318477(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_1d_func_1491084179(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_f[0x0] &= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_1d_func_1261318477(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1d_func_864637833(int& _activatnvar_generic_iterator, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_978857293(_activatnvar_strbuf_0);
}

void _activation_check_proc_1d_func_978857293(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 119; _activatnvar_strbuf_0[0] ^= 70; _activatnvar_strbuf_0[1] = 110; _activatnvar_strbuf_0[1] ^= 94; _activatnvar_strbuf_0[2] = 44; _activatnvar_strbuf_0[2] ^= 31; _activatnvar_strbuf_0[3] = 120; _activatnvar_strbuf_0[3] ^= 76; _activatnvar_strbuf_0[4] = 59; _activatnvar_strbuf_0[4] ^= 89; _activatnvar_strbuf_0[5] = 60; _activatnvar_strbuf_0[5] ^= 90; _activatnvar_strbuf_0[6] = 20; _activatnvar_strbuf_0[6] ^= 114; _activatnvar_strbuf_0[7] = 125; _activatnvar_strbuf_0[7] ^= 75; _activatnvar_strbuf_0[8] = 88; _activatnvar_strbuf_0[8] ^= 117; _activatnvar_strbuf_0[9] = 37; _activatnvar_strbuf_0[9] ^= 71; _activatnvar_strbuf_0[10] = 120; _activatnvar_strbuf_0[10] ^= 79; _activatnvar_strbuf_0[11] = 42; _activatnvar_strbuf_0[11] ^= 30; _activatnvar_strbuf_0[12] = 94; _activatnvar_strbuf_0[12] ^= 110; _activatnvar_strbuf_0[13] = 3; _activatnvar_strbuf_0[13] ^= 46; _activatnvar_strbuf_0[14] = 23; _activatnvar_strbuf_0[14] ^= 39; _activatnvar_strbuf_0[15] = 10; _activatnvar_strbuf_0[15] ^= 108; _activatnvar_strbuf_0[16] = 36; _activatnvar_strbuf_0[16] ^= 70; _activatnvar_strbuf_0[17] = 52; _activatnvar_strbuf_0[17] ^= 80; _activatnvar_strbuf_0[18] = 39; _activatnvar_strbuf_0[18] ^= 10; _activatnvar_strbuf_0[19] = 51; _activatnvar_strbuf_0[19] ^= 2; _activatnvar_strbuf_0[20] = 5; _activatnvar_strbuf_0[20] ^= 102; _activatnvar_strbuf_0[21] = 57; _activatnvar_strbuf_0[21] ^= 91; _activatnvar_strbuf_0[22] = 11; _activatnvar_strbuf_0[22] ^= 109; _activatnvar_strbuf_0[23] = 54; _activatnvar_strbuf_0[23] ^= 27; _activatnvar_strbuf_0[24] = 97; _activatnvar_strbuf_0[24] ^= 85; _activatnvar_strbuf_0[25] = 47; _activatnvar_strbuf_0[25] ^= 25; _activatnvar_strbuf_0[26] = 88; _activatnvar_strbuf_0[26] ^= 109; _activatnvar_strbuf_0[27] = 40; _activatnvar_strbuf_0[27] ^= 75; _activatnvar_strbuf_0[28] = 106; _activatnvar_strbuf_0[28] ^= 90; _activatnvar_strbuf_0[29] = 66; _activatnvar_strbuf_0[29] ^= 115; _activatnvar_strbuf_0[30] = 56; _activatnvar_strbuf_0[30] ^= 92; _activatnvar_strbuf_0[31] = 6; _activatnvar_strbuf_0[31] ^= 52; _activatnvar_strbuf_0[32] = 30; _activatnvar_strbuf_0[32] ^= 47; _activatnvar_strbuf_0[33] = 75; _activatnvar_strbuf_0[33] ^= 41; _activatnvar_strbuf_0[34] = 94; _activatnvar_strbuf_0[34] ^= 58; _activatnvar_strbuf_0[35] = 109; _activatnvar_strbuf_0[35] ^= 88; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1d_func_2048814366(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x1] &= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_1d_func_934764928(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section1)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
}

void _activation_check_proc_1d_func_1720821368(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_123863201(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1d_func_1233498227(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_232255664(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("2f7a0001-3d6e-51b7-45b2-0a048677c0e1");

}

void _activation_check_proc_1d_func_597693982(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_136480811(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_1d_func_647104269(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x5] != 0x2) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_1d_func_419480081(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_5.mData[0x8] >>= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_1d_func_348539130(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_LLUUID_1.mData[0x9];

	_activation_check_proc_1d_func_419480081(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_1d_func_398227117(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1d_func_1387408551(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1d_func_792949188(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1251097857(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_9;

	/* inline */ _activation_check_proc_1d_func_645635983(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_f);
}

void _activation_check_proc_1d_func_569474361(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1d_func_1107224763(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_1d_func_344957026(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("270b316f-0b26-ce38-5866-2fe66754c762");

}

void _activation_check_proc_1d_func_1648281154(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1d_func_1143443728(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_1d_func_138863676(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_1d_func_138863676(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1933958744(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_1385831024(_activatnvar_name_digest, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_1d_func_302727404(_activatnvar_confusing_U8_4);
	_activation_check_proc_1d_func_1372576565(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1d_func_1372576565(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("d0bab1a2-69a2-ec11-2456-2a8d934f5346");

}

void _activation_check_proc_1d_func_1385831024(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xc] >>= _activatnvar_name_digest[0xf];

}

void _activation_check_proc_1d_func_257669165(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_combined_id;

	/* inline */ _activation_check_proc_1d_func_2020409653(_activatnvar_generic_iterator);
	_activation_check_proc_1d_func_1765813708(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_1d_func_1765813708(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_62059644(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_1d_func_571745074(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_1d_func_175353824(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_e = _activatnvar_secret.mData[0x0];

	_activation_check_proc_1d_func_571745074(_activatnvar_confusing_U8_2);
	_activation_check_proc_1d_func_882133981(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_c, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1d_func_882133981(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x9] != 0x1) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1d_func_1628840281(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_8 >>= _activatnvar_confusing_char_e;

}

void _activation_check_proc_1d_func_1945635138(int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_pos)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_chararray_b[0x3];

	_activatnvar_pos = _activatnvar_combined_id.mData[12];
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_1d_func_218603339(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_1d_func_1232821447(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_234516807(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_3;

	_activation_check_proc_1d_func_850854381(_activatnvar_confusing_char_e, _activatnvar_confusing_bool_f, _activatnvar_confusing_char_3);
	_activation_check_proc_1d_func_2075801291(_activatnvar_secret, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_1d_func_1363626436(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_1d_func_2133505179(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_1d_func_1574363483(_activatnvar_so, _activatnvar_confusing_chararray_d);
	_activation_check_proc_1d_func_45482208(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_1d_func_1418896956(_activatnvar_pos);
}

void _activation_check_proc_1d_func_1418896956(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1d_func_1574363483(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x2] <<= _activatnvar_so.mData[0x1];

}

void _activation_check_proc_1d_func_850854381(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_3 <<= _activatnvar_confusing_char_e;

}

void _activation_check_proc_1d_func_45482208(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] &= _activatnvar_confusing_chararray_9[0xc];

}

void _activation_check_proc_1d_func_2075801291(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_secret;

}

void _activation_check_proc_1d_func_1363626436(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_b[0x2] <<= _activatnvar_confusing_chararray_8[0xd];

}

void _activation_check_proc_1d_func_227916536(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1d_func_129606674(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_3.mData[0x7] &= _activatnvar_confusing_chararray_b[0x4];

	_activation_check_proc_1d_func_227916536(_activatnvar_pos);
}

void _activation_check_proc_1d_func_844499867(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1071342790(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_1d_func_2018173342(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xa] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_8 = false;

	_activation_check_proc_1d_func_844499867(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_1d_func_1071342790(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_1d_func_187008540(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_916058944(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1d_func_191985348(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_2069173468(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("b3c8b017-aa6b-6693-2b50-016d49249b64");

	/* inline */ _activation_check_proc_1d_func_1014104932(_activatnvar_confusing_bool_2);
}

void _activation_check_proc_1d_func_1354982316(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1d_func_591476091(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_t1, char& _activatnvar_confusing_char_f)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
	/* inline */ _activation_check_proc_1d_func_992907134(_activatnvar_confusing_char_f, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_1d_func_410770222(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_char_7;

	_activation_check_proc_1d_func_2013052522(_activatnvar_confusing_char_e, _activatnvar_section1);
}

void _activation_check_proc_1d_func_2013052522(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_e = _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_1d_func_241229774(int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_1d_func_1820261643(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1d_func_689969890(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_8[0x8] += _activatnvar_name_digest[0x1];

}

void _activation_check_proc_1d_func_1416046414(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_doaccount, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_2 = true;

	_activation_check_proc_1d_func_1404608714(_activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_1, _activatnvar_doaccount);
	_activation_check_proc_1d_func_689969890(_activatnvar_confusing_chararray_8, _activatnvar_name_digest);
}

void _activation_check_proc_1d_func_1404608714(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_doaccount)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x8] == 0xe) _activatnvar_confusing_bool_e = _activatnvar_doaccount;

}

void _activation_check_proc_1d_func_406322757(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_1d_func_793743799(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] = _activatnvar_confusing_LLUUID_5.mData[0xf];

}

void _activation_check_proc_1d_func_289919477(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1d_func_1196362309(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1417062066(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_1d_func_2089293801(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code);
	/* inline */ _activation_check_proc_1d_func_525246216(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_1d_func_2089293801(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1017875997(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1d_func_1527981625(bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_1d_func_1658747493(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1d_func_2038821084(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1d_func_985392551(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0xd;

	/* inline */ _activation_check_proc_1d_func_1335489342(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_1d_func_1086375324(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x3] <<= _activatnvar_confusing_LLUUID_e.mData[0x2];

	_activation_check_proc_1d_func_1812528022(_activatnvar_section1, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1d_func_1812528022(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] *= _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_1d_func_847305215(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_so;

	/* inline */ _activation_check_proc_1d_func_1187047923(_activatnvar_confusing_bool_9, _activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1d_func_1388588462(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1d_func_2086123957(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_1d_func_1029500724(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1d_func_550244788(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1934901135(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_1d_func_1392782180(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_1d_func_1553143823(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_1d_func_1535942531(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1d_func_288593812(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xc] |= _activatnvar_confusing_LLUUID_c.mData[0xf];

}

void _activation_check_proc_1d_func_345744929(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_1d_func_1369181010(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 = 0xd;

}

void _activation_check_proc_1d_func_477235887(int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_5, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	if(_activatnvar_confusing_LLUUID_b.mData[0x2] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_1d_func_1369181010(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_1d_func_1778893718(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_e, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_1d_func_788291267(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_1d_func_1094631182(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_1043767205(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_5);
	_activation_check_proc_1d_func_1229123339(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1d_func_1229123339(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("29b166af-f5bf-1b6f-9e7b-9e494055e225");

}

void _activation_check_proc_1d_func_1043767205(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xd] = _activatnvar_confusing_LLUUID_1.mData[0xa];

}

void _activation_check_proc_1d_func_1871546095(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_d[0xf] >>= _activatnvar_fscked.mData[0xb];

}

void _activation_check_proc_1d_func_1037786829(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_1d_func_956376509(unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_1d_func_1785441539(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_1d_func_707725211(int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_2, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_1d_func_402764249(_activatnvar_confusing_chararray_c, _activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_1d_func_1744526701();
	/* inline */ _activation_check_proc_1d_func_2119667605(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1d_func_358226440(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1d_func_2074441488(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] ^= _activatnvar_combined_id.mData[0x1];

}

void _activation_check_proc_1d_func_1789519051(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_code;

}

void _activation_check_proc_1d_func_89642976(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_d[0x0] ^= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_1d_func_1679481575(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_7, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_7 &= 0x3;

	/* inline */ _activation_check_proc_1d_func_2092138942(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_1d_func_8351784(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1007375990(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_1d_func_345559578(DWORD& _activatnvar_serial, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_b |= 0x9;

	_activation_check_proc_1d_func_1007375990(_activatnvar_serial);
}

void _activation_check_proc_1d_func_1950053031(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_1d_func_678483478(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_1d_func_721804638(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_c)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xc] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_1d_func_1651626305(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_1d_func_1734111282(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] >>= _activatnvar_confusing_LLUUID_b.mData[0xf];

}

void _activation_check_proc_1d_func_1092098638(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x2] = _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_1d_func_510527203(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_1d_func_780441633(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_1276189916(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1d_func_1276189916(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_737741459(unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x0] |= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_1d_func_1101444991(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_6)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_U8_6 <<= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_1d_func_69879099(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_LLUUID_f.mData[0xf] *= _activatnvar_confusing_chararray_6[0x2];

	_activation_check_proc_1d_func_1101444991(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_a, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_1d_func_69965954(U8& _activatnvar_confusing_U8_1, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_chararray_5[0x3];

	_activation_check_proc_1d_func_1353960766(_activatnvar_strbuf_0);
	_activation_check_proc_1d_func_1363075884(_activatnvar_strbuf_0, _activatnvar_section1);
	/* inline */ _activation_check_proc_1d_func_373418090(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1d_func_1363075884(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1d_func_1353960766(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 102; _activatnvar_strbuf_0[0] ^= 95; _activatnvar_strbuf_0[1] = 93; _activatnvar_strbuf_0[1] ^= 109; _activatnvar_strbuf_0[2] = 73; _activatnvar_strbuf_0[2] ^= 122; _activatnvar_strbuf_0[3] = 116; _activatnvar_strbuf_0[3] ^= 64; _activatnvar_strbuf_0[4] = 22; _activatnvar_strbuf_0[4] ^= 116; _activatnvar_strbuf_0[5] = 125; _activatnvar_strbuf_0[5] ^= 25; _activatnvar_strbuf_0[6] = 99; _activatnvar_strbuf_0[6] ^= 86; _activatnvar_strbuf_0[7] = 32; _activatnvar_strbuf_0[7] ^= 23; _activatnvar_strbuf_0[8] = 20; _activatnvar_strbuf_0[8] ^= 57; _activatnvar_strbuf_0[9] = 78; _activatnvar_strbuf_0[9] ^= 44; _activatnvar_strbuf_0[10] = 59; _activatnvar_strbuf_0[10] ^= 12; _activatnvar_strbuf_0[11] = 11; _activatnvar_strbuf_0[11] ^= 111; _activatnvar_strbuf_0[12] = 117; _activatnvar_strbuf_0[12] ^= 77; _activatnvar_strbuf_0[13] = 5; _activatnvar_strbuf_0[13] ^= 40; _activatnvar_strbuf_0[14] = 50; _activatnvar_strbuf_0[14] ^= 6; _activatnvar_strbuf_0[15] = 117; _activatnvar_strbuf_0[15] ^= 22; _activatnvar_strbuf_0[16] = 127; _activatnvar_strbuf_0[16] ^= 29; _activatnvar_strbuf_0[17] = 18; _activatnvar_strbuf_0[17] ^= 112; _activatnvar_strbuf_0[18] = 87; _activatnvar_strbuf_0[18] ^= 122; _activatnvar_strbuf_0[19] = 5; _activatnvar_strbuf_0[19] ^= 61; _activatnvar_strbuf_0[20] = 14; _activatnvar_strbuf_0[20] ^= 107; _activatnvar_strbuf_0[21] = 36; _activatnvar_strbuf_0[21] ^= 70; _activatnvar_strbuf_0[22] = 43; _activatnvar_strbuf_0[22] ^= 77; _activatnvar_strbuf_0[23] = 16; _activatnvar_strbuf_0[23] ^= 61; _activatnvar_strbuf_0[24] = 27; _activatnvar_strbuf_0[24] ^= 47; _activatnvar_strbuf_0[25] = 106; _activatnvar_strbuf_0[25] ^= 92; _activatnvar_strbuf_0[26] = 32; _activatnvar_strbuf_0[26] ^= 21; _activatnvar_strbuf_0[27] = 84; _activatnvar_strbuf_0[27] ^= 55; _activatnvar_strbuf_0[28] = 66; _activatnvar_strbuf_0[28] ^= 114; _activatnvar_strbuf_0[29] = 125; _activatnvar_strbuf_0[29] ^= 78; _activatnvar_strbuf_0[30] = 87; _activatnvar_strbuf_0[30] ^= 52; _activatnvar_strbuf_0[31] = 77; _activatnvar_strbuf_0[31] ^= 127; _activatnvar_strbuf_0[32] = 115; _activatnvar_strbuf_0[32] ^= 66; _activatnvar_strbuf_0[33] = 14; _activatnvar_strbuf_0[33] ^= 111; _activatnvar_strbuf_0[34] = 78; _activatnvar_strbuf_0[34] ^= 42; _activatnvar_strbuf_0[35] = 5; _activatnvar_strbuf_0[35] ^= 48; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1d_func_1463898481(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_so ^= _activatnvar_section2;
}

void _activation_check_proc_1d_func_64472804(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x6] != _activatnvar_t1) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_1d_func_694543205(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_1d_func_798939265(BOOL& _activatnvar_success, DWORD& _activatnvar_serial)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_1d_func_667965880(DWORD& _activatnvar_serial, BOOL& _activatnvar_success, DWORD& _activatnvar_gvi_flags, int& _activatnvar_confusing_int_4)
{
	_activatnvar_gvi_flags = 0;
	_activation_check_proc_1d_func_79215210(_activatnvar_success, _activatnvar_gvi_flags, _activatnvar_serial);
	_activation_check_proc_1d_func_694543205(_activatnvar_confusing_int_4);
	_activation_check_proc_1d_func_798939265(_activatnvar_success, _activatnvar_serial);
}

void _activation_check_proc_1d_func_79215210(BOOL& _activatnvar_success, DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
}

void _activation_check_proc_1d_func_879251981(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_923744914(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_1d_func_130196415(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_char_1;

}

void _activation_check_proc_1d_func_1667826416(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x1] = _activatnvar_confusing_chararray_e[0x2];

}

void _activation_check_proc_1d_func_242036183(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] &= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_1d_func_1712338687(unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_c &= 0x3;

	_activation_check_proc_1d_func_242036183(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1d_func_265000095(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1169024701(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_d[0xe] ^= _activatnvar_confusing_LLUUID_4.mData[0x7];

}

void _activation_check_proc_1d_func_362836609(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1d_func_1675265430(LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_char_c = _activatnvar_secret.mData[0x9];

	_activation_check_proc_1d_func_1485864804(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_1d_func_1512074857(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_1d_func_1485864804(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xd] == 0xb) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1d_func_1512074857(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_1d_func_1995268085(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1d_func_670018989(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_LLUUID_9.mData[0xa];

}

void _activation_check_proc_1d_func_134510237(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xf] += _activatnvar_confusing_chararray_6[0x3];

}

void _activation_check_proc_1d_func_1651035373(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 |= _activatnvar_confusing_int_9;

}

void _activation_check_proc_1d_func_1885716575(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_1d_func_222903768(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_6[0xb] = _activatnvar_confusing_LLUUID_3.mData[0x0];

}

void _activation_check_proc_1d_func_1225047035(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_1908630132()
{
	
}

void _activation_check_proc_1d_func_621648314(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_1346372215(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1204260801(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1d_func_1898359659(int& _activatnvar_confusing_int_6)
{
	
	_activation_check_proc_1d_func_1204260801(_activatnvar_confusing_int_6);
}

void _activation_check_proc_1d_func_1883456016(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1d_func_1798947752(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_lace;

}

void _activation_check_proc_1d_func_1646143245(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1d_func_141515836(U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("8ecb92b0-bd0f-ff81-edc3-94440b31e8ca");

	/* inline */ _activation_check_proc_1d_func_1778436901(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1d_func_1828097865(_activatnvar_confusing_int_5, _activatnvar_confusing_U8_8);
	_activation_check_proc_1d_func_599042233(_activatnvar_confusing_int_9, _activatnvar_confusing_char_d, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_1d_func_599042233(int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_int_9++;

	_activatnvar_confusing_char_d += _activatnvar_confusing_chararray_5[0xa];

}

void _activation_check_proc_1d_func_1414744699(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_166882570(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1d_func_472104485(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_354270933(_activatnvar_confusing_U8_b, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_1d_func_166882570(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1d_func_354270933(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_LLUUID_f.mData[0x7];

}

void _activation_check_proc_1d_func_811896262(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_349648902(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_1d_func_793813558(bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_1d_func_822850725(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("e2621418-d83a-0c80-8176-7b65aa1ec689");

}

void _activation_check_proc_1d_func_599030545(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1d_func_341644831(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_1d_func_1563810504(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_1d_func_246166199(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_name_digest, LLMD5*& _activatnvar_nmd5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_0.mData[0xa];

	/* inline */ _activation_check_proc_1d_func_818259769(_activatnvar_nmd5, _activatnvar_name_digest);
}

void _activation_check_proc_1d_func_1637318599(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1d_func_589900535(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_a[0xb] <<= _activatnvar_confusing_chararray_2[0x4];

	_activation_check_proc_1d_func_1637318599(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_8);
	_activation_check_proc_1d_func_1147960507(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_1d_func_1147960507(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1d_func_854882128(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1d_func_1111858213(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 >>= _activatnvar_confusing_int_4;

}

void _activation_check_proc_1d_func_2031461141(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] <<= _activatnvar_confusing_chararray_d[0x3];

	_activation_check_proc_1d_func_1111858213(_activatnvar_confusing_int_4, _activatnvar_confusing_int_3);
}

void _activation_check_proc_1d_func_2047533112(bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1d_func_1526777751(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_chararray_9[0x4];

}

void _activation_check_proc_1d_func_1628803184(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_135455811(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("b7c07964-b1d0-efe7-b46f-d56ced2cd0af");

}

void _activation_check_proc_1d_func_20653359(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
	/* inline */ _activation_check_proc_1d_func_1733400402(_activatnvar_t0);
}

void _activation_check_proc_1d_func_646280276(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1d_func_730826174(_activatnvar_confusing_U8_b, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1d_func_843981290()
{
	
}

void _activation_check_proc_1d_func_277725762(unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_1d_func_1896049067(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1d_func_1896049067(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x5] += _activatnvar_confusing_chararray_f[0x1];

	_activatnvar_confusing_chararray_7[0x9] ^= _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_1d_func_1436493334(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_1d_func_188537747(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] += _activatnvar_confusing_LLUUID_7.mData[0xd];

}

void _activation_check_proc_1d_func_473005993(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_LLUUID_5.mData[0x3] >>= _activatnvar_mac_digest[0x3];

	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_a;

	_activation_check_proc_1d_func_188537747(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_1d_func_289147947(_activatnvar_confusing_int_b);
}

void _activation_check_proc_1d_func_289147947(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1d_func_1264021024(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_generic_bool_1)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x0] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_e = _activatnvar_generic_bool_1;

}

void _activation_check_proc_1d_func_1708070088(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_3[0x2] ^= _activatnvar_confusing_LLUUID_9.mData[0x2];

	_activation_check_proc_1d_func_1264021024(_activatnvar_confusing_bool_e, _activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_6, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_1d_func_1179998035(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1d_func_1189664324(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1d_func_764674936(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1634651989(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1229884793(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x4] != 0xc) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_1d_func_544211716(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("dc3a8cd8-333b-66ab-f554-316173a50f05");

}

void _activation_check_proc_1d_func_1129431493(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_char_5++;

	_activation_check_proc_1d_func_825890569(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_1d_func_825890569(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1d_func_1646667094(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x8] == _activatnvar_t0) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_1d_func_257361328(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_1d_func_1084520237(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1d_func_1678675824(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("fc2a59cb-7b03-4da0-b86a-b45aba7eb068");

}

void _activation_check_proc_1d_func_1571020928(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_1678675824(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_1d_func_1295883770(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_f++;

	if(_activatnvar_confusing_LLUUID_f.mData[0x2] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1d_func_1023411282(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("7fcaa265-ce7f-f016-8bb7-20c357a3a36f");

	/* inline */ _activation_check_proc_1d_func_610244058(_activatnvar_confusing_chararray_b, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_1d_func_1008004781(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_c;

	/* inline */ _activation_check_proc_1d_func_111562531(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1d_func_1706574886(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_1.mData[0xd] *= _activatnvar_mac_digest[0x7];

}

void _activation_check_proc_1d_func_437694805(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_1d_func_1680041647(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_1d_func_124993487(_activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_1d_func_1451384124(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1d_func_1907501980(_activatnvar_name_digest, _activatnvar_confusing_chararray_0);
	_activation_check_proc_1d_func_1967529053(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_1d_func_539671378(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_1d_func_124993487(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("496b6a13-99ae-a855-d619-ca28a5d2e6a7");

}

void _activation_check_proc_1d_func_1967529053(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_1d_func_837227912(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_1d_func_1800882834(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_8)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1d_func_833488240(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f <<= _activatnvar_confusing_chararray_8[0x6];

	/* inline */ _activation_check_proc_1d_func_643050019(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1d_func_1040476881(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_4[0x0] *= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_1d_func_780498143()
{
	
}

void _activation_check_proc_1d_func_91110606(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_lace;

}

void _activation_check_proc_1d_func_810618572()
{
	
}

void _activation_check_proc_1d_func_2008967319(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_fscked.mData[0x3];

	/* inline */ _activation_check_proc_1d_func_2049903649(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_1d_func_91110606(_activatnvar_lace, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_1d_func_810618572();
}

void _activation_check_proc_1d_func_1003238243(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x1] != 0x8) _activatnvar_confusing_bool_f = _activatnvar_generic_bool_0;

}

void _activation_check_proc_1d_func_667932879(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1d_func_1059714047(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1d_func_761970547(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1d_func_2108975071(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1d_func_2108411501(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_2)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_2 = 0xe;

	/* inline */ _activation_check_proc_1d_func_1461426586(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_char_4);
	_activation_check_proc_1d_func_2108975071(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_1d_func_544887556(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_LLUUID_7 = _activatnvar_code;

}

void _activation_check_proc_1d_func_541530030(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_1d_func_1680335389(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] &= _activatnvar_confusing_chararray_3[0x7];

	/* inline */ _activation_check_proc_1d_func_1289278040(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_1d_func_1380570642(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1826659803(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_1d_func_1317450074(_activatnvar_name_digest, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1d_func_1778557885(_activatnvar_so, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1d_func_1778557885(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] = _activatnvar_so.mData[0x5];

}

void _activation_check_proc_1d_func_1317450074(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xf] = _activatnvar_name_digest[0xf];

}

void _activation_check_proc_1d_func_1059388298(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_2144997091(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 *= _activatnvar_confusing_char_0;

}

void _activation_check_proc_1d_func_664167207(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1d_func_1765937409(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 <<= _activatnvar_confusing_int_f;

}

void _activation_check_proc_1d_func_565887938(int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_3 += _activatnvar_confusing_int_c;

	_activation_check_proc_1d_func_1415925714(_activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1d_func_1415925714(unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x7] *= _activatnvar_confusing_chararray_a[0x2];

}

void _activation_check_proc_1d_func_1022178605(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1d_func_1880438617(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1d_func_499967634(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1075958449(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_673297805(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1d_func_188939526(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e += _activatnvar_confusing_char_f;

}

void _activation_check_proc_1d_func_591777889(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x8] = _activatnvar_confusing_LLUUID_8.mData[0x6];

	_activation_check_proc_1d_func_1914948600(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1d_func_1914948600(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_1d_func_1118959375(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_chararray_3[0xc] |= _activatnvar_confusing_LLUUID_f.mData[0xf];

	/* inline */ _activation_check_proc_1d_func_1883587244(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1d_func_1344484909(LLUUID& _activatnvar_so, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1d_func_1443418955(_activatnvar_confusing_chararray_2, _activatnvar_so);
}

void _activation_check_proc_1d_func_176063767(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1d_func_154391577(_activatnvar_code, _activatnvar_combined_id, _activatnvar_fscked, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1d_func_1501223771(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1432153782(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_b.mData[0x0] += _activatnvar_combined_id.mData[0x7];

	/* inline */ _activation_check_proc_1d_func_1001868749(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_1d_func_1123228086(_activatnvar_confusing_LLUUID_f);
	_activation_check_proc_1d_func_1708471910(_activatnvar_confusing_U8_e, _activatnvar_t1);
}

void _activation_check_proc_1d_func_1708471910(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_t1)
{
	_activatnvar_confusing_U8_e = _activatnvar_t1;

}

void _activation_check_proc_1d_func_2066194149(bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] <<= _activatnvar_confusing_chararray_f[0x9];

	/* inline */ _activation_check_proc_1d_func_339140498(_activatnvar_doaccount, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_1d_func_1767174654(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("ddeda544-9b3d-315a-2380-ce81697cafc5");

}

void _activation_check_proc_1d_func_1462887628(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("e745779f-1e34-5a6c-c77e-513669351155");

}

void _activation_check_proc_1d_func_938839100(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_8[0x9] = _activatnvar_code.mData[0x6];

	/* inline */ _activation_check_proc_1d_func_1633918726(_activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_b, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_1d_func_310101588(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_2[0x3] <<= _activatnvar_confusing_LLUUID_4.mData[0xb];

}

void _activation_check_proc_1d_func_541638995()
{
	
}

void _activation_check_proc_1d_func_1466231220(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 >>= _activatnvar_confusing_char_1;

}

void _activation_check_proc_1d_func_800725597(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_1d_func_1391494626(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_1d_func_1118964378(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_9.mData[0xe] <<= _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_1d_func_839539159(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_1d_func_1724949930(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x1] |= _activatnvar_confusing_chararray_f[0xc];

	_activation_check_proc_1d_func_378261640(_activatnvar_confusing_U8_2);
	_activation_check_proc_1d_func_51498449(_activatnvar_confusing_U8_a, _activatnvar_confusing_bool_d, _activatnvar_confusing_char_4);
}

void _activation_check_proc_1d_func_378261640(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_1d_func_51498449(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_a <<= _activatnvar_confusing_char_4;

}

void _activation_check_proc_1d_func_1266216302(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_e *= _activatnvar_confusing_int_6;

}

void _activation_check_proc_1d_func_1532391709(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_1d_func_1442979349(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_a.mData[0xe] ^= _activatnvar_confusing_chararray_1[0xf];

}

void _activation_check_proc_1d_func_203554123(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] |= _activatnvar_confusing_LLUUID_f.mData[0x2];

	_activation_check_proc_1d_func_1442979349(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_1d_func_1453136992(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1d_func_1085162045(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_935965141(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1984479022(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] <<= _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_1d_func_603313416(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1d_func_1373529725(unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_8[0xc] ^= _activatnvar_confusing_LLUUID_1.mData[0xf];

	_activation_check_proc_1d_func_270512774(_activatnvar_confusing_int_b);
}

void _activation_check_proc_1d_func_270512774(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1d_func_177543643(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1d_func_2057334665(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_1d_func_523713725(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_1203952737(_activatnvar_confusing_chararray_9, _activatnvar_combined_id);
}

void _activation_check_proc_1d_func_1203952737(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_9[0xd] <<= _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_1d_func_1846103547(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1d_func_312096160(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("b7dda252-b494-e5ed-b591-44a0bbf7ebbd");

}

void _activation_check_proc_1d_func_1886150517(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_1 *= _activatnvar_confusing_chararray_a[0xd];

}

void _activation_check_proc_1d_func_1547481399(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_1)
{
	
	_activation_check_proc_1d_func_1886150517(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1d_func_731994133(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_0, char& _activatnvar_feat, int& _activatnvar_confusing_int_2, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 = _activatnvar_confusing_int_0;

	/* inline */ _activation_check_proc_1d_func_1747527814(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	_activation_check_proc_1d_func_1153190722(_activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_1d_func_1064013090(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	_activation_check_proc_1d_func_1503005647(_activatnvar_confusing_int_2);
}

void _activation_check_proc_1d_func_1503005647(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_1d_func_1153190722(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1d_func_1841044155(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x7] &= _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_1d_func_683776182(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1d_func_632122752(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1d_func_2108332115(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1d_func_2060749574(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x5] = _activatnvar_confusing_chararray_b[0xa];

}

void _activation_check_proc_1d_func_1038705861(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_char_2 += _activatnvar_confusing_U8_7;

}

void _activation_check_proc_1d_func_1891147900(char& _activatnvar_confusing_char_2, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_1038705861(_activatnvar_confusing_char_2, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_1d_func_422650518(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_2.mData[0xd];

}

void _activation_check_proc_1d_func_1659308872(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x2] <<= _activatnvar_lace.mData[0x5];

	_activation_check_proc_1d_func_1765254186(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_1d_func_1765254186(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x3] >>= _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_1d_func_267231112(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1d_func_1661692171(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("b1a90370-8a2f-a928-8c66-1312c682072e");

}

void _activation_check_proc_1d_func_1407815713(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1d_func_1463040936(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_1d_func_476594405(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_a.mData[0x0];

}

void _activation_check_proc_1d_func_1283893513(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1617463321(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1d_func_1891352946(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x1] &= _activatnvar_section1.mData[0xa];

	_activation_check_proc_1d_func_1617463321(_activatnvar_generic_bool_0);
}

void _activation_check_proc_1d_func_1216545411(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x5] *= _activatnvar_confusing_LLUUID_8.mData[0x3];

}

void _activation_check_proc_1d_func_1196199780(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x8] ^= _activatnvar_confusing_LLUUID_5.mData[0xc];

}

void _activation_check_proc_1d_func_608537829(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_1[0x3] |= _activatnvar_confusing_chararray_5[0x1];

	_activation_check_proc_1d_func_585701231(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_585701231(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_668957530(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_fscked.mData[0x7];

}

void _activation_check_proc_1d_func_701720526(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_1d_func_1916904077(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_1[0x3] = _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_1d_func_448215724(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] ^= _activatnvar_confusing_chararray_0[0x9];

}

void _activation_check_proc_1d_func_1811755493(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1d_func_2003093442(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_1d_func_1855862042(int& _activatnvar_confusing_int_1, char& _activatnvar_confusing_char_d, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_d += _activatnvar_confusing_U8_2;

	_activation_check_proc_1d_func_2003093442(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1d_func_1618072614(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1d_func_1348950541(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xd] &= _activatnvar_confusing_chararray_2[0xd];

}

void _activation_check_proc_1d_func_372843210(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x1] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_2 = false;

	/* inline */ _activation_check_proc_1d_func_241530281(_activatnvar_generic_bool_0);
	_activation_check_proc_1d_func_1348950541(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1d_func_784246750(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] ^= _activatnvar_confusing_chararray_a[0xe];

	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_1d_func_943554874(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_0;

	_activation_check_proc_1d_func_921828466(_activatnvar_fscked, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_1d_func_784246750(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_1d_func_663764988(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1d_func_921828466(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_fscked;

}

void _activation_check_proc_1d_func_1129194946(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_1d_func_1295488963(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_1d_func_1640747272(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_0.mData[0x4] *= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_1d_func_1239162810(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_896235228(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] *= _activatnvar_confusing_LLUUID_5.mData[0x1];

	_activation_check_proc_1d_func_1239162810(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_1d_func_909222442(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_1 = _activatnvar_confusing_char_2;

}

void _activation_check_proc_1d_func_1987051236(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_1d_func_905376471(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_1d_func_823962922(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_a[0x3] <<= _activatnvar_confusing_LLUUID_4.mData[0x4];

}

void _activation_check_proc_1d_func_1473015874(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 *= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_1d_func_1529836671(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1d_func_1844025818(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_f = false;

	/* inline */ _activation_check_proc_1d_func_213220405();
}

void _activation_check_proc_1d_func_284790882(U8& _activatnvar_t0, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_1776365615(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] ^= _activatnvar_confusing_chararray_5[0x4];

	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_LLUUID_5.mData[0xe];

}

void _activation_check_proc_1d_func_6946591(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xd] != 0xb) _activatnvar_confusing_bool_4 = false;

	/* inline */ _activation_check_proc_1d_func_57831385(_activatnvar_confusing_char_6);
}

void _activation_check_proc_1d_func_1251384567(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_1d_func_995129042(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1d_func_1076229335(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1072659624(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_c *= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_1d_func_1705620355(char& _activatnvar_confusing_char_a, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x7] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_d = true;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1761639285(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1d_func_1054465306(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] ^= _activatnvar_confusing_LLUUID_6.mData[0x4];

	_activation_check_proc_1d_func_703827554(_activatnvar_t0, _activatnvar_pos, _activatnvar_so);
	_activation_check_proc_1d_func_368707795(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1d_func_703827554(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_1d_func_368707795(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_1d_func_1923764974(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_a *= _activatnvar_t0;

}

void _activation_check_proc_1d_func_2025765881(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_5[0x8] = _activatnvar_confusing_LLUUID_3.mData[0xa];

}

void _activation_check_proc_1d_func_1292708613(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("15e9f40a-aac2-09a9-7a1e-aa45b16a83b0");

}

void _activation_check_proc_1d_func_1580183082(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_6;

	_activation_check_proc_1d_func_1292708613(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1d_func_1299855546(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] |= _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_1d_func_1758764012(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

	_activation_check_proc_1d_func_1299855546(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1d_func_1158540996(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_d[0xc] &= _activatnvar_confusing_LLUUID_1.mData[0x5];

}

void _activation_check_proc_1d_func_1383025143(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_char_5 = _activatnvar_secret.mData[0x4];

}

void _activation_check_proc_1d_func_866489505(int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_b = _activatnvar_generic_iterator;

}

void _activation_check_proc_1d_func_115294955(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1d_func_512531414(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1d_func_555769278(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0xa] = _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_1d_func_1170375272(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x5] |= _activatnvar_confusing_chararray_5[0x4];

}

void _activation_check_proc_1d_func_546024833(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("ef820401-517c-7970-ce73-3ecf29d68af1");

}

void _activation_check_proc_1d_func_1581221200(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_605863632(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_605863632(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_893585992(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x7] <<= _activatnvar_secret.mData[0x7];

}

void _activation_check_proc_1d_func_839202237(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_1d_func_1791890863(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] = _activatnvar_combined_id.mData[0x0];

}

void _activation_check_proc_1d_func_792510726(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1d_func_1596790436(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_185602043(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 ^= 0xf;

}

void _activation_check_proc_1d_func_1564039755(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_b[0x9] &= _activatnvar_confusing_chararray_0[0xf];

}

void _activation_check_proc_1d_func_19242931(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1d_func_332974544(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_1.mData[0x2];

}

void _activation_check_proc_1d_func_1599900243(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_1d_func_1880207847(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1d_func_403545359(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_8)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_7 = _activatnvar_confusing_char_8;

}

void _activation_check_proc_1d_func_107849372(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x3] += _activatnvar_confusing_chararray_d[0xd];

}

void _activation_check_proc_1d_func_1683222535(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_a)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_c += _activatnvar_confusing_char_a;

}

void _activation_check_proc_1d_func_1854178567(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_1d_func_967563935(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_e[0xf] >>= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_1d_func_786276851(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_5[0x9] = _activatnvar_confusing_LLUUID_2.mData[0x7];

}

void _activation_check_proc_1d_func_88737679(LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_int_c++;

	/* inline */ _activation_check_proc_1d_func_948902069(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_1d_func_1633300067(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1d_func_1633300067(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1d_func_1830880577(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_1d_func_1785111096(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_1d_func_1830880577(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_1d_func_745918061(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d >>= 0x0;

}

void _activation_check_proc_1d_func_537874973(int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_7 = true;

	/* inline */ _activation_check_proc_1d_func_996391802(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1d_func_1467692971(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_section1.mData[0xf];

}

void _activation_check_proc_1d_func_1486948788(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_0;

	_activation_check_proc_1d_func_1155653430(_activatnvar_so, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_1d_func_1155653430(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_so.mData[0x2];

}

void _activation_check_proc_1d_func_846530343(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] <<= _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_1d_func_27502489(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] = _activatnvar_confusing_LLUUID_5.mData[0xf];

	_activation_check_proc_1d_func_846530343(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1d_func_218763450(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_1d_func_2116048716(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_936147259(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_1d_func_1905824457(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_1587556164(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_1d_func_112033399(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_1d_func_351378949(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_1d_func_466189631()
{
	
}

void _activation_check_proc_1d_func_2080918952(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_1d_func_2043912451(int& _activatnvar_confusing_int_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_2080918952(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1d_func_1602170589(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1d_func_1645444999(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1d_func_204725535(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 <<= 0xa;

	_activation_check_proc_1d_func_1645444999(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1d_func_1501659990(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_1d_func_1354542412(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_1d_func_472863796(bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1d_func_709104822(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_2, _activatnvar_confusing_char_9);
	_activation_check_proc_1d_func_271258422(_activatnvar_confusing_bool_e, _activatnvar_confusing_char_6, _activatnvar_confusing_char_1);
}

void _activation_check_proc_1d_func_271258422(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_1 = _activatnvar_confusing_char_6;

}

void _activation_check_proc_1d_func_931306000(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_chararray_f[0x3];

}

void _activation_check_proc_1d_func_628292139(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1d_func_1249409718(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_628292139(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_doaccount, _activatnvar_feat);
}

void _activation_check_proc_1d_func_363355911(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1d_func_2011388182(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_1d_func_1293763132(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xe] *= _activatnvar_code.mData[0x2];

}

void _activation_check_proc_1d_func_636211687()
{
	
}

void _activation_check_proc_1d_func_477656310(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_d, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1d_func_1325761694(_activatnvar_generic_iterator);
	_activation_check_proc_1d_func_690236950(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_char_5, _activatnvar_confusing_bool_2, _activatnvar_confusing_bool_3);
	_activation_check_proc_1d_func_2003282291(_activatnvar_generic_bool_0, _activatnvar_confusing_char_1, _activatnvar_confusing_char_d);
}

void _activation_check_proc_1d_func_690236950(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xd] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1d_func_2003282291(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_d <<= _activatnvar_confusing_char_1;

}

void _activation_check_proc_1d_func_2118259589(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_chararray_3[0x7] >>= _activatnvar_mac_digest[0x0];

	_activation_check_proc_1d_func_1157220070(_activatnvar_confusing_int_e);
	_activation_check_proc_1d_func_2090314898(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_1d_func_1157220070(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1d_func_2090314898(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_222877952(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_U8_a++;

	/* inline */ _activation_check_proc_1d_func_1034209378(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_1d_func_1513904066(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_9, LLMD5& _activatnvar_smd5)
{
	_activatnvar_confusing_LLUUID_9.mData[0x2] ^= _activatnvar_confusing_chararray_c[0x4];

	_activatnvar_smd5.finalize();
}

void _activation_check_proc_1d_func_54054023(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_c, LLMD5& _activatnvar_smd5, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_LLUUID_c.mData[0x2] += _activatnvar_code.mData[0x2];

	_activation_check_proc_1d_func_1513904066(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_9, _activatnvar_smd5);
	/* inline */ _activation_check_proc_1d_func_351976453(_activatnvar_smd5, _activatnvar_confusing_int_a, _activatnvar_ser_digest);
}

void _activation_check_proc_1d_func_2042798783(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_b.mData[0x6] <<= _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_1d_func_56770086(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_1[0xf] &= _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_1d_func_39454740(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_2)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_2 <<= 0x9;

}

void _activation_check_proc_1d_func_1815791200(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_LLUUID_7.mData[0xe];

	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1d_func_59672063(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_2, U8& _activatnvar_t0)
{
	_activatnvar_confusing_int_c &= _activatnvar_confusing_int_c;

	_activation_check_proc_1d_func_1815791200(_activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_7, _activatnvar_t0);
}

void _activation_check_proc_1d_func_117375063(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_1d_func_1763561472(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1575467894(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("24e75f0f-3ca2-9c4c-be11-08de5e9cc812");

}

void _activation_check_proc_1d_func_612310634(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_8)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x2] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_1d_func_1669008424(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_612310634(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_3, _activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_1d_func_350291840(_activatnvar_confusing_U8_6);
	_activation_check_proc_1d_func_1575467894(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1d_func_1389301528(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_1d_func_188079903(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1d_func_1764084527(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1d_func_1319868698(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_1d_func_2002183309()
{
	
}

void _activation_check_proc_1d_func_1650418900(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_f)
{
	
	/* inline */ _activation_check_proc_1d_func_1811844806(_activatnvar_confusing_U8_f, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1d_func_1953568044(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_1d_func_963425826(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_1d_func_430612109(_activatnvar_t0);
}

void _activation_check_proc_1d_func_430612109(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_2021093643(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_d[0xe] *= _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_1d_func_125743923(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_chararray_d[0x2];

}

void _activation_check_proc_1d_func_1494099851(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_c.mData[0x0] = _activatnvar_confusing_chararray_0[0x0];

}

void _activation_check_proc_1d_func_1379802441(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_e ^= _activatnvar_confusing_char_e;

}

void _activation_check_proc_1d_func_1761335469(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1775876077(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_1d_func_1885270485(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_7 ^= _activatnvar_confusing_int_5;

}

void _activation_check_proc_1d_func_1164280881(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1049210088(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1611563341(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x5] = _activatnvar_code.mData[0xb];

}

void _activation_check_proc_1d_func_2000249987(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_fscked.mData[0x3];

}

void _activation_check_proc_1d_func_973198405(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_LLUUID_a.mData[0x3];

}

void _activation_check_proc_1d_func_1140094338(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_so;

}

void _activation_check_proc_1d_func_1144477784(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

	_activation_check_proc_1d_func_1488688365(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_1d_func_1488688365(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_1d_func_901759033(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 <<= 0x8;

}

void _activation_check_proc_1d_func_1099513738(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] |= _activatnvar_confusing_LLUUID_b.mData[0x5];

	_activation_check_proc_1d_func_713808615(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_d, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_1d_func_713808615(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1d_func_1799959290(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	/* inline */ _activation_check_proc_1d_func_760070976();
}

void _activation_check_proc_1d_func_254033698(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_1d_func_93482884(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1d_func_613298708(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1d_func_2127195524(LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_pos, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("81ee52e6-7adf-e096-edd0-d9bf69d0b737");

	_activation_check_proc_1d_func_613298708(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
	_activation_check_proc_1d_func_254033698(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_1d_func_1039705143();
	_activation_check_proc_1d_func_93482884(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_1d_func_1421919803(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("8b084aff-c889-b71e-31a9-bddd38bf00e9");

	/* inline */ _activation_check_proc_1d_func_406316716(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_a);
	_activation_check_proc_1d_func_288886487();
}

void _activation_check_proc_1d_func_288886487()
{
	
}

void _activation_check_proc_1d_func_1622369239(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_a.mData[0x0] &= _activatnvar_confusing_chararray_0[0x4];

	/* inline */ _activation_check_proc_1d_func_454745378(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_int_6, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_1d_func_988054047(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_8[0x3] >>= _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_1d_func_1377479090(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_generic_bool_0;

	_activation_check_proc_1d_func_1170011430(_activatnvar_ser_digest, _activatnvar_confusing_chararray_0, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1170011430(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_chararray_0[0x5] = _activatnvar_ser_digest[0x4];

}

void _activation_check_proc_1d_func_2059341441(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_5.mData[0x9] <<= _activatnvar_confusing_LLUUID_a.mData[0x4];

}

void _activation_check_proc_1d_func_251058941(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_1d_func_867409341()
{
	
}

void _activation_check_proc_1d_func_1406066683(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
	_activation_check_proc_1d_func_251058941(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
	_activation_check_proc_1d_func_867409341();
}

void _activation_check_proc_1d_func_1423296991(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_4.mData[0xd] *= _activatnvar_confusing_chararray_a[0xc];

	/* inline */ _activation_check_proc_1d_func_1155848145(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_fscked);
}

void _activation_check_proc_1d_func_1558788391(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1d_func_1401711334(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_5 <<= _activatnvar_confusing_char_e;

}

void _activation_check_proc_1d_func_286830873(char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_chararray_c[0xe];

	_activation_check_proc_1d_func_1558788391(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_1d_func_1835041989(_activatnvar_confusing_LLUUID_9);
	_activation_check_proc_1d_func_1401711334(_activatnvar_confusing_bool_6, _activatnvar_confusing_U8_5, _activatnvar_confusing_char_e);
}

void _activation_check_proc_1d_func_259183509(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_1d_func_1113787835(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_1d_func_259183509(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_1d_func_1535721343(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] &= _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_1d_func_545234527(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1961354575(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1906378033(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_1d_func_486567526(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_564529034(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x4] *= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_1d_func_47253636(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_8)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_8 *= 0x9;

}

void _activation_check_proc_1d_func_311355677(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_2042402064(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_0[0x3] *= _activatnvar_confusing_chararray_5[0xe];

	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_1d_func_930900370(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_2.mData[0x6] |= _activatnvar_combined_id.mData[0x0];

	/* inline */ _activation_check_proc_1d_func_1743991568(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
}

void _activation_check_proc_1d_func_1637804118(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_section2.mData[0x3];

	_activation_check_proc_1d_func_1365787815(_activatnvar_lace, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1365787815(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_228352320(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_1d_func_596551851(U8& _activatnvar_t1)
{
	
	_activation_check_proc_1d_func_228352320(_activatnvar_t1);
}

void _activation_check_proc_1d_func_750105012(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_8[0x7];

	_activation_check_proc_1d_func_1927173627(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1d_func_1927173627(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_1d_func_837432235(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_chararray_b[0x5] ^= _activatnvar_lace.mData[0x5];

}

void _activation_check_proc_1d_func_1478070693(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_f;

	/* inline */ _activation_check_proc_1d_func_169114795(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1d_func_76868139(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_1d_func_957779539(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] ^= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_1d_func_914906882(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_c.mData[0x8];

}

void _activation_check_proc_1d_func_209356613(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_1d_func_490811503(U8& _activatnvar_t0, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_t1, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_6[0x2] &= _activatnvar_secret.mData[0x9];

	/* inline */ _activation_check_proc_1d_func_319880253(_activatnvar_t1, _activatnvar_t0, _activatnvar_so);
	/* inline */ _activation_check_proc_1d_func_1608132791(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1d_func_1021367763(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1d_func_1010240814(char& _activatnvar_feat, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1d_func_512975511(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_1d_func_1602164592(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_74380146(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_1574857033(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_chararray_8[0xb];

	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1d_func_1173580729(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("5abb0a4e-9315-75d4-c130-d95fc08fceba");

	/* inline */ _activation_check_proc_1d_func_1730047657(_activatnvar_confusing_U8_2, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_1d_func_1379906457(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_6[0xf] >>= _activatnvar_confusing_chararray_2[0x9];

}

void _activation_check_proc_1d_func_1804324019(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x8] <<= _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_1d_func_1760569061(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_6, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_int_6++;

	_activatnvar_confusing_LLUUID_4.mData[0xb] = _activatnvar_fscked.mData[0xd];

	/* inline */ _activation_check_proc_1d_func_1950947338(_activatnvar_generic_bool_0);
}

void _activation_check_proc_1d_func_788166267(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_117071013(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x7] *= _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_1d_func_1244139485(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_1d_func_117071013(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1d_func_1650516419(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 *= 0x9;

}

void _activation_check_proc_1d_func_124140010(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_9[0x2] |= _activatnvar_confusing_LLUUID_4.mData[0x8];

	_activation_check_proc_1d_func_1650516419(_activatnvar_confusing_char_7);
}

void _activation_check_proc_1d_func_2119713039(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_section1;

	/* inline */ _activation_check_proc_1d_func_1624318071(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_1d_func_887113366(_activatnvar_confusing_int_9);
}

void _activation_check_proc_1d_func_908770561(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_f ^= _activatnvar_confusing_char_9;

}

void _activation_check_proc_1d_func_1379190844(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("3991fa53-3f7e-9479-9180-17953b66efd9");

	/* inline */ _activation_check_proc_1d_func_2044325482(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_0);
	_activation_check_proc_1d_func_908770561(_activatnvar_confusing_char_f, _activatnvar_confusing_char_9, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_1d_func_1920758883(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("d15438a0-6a90-fbc0-d63b-d1bf022e9a8f");

}

void _activation_check_proc_1d_func_2062740467(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1d_func_1282428997(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] &= _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_1d_func_596489140(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_c.mData[0xc] &= _activatnvar_confusing_chararray_5[0x8];

	_activation_check_proc_1d_func_1056325144(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_7);
	_activation_check_proc_1d_func_602595293(_activatnvar_t0);
	_activation_check_proc_1d_func_1029596258(_activatnvar_t0);
}

void _activation_check_proc_1d_func_1056325144(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1d_func_602595293(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_1029596258(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_1d_func_1673782902(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a *= 0x6;

}

void _activation_check_proc_1d_func_2053210774(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1d_func_711821471(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1d_func_52469530(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1d_func_1974983278()
{
	
}

void _activation_check_proc_1d_func_460679890(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] <<= _activatnvar_section2.mData[0x4];

	/* inline */ _activation_check_proc_1d_func_1635055393(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_1d_func_1824069221(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x7] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1d_func_1617136415(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_2)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x4] != _activatnvar_confusing_char_2) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_1d_func_1107641607(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 <<= _activatnvar_confusing_chararray_d[0x0];

}

void _activation_check_proc_1d_func_2131388754(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_8, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] ^= _activatnvar_confusing_LLUUID_b.mData[0xc];

	_activation_check_proc_1d_func_1107641607(_activatnvar_confusing_chararray_d, _activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_1d_func_1641563525(_activatnvar_pos);
}

void _activation_check_proc_1d_func_1592110683(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_4.mData[0x3] += _activatnvar_confusing_chararray_e[0x9];

}

void _activation_check_proc_1d_func_1442514024(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_2115005050(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x6] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_8;

	_activatnvar_confusing_char_8++;

	_activation_check_proc_1d_func_368179330(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1d_func_368179330(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_4.mData[0xc] <<= _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_1d_func_491633365(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_d ^= 0xa;

}

void _activation_check_proc_1d_func_372021223(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_9)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_char_c <<= _activatnvar_confusing_char_9;

}

void _activation_check_proc_1d_func_206988534(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_1d_func_2140289126(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1d_func_1937777545(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] ^= _activatnvar_confusing_LLUUID_7.mData[0xe];

}

void _activation_check_proc_1d_func_306310478(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xb] |= _activatnvar_confusing_LLUUID_9.mData[0x7];

}

void _activation_check_proc_1d_func_839009696(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1044007707(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_1d_func_1611824801(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_a.mData[0xe] |= _activatnvar_confusing_LLUUID_9.mData[0x5];

}

void _activation_check_proc_1d_func_1751381711(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_9[0x3] *= _activatnvar_name_digest[0xc];

	_activation_check_proc_1d_func_1611824801(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1d_func_123528924(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_1d_func_2120990315(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1d_func_1841735397(U8& _activatnvar_confusing_U8_2, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	_activation_check_proc_1d_func_1147535705(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_1d_func_1147535705(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_1d_func_1843645686(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1d_func_901937374(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_373154457(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_d = LLUUID("33c5581b-b4f3-5f92-321d-de4c1964a343");

}

void _activation_check_proc_1d_func_1101529459(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_373154457(_activatnvar_confusing_LLUUID_d, _activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_1d_func_285659897(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_1d_func_391616582(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_7.mData[0x7];

	_activation_check_proc_1d_func_285659897(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_1d_func_1062329986(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_1379977932(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_1d_func_1273315743(_activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1273315743(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1379977932(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_376050885(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_1d_func_177859521(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_1d_func_1595068347(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_1d_func_1933544369(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x8] <<= _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_1d_func_281685963(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1d_func_2131798613(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_793011660(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

	/* inline */ _activation_check_proc_1d_func_153412195();
	_activation_check_proc_1d_func_2125265677(_activatnvar_confusing_chararray_3);
}

void _activation_check_proc_1d_func_2125265677(unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xc] *= _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_1d_func_1238298206(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1d_func_1188784712(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1d_func_1087616911(_activatnvar_lace, _activatnvar_doaccount, _activatnvar_feat, _activatnvar_generic_iterator);
}

void _activation_check_proc_1d_func_1087616911(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1d_func_190133505(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1882347451(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] |= _activatnvar_confusing_chararray_7[0x8];

	/* inline */ _activation_check_proc_1d_func_1907587916(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_1d_func_1867712615(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1d_func_1867712615(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_a.mData[0xa];

	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_68361327(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1d_func_1600153826(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_c, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	/* inline */ _activation_check_proc_1d_func_937083578(_activatnvar_generic_iterator);
	_activation_check_proc_1d_func_1970059603(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	_activation_check_proc_1d_func_1053675118(_activatnvar_confusing_U8_c, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1d_func_1053675118(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_1.mData[0xa];

}

void _activation_check_proc_1d_func_1970059603(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1d_func_790669137(LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1d_func_933486211(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_362749630(bool& _activatnvar_confusing_bool_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_section2)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_2 = true;

	_activation_check_proc_1d_func_933486211(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_1d_func_620710810(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_5, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_1d_func_323370371(_activatnvar_confusing_U8_a, _activatnvar_confusing_bool_e, _activatnvar_confusing_char_c);
	/* inline */ _activation_check_proc_1d_func_1153000836(_activatnvar_confusing_LLUUID_b, _activatnvar_section1);
	_activation_check_proc_1d_func_1024684720(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1d_func_1024684720(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_b[0x7] >>= _activatnvar_confusing_LLUUID_8.mData[0xa];

}

void _activation_check_proc_1d_func_323370371(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_a |= _activatnvar_confusing_char_c;

}

void _activation_check_proc_1d_func_738776394(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_1d_func_1931821998(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xe] == 0x1) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_1d_func_738776394(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_1d_func_1465492331(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_2011787052(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0x0;

}

void _activation_check_proc_1d_func_833385246(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1d_func_1099647728(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_c;

	_activation_check_proc_1d_func_1107859076(_activatnvar_confusing_char_6, _activatnvar_generic_iterator, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_1d_func_1107859076(char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_generic_iterator = 0;
	_activatnvar_confusing_char_6 ^= _activatnvar_confusing_chararray_1[0x8];

}

void _activation_check_proc_1d_func_1934224541(int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_1[0xd] *= _activatnvar_ser_digest[0x5];

	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1d_func_540061095(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_525957161(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1648001235(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x8] *= _activatnvar_name_digest[0xb];

}

void _activation_check_proc_1d_func_634082321()
{
	
}

void _activation_check_proc_1d_func_695963336(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_1d_func_425416818(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_LLUUID_2.mData[0x1] &= _activatnvar_confusing_LLUUID_0.mData[0x0];

	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_8.mData[0xb];

}

void _activation_check_proc_1d_func_1669272878(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_8.mData[0x9];

}

void _activation_check_proc_1d_func_567768303(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 ^= 0xb;

}

void _activation_check_proc_1d_func_794607281(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= 0x4;

}

void _activation_check_proc_1d_func_1423658066(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1d_func_780774224(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1d_func_197836456(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_7 += _activatnvar_confusing_char_e;

	if(_activatnvar_confusing_LLUUID_7.mData[0xb] == _activatnvar_t0) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_1d_func_549673577(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1d_func_2115174706(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1d_func_596430975(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_1d_func_1669521986(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_1d_func_1778987786(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("ae28c955-bc05-9b7c-a9f9-e1d19514764f");

}

void _activation_check_proc_1d_func_390679365(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_5.mData[0xd] = _activatnvar_confusing_chararray_6[0x6];

}

void _activation_check_proc_1d_func_815311169(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("ff152518-a9cc-5b2d-c472-728ce1f2dd46");

	_activation_check_proc_1d_func_114217248(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1d_func_114217248(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_7[0x8] >>= _activatnvar_confusing_chararray_a[0xf];

}

void _activation_check_proc_1d_func_1862392212(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1d_func_1387379887(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] == 0x0) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1d_func_1182920509(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_1682094831(_activatnvar_confusing_int_c);
}

void _activation_check_proc_1d_func_1682094831(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c ^= 0x1;

}

void _activation_check_proc_1d_func_1546487053(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_code;

}

void _activation_check_proc_1d_func_381044287(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_e *= _activatnvar_confusing_chararray_d[0x4];

	/* inline */ _activation_check_proc_1d_func_1154961856(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
	_activation_check_proc_1d_func_1709014594(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1d_func_891076094(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_confusing_bool_b, _activatnvar_combined_id, _activatnvar_confusing_bool_c);
	_activation_check_proc_1d_func_1077990282(_activatnvar_confusing_char_4, _activatnvar_confusing_char_2);
	/* inline */ _activation_check_proc_1d_func_516022680(_activatnvar_confusing_chararray_d, _activatnvar_generic_iterator, _activatnvar_confusing_U8_5);
	/* inline */ _activation_check_proc_1d_func_1276097931(_activatnvar_confusing_char_6, _activatnvar_confusing_U8_b);
	_activation_check_proc_1d_func_715646003(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_1d_func_1077990282(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_char_4;

}

void _activation_check_proc_1d_func_1709014594(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_715646003(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x2] = _activatnvar_confusing_chararray_c[0x0];

}

void _activation_check_proc_1d_func_861281618()
{
	
}

void _activation_check_proc_1d_func_582839082(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_1d_func_1658028987(_activatnvar_confusing_char_6, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1d_func_394145251(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_8 = _activatnvar_confusing_int_0;

}

void _activation_check_proc_1d_func_1425177335(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[7] = _activatnvar_fscked.mData[7];
	/* inline */ _activation_check_proc_1d_func_206841875(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_1d_func_1756682824(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x5] += _activatnvar_confusing_chararray_8[0x4];

}

void _activation_check_proc_1d_func_1601624163(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x7] += _activatnvar_confusing_chararray_6[0x7];

	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_1d_func_1216567151(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x9] *= _activatnvar_confusing_chararray_1[0x8];

}

void _activation_check_proc_1d_func_1211885377(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("98c5121d-8b0a-a99d-10ba-408cdad85e12");

}

void _activation_check_proc_1d_func_925148765(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 >>= 0x2;

}

void _activation_check_proc_1d_func_657004240(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xc] ^= _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_1d_func_318623664(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] != _activatnvar_t0) _activatnvar_confusing_bool_e = false;

	/* inline */ _activation_check_proc_1d_func_67045478(_activatnvar_code, _activatnvar_confusing_U8_f);
	_activation_check_proc_1d_func_657004240(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1d_func_1200382763(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_1d_func_1200382763(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_1d_func_1447766845(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1d_func_334002893(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] |= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_1d_func_1722901173(bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_char_5 += 0x5;

	/* inline */ _activation_check_proc_1d_func_840473209(_activatnvar_generic_iterator, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_1d_func_863726555(_activatnvar_confusing_int_c);
}

void _activation_check_proc_1d_func_2140839881(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_c[0x2] += _activatnvar_confusing_LLUUID_3.mData[0xc];

}

void _activation_check_proc_1d_func_1730156964()
{
	
}

void _activation_check_proc_1d_func_954299664(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_1d_func_1730156964();
	_activation_check_proc_1d_func_786377128(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_1d_func_786377128(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1d_func_660182081(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_6[0xb] ^= _activatnvar_confusing_LLUUID_5.mData[0xd];

}

void _activation_check_proc_1d_func_1169795445(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] *= _activatnvar_confusing_LLUUID_2.mData[0x4];

	
}

void _activation_check_proc_1d_func_355695880(LLMD5*& _activatnvar_mmd5, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("9634a58a-6c2c-4caa-29a6-cdd7e5673877");

	_activation_check_proc_1d_func_706154725(_activatnvar_mac_digest, _activatnvar_mmd5);
}

void _activation_check_proc_1d_func_706154725(unsigned char* _activatnvar_mac_digest, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
}

void _activation_check_proc_1d_func_627363429(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
	_activatnvar_t0 >>= 4;
	_activation_check_proc_1d_func_2003091413(_activatnvar_t0);
}

void _activation_check_proc_1d_func_2003091413(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1d_func_408197896(int& _activatnvar_confusing_int_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1d_func_1108927008(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1d_func_1108927008(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1d_func_100966386(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_1d_func_575758646(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1d_func_1444915413(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_0, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_c)
{
	_activatnvar_generic_iterator = 8;
	/* inline */ _activation_check_proc_1d_func_1617637237(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_1d_func_309702282(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_b);
	_activation_check_proc_1d_func_1745449994(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_1d_func_1745449994(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_d.mData[0x8];

}

void _activation_check_proc_1d_func_1008710749(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_code;

}

void _activation_check_proc_1d_func_1048934032(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1d_func_113413145(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] |= _activatnvar_ser_digest[0x9];

}

void _activation_check_proc_1d_func_484234958(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_e)
{
	
	_activation_check_proc_1d_func_113413145(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_1d_func_589462620(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1d_func_589462620(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_1d_func_1166757527()
{
	
}

void _activation_check_proc_1d_func_678104044(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_2130731915(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_1d_func_1793731342(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_LLUUID_f.mData[0x7] *= _activatnvar_confusing_chararray_1[0xa];

	_activation_check_proc_1d_func_2130731915(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_1d_func_121617045(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1d_func_384990229(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_code, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x8] ^= _activatnvar_code.mData[0x8];

	/* inline */ _activation_check_proc_1d_func_1106255642(_activatnvar_ser_digest, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_1d_func_1489098112(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1d_func_319059908(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_generic_bool_0;

	_activation_check_proc_1d_func_1532900187(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_1d_func_1388391648(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1d_func_1532900187(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x2] += _activatnvar_confusing_LLUUID_4.mData[0x8];

}

void _activation_check_proc_1d_func_1263471875(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_1d_func_1481263403(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	/* inline */ _activation_check_proc_1d_func_1782352570(_activatnvar_confusing_int_b);
}

void _activation_check_proc_1d_func_1362963886(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xa] = _activatnvar_name_digest[0x4];

}

void _activation_check_proc_1d_func_724806851(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_b;

	/* inline */ _activation_check_proc_1d_func_1709890994(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1d_func_2066126627(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_6[0x5] |= _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_1d_func_521975396(std::string& _activatnvar_fullname, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_1d_func_1028402241(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_1d_func_1819237751(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_a &= _activatnvar_doaccount;

}

void _activation_check_proc_1d_func_32530249(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_9 &= _activatnvar_confusing_int_6;

}

void _activation_check_proc_1d_func_818390054(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_1d_func_769498782(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_1d_func_1716231193(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1d_func_1323735507(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_8)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x9] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_1d_func_310069054(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_e;

}

void _activation_check_proc_1d_func_1682292960(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x5] != _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1d_func_842317230(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

	_activation_check_proc_1d_func_253156852(_activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1d_func_253156852(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x7] == 0x3) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1d_func_790248589(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_1d_func_275036251(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

	/* inline */ _activation_check_proc_1d_func_1857832481(_activatnvar_confusing_chararray_1, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_1d_func_1595929330(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x0] &= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_1d_func_990670078(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b *= _activatnvar_confusing_int_3;

	_activation_check_proc_1d_func_1343659175(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_1d_func_1343659175(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_1d_func_720737728(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1d_func_1656439960(int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_int_8++;

	_activation_check_proc_1d_func_1210841012(_activatnvar_confusing_chararray_d, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_1d_func_1210841012(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_1d_func_2027004019(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_U8_3 >>= _activatnvar_confusing_char_f;

}

void _activation_check_proc_1d_func_2044033222()
{
	
}

void _activation_check_proc_1d_func_1015289728(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_section2;

}

void _activation_check_proc_1d_func_185925699(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1581034087(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("2dc22e89-8a57-fced-346d-f40824250324");

}

void _activation_check_proc_1d_func_1279219834(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1d_func_663441688(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_int_5 &= 0xff;

	_activation_check_proc_1d_func_1279219834(_activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_1d_func_636596491(_activatnvar_generic_iterator, _activatnvar_confusing_bool_6, _activatnvar_combined_id, _activatnvar_code, _activatnvar_fscked, _activatnvar_doaccount);
}

void _activation_check_proc_1d_func_1806294546(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_0.mData[0xd] ^= _activatnvar_confusing_chararray_e[0xe];

	_activation_check_proc_1d_func_1827178948(_activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_1d_func_1827178948(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xb] == _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_1d_func_133518476(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("c0e5048e-d206-108c-94e0-3c103553fb3f");

}

void _activation_check_proc_1d_func_738468756(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x3] &= _activatnvar_ser_digest[0x1];

}

void _activation_check_proc_1d_func_1154762449(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_chararray_0[0x8];

}

void _activation_check_proc_1d_func_1057621024(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_284008341(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_generic_bool_0;

	/* inline */ _activation_check_proc_1d_func_1990719604(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1d_func_1193106012(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_1d_func_99442408(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1d_func_1740536025(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_1)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x5] == _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_a = true;

	_activation_check_proc_1d_func_1681672291(_activatnvar_confusing_bool_5, _activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_e, _activatnvar_confusing_LLUUID_c, _activatnvar_code, _activatnvar_confusing_bool_1);
	_activation_check_proc_1d_func_260625776(_activatnvar_confusing_U8_8, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_1d_func_354230235(_activatnvar_confusing_char_b, _activatnvar_confusing_char_1);
}

void _activation_check_proc_1d_func_354230235(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_b >>= _activatnvar_confusing_char_1;

}

void _activation_check_proc_1d_func_1681672291(bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_chararray_4[0x8] &= _activatnvar_code.mData[0x5];

	if(_activatnvar_confusing_LLUUID_c.mData[0xc] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1d_func_260625776(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_3.mData[0x6];

}

void _activation_check_proc_1d_func_1428701032(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_1d_func_1272164562(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("9231d009-91ce-8336-88e1-3a6548c6118a");

	/* inline */ _activation_check_proc_1d_func_2101134874(_activatnvar_confusing_bool_a);
}

void _activation_check_proc_1d_func_49588960(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_9, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_1d_func_1910483058(_activatnvar_confusing_U8_0, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1d_func_1910483058(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_0 &= _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_1d_func_744183692(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xf] &= _activatnvar_confusing_LLUUID_a.mData[0x7];

	/* inline */ _activation_check_proc_1d_func_618588379(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_3);
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
