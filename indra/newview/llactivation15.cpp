// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation15.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 15

void _activation_check_proc_15_func_1942438782(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_15_func_1951850793(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x1] ^= _activatnvar_confusing_LLUUID_4.mData[0x3];

}

void _activation_check_proc_15_func_691739011(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_confusing_chararray_7[0x8];

	_activation_check_proc_15_func_115121006(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_15_func_583444663(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_15_func_396294193(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_15_func_1437601315(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_15_func_39428036(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_15_func_396294193(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_15_func_39428036(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x4] ^= _activatnvar_confusing_LLUUID_d.mData[0x4];

}

void _activation_check_proc_15_func_583444663(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_15_func_115121006(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_15_func_949380334(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_t0, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
	_activatnvar_confusing_bool_8 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_15_func_1773635702(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_15_func_2091515371(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1720877429(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_3 >>= 0xc;

}

void _activation_check_proc_15_func_914780857(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1350666448(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xb] |= _activatnvar_confusing_chararray_1[0x9];

}

void _activation_check_proc_15_func_666321515(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x3] >>= _activatnvar_confusing_chararray_2[0xb];

}

void _activation_check_proc_15_func_135627978(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_15_func_995787990(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_4)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x5] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_15_func_84920658(U8& _activatnvar_t0, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x1] >>= _activatnvar_ser_digest[0xb];

	_activation_check_proc_15_func_231968643(_activatnvar_t0);
}

void _activation_check_proc_15_func_231968643(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_15_func_591175425(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_15_func_821606183(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_a <<= _activatnvar_confusing_char_b;

}

void _activation_check_proc_15_func_1068417196(U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_int_a++;

	_activatnvar_confusing_char_1 <<= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_15_func_414713380(U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_1, char& _activatnvar_confusing_char_1, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_1 ^= _activatnvar_confusing_int_6;

	_activation_check_proc_15_func_1068417196(_activatnvar_confusing_U8_e, _activatnvar_confusing_int_a, _activatnvar_confusing_char_1);
}

void _activation_check_proc_15_func_378741596(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_15_func_564942831(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_15_func_1610647357(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_15_func_497627386(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_15_func_1571870553(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_15_func_1571870553(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x2] &= _activatnvar_confusing_LLUUID_6.mData[0xa];

}

void _activation_check_proc_15_func_1040134192(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x0] == 0x4) _activatnvar_confusing_bool_f = false;

	/* inline */ _activation_check_proc_15_func_1926542327(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_15_func_1426435096(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_15_func_876025471(U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_section1;

	/* inline */ _activation_check_proc_15_func_947057267(_activatnvar_confusing_U8_e, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_15_func_542601926(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xe] |= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_15_func_127580102(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_15_func_328758283(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_0 *= 0xe;

	/* inline */ _activation_check_proc_15_func_939184907(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_15_func_1567940416(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_15_func_1641334576(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1149270263(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_15_func_1531545414(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1404649652(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_b &= _activatnvar_confusing_char_9;

}

void _activation_check_proc_15_func_668407937(int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_int_6 &= 0xff;

	/* inline */ _activation_check_proc_15_func_1614956555(_activatnvar_confusing_int_6);
	_activation_check_proc_15_func_1732057033(_activatnvar_confusing_LLUUID_0);
	_activation_check_proc_15_func_717562793(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_15_func_717562793(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_7[0x5] += _activatnvar_confusing_LLUUID_1.mData[0x6];

}

void _activation_check_proc_15_func_1732057033(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("00c63ef7-8922-ae63-321a-42236bb1d84b");

}

void _activation_check_proc_15_func_35150573(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_fscked.mData[0x2];

}

void _activation_check_proc_15_func_1094644915(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_15_func_1987476535(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 |= 0x7;

}

void _activation_check_proc_15_func_1229312639(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_870129594(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_0 &= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_15_func_59946067(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("4bc2414e-0528-478c-adfa-f3ea67b81a83");

}

void _activation_check_proc_15_func_815116184(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_1103657587(_activatnvar_combined_id, _activatnvar_confusing_chararray_a);
	_activation_check_proc_15_func_637731787(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_bool_c, _activatnvar_confusing_char_3);
}

void _activation_check_proc_15_func_637731787(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_3)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x4] == _activatnvar_confusing_char_3) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_15_func_540415970(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_15_func_1645220975(_activatnvar_confusing_char_4, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_15_func_1645220975(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_a.mData[0xf];

}

void _activation_check_proc_15_func_1415134902(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_15_func_565589621(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

	_activation_check_proc_15_func_822338378(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_15_func_1415134902(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_15_func_822338378(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x1] >>= _activatnvar_confusing_LLUUID_5.mData[0xd];

}

void _activation_check_proc_15_func_101929155(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xf] &= _activatnvar_confusing_LLUUID_6.mData[0xf];

}

void _activation_check_proc_15_func_710990033(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 19; _activatnvar_strbuf_0[0] ^= 34; _activatnvar_strbuf_0[1] = 25; _activatnvar_strbuf_0[1] ^= 41; _activatnvar_strbuf_0[2] = 100; _activatnvar_strbuf_0[2] ^= 87; _activatnvar_strbuf_0[3] = 100; _activatnvar_strbuf_0[3] ^= 80; _activatnvar_strbuf_0[4] = 59; _activatnvar_strbuf_0[4] ^= 89; _activatnvar_strbuf_0[5] = 87; _activatnvar_strbuf_0[5] ^= 49; _activatnvar_strbuf_0[6] = 122; _activatnvar_strbuf_0[6] ^= 28; _activatnvar_strbuf_0[7] = 90; _activatnvar_strbuf_0[7] ^= 108; _activatnvar_strbuf_0[8] = 10; _activatnvar_strbuf_0[8] ^= 39; _activatnvar_strbuf_0[9] = 82; _activatnvar_strbuf_0[9] ^= 48; _activatnvar_strbuf_0[10] = 68; _activatnvar_strbuf_0[10] ^= 115; _activatnvar_strbuf_0[11] = 114; _activatnvar_strbuf_0[11] ^= 70; _activatnvar_strbuf_0[12] = 1; _activatnvar_strbuf_0[12] ^= 49; _activatnvar_strbuf_0[13] = 28; _activatnvar_strbuf_0[13] ^= 49; _activatnvar_strbuf_0[14] = 4; _activatnvar_strbuf_0[14] ^= 52; _activatnvar_strbuf_0[15] = 82; _activatnvar_strbuf_0[15] ^= 52; _activatnvar_strbuf_0[16] = 80; _activatnvar_strbuf_0[16] ^= 50; _activatnvar_strbuf_0[17] = 122; _activatnvar_strbuf_0[17] ^= 30; _activatnvar_strbuf_0[18] = 107; _activatnvar_strbuf_0[18] ^= 70; _activatnvar_strbuf_0[19] = 24; _activatnvar_strbuf_0[19] ^= 41; _activatnvar_strbuf_0[20] = 122; _activatnvar_strbuf_0[20] ^= 25; _activatnvar_strbuf_0[21] = 39; _activatnvar_strbuf_0[21] ^= 69; _activatnvar_strbuf_0[22] = 119; _activatnvar_strbuf_0[22] ^= 17; _activatnvar_strbuf_0[23] = 71; _activatnvar_strbuf_0[23] ^= 106; _activatnvar_strbuf_0[24] = 15; _activatnvar_strbuf_0[24] ^= 59; _activatnvar_strbuf_0[25] = 37; _activatnvar_strbuf_0[25] ^= 19; _activatnvar_strbuf_0[26] = 97; _activatnvar_strbuf_0[26] ^= 84; _activatnvar_strbuf_0[27] = 1; _activatnvar_strbuf_0[27] ^= 98; _activatnvar_strbuf_0[28] = 125; _activatnvar_strbuf_0[28] ^= 77; _activatnvar_strbuf_0[29] = 103; _activatnvar_strbuf_0[29] ^= 86; _activatnvar_strbuf_0[30] = 50; _activatnvar_strbuf_0[30] ^= 86; _activatnvar_strbuf_0[31] = 76; _activatnvar_strbuf_0[31] ^= 126; _activatnvar_strbuf_0[32] = 30; _activatnvar_strbuf_0[32] ^= 47; _activatnvar_strbuf_0[33] = 67; _activatnvar_strbuf_0[33] ^= 33; _activatnvar_strbuf_0[34] = 101; _activatnvar_strbuf_0[34] ^= 1; _activatnvar_strbuf_0[35] = 25; _activatnvar_strbuf_0[35] ^= 44; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_15_func_1560205854(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_15_func_455024002(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_7 ^= 0xa;

}

void _activation_check_proc_15_func_77621640(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= _activatnvar_confusing_int_e;

}

void _activation_check_proc_15_func_1988094952(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_15_func_487692773(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("5afd45e4-f2be-4187-d48b-8693d230fe45");

	_activation_check_proc_15_func_1988094952(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_15_func_1908159404(_activatnvar_confusing_int_3);
}

void _activation_check_proc_15_func_1666870737(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1098635910(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("70cbf007-a548-fabc-5134-dff5aa3f3c7d");

	/* inline */ _activation_check_proc_15_func_96564053(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_e);
	_activation_check_proc_15_func_1666870737(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_15_func_1576137241(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1874104797(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 |= 0xf;

	_activation_check_proc_15_func_1576137241(_activatnvar_generic_iterator);
	_activation_check_proc_15_func_550858132(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_15_func_550858132(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_15_func_57771019(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_a &= _activatnvar_doaccount;

}

void _activation_check_proc_15_func_133547097(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_15_func_418144639(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xa] == _activatnvar_confusing_char_e) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_15_func_413083594(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_15_func_369781062(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("19c6ec74-e26b-3180-4fe6-10df94164faf");

}

void _activation_check_proc_15_func_95830574(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1068039208(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
	_activation_check_proc_15_func_287781606(_activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_15_func_933905228(_activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_15_func_1401540746(_activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_15_func_692421596(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_15_func_287781606(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_8.mData[0xe];

}

void _activation_check_proc_15_func_933905228(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
}

void _activation_check_proc_15_func_406241686(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_8[0xa] = _activatnvar_section1.mData[0xf];

}

void _activation_check_proc_15_func_384813758(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_9[0x6] <<= _activatnvar_code.mData[0x2];

	_activation_check_proc_15_func_406241686(_activatnvar_confusing_chararray_8, _activatnvar_section1);
	_activation_check_proc_15_func_602118738(_activatnvar_confusing_U8_c);
}

void _activation_check_proc_15_func_602118738(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_15_func_1763780938(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_15_func_1725237614(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_15_func_256301980(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_1 <<= _activatnvar_confusing_chararray_8[0xc];

	_activation_check_proc_15_func_1725237614(_activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_15_func_676267181(_activatnvar_so, _activatnvar_section1);
}

void _activation_check_proc_15_func_676267181(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section1)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
}

void _activation_check_proc_15_func_2110423968(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("2578962b-15ac-5e1b-75e0-8b3d6fb3ca3b");

}

void _activation_check_proc_15_func_1963614755(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_15_func_526682684(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

	/* inline */ _activation_check_proc_15_func_622939467(_activatnvar_confusing_chararray_f, _activatnvar_name_digest);
}

void _activation_check_proc_15_func_1288641284(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_15_func_1995342736(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_9[0x3] |= _activatnvar_confusing_LLUUID_0.mData[0x8];

}

void _activation_check_proc_15_func_395254011(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("fd690c53-1498-3646-09c4-866ed2cb369d");

	_activatnvar_confusing_chararray_9[0xc] &= _activatnvar_confusing_chararray_4[0xd];

	/* inline */ _activation_check_proc_15_func_1135472657(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_15_func_413290900(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_15_func_1035811598(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_1 &= _activatnvar_confusing_char_2;

}

void _activation_check_proc_15_func_480892174(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_1, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_int_e &= 0xff;

	_activatnvar_confusing_U8_d &= _activatnvar_confusing_LLUUID_d.mData[0x2];

	_activation_check_proc_15_func_1035811598(_activatnvar_confusing_char_2, _activatnvar_confusing_bool_0, _activatnvar_confusing_char_1);
}

void _activation_check_proc_15_func_447750305(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_9 |= _activatnvar_confusing_int_4;

}

void _activation_check_proc_15_func_476950958(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_LLUUID_a.mData[0x8] |= _activatnvar_confusing_chararray_0[0xa];

	_activatnvar_confusing_char_b ^= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_15_func_1518765390(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xe] |= _activatnvar_code.mData[0x4];

}

void _activation_check_proc_15_func_1203941256(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 &= 0x8;

}

void _activation_check_proc_15_func_1334376601(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1334041897(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x7] == 0x6) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_15_func_119737521(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_15_func_1292056747(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] <<= _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_15_func_496712831(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_section1;

}

void _activation_check_proc_15_func_572189755(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_4;

	_activation_check_proc_15_func_496712831(_activatnvar_section1, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_15_func_1788006377(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_f ^= _activatnvar_confusing_chararray_b[0x9];

	_activation_check_proc_15_func_1184591571(_activatnvar_confusing_char_9);
	_activation_check_proc_15_func_1131430175(_activatnvar_confusing_int_2);
}

void _activation_check_proc_15_func_1131430175(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_15_func_1184591571(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_15_func_2039376404(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1086882663(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_4.mData[0x2] <<= _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_15_func_1786427289(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_LLUUID_8.mData[0x9];

}

void _activation_check_proc_15_func_1296553089(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_15_func_21282899(U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_e >>= _activatnvar_confusing_chararray_4[0xe];

	/* inline */ _activation_check_proc_15_func_1009396969(_activatnvar_confusing_int_5);
}

void _activation_check_proc_15_func_1042415545(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_15_func_1708759697(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
	_activatnvar_confusing_LLUUID_c.mData[0x5] ^= _activatnvar_confusing_LLUUID_9.mData[0xa];

	_activation_check_proc_15_func_1042415545(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_15_func_1986103460(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1880513085(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_209231817(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_5)
{
	
	_activation_check_proc_15_func_2129614094(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_c, _activatnvar_confusing_char_5);
}

void _activation_check_proc_15_func_2129614094(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_chararray_6[0x4];

	_activatnvar_confusing_LLUUID_3.mData[0xe] *= _activatnvar_confusing_chararray_c[0x2];

}

void _activation_check_proc_15_func_77898755()
{
	
}

void _activation_check_proc_15_func_1664589100(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_641759925(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_15_func_1864140155(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_15_func_213984827(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_730273514(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1072293023(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x2] = _activatnvar_name_digest[0x5];

}

void _activation_check_proc_15_func_1631871045(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("16d32657-a07d-0c58-98e4-140db2a86278");

	/* inline */ _activation_check_proc_15_func_661198391(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_15_func_1244245683(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_15_func_1717257848(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_15_func_1479297529(_activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_15_func_1244245683(_activatnvar_confusing_int_6);
	_activation_check_proc_15_func_288925035(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
	/* inline */ _activation_check_proc_15_func_1445048459(_activatnvar_confusing_int_8);
}

void _activation_check_proc_15_func_288925035(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1479297529(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_b |= _activatnvar_confusing_LLUUID_2.mData[0x5];

}

void _activation_check_proc_15_func_159837408(int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	
	_activation_check_proc_15_func_1674404701(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_15_func_806843964(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_15_func_268498928(_activatnvar_confusing_int_f);
}

void _activation_check_proc_15_func_1674404701(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x4] <<= _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_15_func_1883266892(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_15_func_796961602(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_6)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_a <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_15_func_1608283439(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xc] == 0xd) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_15_func_649663252(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_419562700(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_15_func_1273641461(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xb] >>= _activatnvar_mac_digest[0xc];

	/* inline */ _activation_check_proc_15_func_1760515398(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_15_func_1175558416(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c ^= 0xe;

}

void _activation_check_proc_15_func_1638833762(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_LLUUID_3.mData[0x9];

}

void _activation_check_proc_15_func_194510166(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("c071b221-27dc-babb-213b-771e225f1397");

}

void _activation_check_proc_15_func_185899767(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("26e89b8b-ee02-22fc-37bc-2fcae0d3876b");

}

void _activation_check_proc_15_func_1529833370(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x7] = _activatnvar_confusing_LLUUID_e.mData[0xe];

	_activatnvar_confusing_U8_a = _activatnvar_section2.mData[0x3];

}

void _activation_check_proc_15_func_343103056(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_15_func_1585397863(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_15_func_1279037476(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_15_func_1751870929(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1464873272(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_15_func_1995228538(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xf] >>= _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_15_func_1177252245(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_6 ^= 0xd;

}

void _activation_check_proc_15_func_1281204620()
{
	
}

void _activation_check_proc_15_func_1501411647(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_15_func_839367762(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("90b2d573-4230-e0bf-766c-499776f41d84");

	_activation_check_proc_15_func_1501411647(_activatnvar_strbuf_0, _activatnvar_section2);
}

void _activation_check_proc_15_func_2100957458(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_15_func_997268461(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_189729662(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_15_func_1706253192(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_2036120239(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xa] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_c = false;

	_activatnvar_pos &= 7;
}

void _activation_check_proc_15_func_904952966(int& _activatnvar_generic_iterator, char& _activatnvar_feat, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_15_func_1141340319(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_5);
	_activation_check_proc_15_func_1716065929(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_15_func_1716065929(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xf] |= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_15_func_1141340319(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_15_func_481320565(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_5.mData[0x7] += _activatnvar_mac_digest[0x6];

	_activation_check_proc_15_func_1392516625(_activatnvar_confusing_bool_2, _activatnvar_confusing_chararray_e, _activatnvar_section2, _activatnvar_confusing_LLUUID_4, _activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_15_func_1392516625(bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] += _activatnvar_confusing_chararray_e[0xf];

	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_1 = true;

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1997143673(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xf] != 0xc) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_15_func_1039671517(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_char_b >>= _activatnvar_confusing_char_a;

	_activation_check_proc_15_func_526773375(_activatnvar_confusing_bool_d, _activatnvar_confusing_U8_8, _activatnvar_generic_bool_1, _activatnvar_confusing_char_e, _activatnvar_confusing_bool_a);
	_activation_check_proc_15_func_2005556175(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_15_func_2005556175(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_15_func_526773375(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_a;

	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_8 <<= _activatnvar_confusing_char_e;

}

void _activation_check_proc_15_func_1012645813(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_15_func_972950658(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("69828ea8-84b3-a15f-b036-24e7f26fbc28");

}

void _activation_check_proc_15_func_1054164309(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_c.mData[0x5];

}

void _activation_check_proc_15_func_870044071(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_15_func_807155946(_activatnvar_generic_bool_0);
	_activation_check_proc_15_func_1054164309(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_2);
	/* inline */ _activation_check_proc_15_func_1508347189(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_15_func_178921227(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_15_func_807155946(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_15_func_543435592(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_5 += _activatnvar_confusing_chararray_6[0x2];

}

void _activation_check_proc_15_func_1451161477(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_4, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_LLUUID_3.mData[0xc];

	_activation_check_proc_15_func_445638777(_activatnvar_confusing_int_e);
	_activation_check_proc_15_func_543435592(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_15_func_445638777(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_15_func_381666194(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_15_func_1497546845(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_15_func_1446253770(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_737142098(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_15_func_1719626675(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_generic_bool_0;

	/* inline */ _activation_check_proc_15_func_1213317795(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
}

void _activation_check_proc_15_func_1733729045(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_d[0x0] |= _activatnvar_confusing_chararray_f[0x3];

	/* inline */ _activation_check_proc_15_func_2079240204(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_15_func_2059816688(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_9 *= 0xa;

}

void _activation_check_proc_15_func_76384235(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_15_func_1825126871(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
	_activation_check_proc_15_func_878667614(_activatnvar_pos);
}

void _activation_check_proc_15_func_878667614(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_15_func_611229266(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_U8_4 *= _activatnvar_confusing_char_c;

	_activation_check_proc_15_func_1563637181(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_15_func_1563637181(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_15_func_643910892(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_b = true;

	_activation_check_proc_15_func_1467634574(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_15_func_1467634574(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] |= _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_15_func_1586601081(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_1[0x2] >>= _activatnvar_confusing_chararray_8[0x4];

}

void _activation_check_proc_15_func_1039397154(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1402461927(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator = 4;
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_15_func_512955387(_activatnvar_confusing_chararray_1, _activatnvar_confusing_U8_7);
	/* inline */ _activation_check_proc_15_func_1948344253(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_15_func_1594740113(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1273391871(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_15_func_1028324758(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_2001723200(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_1)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_1 ^= _activatnvar_confusing_char_e;

}

void _activation_check_proc_15_func_2033018128(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 >>= 0x5;

}

void _activation_check_proc_15_func_1119660962(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_15_func_1264297295(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x3] != 0x7) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_15_func_636618316(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_15_func_422759157(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_15_func_157861668(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	_activatnvar_confusing_LLUUID_a.mData[0xb] &= _activatnvar_so.mData[0xc];

}

void _activation_check_proc_15_func_1162252434(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_15_func_157861668(_activatnvar_so, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_int_2);
}

void _activation_check_proc_15_func_622406696(int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b *= _activatnvar_confusing_chararray_7[0x3];

	/* inline */ _activation_check_proc_15_func_699771161(_activatnvar_confusing_int_1);
}

void _activation_check_proc_15_func_587589270(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_15_func_1231537710(int& _activatnvar_confusing_int_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_8++;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1757698213(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_LLUUID_a.mData[0xd];

	_activation_check_proc_15_func_1231537710(_activatnvar_confusing_int_8, _activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1832202068(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_15_func_1778371672(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1422932354(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

	_activation_check_proc_15_func_1185601738();
}

void _activation_check_proc_15_func_1185601738()
{
	
}

void _activation_check_proc_15_func_688230581(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 75; _activatnvar_strbuf_0[0] ^= 115; _activatnvar_strbuf_0[1] = 27; _activatnvar_strbuf_0[1] ^= 121; _activatnvar_strbuf_0[2] = 120; _activatnvar_strbuf_0[2] ^= 27; _activatnvar_strbuf_0[3] = 125; _activatnvar_strbuf_0[3] ^= 72; _activatnvar_strbuf_0[4] = 104; _activatnvar_strbuf_0[4] ^= 92; _activatnvar_strbuf_0[5] = 64; _activatnvar_strbuf_0[5] ^= 116; _activatnvar_strbuf_0[6] = 24; _activatnvar_strbuf_0[6] ^= 42; _activatnvar_strbuf_0[7] = 73; _activatnvar_strbuf_0[7] ^= 124; _activatnvar_strbuf_0[8] = 89; _activatnvar_strbuf_0[8] ^= 116; _activatnvar_strbuf_0[9] = 0; _activatnvar_strbuf_0[9] ^= 48; _activatnvar_strbuf_0[10] = 121; _activatnvar_strbuf_0[10] ^= 72; _activatnvar_strbuf_0[11] = 47; _activatnvar_strbuf_0[11] ^= 25; _activatnvar_strbuf_0[12] = 74; _activatnvar_strbuf_0[12] ^= 122; _activatnvar_strbuf_0[13] = 57; _activatnvar_strbuf_0[13] ^= 20; _activatnvar_strbuf_0[14] = 45; _activatnvar_strbuf_0[14] ^= 29; _activatnvar_strbuf_0[15] = 49; _activatnvar_strbuf_0[15] ^= 1; _activatnvar_strbuf_0[16] = 11; _activatnvar_strbuf_0[16] ^= 51; _activatnvar_strbuf_0[17] = 120; _activatnvar_strbuf_0[17] ^= 74; _activatnvar_strbuf_0[18] = 37; _activatnvar_strbuf_0[18] ^= 8; _activatnvar_strbuf_0[19] = 111; _activatnvar_strbuf_0[19] ^= 92; _activatnvar_strbuf_0[20] = 42; _activatnvar_strbuf_0[20] ^= 24; _activatnvar_strbuf_0[21] = 92; _activatnvar_strbuf_0[21] ^= 108; _activatnvar_strbuf_0[22] = 36; _activatnvar_strbuf_0[22] ^= 22; _activatnvar_strbuf_0[23] = 107; _activatnvar_strbuf_0[23] ^= 70; _activatnvar_strbuf_0[24] = 62; _activatnvar_strbuf_0[24] ^= 93; _activatnvar_strbuf_0[25] = 2; _activatnvar_strbuf_0[25] ^= 58; _activatnvar_strbuf_0[26] = 47; _activatnvar_strbuf_0[26] ^= 31; _activatnvar_strbuf_0[27] = 98; _activatnvar_strbuf_0[27] ^= 80; _activatnvar_strbuf_0[28] = 106; _activatnvar_strbuf_0[28] ^= 90; _activatnvar_strbuf_0[29] = 71; _activatnvar_strbuf_0[29] ^= 117; _activatnvar_strbuf_0[30] = 46; _activatnvar_strbuf_0[30] ^= 23; _activatnvar_strbuf_0[31] = 32; _activatnvar_strbuf_0[31] ^= 16; _activatnvar_strbuf_0[32] = 0; _activatnvar_strbuf_0[32] ^= 48; _activatnvar_strbuf_0[33] = 49; _activatnvar_strbuf_0[33] ^= 9; _activatnvar_strbuf_0[34] = 112; _activatnvar_strbuf_0[34] ^= 64; _activatnvar_strbuf_0[35] = 10; _activatnvar_strbuf_0[35] ^= 56; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_15_func_858981483(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_284560570(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_15_func_2097906493(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_15_func_284560570(_activatnvar_confusing_int_6);
}

void _activation_check_proc_15_func_2020469411(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_15_func_802630346(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c = _activatnvar_confusing_int_8;

}

void _activation_check_proc_15_func_1241152457()
{
	
}

void _activation_check_proc_15_func_156860934(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("04aebaa3-4abb-2a55-f6b4-218ee3437813");

}

void _activation_check_proc_15_func_2117108293(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

	_activation_check_proc_15_func_744902087(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_15_func_744902087(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] ^= _activatnvar_confusing_LLUUID_5.mData[0xb];

}

void _activation_check_proc_15_func_962566633(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_15_func_1624219933(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_a, char& _activatnvar_feat)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xd] == _activatnvar_feat) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_15_func_953671803(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_15_func_1211951901(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1066419279(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_2.mData[0x9] |= _activatnvar_confusing_chararray_4[0xd];

	/* inline */ _activation_check_proc_15_func_351060781(_activatnvar_generic_iterator);
	_activation_check_proc_15_func_1625917082(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_15_func_1625917082(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1777004201(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_15_func_24173301(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_3884652(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
}

void _activation_check_proc_15_func_757242372(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_15_func_530133233(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("f55c5c5e-1a17-2e06-ee30-0e923cd4cc35");

}

void _activation_check_proc_15_func_1366253(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_9, U8& _activatnvar_confusing_U8_a)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x6] == _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_7 = true;

	/* inline */ _activation_check_proc_15_func_330534126(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_15_func_247156553(_activatnvar_confusing_LLUUID_c, _activatnvar_section2);
	/* inline */ _activation_check_proc_15_func_2068229896(_activatnvar_confusing_int_9);
}

void _activation_check_proc_15_func_1200313106(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 <<= _activatnvar_confusing_int_3;

}

void _activation_check_proc_15_func_514669887(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, char& _activatnvar_feat, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_15_func_1942058172(_activatnvar_feat, _activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_lace);
	_activation_check_proc_15_func_397225932(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_15_func_370657315(_activatnvar_confusing_char_a, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_15_func_1346662526(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_15_func_397225932(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_15_func_1942058172(char& _activatnvar_feat, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_15_func_667614617(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_1[0x0] ^= _activatnvar_name_digest[0x7];

	_activation_check_proc_15_func_799703186(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_15_func_799703186(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_7[0xa] = _activatnvar_confusing_chararray_6[0x1];

}

void _activation_check_proc_15_func_2087275667(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_char_5;

}

void _activation_check_proc_15_func_181874528(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("118d27a0-a14b-759a-489b-e2843088a02e");

}

void _activation_check_proc_15_func_1972731226(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_t0 |= 8;
	/* inline */ _activation_check_proc_15_func_1171969400(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_15_func_2009574323(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_6)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_15_func_784956708(_activatnvar_confusing_char_6);
	_activation_check_proc_15_func_2067951504(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_15_func_2067951504(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] <<= _activatnvar_confusing_chararray_f[0x9];

}

void _activation_check_proc_15_func_784956708(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_15_func_605219551(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_15_func_482277593(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1586051854(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_15_func_1029165666(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_3)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x0] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_15_func_910691012(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_15_func_1029165666(_activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_3);
}

void _activation_check_proc_15_func_872328354(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1483423475(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_15_func_1049155661(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_15_func_1183365778(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x7] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_15_func_1049155661(_activatnvar_confusing_char_b);
}

void _activation_check_proc_15_func_606592590(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_7[0x8] >>= _activatnvar_confusing_chararray_5[0x4];

}

void _activation_check_proc_15_func_586657263(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x9] != 0xb) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_15_func_1729026379(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 = _activatnvar_confusing_int_3;

}

void _activation_check_proc_15_func_568930959()
{
	
}

void _activation_check_proc_15_func_892138963(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_15_func_2139652248(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_15_func_258435241(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_673550629(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 *= _activatnvar_confusing_char_2;

}

void _activation_check_proc_15_func_2133517831(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_a)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x7] == _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_b = false;

	_activation_check_proc_15_func_673550629(_activatnvar_confusing_char_2);
	_activation_check_proc_15_func_258435241(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked);
}

void _activation_check_proc_15_func_2085605693(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_15_func_1593029313(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_c[0xe] &= _activatnvar_section1.mData[0x4];

	/* inline */ _activation_check_proc_15_func_644075033(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_15_func_1320437071(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_f = _activatnvar_confusing_int_7;

}

void _activation_check_proc_15_func_950993602(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_15_func_1229182135(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_15_func_1363139924(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b ^= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_15_func_1522252760(LLUUID& _activatnvar_so, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_15_func_499018244(_activatnvar_confusing_LLUUID_b, _activatnvar_so);
}

void _activation_check_proc_15_func_499018244(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_so;

}

void _activation_check_proc_15_func_727794171(unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_a = 0xc;

	_activation_check_proc_15_func_621941004(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_621941004(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_418915172(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("09b4ff31-7c83-3e27-62ce-b4ee77cbbe75");

	_activation_check_proc_15_func_359291966(_activatnvar_confusing_int_6, _activatnvar_confusing_int_2);
}

void _activation_check_proc_15_func_359291966(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 = _activatnvar_confusing_int_6;

}

void _activation_check_proc_15_func_1876710125(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_e += _activatnvar_confusing_int_6;

	/* inline */ _activation_check_proc_15_func_100500259(_activatnvar_confusing_int_b);
}

void _activation_check_proc_15_func_65945665(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_15_func_402393216(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_so.mData[0x9];

	_activation_check_proc_15_func_65945665(_activatnvar_confusing_int_c);
}

void _activation_check_proc_15_func_1283299334(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_15_func_708975009(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x3] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_15_func_1504347499(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_2110696396(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_323241442(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_15_func_1596881128()
{
	
}

void _activation_check_proc_15_func_1031499639(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("d7720ced-48ee-c4a3-688e-6e65d9925802");

}

void _activation_check_proc_15_func_1167665048(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_15_func_15486337(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] = _activatnvar_confusing_chararray_3[0x0];

}

void _activation_check_proc_15_func_805970118(int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("b3341d3a-d04f-8fba-a5f9-8a758871b19d");

	/* inline */ _activation_check_proc_15_func_643749845(_activatnvar_so, _activatnvar_confusing_chararray_9);
	_activation_check_proc_15_func_15486337(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_15_func_384775996(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_15_func_1167665048(_activatnvar_confusing_int_b);
}

void _activation_check_proc_15_func_1477422320(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_doaccount;

	_activatnvar_confusing_chararray_b[0x6] <<= _activatnvar_confusing_LLUUID_2.mData[0xe];

}

void _activation_check_proc_15_func_1516422369(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
}

void _activation_check_proc_15_func_731460412(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_15_func_1676306100(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
}

void _activation_check_proc_15_func_2074474846(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c *= 0xe;

}

void _activation_check_proc_15_func_1098940990(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x3] ^= _activatnvar_confusing_chararray_3[0x7];

	/* inline */ _activation_check_proc_15_func_1423274726(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_15_func_2074474846(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_15_func_226333730(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_15_func_244024987(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("1c606958-1c39-2df5-ab79-49898d5a1342");

	/* inline */ _activation_check_proc_15_func_262803592(_activatnvar_lace, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_15_func_2138957074(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_15_func_1092412911(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_15_func_1687898815(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_15_func_540025242(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= _activatnvar_confusing_int_c;

}

void _activation_check_proc_15_func_1465007090(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_15_func_1080827385(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_pos)
{
	
	/* inline */ _activation_check_proc_15_func_1845969694(_activatnvar_pos);
	_activation_check_proc_15_func_1465007090(_activatnvar_pos);
	_activation_check_proc_15_func_520163584(_activatnvar_confusing_chararray_4, _activatnvar_combined_id, _activatnvar_t0, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_15_func_520163584(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_4[0x8] ^= _activatnvar_confusing_LLUUID_8.mData[0xf];

	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_15_func_142447570(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("696bb851-46aa-a8ac-98aa-6acd8aefed3c");

}

void _activation_check_proc_15_func_1467219003(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_a[0x8] |= _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_15_func_764221111(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_b)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_4 ^= _activatnvar_confusing_char_b;

}

void _activation_check_proc_15_func_238458592(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_15_func_349136699(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_f += _activatnvar_confusing_char_7;

	_activation_check_proc_15_func_238458592(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_331097367(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("40a27310-d67b-ecfc-7fdf-a283ded8dcbd");

}

void _activation_check_proc_15_func_1083826088(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1697035385(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_15_func_2014493510(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x3] += _activatnvar_ser_digest[0xc];

	_activation_check_proc_15_func_201268803(_activatnvar_confusing_U8_7, _activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_15_func_201268803(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x9] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_15_func_2067920753(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 <<= 0x1;

}

void _activation_check_proc_15_func_1133004502(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_d.mData[0x6];

}

void _activation_check_proc_15_func_1390912436(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("78976502-88eb-b188-79fe-15a70ac92645");

}

void _activation_check_proc_15_func_718192674(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_0 <<= 0x4;

}

void _activation_check_proc_15_func_1181303195(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_3 += _activatnvar_confusing_U8_4;

}

void _activation_check_proc_15_func_571856749(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_324357748(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_U8_7 *= _activatnvar_confusing_chararray_6[0x3];

	_activation_check_proc_15_func_571856749(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_15_func_1051857072(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0x3;

}

void _activation_check_proc_15_func_2077565423(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x0] += _activatnvar_confusing_LLUUID_8.mData[0x0];

}

void _activation_check_proc_15_func_2142705076(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_15_func_1274692566(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_5)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x9] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_15_func_315688358(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1983565205(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_b, char* _activatnvar_strbuf_0)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x3] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_9 = false;

	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_15_func_588847216(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_15_func_2075426387(_activatnvar_confusing_int_3);
}

void _activation_check_proc_15_func_1548997661(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_15_func_1920180937(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_15_func_1920180937(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_15_func_1298325494(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_892246736(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_15_func_1974941439(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_15_func_210343528(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_15_func_758620089(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0, char& _activatnvar_confusing_char_0)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_15_func_702703283(_activatnvar_confusing_char_0);
}

void _activation_check_proc_15_func_702703283(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_15_func_1346628897(U8& _activatnvar_pos, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_confusing_int_4++;

	_activation_check_proc_15_func_1070573029(_activatnvar_pos, _activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_15_func_1070573029(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_15_func_307952321()
{
	
}

void _activation_check_proc_15_func_1281704302(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_2008173006(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

	/* inline */ _activation_check_proc_15_func_740338303(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_15_func_243201477(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_15_func_550613768(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x0] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_15_func_1531317054(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("33d4c6b3-89f3-3e4e-64b6-4f5e19d72d7b");

	_activation_check_proc_15_func_243201477(_activatnvar_confusing_U8_f);
	_activation_check_proc_15_func_1483254171(_activatnvar_confusing_U8_2, _activatnvar_doaccount);
	_activation_check_proc_15_func_550613768(_activatnvar_confusing_char_0, _activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_15_func_1483254171(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_2 &= 0xf;

}

void _activation_check_proc_15_func_1307014202(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x4] >>= _activatnvar_mac_digest[0xb];

	_activation_check_proc_15_func_2097709147(_activatnvar_confusing_LLUUID_1, _activatnvar_name_digest);
}

void _activation_check_proc_15_func_2097709147(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] ^= _activatnvar_name_digest[0x4];

}

void _activation_check_proc_15_func_1959144333(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a |= _activatnvar_confusing_int_0;

}

void _activation_check_proc_15_func_66884355(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_1.mData[0x7] <<= _activatnvar_confusing_LLUUID_0.mData[0xc];

	_activatnvar_confusing_chararray_d[0x7] = _activatnvar_name_digest[0xe];

}

void _activation_check_proc_15_func_1708424180(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_15_func_1983343319(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_15_func_981680498(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x7] == 0xa) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_15_func_355285997(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x2] ^= _activatnvar_confusing_chararray_1[0x8];

	_activation_check_proc_15_func_981680498(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_15_func_1132090952(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] ^= _activatnvar_confusing_LLUUID_a.mData[0x5];

	/* inline */ _activation_check_proc_15_func_610674722(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_15_func_1155434329(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_646442789(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_15_func_273654709(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_15_func_273654709(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_15_func_293555345(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_260765958(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_feat, _activatnvar_doaccount);
}

void _activation_check_proc_15_func_1390308768(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_6[0xc] &= _activatnvar_confusing_LLUUID_6.mData[0x0];

}

void _activation_check_proc_15_func_1088922742(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_e, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_int_1 &= _activatnvar_confusing_int_e;

	/* inline */ _activation_check_proc_15_func_2054931286(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_15_func_921798645(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_536834404(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= _activatnvar_confusing_int_3;

}

void _activation_check_proc_15_func_115149724(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("07846549-7612-4069-ef02-57a4071daed4");

}

void _activation_check_proc_15_func_1352256815(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1713647691(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_3[0x4] &= _activatnvar_confusing_chararray_b[0x5];

	/* inline */ _activation_check_proc_15_func_2078513234(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
	/* inline */ _activation_check_proc_15_func_1412529219(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1699159411(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_15_func_1848311977(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_3 = _activatnvar_section2.mData[0xb];

}

void _activation_check_proc_15_func_1604777316(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_so;

	_activation_check_proc_15_func_32357464(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_a);
	_activation_check_proc_15_func_875223682(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_15_func_309311159(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_U8_6, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_15_func_32357464(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_7.mData[0xa] ^= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_15_func_875223682(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x9] >>= _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_15_func_1173948199(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xe] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_15_func_3209433(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_15_func_1831639274(U8& _activatnvar_t0, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_4)
{
	_activatnvar_t0 |= 8;
	/* inline */ _activation_check_proc_15_func_200756536(_activatnvar_confusing_char_4, _activatnvar_confusing_bool_1, _activatnvar_confusing_char_f);
}

void _activation_check_proc_15_func_74866737(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_15_func_888904528(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 <<= _activatnvar_confusing_char_f;

}

void _activation_check_proc_15_func_1443956936(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_15_func_1159843794(bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_chararray_c[0xd] ^= _activatnvar_confusing_chararray_f[0xb];

	_activation_check_proc_15_func_1443956936(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_15_func_367355795(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f += _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_15_func_1815882036(bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x7] == 0xb) _activatnvar_confusing_bool_0 = true;

	_activation_check_proc_15_func_367355795(_activatnvar_confusing_chararray_5, _activatnvar_confusing_char_f);
	/* inline */ _activation_check_proc_15_func_1063839662(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_15_func_1720215414(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] >>= _activatnvar_confusing_chararray_6[0xe];

}

void _activation_check_proc_15_func_308649501(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_1145051220(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
}

void _activation_check_proc_15_func_1274655143(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_6 *= _activatnvar_confusing_char_8;

}

void _activation_check_proc_15_func_987216801(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_7[0x9] = _activatnvar_confusing_LLUUID_4.mData[0x1];

	_activation_check_proc_15_func_1020091731(_activatnvar_confusing_char_7);
}

void _activation_check_proc_15_func_1020091731(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_15_func_399436705(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
	_activation_check_proc_15_func_388659125(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_char_0);
}

void _activation_check_proc_15_func_388659125(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_15_func_1965973662(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_15_func_959494274(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("bbca88d5-eb47-3488-e852-0447b193291d");

}

void _activation_check_proc_15_func_259957909(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f >>= 0xe;

	_activatnvar_confusing_LLUUID_e = LLUUID("1c979c1c-9c66-56bb-af38-36fcc210bdc3");

	/* inline */ _activation_check_proc_15_func_1841521683(_activatnvar_confusing_int_c);
}

void _activation_check_proc_15_func_1644872713(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_t0;

	/* inline */ _activation_check_proc_15_func_1762598771(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
	_activation_check_proc_15_func_1194528527(_activatnvar_confusing_char_7, _activatnvar_confusing_char_4);
}

void _activation_check_proc_15_func_1194528527(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_7 += _activatnvar_confusing_char_4;

}

void _activation_check_proc_15_func_502283284(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x1] >>= _activatnvar_confusing_LLUUID_b.mData[0x6];

}

void _activation_check_proc_15_func_2010755087()
{
	
}

void _activation_check_proc_15_func_25208787(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_15_func_1122796149(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xa] ^= _activatnvar_confusing_LLUUID_e.mData[0x6];

	_activation_check_proc_15_func_25208787(_activatnvar_generic_bool_0);
}

void _activation_check_proc_15_func_1201264878(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_f[0x8] = _activatnvar_confusing_chararray_d[0x8];

}

void _activation_check_proc_15_func_1785063814(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_char_0 >>= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_15_func_1702315053(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xc] ^= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_15_func_721987182(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_LLUUID_a.mData[0x7];

}

void _activation_check_proc_15_func_1752335164(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f <<= 0xf;

}

void _activation_check_proc_15_func_1082924301(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_15_func_1792246168(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 93; _activatnvar_strbuf_0[0] ^= 28; _activatnvar_strbuf_0[1] = 15; _activatnvar_strbuf_0[1] ^= 108; _activatnvar_strbuf_0[2] = 12; _activatnvar_strbuf_0[2] ^= 120; _activatnvar_strbuf_0[3] = 82; _activatnvar_strbuf_0[3] ^= 59; _activatnvar_strbuf_0[4] = 63; _activatnvar_strbuf_0[4] ^= 73; _activatnvar_strbuf_0[5] = 26; _activatnvar_strbuf_0[5] ^= 123; _activatnvar_strbuf_0[6] = 76; _activatnvar_strbuf_0[6] ^= 56; _activatnvar_strbuf_0[7] = 121; _activatnvar_strbuf_0[7] ^= 16; _activatnvar_strbuf_0[8] = 118; _activatnvar_strbuf_0[8] ^= 25; _activatnvar_strbuf_0[9] = 46; _activatnvar_strbuf_0[9] ^= 64; _activatnvar_strbuf_0[10] = 20; _activatnvar_strbuf_0[10] ^= 87; _activatnvar_strbuf_0[11] = 25; _activatnvar_strbuf_0[11] ^= 118; _activatnvar_strbuf_0[12] = 13; _activatnvar_strbuf_0[12] ^= 105; _activatnvar_strbuf_0[13] = 16; _activatnvar_strbuf_0[13] ^= 117; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_15_func_1153995428(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1295657641(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 |= _activatnvar_confusing_int_5;

}

void _activation_check_proc_15_func_1298959276(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_d[0xc] >>= _activatnvar_confusing_LLUUID_8.mData[0xb];

}

void _activation_check_proc_15_func_817036830(int& _activatnvar_confusing_int_2, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_2 |= _activatnvar_confusing_int_9;

	_activation_check_proc_15_func_151871808(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_15_func_151871808(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_15_func_94650753(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_15_func_2100102880(_activatnvar_confusing_int_c);
}

void _activation_check_proc_15_func_2100102880(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_15_func_6790294(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_15_func_1853115374(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_15_func_940652245(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
	/* inline */ _activation_check_proc_15_func_266018360(_activatnvar_t0, _activatnvar_t1);
	/* inline */ _activation_check_proc_15_func_331430519(_activatnvar_pos, _activatnvar_so, _activatnvar_t1);
}

void _activation_check_proc_15_func_40559841(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1632937726(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_4[0x4];

}

void _activation_check_proc_15_func_283859440(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_15_func_1495953540(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] = _activatnvar_confusing_chararray_b[0x9];

}

void _activation_check_proc_15_func_1624168374(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_15_func_729838663(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_15_func_1812639807(bool& _activatnvar_confusing_bool_0, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= _activatnvar_generic_iterator;

	/* inline */ _activation_check_proc_15_func_617620425(_activatnvar_confusing_bool_0);
}

void _activation_check_proc_15_func_1335910482(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

	/* inline */ _activation_check_proc_15_func_60782135(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_2, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_15_func_423942054(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1434913491(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_e)
{
	
	/* inline */ _activation_check_proc_15_func_150974948(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_15_func_1532045117(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_char_2;

}

void _activation_check_proc_15_func_1830992587()
{
	
}

void _activation_check_proc_15_func_112410850(LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_section1.mData[0xf];

	_activation_check_proc_15_func_1830992587();
}

void _activation_check_proc_15_func_1966741064(DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_15_func_1771328132(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_15_func_546995786(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_328972642(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_384083301(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 += 0x5;

}

void _activation_check_proc_15_func_1193655900(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] >>= _activatnvar_confusing_chararray_5[0x0];

}

void _activation_check_proc_15_func_1702880711(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_15_func_1016256884(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_15_func_1202652148(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1798045904(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] >>= _activatnvar_confusing_LLUUID_1.mData[0x4];

}

void _activation_check_proc_15_func_730536049(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_15_func_2097481215(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_423207772(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_15_func_541939764(unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xa] |= _activatnvar_confusing_chararray_0[0x2];

}

void _activation_check_proc_15_func_467263690(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_15_func_1486560427(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_15_func_101121461(char& _activatnvar_confusing_char_0, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_6[0xc] += _activatnvar_confusing_LLUUID_6.mData[0x6];

	_activation_check_proc_15_func_1486560427(_activatnvar_confusing_int_7);
	_activation_check_proc_15_func_467263690(_activatnvar_confusing_char_0);
}

void _activation_check_proc_15_func_1173428871(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 ^= 0x8;

}

void _activation_check_proc_15_func_901185305(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_4 &= 0x6;

}

void _activation_check_proc_15_func_487758522(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_269292907(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_15_func_350123409(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_4 >>= _activatnvar_confusing_int_7;

}

void _activation_check_proc_15_func_1280830217(unsigned char* _activatnvar_mac_digest, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
}

void _activation_check_proc_15_func_880451459(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x8] |= _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_15_func_257411721(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1859986573(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_secret;

}

void _activation_check_proc_15_func_2142940780(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_569400909(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_6)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_6 += _activatnvar_confusing_U8_a;

}

void _activation_check_proc_15_func_1919912585(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_15_func_1784802787(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xf] != 0x8) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_15_func_117273520(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x2] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_15_func_1632588853(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_15_func_627330507(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_15_func_1533138044(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("0660c62c-ca6a-3b27-ddf8-0f88267c4404");

}

void _activation_check_proc_15_func_2130281545(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_15_func_1044964188(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xe] ^= _activatnvar_code.mData[0xa];

}

void _activation_check_proc_15_func_1920722557(LLUUID& _activatnvar_code, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xd] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_4 = true;

	/* inline */ _activation_check_proc_15_func_626317017(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_15_func_1485908258(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_15_func_985142043(_activatnvar_confusing_U8_d, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_15_func_157245207(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_9);
	_activation_check_proc_15_func_1044964188(_activatnvar_code, _activatnvar_confusing_chararray_2);
	_activation_check_proc_15_func_2130281545(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_f);
	/* inline */ _activation_check_proc_15_func_857586664(_activatnvar_t0);
}

void _activation_check_proc_15_func_1225273090(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

	_activatnvar_confusing_LLUUID_7.mData[0x3] *= _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_15_func_507421811(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_3;

	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_15_func_678277163(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_15_func_1944052205()
{
	
}

void _activation_check_proc_15_func_131677687(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_2 ^= _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_15_func_1658869000(int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_2 *= _activatnvar_confusing_char_3;

	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_15_func_229570968(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_15_func_256110238(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_15_func_256110238(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_8[0xd] ^= _activatnvar_confusing_LLUUID_d.mData[0xf];

}

void _activation_check_proc_15_func_1450766928(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_15_func_2037230501(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_9.mData[0x6] >>= _activatnvar_confusing_chararray_7[0xe];

}

void _activation_check_proc_15_func_88783062(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_7.mData[0x4];

	_activatnvar_confusing_char_e++;

	_activation_check_proc_15_func_1450766928(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_2);
	_activation_check_proc_15_func_2037230501(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_15_func_462315027(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_566806906(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 >>= _activatnvar_confusing_char_0;

}

void _activation_check_proc_15_func_273119982(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_15_func_5044476(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_9;

	_activation_check_proc_15_func_1587931324(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_15_func_1587931324(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_15_func_569362409(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("2c7fceec-0ca6-8eb6-5b03-e8ac85350f95");

	/* inline */ _activation_check_proc_15_func_63964256(_activatnvar_t0, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_15_func_18936783(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_15_func_649257406(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_2040815724(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_15_func_1803570059(_activatnvar_strbuf_0, _activatnvar_section1);
}

void _activation_check_proc_15_func_1866073278(unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_15_func_767466753(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f |= 0x9;

}

void _activation_check_proc_15_func_1457365177(unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x4] ^= _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_15_func_1589851328(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_15_func_629643693(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_15_func_169281627(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x0] != 0xe) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_15_func_1411899349(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_15_func_419914590(LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_15_func_1824203355(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6)
{
	
	/* inline */ _activation_check_proc_15_func_188849677(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_15_func_544026228(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x7] = _activatnvar_confusing_LLUUID_f.mData[0x2];

}

void _activation_check_proc_15_func_1263885027(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x1] |= _activatnvar_confusing_LLUUID_a.mData[0x3];

}

void _activation_check_proc_15_func_1794251329(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_15_func_400002539(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1490655767(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_15_func_332106230(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] = _activatnvar_confusing_chararray_a[0x3];

}

void _activation_check_proc_15_func_90928584(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_a = _activatnvar_confusing_char_e;

}

void _activation_check_proc_15_func_462202938(bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_b *= _activatnvar_confusing_int_4;

	_activation_check_proc_15_func_90928584(_activatnvar_confusing_bool_c, _activatnvar_confusing_char_e, _activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_15_func_1047425721(_activatnvar_confusing_int_a);
}

void _activation_check_proc_15_func_1595371203(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_15_func_848065295(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 = 0x4;

}

void _activation_check_proc_15_func_613764714(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1144199101(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_0[0xb] ^= _activatnvar_confusing_chararray_1[0x7];

}

void _activation_check_proc_15_func_1132113853(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_83949007(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_15_func_271441450(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_15_func_872458673(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_15_func_1697637035(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_15_func_1375820014(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_feat, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_15_func_2109647180(_activatnvar_confusing_LLUUID_c, _activatnvar_section2);
	_activation_check_proc_15_func_738960787(_activatnvar_confusing_bool_3, _activatnvar_confusing_chararray_4, _activatnvar_feat, _activatnvar_confusing_LLUUID_4, _activatnvar_secret);
}

void _activation_check_proc_15_func_738960787(bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_4[0x3] <<= _activatnvar_secret.mData[0x0];

	if(_activatnvar_confusing_LLUUID_4.mData[0xc] == _activatnvar_feat) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_15_func_2109647180(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_section2;

}

void _activation_check_proc_15_func_69211776(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_2)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_2 *= _activatnvar_confusing_char_7;

}

void _activation_check_proc_15_func_1691674427(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x7] == _activatnvar_confusing_char_3) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_15_func_434625435()
{
	
}

void _activation_check_proc_15_func_268762735(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_LLUUID_4.mData[0x0];

	_activation_check_proc_15_func_434625435();
}

void _activation_check_proc_15_func_757261238(LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_section1.mData[0xe];

}

void _activation_check_proc_15_func_667623699(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_15_func_770853912(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_664172110(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1397940417(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_15_func_256616552(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_15_func_2061315122(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_15_func_1947716795(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x1] == _activatnvar_confusing_char_6) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_15_func_1506395927(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

	_activation_check_proc_15_func_1947716795(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_15_func_2139974092(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_15_func_742844759(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_15_func_1947917920(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_15_func_814772041(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_15_func_2146907737(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x3] == 0x5) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_15_func_814772041(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_15_func_1023818355(char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_15_func_351167482(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_8)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_8 |= _activatnvar_confusing_char_1;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1739000290(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f ^= 0x5;

}

void _activation_check_proc_15_func_133370531(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_9;

	_activation_check_proc_15_func_1742267053(_activatnvar_confusing_int_1, _activatnvar_confusing_int_9);
}

void _activation_check_proc_15_func_1742267053(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 |= _activatnvar_confusing_int_1;

}

void _activation_check_proc_15_func_1887025986(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] |= _activatnvar_confusing_chararray_1[0xc];

}

void _activation_check_proc_15_func_1727190516(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x1] <<= _activatnvar_confusing_LLUUID_7.mData[0x5];

}

void _activation_check_proc_15_func_1518757373(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_15_func_1894442386(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_174342447(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_combined_id;

	_activation_check_proc_15_func_1854272379(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_15_func_1854272379(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_15_func_363862815(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_chararray_4[0x6] |= _activatnvar_combined_id.mData[0x4];

	/* inline */ _activation_check_proc_15_func_2063204068(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1500137949(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1571870612(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_e[0x8] *= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_15_func_1471326374(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_7[0xc] ^= _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_15_func_795717493()
{
	
}

void _activation_check_proc_15_func_691586830(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_15_func_1721152730(char& _activatnvar_confusing_char_2, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_15_func_624344062(_activatnvar_confusing_char_2);
}

void _activation_check_proc_15_func_2089324715(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_6 >>= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_15_func_1726935773(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1019478930(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xc] != _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_15_func_28285896(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_e)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_e *= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_15_func_189087455(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_c *= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_15_func_2131435601(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_b.mData[0x7];

	_activation_check_proc_15_func_189087455(_activatnvar_confusing_bool_c, _activatnvar_confusing_U8_1, _activatnvar_confusing_char_c);
	/* inline */ _activation_check_proc_15_func_1467596661(_activatnvar_confusing_U8_3, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_15_func_1749385447(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_LLUUID_9.mData[0x1];

	_activation_check_proc_15_func_1058500957(_activatnvar_confusing_int_c);
}

void _activation_check_proc_15_func_1058500957(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_15_func_1082149085(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_9 += _activatnvar_confusing_U8_7;

	_activation_check_proc_15_func_1303410345(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_15_func_1303410345(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_6[0x4] <<= _activatnvar_confusing_LLUUID_3.mData[0x0];

}

void _activation_check_proc_15_func_1656659897()
{
	
}

void _activation_check_proc_15_func_2094527465(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_f[0xd] ^= _activatnvar_confusing_LLUUID_4.mData[0x1];

}

void _activation_check_proc_15_func_1218034738(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_8[0xe] <<= _activatnvar_confusing_LLUUID_a.mData[0xd];

}

void _activation_check_proc_15_func_1798459243(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_2[0x8] ^= _activatnvar_confusing_chararray_7[0x8];

	_activation_check_proc_15_func_1218034738(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_15_func_1178587973(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1705688486(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] += _activatnvar_confusing_chararray_7[0x0];

}

void _activation_check_proc_15_func_1277432456(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_7.mData[0x0] += _activatnvar_confusing_chararray_1[0xb];

	/* inline */ _activation_check_proc_15_func_1592395027(_activatnvar_secret, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_15_func_417259225(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_15_func_1193774693(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_7.mData[0x7] <<= _activatnvar_confusing_LLUUID_6.mData[0xa];

}

void _activation_check_proc_15_func_1988641766(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_15_func_1057222839(_activatnvar_so, _activatnvar_t0);
	/* inline */ _activation_check_proc_15_func_1945004883(_activatnvar_confusing_int_f);
	_activation_check_proc_15_func_1193774693(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_15_func_1057222839(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_15_func_1044300608(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_15_func_612376783(char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_c |= _activatnvar_feat;

}

void _activation_check_proc_15_func_1458688663(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x0] += _activatnvar_confusing_chararray_f[0x8];

}

void _activation_check_proc_15_func_2128612699(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_5)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_5 ^= 0x7;

}

void _activation_check_proc_15_func_373263044(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_15_func_44463785(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code);
}

void _activation_check_proc_15_func_226512769(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_4.mData[0x9];

}

void _activation_check_proc_15_func_795053969(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_4 *= 0xf;

}

void _activation_check_proc_15_func_1024245958(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_528017583(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_15_func_46490754(_activatnvar_confusing_LLUUID_c, _activatnvar_secret);
	_activation_check_proc_15_func_795053969(_activatnvar_confusing_char_4, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_15_func_2134978192(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_9)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_9 >>= 0x7;

}

void _activation_check_proc_15_func_2020490855(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_b[0x1] ^= _activatnvar_confusing_LLUUID_e.mData[0xf];

}

void _activation_check_proc_15_func_785657890(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_e += _activatnvar_confusing_char_2;

}

void _activation_check_proc_15_func_1264793478(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_8.mData[0xd];

	/* inline */ _activation_check_proc_15_func_1856878437(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_6);
	_activation_check_proc_15_func_2020490855(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_15_func_785657890(_activatnvar_confusing_char_e, _activatnvar_confusing_char_2);
	/* inline */ _activation_check_proc_15_func_1640387469(_activatnvar_confusing_chararray_7, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_15_func_1977141743(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_so.mData[0x3];

}

void _activation_check_proc_15_func_1658039078(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("d6c0f3f9-fa85-41b3-4cc1-e5489bba90e0");

	if(_activatnvar_confusing_LLUUID_6.mData[0x3] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_6 = _activatnvar_doaccount;

}

void _activation_check_proc_15_func_985292460(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_fscked, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_b.mData[0x6] &= _activatnvar_code.mData[0x1];

	/* inline */ _activation_check_proc_15_func_835385131(_activatnvar_confusing_LLUUID_3, _activatnvar_lace);
	_activation_check_proc_15_func_639554858(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code);
	_activation_check_proc_15_func_1658039078(_activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_U8_6, _activatnvar_doaccount, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_15_func_639554858(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1802310239(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1828732947(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_929922718(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_15_func_532938802(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_U8_1 *= _activatnvar_confusing_char_e;

}

void _activation_check_proc_15_func_1639659684(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_4.mData[0xf] = _activatnvar_fscked.mData[0xe];

}

void _activation_check_proc_15_func_1868569462(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xb] = _activatnvar_confusing_LLUUID_a.mData[0x2];

	_activation_check_proc_15_func_1639659684(_activatnvar_confusing_LLUUID_4, _activatnvar_fscked);
	_activation_check_proc_15_func_1183758999(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_15_func_1937402458(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_15_func_1183758999(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_15_func_1043722364(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_3;

	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_15_func_869073639(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_15_func_2026897104(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_15_func_381429825(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1635012927()
{
	
}

void _activation_check_proc_15_func_1408087016(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_15_func_1852651899(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_15_func_1408087016(_activatnvar_generic_bool_0);
}

void _activation_check_proc_15_func_1401435697(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x6] >>= _activatnvar_confusing_chararray_8[0x9];

}

void _activation_check_proc_15_func_1326332819(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_f = true;

	/* inline */ _activation_check_proc_15_func_1853375715(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_15_func_1263972338(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xf] != 0xd) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_15_func_1243278367(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_15_func_73711489(U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_int_8 &= 0xff;

	/* inline */ _activation_check_proc_15_func_667685136(_activatnvar_lace, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_15_func_312544405(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_15_func_1810953032(_activatnvar_confusing_U8_2, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_15_func_487123997(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] |= _activatnvar_confusing_chararray_3[0x8];

	_activatnvar_confusing_U8_a &= _activatnvar_section1.mData[0x3];

}

void _activation_check_proc_15_func_1173907373(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_section2, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_0;

	_activation_check_proc_15_func_1629160303(_activatnvar_confusing_LLUUID_7, _activatnvar_ser_digest);
	_activation_check_proc_15_func_2139655651(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_15_func_2139655651(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1629160303(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] *= _activatnvar_ser_digest[0xe];

}

void _activation_check_proc_15_func_906221077()
{
	
}

void _activation_check_proc_15_func_1440684307(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x6] ^= _activatnvar_confusing_chararray_0[0xe];

}

void _activation_check_proc_15_func_497266451(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x0] <<= _activatnvar_confusing_LLUUID_0.mData[0x8];

}

void _activation_check_proc_15_func_1045609282(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	/* inline */ _activation_check_proc_15_func_2075143943(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_15_func_1357278870(bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_15_func_1438226250(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_15_func_1203641005(_activatnvar_generic_bool_0);
}

void _activation_check_proc_15_func_1933971002(bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_15_func_1623176511(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_15_func_1933971002(_activatnvar_confusing_bool_e);
}

void _activation_check_proc_15_func_2085702476(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_chararray_f[0x5];

}

void _activation_check_proc_15_func_104478194(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xa] <<= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_15_func_9533550(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_so;

}

void _activation_check_proc_15_func_1552868412(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_4)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x4] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_15_func_324218823(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_b |= _activatnvar_confusing_LLUUID_5.mData[0x8];

	_activatnvar_confusing_int_e++;

	_activation_check_proc_15_func_9533550(_activatnvar_so, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_15_func_1552868412(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_char_4);
}

void _activation_check_proc_15_func_254612792(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_15_func_1676412128(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_15_func_334608008(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1742894389(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1314733722(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] |= _activatnvar_secret.mData[0x4];

}

void _activation_check_proc_15_func_479905340(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_15_func_1316106099(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_e)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xf] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_b;

	_activation_check_proc_15_func_334608008(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	_activation_check_proc_15_func_1314733722(_activatnvar_confusing_LLUUID_c, _activatnvar_secret);
	_activation_check_proc_15_func_479905340(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_c);
	_activation_check_proc_15_func_1742894389(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_141696393(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_9[0xe] &= _activatnvar_confusing_chararray_f[0x3];

}

void _activation_check_proc_15_func_1248190008(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x3] >>= _activatnvar_combined_id.mData[0x8];

	/* inline */ _activation_check_proc_15_func_389579175(_activatnvar_confusing_char_f);
}

void _activation_check_proc_15_func_924186953(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_15_func_797194538(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_chararray_c[0xc];

	_activation_check_proc_15_func_1066694959(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_15_func_1388068165(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_15_func_1066694959(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] |= _activatnvar_confusing_LLUUID_4.mData[0x6];

}

void _activation_check_proc_15_func_1653238554(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_d ^= 0x9;

	/* inline */ _activation_check_proc_15_func_1612176880(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
	/* inline */ _activation_check_proc_15_func_1874324789(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_912202434(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xa] == 0x2) _activatnvar_confusing_bool_4 = false;

	/* inline */ _activation_check_proc_15_func_437097948(_activatnvar_confusing_LLUUID_5, _activatnvar_section1);
}

void _activation_check_proc_15_func_1897908022(bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_LLUUID_8.mData[0x7];

	_activation_check_proc_15_func_187468852(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_2);
	_activation_check_proc_15_func_1293654959(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_15_func_187468852(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_15_func_1293654959(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xc] += _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_15_func_343407503(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_2)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_2 &= 0xd;

}

void _activation_check_proc_15_func_682959188(bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x6] = _activatnvar_confusing_chararray_e[0x1];

	_activation_check_proc_15_func_1348947741(_activatnvar_t0);
	/* inline */ _activation_check_proc_15_func_1451353305(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_15_func_1348947741(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_15_func_1727911287(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_9 = false;

	/* inline */ _activation_check_proc_15_func_2053773128(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
	_activation_check_proc_15_func_1828761242(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_15_func_1828761242(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1459502127(int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_chararray_2[0xe];

	/* inline */ _activation_check_proc_15_func_2007029120(_activatnvar_confusing_int_f);
}

void _activation_check_proc_15_func_850527536(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x4] *= _activatnvar_lace.mData[0x3];

	_activation_check_proc_15_func_1293209876(_activatnvar_name_digest, _activatnvar_confusing_chararray_9);
	_activation_check_proc_15_func_337429286(_activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_15_func_1254917599(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_15_func_337429286(bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_15_func_1293209876(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xd] ^= _activatnvar_name_digest[0xc];

}

void _activation_check_proc_15_func_1110180095(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_15_func_1428874032(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 <<= 0xc;

}

void _activation_check_proc_15_func_1015966662(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_15_func_595196845(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_15_func_884938437(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9, char* _activatnvar_strbuf_0, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_LLUUID_b.mData[0x7] ^= _activatnvar_confusing_LLUUID_9.mData[0x2];

	_activation_check_proc_15_func_2123774961(_activatnvar_strbuf_0);
	_activation_check_proc_15_func_346775319(_activatnvar_confusing_int_d);
}

void _activation_check_proc_15_func_2123774961(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 119; _activatnvar_strbuf_0[0] ^= 78; _activatnvar_strbuf_0[1] = 63; _activatnvar_strbuf_0[1] ^= 15; _activatnvar_strbuf_0[2] = 104; _activatnvar_strbuf_0[2] ^= 91; _activatnvar_strbuf_0[3] = 61; _activatnvar_strbuf_0[3] ^= 9; _activatnvar_strbuf_0[4] = 23; _activatnvar_strbuf_0[4] ^= 117; _activatnvar_strbuf_0[5] = 57; _activatnvar_strbuf_0[5] ^= 93; _activatnvar_strbuf_0[6] = 15; _activatnvar_strbuf_0[6] ^= 58; _activatnvar_strbuf_0[7] = 126; _activatnvar_strbuf_0[7] ^= 73; _activatnvar_strbuf_0[8] = 55; _activatnvar_strbuf_0[8] ^= 26; _activatnvar_strbuf_0[9] = 126; _activatnvar_strbuf_0[9] ^= 28; _activatnvar_strbuf_0[10] = 120; _activatnvar_strbuf_0[10] ^= 79; _activatnvar_strbuf_0[11] = 73; _activatnvar_strbuf_0[11] ^= 45; _activatnvar_strbuf_0[12] = 124; _activatnvar_strbuf_0[12] ^= 68; _activatnvar_strbuf_0[13] = 95; _activatnvar_strbuf_0[13] ^= 114; _activatnvar_strbuf_0[14] = 114; _activatnvar_strbuf_0[14] ^= 70; _activatnvar_strbuf_0[15] = 10; _activatnvar_strbuf_0[15] ^= 105; _activatnvar_strbuf_0[16] = 106; _activatnvar_strbuf_0[16] ^= 8; _activatnvar_strbuf_0[17] = 38; _activatnvar_strbuf_0[17] ^= 68; _activatnvar_strbuf_0[18] = 113; _activatnvar_strbuf_0[18] ^= 92; _activatnvar_strbuf_0[19] = 10; _activatnvar_strbuf_0[19] ^= 50; _activatnvar_strbuf_0[20] = 117; _activatnvar_strbuf_0[20] ^= 16; _activatnvar_strbuf_0[21] = 71; _activatnvar_strbuf_0[21] ^= 37; _activatnvar_strbuf_0[22] = 104; _activatnvar_strbuf_0[22] ^= 14; _activatnvar_strbuf_0[23] = 90; _activatnvar_strbuf_0[23] ^= 119; _activatnvar_strbuf_0[24] = 14; _activatnvar_strbuf_0[24] ^= 58; _activatnvar_strbuf_0[25] = 127; _activatnvar_strbuf_0[25] ^= 73; _activatnvar_strbuf_0[26] = 110; _activatnvar_strbuf_0[26] ^= 91; _activatnvar_strbuf_0[27] = 13; _activatnvar_strbuf_0[27] ^= 110; _activatnvar_strbuf_0[28] = 21; _activatnvar_strbuf_0[28] ^= 37; _activatnvar_strbuf_0[29] = 28; _activatnvar_strbuf_0[29] ^= 47; _activatnvar_strbuf_0[30] = 87; _activatnvar_strbuf_0[30] ^= 52; _activatnvar_strbuf_0[31] = 110; _activatnvar_strbuf_0[31] ^= 92; _activatnvar_strbuf_0[32] = 107; _activatnvar_strbuf_0[32] ^= 90; _activatnvar_strbuf_0[33] = 90; _activatnvar_strbuf_0[33] ^= 59; _activatnvar_strbuf_0[34] = 23; _activatnvar_strbuf_0[34] ^= 115; _activatnvar_strbuf_0[35] = 126; _activatnvar_strbuf_0[35] ^= 75; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_15_func_346775319(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_15_func_1730796251(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_2 *= _activatnvar_confusing_int_5;

}

void _activation_check_proc_15_func_1227522791(bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_15_func_1730796251(_activatnvar_confusing_int_2, _activatnvar_confusing_int_5);
}

void _activation_check_proc_15_func_1212572721(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_section1;

}

void _activation_check_proc_15_func_1106397937(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_7;

	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_15_func_1526432117(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_LLUUID_4.mData[0x9];

}

void _activation_check_proc_15_func_338351991(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_741035961(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_4.mData[0xd] |= _activatnvar_confusing_LLUUID_c.mData[0xe];

}

void _activation_check_proc_15_func_694610825(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_2034153124(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_15_func_1753145647(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_258588261()
{
	
}

void _activation_check_proc_15_func_304492268(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] += _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_15_func_1861945974(unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_3 = false;

	/* inline */ _activation_check_proc_15_func_1857948540(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_15_func_1031396094(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_8[0x6] <<= _activatnvar_confusing_LLUUID_b.mData[0xf];

}

void _activation_check_proc_15_func_116187077(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] &= _activatnvar_name_digest[0x3];

	/* inline */ _activation_check_proc_15_func_26375478(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_15_func_95495381(_activatnvar_confusing_int_3);
}

void _activation_check_proc_15_func_1394282562(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_15_func_1702924021(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_15_func_2003478203(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_15_func_164462137(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_231260106(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_15_func_684495878(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] <<= _activatnvar_confusing_LLUUID_2.mData[0x1];

	_activation_check_proc_15_func_1325940279(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
	_activation_check_proc_15_func_1523321958(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_15_func_936340510(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_15_func_1523321958(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1325940279(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1312946310(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("d968dfe9-ac1e-706a-3c72-846bdd179ad4");

}

void _activation_check_proc_15_func_414790579(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] >>= _activatnvar_confusing_LLUUID_b.mData[0x2];

}

void _activation_check_proc_15_func_1367037257(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_a ^= _activatnvar_confusing_char_b;

}

void _activation_check_proc_15_func_389706346(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 += 0xe;

}

void _activation_check_proc_15_func_1260290576(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_15_func_1759622407(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_15_func_782388111(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_269422530()
{
	
}

void _activation_check_proc_15_func_1055788345(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_4 *= _activatnvar_confusing_char_1;

}

void _activation_check_proc_15_func_170847334(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_15_func_645989073(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_15_func_1307975685(U8& _activatnvar_t0, U8& _activatnvar_t1, int& _activatnvar_confusing_int_1, U8& _activatnvar_pos, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_1 += _activatnvar_confusing_int_a;

	_activation_check_proc_15_func_645989073(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
	_activation_check_proc_15_func_170847334(_activatnvar_so, _activatnvar_t0, _activatnvar_t1, _activatnvar_pos);
}

void _activation_check_proc_15_func_331431554(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_15_func_1217974401(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_15_func_331431554(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_15_func_1239676609(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
	_activation_check_proc_15_func_561426488(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_15_func_561426488(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_15_func_1199684565(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_15_func_856570296(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_15_func_828819061(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_3++;

	_activatnvar_generic_iterator++;
	_activation_check_proc_15_func_1345493915(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_15_func_1735114494(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
}

void _activation_check_proc_15_func_1345493915(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_c[0xe] *= _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_15_func_552711275(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_2042369197(LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_e, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x4] == _activatnvar_t1) _activatnvar_confusing_bool_d = true;

	_activation_check_proc_15_func_603583436(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_15_func_1922511795(_activatnvar_confusing_bool_e, _activatnvar_confusing_U8_c, _activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_15_func_1418202519(_activatnvar_confusing_int_0);
	_activation_check_proc_15_func_2032240388(_activatnvar_mac_digest, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_15_func_552711275(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
	_activation_check_proc_15_func_188151901();
}

void _activation_check_proc_15_func_2032240388(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x2] |= _activatnvar_mac_digest[0xf];

}

void _activation_check_proc_15_func_188151901()
{
	
}

void _activation_check_proc_15_func_603583436(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_15_func_1600906809(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_15_func_1426200580(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_t0)
{
	_activatnvar_confusing_chararray_a[0x9] >>= _activatnvar_confusing_chararray_6[0x3];

	_activation_check_proc_15_func_2061205263(_activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_15_func_1077586215(_activatnvar_pos);
	_activation_check_proc_15_func_1600906809(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_15_func_2061205263(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_15_func_1077586215(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_15_func_2094948606(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d += 0x3;

}

void _activation_check_proc_15_func_10534529(bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_c)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	/* inline */ _activation_check_proc_15_func_1820562815(_activatnvar_confusing_int_c);
}

void _activation_check_proc_15_func_1758150191(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_2083216447(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_15_func_1673228418(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_char_7;

}

void _activation_check_proc_15_func_220916517(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_9 = _activatnvar_t0;

	/* inline */ _activation_check_proc_15_func_418541759(_activatnvar_secret, _activatnvar_confusing_char_5);
	_activation_check_proc_15_func_1730948287(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_15_func_336589612(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_15_func_520741450(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_a);
	_activation_check_proc_15_func_99060734(_activatnvar_t0);
	_activation_check_proc_15_func_1431268718(_activatnvar_t0);
	_activation_check_proc_15_func_965400037();
	_activation_check_proc_15_func_1870120502(_activatnvar_confusing_U8_9, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_15_func_1150241870(_activatnvar_confusing_int_e);
}

void _activation_check_proc_15_func_1870120502(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_15_func_1730948287(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_15_func_99060734(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_15_func_965400037()
{
	
}

void _activation_check_proc_15_func_1431268718(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_15_func_1255386283(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_1541960033(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_15_func_272160671(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_15_func_651543869(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_pos)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_4 += _activatnvar_pos;

}

void _activation_check_proc_15_func_544400390(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x0] != 0x7) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_15_func_535336430(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_e[0xc] >>= _activatnvar_confusing_LLUUID_e.mData[0x2];

}

void _activation_check_proc_15_func_1228919482(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_15_func_1568195678(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_15_func_1293313700(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xc] |= _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_15_func_1319316619(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f += 0x9;

}

void _activation_check_proc_15_func_393066739(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_15_func_1857437962(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_15_func_393066739(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_15_func_1609594318(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xf] >>= _activatnvar_confusing_chararray_a[0x3];

}

void _activation_check_proc_15_func_1622912626(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xa] != _activatnvar_confusing_char_4) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_0;

	_activation_check_proc_15_func_1609594318(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_8);
	_activation_check_proc_15_func_1393468867(_activatnvar_confusing_U8_4, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_15_func_1393468867(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_4.mData[0x1];

}

void _activation_check_proc_15_func_2051907882()
{
	
}

void _activation_check_proc_15_func_154860795(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_15_func_306255749(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1838294047(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1024718870(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 &= _activatnvar_confusing_LLUUID_6.mData[0x8];

}

void _activation_check_proc_15_func_2028086329(U8& _activatnvar_confusing_U8_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_15_func_1024718870(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_15_func_1263289968(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_15_func_856012227(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_15_func_211683696(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("59741d5c-aac5-a20e-2346-0e57231cb8c8");

	_activation_check_proc_15_func_891685615(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_15_func_891685615(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_15_func_257700781(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_15_func_1006755328(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 ^= 0x1;

}

void _activation_check_proc_15_func_237775505(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_5[0x9] *= _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_15_func_1441042214(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] ^= _activatnvar_confusing_chararray_1[0x8];

}

void _activation_check_proc_15_func_768019650(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 = 0xc;

}

void _activation_check_proc_15_func_30192563(LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	/* inline */ _activation_check_proc_15_func_1262775582(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_15_func_1835807177(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("9fa591af-ce7e-68dd-fd03-37f640ecca64");

	_activation_check_proc_15_func_1232867438(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_15_func_1232867438(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_15_func_43056674(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_LLUUID_1.mData[0x9];

}

void _activation_check_proc_15_func_451122880(char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_15_func_43056674(_activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_15_func_2117773202(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_9)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_641238894(_activatnvar_confusing_int_9);
}

void _activation_check_proc_15_func_1525382763(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b += _activatnvar_confusing_chararray_8[0x4];

}

void _activation_check_proc_15_func_1567087784()
{
	
}

void _activation_check_proc_15_func_1419620104()
{
	
}

void _activation_check_proc_15_func_1224684343(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] <<= _activatnvar_confusing_LLUUID_1.mData[0x7];

	_activation_check_proc_15_func_1029790388(_activatnvar_generic_iterator, _activatnvar_confusing_int_1, _activatnvar_confusing_int_0);
}

void _activation_check_proc_15_func_1029790388(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_1 >>= _activatnvar_confusing_int_0;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1647623088(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_7[0x7] *= _activatnvar_secret.mData[0xe];

	_activation_check_proc_15_func_1094078213(_activatnvar_confusing_bool_3, _activatnvar_confusing_char_1, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_15_func_1094078213(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_d <<= _activatnvar_confusing_char_1;

}

void _activation_check_proc_15_func_265071469(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_b[0x7] ^= _activatnvar_confusing_LLUUID_e.mData[0xd];

}

void _activation_check_proc_15_func_1837217838(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_U8_0 >>= _activatnvar_confusing_char_5;

}

void _activation_check_proc_15_func_915815427(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_chararray_b[0x3] &= _activatnvar_confusing_LLUUID_2.mData[0x4];

	/* inline */ _activation_check_proc_15_func_94296870(_activatnvar_generic_iterator);
	_activation_check_proc_15_func_265071469(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_15_func_1837217838(_activatnvar_confusing_U8_0, _activatnvar_confusing_char_5);
	/* inline */ _activation_check_proc_15_func_1110518987(_activatnvar_section1, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_15_func_1188080908(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x8] <<= _activatnvar_confusing_LLUUID_9.mData[0x9];

}

void _activation_check_proc_15_func_176001011(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x7] |= _activatnvar_confusing_LLUUID_d.mData[0x6];

}

void _activation_check_proc_15_func_805287261(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_15_func_1140577806(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xa] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_4 = true;

	/* inline */ _activation_check_proc_15_func_889984997(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_15_func_1897567435(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_15_func_1567039985(char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_15_func_1897567435(_activatnvar_confusing_char_f);
}

void _activation_check_proc_15_func_1597184675(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_15_func_1230515242(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1119674063(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_15_func_1673615327(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0x1;

}

void _activation_check_proc_15_func_1297958048(bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_15_func_1296438472(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_1[0xf] += _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_15_func_776168008()
{
	
}

void _activation_check_proc_15_func_456635370(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_15_func_79768063(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_15_func_1649770210(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_LLUUID_e.mData[0x2];

}

void _activation_check_proc_15_func_1525305895(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_15_func_823769396(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_15_func_434182950(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_15_func_1741281283(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_c.mData[0x9] ^= _activatnvar_confusing_chararray_7[0x5];

}

void _activation_check_proc_15_func_1001345334(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_628971044(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_combined_id;

	/* inline */ _activation_check_proc_15_func_1999414699(_activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_15_func_1132876302(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_15_func_1695909019(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_9[0xc] ^= _activatnvar_confusing_LLUUID_7.mData[0x3];

}

void _activation_check_proc_15_func_1207597013(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	
}

void _activation_check_proc_15_func_1015152019(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_15_func_1790630075(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0x3;

}

void _activation_check_proc_15_func_1970517054(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_15_func_144746348(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1960119629(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 *= 0xe;

}

void _activation_check_proc_15_func_1465596330(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1350389648(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("79d93066-93b6-d499-b98c-f0b2d3a1937e");

}

void _activation_check_proc_15_func_1022891208(bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_int_9 &= 0xff;

	/* inline */ _activation_check_proc_15_func_1237964159(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_15_func_1080011149(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_t1, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_f;

	/* inline */ _activation_check_proc_15_func_380789399(_activatnvar_so, _activatnvar_t1, _activatnvar_pos);
}

void _activation_check_proc_15_func_263633447(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_15_func_1629282861(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = _activatnvar_confusing_int_b;

	_activation_check_proc_15_func_263633447(_activatnvar_confusing_int_f);
}

void _activation_check_proc_15_func_1197042348(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_c.mData[0x0] >>= _activatnvar_code.mData[0x4];

	/* inline */ _activation_check_proc_15_func_1299201650(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_15_func_1958397502();
}

void _activation_check_proc_15_func_1958397502()
{
	
}

void _activation_check_proc_15_func_1269271806(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_15_func_1385926739(int& _activatnvar_confusing_int_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_982561180(_activatnvar_confusing_int_d);
}

void _activation_check_proc_15_func_1048261564(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_d.mData[0xf] &= _activatnvar_confusing_chararray_a[0xd];

}

void _activation_check_proc_15_func_1457487272(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 += _activatnvar_confusing_int_0;

}

void _activation_check_proc_15_func_1487509511(int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_a)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_f += _activatnvar_confusing_char_a;

	_activation_check_proc_15_func_1457487272(_activatnvar_confusing_int_0);
	_activation_check_proc_15_func_1653705842(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_15_func_1653705842(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_15_func_1837491864(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_15_func_726235902(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_b = _activatnvar_lace.mData[0x8];

	_activation_check_proc_15_func_1837491864(_activatnvar_confusing_char_d);
	/* inline */ _activation_check_proc_15_func_1955684730(_activatnvar_confusing_U8_0, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_15_func_1972192955(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] *= _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_15_func_209153914(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_secret;

}

void _activation_check_proc_15_func_1648417978()
{
	
}

void _activation_check_proc_15_func_979186853(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_9.mData[0x5];

}

void _activation_check_proc_15_func_359501811(char& _activatnvar_confusing_char_5, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_e)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_5 = _activatnvar_confusing_U8_e;

}

void _activation_check_proc_15_func_2001657352(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_5, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("e6a1db5c-7b5c-daea-f270-80643e51c1bf");

	_activation_check_proc_15_func_359501811(_activatnvar_confusing_char_5, _activatnvar_doaccount, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_15_func_1783824283(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_15_func_1423235123(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_LLUUID_0.mData[0x0];

	_activation_check_proc_15_func_1783824283(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_15_func_1920401479(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1802707553(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_e.mData[0x3];

	/* inline */ _activation_check_proc_15_func_1283592624(_activatnvar_so, _activatnvar_section2);
}

void _activation_check_proc_15_func_560705539(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_15_func_1315186351()
{
	
}

void _activation_check_proc_15_func_415992121(int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_chararray_0[0xe];

	/* inline */ _activation_check_proc_15_func_361573848(_activatnvar_confusing_int_3);
}

void _activation_check_proc_15_func_300352475(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_527974408(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d >>= _activatnvar_confusing_char_a;

}

void _activation_check_proc_15_func_767598606(DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
}

void _activation_check_proc_15_func_489602591(DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	_activatnvar_gvi_flags = 0;
	_activation_check_proc_15_func_767598606(_activatnvar_gvi_flags, _activatnvar_serial, _activatnvar_success);
}

void _activation_check_proc_15_func_1495957958(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_15_func_1360879542(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_15_func_1940973376(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("58785370-092f-dcf8-4cc9-fd730c153646");

}

void _activation_check_proc_15_func_1361081396(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_15_func_44813151(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_15_func_1217427349(LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_15_func_515730348(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_15_func_515730348(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f)
{
	
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_15_func_495045439(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_15_func_394172643(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_632728645(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_15_func_1172026457(_activatnvar_generic_iterator);
	_activation_check_proc_15_func_306484559(_activatnvar_confusing_int_9);
}

void _activation_check_proc_15_func_306484559(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_15_func_574007219(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_15_func_140240952(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_0.mData[0x3] &= _activatnvar_confusing_chararray_a[0xf];

	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1513898393(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_15_func_1657373667(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_8);
	_activation_check_proc_15_func_140240952(_activatnvar_lace, _activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_a, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_15_func_1657373667(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] ^= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_15_func_1351537301(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_15_func_323842095(unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_5 *= _activatnvar_confusing_chararray_1[0xa];

	/* inline */ _activation_check_proc_15_func_267531961(_activatnvar_confusing_int_e);
	_activation_check_proc_15_func_1351537301(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_15_func_647664062(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1571098042(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_4 *= _activatnvar_confusing_int_7;

}

void _activation_check_proc_15_func_566778467(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_lace.mData[0x5];

}

void _activation_check_proc_15_func_1276579994(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_so;

}

void _activation_check_proc_15_func_1993310486(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_t1)
{
	_activatnvar_confusing_U8_3 += _activatnvar_t1;

}

void _activation_check_proc_15_func_1249882659(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_4 >>= _activatnvar_confusing_char_6;

}

void _activation_check_proc_15_func_864420538(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_2.mData[0xf];

}

void _activation_check_proc_15_func_1997341058(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_15_func_677937729(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_d.mData[0xf] >>= _activatnvar_confusing_LLUUID_0.mData[0x8];

	/* inline */ _activation_check_proc_15_func_1144693921();
}

void _activation_check_proc_15_func_18722110(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_15_func_57746138(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_15_func_1541845823(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_15_func_1934946978(_activatnvar_confusing_int_1);
	_activation_check_proc_15_func_449914227(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_15_func_330703996(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_15_func_1491742669(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1934946978(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= 0xd;

}

void _activation_check_proc_15_func_449914227(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_15_func_892640266(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_15_func_1964187431(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_chararray_c[0x4] += _activatnvar_confusing_chararray_f[0xa];

	/* inline */ _activation_check_proc_15_func_1563618440(_activatnvar_confusing_U8_1, _activatnvar_doaccount);
	_activation_check_proc_15_func_2143065268(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_6);
	/* inline */ _activation_check_proc_15_func_2076913019(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_bool_d);
	_activation_check_proc_15_func_892640266(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_15_func_2143065268(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_6)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xf] == _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_15_func_686263084(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_1;

	_activation_check_proc_15_func_1587029719(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_15_func_1587029719(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_15_func_1586663273(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_15_func_987951391(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_620476177(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_LLUUID_3.mData[0x5];

}

void _activation_check_proc_15_func_526299874(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_2.mData[0x8] >>= _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_15_func_1957157143(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_c *= _activatnvar_confusing_U8_5;

	_activation_check_proc_15_func_526299874(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_c);
	_activation_check_proc_15_func_620476177(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_15_func_1875310803(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_15_func_503861174(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_15_func_65650298(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_15_func_1202349858(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_8);
	_activation_check_proc_15_func_1581294623(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_15_func_1581294623(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_15_func_1202349858(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_15_func_1841871129(bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_15_func_425440632(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x2] |= _activatnvar_confusing_chararray_c[0xa];

}

void _activation_check_proc_15_func_1233924915(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x6] == _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_15_func_1704956131(_activatnvar_confusing_U8_1);
	/* inline */ _activation_check_proc_15_func_71810140(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_15_func_1704956131(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_15_func_1731599512(char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e *= _activatnvar_confusing_char_c;

}

void _activation_check_proc_15_func_20408403(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_2)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_1 = _activatnvar_confusing_char_2;

}

void _activation_check_proc_15_func_1125508055(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_15_func_1985439236(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1985439236(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_2043384462(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_15_func_2035532867(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] |= _activatnvar_confusing_chararray_7[0x3];

	_activation_check_proc_15_func_2043384462(_activatnvar_confusing_char_a);
	/* inline */ _activation_check_proc_15_func_1060930426(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1084821680(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_15_func_2145864989(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_8)
{
	
	_activation_check_proc_15_func_1084821680(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_15_func_1032864310(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_15_func_1261365308()
{
	
}

void _activation_check_proc_15_func_301056181(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_15_func_1914295164(int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_int_4++;

	/* inline */ _activation_check_proc_15_func_733092080(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_15_func_1448398184(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xe] != _activatnvar_confusing_char_2) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_15_func_707899956(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1119273342(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] ^= _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_15_func_612665313(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_15_func_521153340(unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_b = _activatnvar_confusing_U8_f;

	_activation_check_proc_15_func_612665313(_activatnvar_confusing_U8_2);
	/* inline */ _activation_check_proc_15_func_839588967(_activatnvar_confusing_U8_6, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_15_func_49905787(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_c[0x4] &= _activatnvar_confusing_chararray_d[0xd];

}

void _activation_check_proc_15_func_1224324839(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_8[0x1] += _activatnvar_mac_digest[0x1];

	/* inline */ _activation_check_proc_15_func_1327152602(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_15_func_1685447917(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1985191994(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_15_func_1793026057(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_15_func_28287959(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x6] |= _activatnvar_confusing_chararray_8[0x6];

	_activation_check_proc_15_func_1793026057(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_15_func_1525153880(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xb] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_15_func_1712037478(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("fc25a6a3-5f21-7843-425b-bd784dbc6e92");

	/* inline */ _activation_check_proc_15_func_227712888(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_f);
	_activation_check_proc_15_func_924368561(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_15_func_924368561(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_3.mData[0x0] = _activatnvar_confusing_LLUUID_9.mData[0x9];

}

void _activation_check_proc_15_func_1894661667(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a *= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_15_func_1148181969()
{
	
}

void _activation_check_proc_15_func_337771575(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_15_func_216766942(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_15_func_2091553867(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_15_func_1414594039(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_so)
{
	
	_activatnvar_confusing_chararray_c[0x8] >>= _activatnvar_so.mData[0x9];

}

void _activation_check_proc_15_func_1308498011(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x9] &= _activatnvar_confusing_LLUUID_c.mData[0x0];

}

void _activation_check_proc_15_func_1682992548(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	
	_activation_check_proc_15_func_1308498011(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_15_func_1427311259(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_15_func_50984357(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b >>= 0xc;

}

void _activation_check_proc_15_func_1054201772(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_15_func_284595408(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_15_func_1950703504(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_15_func_1281451044(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_15_func_1558298984(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_15_func_1202019905(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_15_func_37088657(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("a1ffab95-8b79-e795-da12-ae7909d5f7e4");

}

void _activation_check_proc_15_func_1654172867(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xd] |= _activatnvar_fscked.mData[0x7];

}

void _activation_check_proc_15_func_65754749(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_15_func_543692466(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_15_func_1654172867(_activatnvar_fscked, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_15_func_1326012423(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_15_func_1834892745(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] ^= _activatnvar_confusing_LLUUID_4.mData[0x6];

	/* inline */ _activation_check_proc_15_func_1923158549(_activatnvar_t0);
	/* inline */ _activation_check_proc_15_func_1075723649(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_15_func_256739249(_activatnvar_confusing_char_7);
}

void _activation_check_proc_15_func_1407959802(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_15_func_747699998(unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_chararray_1[0x5];

	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_15_func_18917698(unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_15_func_173490885(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_15_func_173490885(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 >>= _activatnvar_confusing_chararray_4[0x7];

}

void _activation_check_proc_15_func_1391282139(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_15_func_1331987770()
{
	
}

void _activation_check_proc_15_func_620605761(char& _activatnvar_confusing_char_3, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activatnvar_confusing_char_3 ^= _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_15_func_512459207(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_3)
{
	
	_activatnvar_generic_iterator++;
	_activation_check_proc_15_func_620605761(_activatnvar_confusing_char_3, _activatnvar_generic_bool_0, _activatnvar_doaccount, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_15_func_266912857(int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_0[0x6] <<= _activatnvar_confusing_LLUUID_4.mData[0x6];

	_activation_check_proc_15_func_2044616671(_activatnvar_confusing_int_9);
}

void _activation_check_proc_15_func_2044616671(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_15_func_1781788744(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x7] == 0x0) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_15_func_1147825657(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_char_0 = _activatnvar_secret.mData[0xc];

}

void _activation_check_proc_15_func_1384291727(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_15_func_1988357326(LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_0, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_15_func_1384291727(_activatnvar_t0);
	_activation_check_proc_15_func_1147825657(_activatnvar_confusing_char_0, _activatnvar_secret);
}

void _activation_check_proc_15_func_1974421604(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_15_func_2006063706(_activatnvar_code, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_15_func_311945998(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_15_func_1778552661(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_3)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_e = 0x8;

	_activatnvar_confusing_chararray_3[0x5] >>= _activatnvar_confusing_LLUUID_2.mData[0x9];

}

void _activation_check_proc_15_func_572468039(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_LLUUID_d.mData[0x0];

}

void _activation_check_proc_15_func_1817576882(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_chararray_c[0x9];

}

void _activation_check_proc_15_func_166388299(char& _activatnvar_confusing_char_1, int& _activatnvar_confusing_int_9, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_d = true;

	/* inline */ _activation_check_proc_15_func_2051755295(_activatnvar_confusing_int_9);
	_activation_check_proc_15_func_1897343538(_activatnvar_confusing_char_1);
}

void _activation_check_proc_15_func_1897343538(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_15_func_490405513(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_3[0xe] += _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_15_func_1308167626(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_15_func_3048483(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_6 ^= _activatnvar_confusing_int_d;

}

void _activation_check_proc_15_func_836724043(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("25c89281-03f2-9e8f-8922-10e54b516c0f");

}

void _activation_check_proc_15_func_1670433418(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	
	_activation_check_proc_15_func_836724043(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_15_func_1710419891(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x0] ^= _activatnvar_confusing_LLUUID_7.mData[0xb];

}

void _activation_check_proc_15_func_848011299(U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_int_a++;

	/* inline */ _activation_check_proc_15_func_1691967296(_activatnvar_confusing_int_c);
	_activation_check_proc_15_func_188735506(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_6);
	_activation_check_proc_15_func_1710419891(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_15_func_188735506(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_e *= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_15_func_1399010069(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_15_func_715656019(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_e *= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_15_func_1234601578(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_15_func_876965532(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_15_func_119511603(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_f >>= _activatnvar_confusing_chararray_5[0x0];

}

void _activation_check_proc_15_func_1103387393(U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_U8_2 ^= _activatnvar_confusing_char_0;

}

void _activation_check_proc_15_func_1869987604(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b <<= 0x4;

}

void _activation_check_proc_15_func_1799185735(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] = _activatnvar_confusing_LLUUID_a.mData[0x8];

}

void _activation_check_proc_15_func_2129213145(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_15_func_2065246931(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_9)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_9 >>= _activatnvar_confusing_U8_8;

	_activation_check_proc_15_func_2129213145(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1965734857(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_9;

	/* inline */ _activation_check_proc_15_func_2087882650(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_15_func_1542889568(_activatnvar_confusing_int_b);
	_activation_check_proc_15_func_1492601498(_activatnvar_confusing_U8_f, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_15_func_1200445922(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_15_func_658575628(_activatnvar_code, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_15_func_1542889568(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_15_func_1492601498(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_LLUUID_a.mData[0x4];

}

void _activation_check_proc_15_func_113103996(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_15_func_1599275737(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_15_func_1176873858(_activatnvar_generic_iterator);
}

void _activation_check_proc_15_func_1176873858(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_15_func_1969942701(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] >>= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_15_func_1850693045(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] = _activatnvar_confusing_LLUUID_9.mData[0x4];

}

void _activation_check_proc_15_func_208872558(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_15_func_851604005(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_a)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_c = _activatnvar_confusing_char_a;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
