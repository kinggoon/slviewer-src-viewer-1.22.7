// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation0b.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 0b

void _activation_check_proc_0b_func_243122413(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_0b_func_874038596(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_0b_func_1187414069(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x2] = _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_0b_func_533972329(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
	_activation_check_proc_0b_func_1187414069(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_4);
	_activation_check_proc_0b_func_874038596(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_0b_func_775760589(bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0b_func_1547336127(bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_int_9 &= 0xff;

	/* inline */ _activation_check_proc_0b_func_1545092297(_activatnvar_confusing_U8_e, _activatnvar_confusing_bool_3, _activatnvar_confusing_char_4);
}

void _activation_check_proc_0b_func_1855774514(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1456844172(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1432006268(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0b_func_1456844172(_activatnvar_generic_iterator);
	_activation_check_proc_0b_func_880361529();
	_activation_check_proc_0b_func_1284630238(_activatnvar_lace, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_0b_func_687493492(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_0b_func_880361529()
{
	
}

void _activation_check_proc_0b_func_1284630238(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x2] ^= _activatnvar_lace.mData[0x8];

}

void _activation_check_proc_0b_func_1964007668()
{
	
}

void _activation_check_proc_0b_func_138211962(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0b_func_122143804(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
	_activation_check_proc_0b_func_138211962(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0b_func_1331542637(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_365637548(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("2abfa016-2cb1-bfa4-d053-7a662215a76e");

}

void _activation_check_proc_0b_func_2054638084(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_0b_func_1266666713(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_4.mData[0xc] += _activatnvar_ser_digest[0x6];

}

void _activation_check_proc_0b_func_1850972318(unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_1, char* _activatnvar_strbuf_0, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_strbuf_0[0] = 18; _activatnvar_strbuf_0[0] ^= 36; _activatnvar_strbuf_0[1] = 78; _activatnvar_strbuf_0[1] ^= 126; _activatnvar_strbuf_0[2] = 77; _activatnvar_strbuf_0[2] ^= 121; _activatnvar_strbuf_0[3] = 46; _activatnvar_strbuf_0[3] ^= 31; _activatnvar_strbuf_0[4] = 96; _activatnvar_strbuf_0[4] ^= 83; _activatnvar_strbuf_0[5] = 33; _activatnvar_strbuf_0[5] ^= 66; _activatnvar_strbuf_0[6] = 117; _activatnvar_strbuf_0[6] ^= 69; _activatnvar_strbuf_0[7] = 22; _activatnvar_strbuf_0[7] ^= 36; _activatnvar_strbuf_0[8] = 95; _activatnvar_strbuf_0[8] ^= 114; _activatnvar_strbuf_0[9] = 75; _activatnvar_strbuf_0[9] ^= 123; _activatnvar_strbuf_0[10] = 72; _activatnvar_strbuf_0[10] ^= 122; _activatnvar_strbuf_0[11] = 24; _activatnvar_strbuf_0[11] ^= 44; _activatnvar_strbuf_0[12] = 89; _activatnvar_strbuf_0[12] ^= 111; _activatnvar_strbuf_0[13] = 68; _activatnvar_strbuf_0[13] ^= 105; _activatnvar_strbuf_0[14] = 63; _activatnvar_strbuf_0[14] ^= 15; _activatnvar_strbuf_0[15] = 96; _activatnvar_strbuf_0[15] ^= 80; _activatnvar_strbuf_0[16] = 29; _activatnvar_strbuf_0[16] ^= 46; _activatnvar_strbuf_0[17] = 22; _activatnvar_strbuf_0[17] ^= 38; _activatnvar_strbuf_0[18] = 19; _activatnvar_strbuf_0[18] ^= 62; _activatnvar_strbuf_0[19] = 79; _activatnvar_strbuf_0[19] ^= 125; _activatnvar_strbuf_0[20] = 73; _activatnvar_strbuf_0[20] ^= 120; _activatnvar_strbuf_0[21] = 121; _activatnvar_strbuf_0[21] ^= 73; _activatnvar_strbuf_0[22] = 116; _activatnvar_strbuf_0[22] ^= 77; _activatnvar_strbuf_0[23] = 87; _activatnvar_strbuf_0[23] ^= 122; _activatnvar_strbuf_0[24] = 22; _activatnvar_strbuf_0[24] ^= 46; _activatnvar_strbuf_0[25] = 91; _activatnvar_strbuf_0[25] ^= 99; _activatnvar_strbuf_0[26] = 54; _activatnvar_strbuf_0[26] ^= 3; _activatnvar_strbuf_0[27] = 67; _activatnvar_strbuf_0[27] ^= 114; _activatnvar_strbuf_0[28] = 74; _activatnvar_strbuf_0[28] ^= 126; _activatnvar_strbuf_0[29] = 36; _activatnvar_strbuf_0[29] ^= 29; _activatnvar_strbuf_0[30] = 127; _activatnvar_strbuf_0[30] ^= 79; _activatnvar_strbuf_0[31] = 126; _activatnvar_strbuf_0[31] ^= 31; _activatnvar_strbuf_0[32] = 52; _activatnvar_strbuf_0[32] ^= 87; _activatnvar_strbuf_0[33] = 20; _activatnvar_strbuf_0[33] ^= 44; _activatnvar_strbuf_0[34] = 26; _activatnvar_strbuf_0[34] ^= 127; _activatnvar_strbuf_0[35] = 29; _activatnvar_strbuf_0[35] ^= 46; _activatnvar_strbuf_0[36] = 0;
	/* inline */ _activation_check_proc_0b_func_837241882(_activatnvar_confusing_int_b, _activatnvar_confusing_int_1);
	_activation_check_proc_0b_func_1266666713(_activatnvar_confusing_LLUUID_4, _activatnvar_ser_digest);
}

void _activation_check_proc_0b_func_1554399007(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 <<= 0x3;

}

void _activation_check_proc_0b_func_1913247484(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_0b_func_1227334161(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] = _activatnvar_confusing_LLUUID_b.mData[0x7];

}

void _activation_check_proc_0b_func_975020879(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_e[0xd];

	/* inline */ _activation_check_proc_0b_func_1120222969(_activatnvar_confusing_LLUUID_8, _activatnvar_fscked);
}

void _activation_check_proc_0b_func_1144973617(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_0b_func_1399754396(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_0b_func_1103819698(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_c >>= _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_0b_func_79613975(bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_a;

	_activatnvar_confusing_int_1 >>= 0x3;

}

void _activation_check_proc_0b_func_2065076420(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] >>= _activatnvar_confusing_chararray_9[0xb];

}

void _activation_check_proc_0b_func_1990126548(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("ecdfc591-5ef8-f0dd-48dc-44540bb0a36d");

}

void _activation_check_proc_0b_func_1269842700(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xf] *= _activatnvar_confusing_LLUUID_d.mData[0x5];

}

void _activation_check_proc_0b_func_695686778(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1861792815(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_603125275(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 *= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_0b_func_138221834(char& _activatnvar_confusing_char_6, U8& _activatnvar_pos, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_0b_func_603125275(_activatnvar_confusing_chararray_0, _activatnvar_confusing_char_6);
}

void _activation_check_proc_0b_func_1992672736(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("6e001070-c6ff-c6de-08c2-9a8e1e72c6ec");

}

void _activation_check_proc_0b_func_1257236431(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_0b_func_1401378356(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_1;

	/* inline */ _activation_check_proc_0b_func_821557375(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_0b_func_1427416266(_activatnvar_confusing_U8_c);
}

void _activation_check_proc_0b_func_867066905(char& _activatnvar_confusing_char_2, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_9.mData[0xf];

	_activation_check_proc_0b_func_2105621500(_activatnvar_pos);
}

void _activation_check_proc_0b_func_2105621500(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0b_func_7059064(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_8[0x4] ^= _activatnvar_confusing_chararray_2[0x4];

}

void _activation_check_proc_0b_func_1693168475(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x7] == 0x7) _activatnvar_confusing_bool_1 = false;

	_activation_check_proc_0b_func_1831415890(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_1831415890(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1463327980(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0b_func_1608920757(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 += 0x7;

}

void _activation_check_proc_0b_func_773272745(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0b_func_1304582464(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t0, U8& _activatnvar_t1, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_so, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xb] != 0x9) _activatnvar_confusing_bool_3 = false;

	_activatnvar_confusing_chararray_5[0x7] |= _activatnvar_secret.mData[0x0];

	/* inline */ _activation_check_proc_0b_func_1254543346(_activatnvar_t1, _activatnvar_so, _activatnvar_pos);
	_activation_check_proc_0b_func_773272745(_activatnvar_t0, _activatnvar_t1, _activatnvar_so);
	_activation_check_proc_0b_func_1608920757(_activatnvar_confusing_char_4);
}

void _activation_check_proc_0b_func_770608359(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_0b_func_29043390(int& _activatnvar_confusing_int_7, U8& _activatnvar_t0, int& _activatnvar_confusing_int_0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_0b_func_166581174(_activatnvar_confusing_int_7, _activatnvar_confusing_int_0);
}

void _activation_check_proc_0b_func_514317587(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0b_func_702719397(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_0b_func_582112828(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("39bc68e4-6ef9-5fdf-c80c-4c73b9d88e39");

	/* inline */ _activation_check_proc_0b_func_1582687852(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_0b_func_356386881(_activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0b_func_81114247(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0b_func_1390122868(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_0b_func_1848076552(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] = _activatnvar_confusing_chararray_c[0x8];

}

void _activation_check_proc_0b_func_1540779562(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] *= _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_0b_func_920180334(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_0b_func_1135232897(int& _activatnvar_confusing_int_7, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activation_check_proc_0b_func_920180334(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_0b_func_1673646320(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("1d56e4a2-a2fc-8966-43cd-ee4d4438e693");

}

void _activation_check_proc_0b_func_381282875(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_685221487(int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("ad4c943c-8df1-f13a-aa93-7eebb81695a5");

	_activatnvar_confusing_int_7++;

	_activation_check_proc_0b_func_381282875(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
}

void _activation_check_proc_0b_func_858615001(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= _activatnvar_confusing_chararray_5[0x2];

}

void _activation_check_proc_0b_func_647271053(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_LLUUID_1.mData[0xc];

}

void _activation_check_proc_0b_func_1122113023(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0b_func_438260793(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0x5;

}

void _activation_check_proc_0b_func_1533767433(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_0b_func_982414297(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_d, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x7] == _activatnvar_confusing_char_d) _activatnvar_confusing_bool_8 = true;

	/* inline */ _activation_check_proc_0b_func_942937970(_activatnvar_doaccount, _activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0b_func_938090390(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_0b_func_2071997791()
{
	
}

void _activation_check_proc_0b_func_504802654(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1602670180(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= 0xb;

}

void _activation_check_proc_0b_func_245830660(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0b_func_1578363085(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d *= 0x0;

}

void _activation_check_proc_0b_func_1415151532(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_0b_func_990068392(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_0b_func_700329548(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x0] <<= _activatnvar_confusing_chararray_9[0x7];

	_activation_check_proc_0b_func_990068392(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0b_func_1354312535(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_0b_func_664152645(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1714412158(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_0 &= _activatnvar_code.mData[0x5];

}

void _activation_check_proc_0b_func_778957876(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0b_func_2068530303(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_1506920308(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_0b_func_1946430779()
{
	
}

void _activation_check_proc_0b_func_1457578117(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	_activatnvar_confusing_U8_2 ^= _activatnvar_confusing_chararray_a[0x2];

	_activation_check_proc_0b_func_1946430779();
	/* inline */ _activation_check_proc_0b_func_2132647846(_activatnvar_feat, _activatnvar_confusing_U8_b, _activatnvar_doaccount);
}

void _activation_check_proc_0b_func_1399861972(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 += 0x0;

}

void _activation_check_proc_0b_func_154923778(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c >>= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_0b_func_1408508276(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_section2;

}

void _activation_check_proc_0b_func_463744646(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_c)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x0] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_0b_func_2136271305(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_0b_func_2145239610(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_0b_func_1899799233()
{
	
}

void _activation_check_proc_0b_func_342502611(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_269535570(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_generic_bool_0;

	_activation_check_proc_0b_func_1757203775(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_a);
	_activation_check_proc_0b_func_453135088(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0b_func_453135088(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_0b_func_1757203775(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0b_func_1764712132(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0b_func_837027503(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0b_func_1805622096(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1805622096(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1227802491(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xf] == _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0b_func_915723431(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_b.mData[0x7] += _activatnvar_name_digest[0xa];

	_activation_check_proc_0b_func_1227802491(_activatnvar_confusing_bool_e, _activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_0b_func_675113133(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_8.mData[0x2] |= _activatnvar_confusing_chararray_3[0x1];

}

void _activation_check_proc_0b_func_1775488302(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0b_func_1373444022(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_0b_func_7037620()
{
	
}

void _activation_check_proc_0b_func_1293778631(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_1649811690(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_0b_func_1649811690(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_592330877(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_0b_func_787266983(U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_char_b;

}

void _activation_check_proc_0b_func_2014899291(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d = _activatnvar_confusing_int_2;

}

void _activation_check_proc_0b_func_2003302071(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1959578461(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x0] ^= _activatnvar_confusing_LLUUID_9.mData[0xf];

}

void _activation_check_proc_0b_func_672341773(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_c.mData[0x5];

}

void _activation_check_proc_0b_func_1865369037(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_0b_func_2003302071(_activatnvar_generic_iterator);
	_activation_check_proc_0b_func_672341773(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_U8_0);
	_activation_check_proc_0b_func_1959578461(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0b_func_93029261(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_807910697(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0b_func_1785153398(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_1;

	/* inline */ _activation_check_proc_0b_func_323072330(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_784736269(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_5[0x7] = _activatnvar_confusing_chararray_5[0x3];

	_activation_check_proc_0b_func_349358094(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0b_func_349358094(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_7.mData[0x6] += _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_0b_func_2051084047(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_736102537(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

	/* inline */ _activation_check_proc_0b_func_1738766248(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_434194127(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_0b_func_963033724(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_0b_func_153994772(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xb] = _activatnvar_confusing_chararray_0[0xa];

	_activation_check_proc_0b_func_385102946(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0b_func_385102946(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("daf0b8cf-304f-577f-948e-081ef1f4c9ff");

}

void _activation_check_proc_0b_func_432279197(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_0b_func_478858271(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0b_func_1476809331(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_2 ^= _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_0b_func_2050825258(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] <<= _activatnvar_confusing_chararray_1[0xc];

	_activation_check_proc_0b_func_80225692(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_0b_func_1430564097(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_lace);
}

void _activation_check_proc_0b_func_1430564097(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_80225692(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_262863085()
{
	
}

void _activation_check_proc_0b_func_487413951(char& _activatnvar_confusing_char_0, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_5;

	/* inline */ _activation_check_proc_0b_func_603672891(_activatnvar_t0);
	_activation_check_proc_0b_func_190722469(_activatnvar_confusing_char_0);
	_activation_check_proc_0b_func_1581255731(_activatnvar_confusing_U8_0, _activatnvar_confusing_char_b);
}

void _activation_check_proc_0b_func_1581255731(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_char_b;

}

void _activation_check_proc_0b_func_190722469(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_0b_func_2142537686(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("783be077-dcf5-829d-384d-d2600557ed0c");

}

void _activation_check_proc_0b_func_2104797232(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_159569900(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_9.mData[0x5];

}

void _activation_check_proc_0b_func_11651032(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] >>= _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_0b_func_2132395900(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xd] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_0b_func_1359394429(_activatnvar_confusing_char_3, _activatnvar_confusing_char_a);
	_activation_check_proc_0b_func_159569900(_activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_0b_func_11651032(_activatnvar_confusing_LLUUID_c, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_1359394429(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_char_a;

}

void _activation_check_proc_0b_func_129618315(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_1635663667(_activatnvar_confusing_chararray_1, _activatnvar_name_digest);
}

void _activation_check_proc_0b_func_960250629(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_681764232(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e |= _activatnvar_confusing_int_2;

}

void _activation_check_proc_0b_func_50137776(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_0b_func_163138429(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0b_func_2020699079(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0b_func_649956191(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_0b_func_1075859140(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_combined_id;

	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0b_func_1104163737(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0b_func_1350879772(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0b_func_1383203407(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x2] = _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_0b_func_1136609049(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] &= _activatnvar_confusing_LLUUID_a.mData[0xa];

}

void _activation_check_proc_0b_func_802291079(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1018779(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0b_func_1136609049(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_0b_func_802291079(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_725484454(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0b_func_136791885(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1996227262(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_0b_func_1956013929()
{
	
}

void _activation_check_proc_0b_func_1950447450(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0b_func_980137021(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] += _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_0b_func_1416721919(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_0b_func_26490190(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0b_func_984945599(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0b_func_109763055(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_0b_func_322600397(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	_activatnvar_strbuf_0[0] = 20; _activatnvar_strbuf_0[0] ^= 33; _activatnvar_strbuf_0[1] = 32; _activatnvar_strbuf_0[1] ^= 20; _activatnvar_strbuf_0[2] = 98; _activatnvar_strbuf_0[2] ^= 82; _activatnvar_strbuf_0[3] = 48; _activatnvar_strbuf_0[3] ^= 2; _activatnvar_strbuf_0[4] = 60; _activatnvar_strbuf_0[4] ^= 15; _activatnvar_strbuf_0[5] = 85; _activatnvar_strbuf_0[5] ^= 101; _activatnvar_strbuf_0[6] = 111; _activatnvar_strbuf_0[6] ^= 87; _activatnvar_strbuf_0[7] = 70; _activatnvar_strbuf_0[7] ^= 118; _activatnvar_strbuf_0[8] = 5; _activatnvar_strbuf_0[8] ^= 40; _activatnvar_strbuf_0[9] = 33; _activatnvar_strbuf_0[9] ^= 17; _activatnvar_strbuf_0[10] = 65; _activatnvar_strbuf_0[10] ^= 113; _activatnvar_strbuf_0[11] = 7; _activatnvar_strbuf_0[11] ^= 63; _activatnvar_strbuf_0[12] = 35; _activatnvar_strbuf_0[12] ^= 18; _activatnvar_strbuf_0[13] = 106; _activatnvar_strbuf_0[13] ^= 71; _activatnvar_strbuf_0[14] = 67; _activatnvar_strbuf_0[14] ^= 115; _activatnvar_strbuf_0[15] = 118; _activatnvar_strbuf_0[15] ^= 68; _activatnvar_strbuf_0[16] = 84; _activatnvar_strbuf_0[16] ^= 100; _activatnvar_strbuf_0[17] = 84; _activatnvar_strbuf_0[17] ^= 108; _activatnvar_strbuf_0[18] = 21; _activatnvar_strbuf_0[18] ^= 56; _activatnvar_strbuf_0[19] = 13; _activatnvar_strbuf_0[19] ^= 61; _activatnvar_strbuf_0[20] = 11; _activatnvar_strbuf_0[20] ^= 111; _activatnvar_strbuf_0[21] = 23; _activatnvar_strbuf_0[21] ^= 39; _activatnvar_strbuf_0[22] = 89; _activatnvar_strbuf_0[22] ^= 58; _activatnvar_strbuf_0[23] = 51; _activatnvar_strbuf_0[23] ^= 30; _activatnvar_strbuf_0[24] = 15; _activatnvar_strbuf_0[24] ^= 63; _activatnvar_strbuf_0[25] = 112; _activatnvar_strbuf_0[25] ^= 66; _activatnvar_strbuf_0[26] = 10; _activatnvar_strbuf_0[26] ^= 62; _activatnvar_strbuf_0[27] = 114; _activatnvar_strbuf_0[27] ^= 17; _activatnvar_strbuf_0[28] = 66; _activatnvar_strbuf_0[28] ^= 122; _activatnvar_strbuf_0[29] = 122; _activatnvar_strbuf_0[29] ^= 66; _activatnvar_strbuf_0[30] = 59; _activatnvar_strbuf_0[30] ^= 9; _activatnvar_strbuf_0[31] = 82; _activatnvar_strbuf_0[31] ^= 103; _activatnvar_strbuf_0[32] = 124; _activatnvar_strbuf_0[32] ^= 68; _activatnvar_strbuf_0[33] = 88; _activatnvar_strbuf_0[33] ^= 105; _activatnvar_strbuf_0[34] = 89; _activatnvar_strbuf_0[34] ^= 108; _activatnvar_strbuf_0[35] = 15; _activatnvar_strbuf_0[35] ^= 62; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0b_func_2079802273(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_5, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_0b_func_322600397(_activatnvar_strbuf_0, _activatnvar_section2);
	/* inline */ _activation_check_proc_0b_func_1275211030();
	_activation_check_proc_0b_func_109763055(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0b_func_1560347890(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_0b_func_1349832072(char& _activatnvar_confusing_char_f, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_0, unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_8)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_f |= 0x6;

	_activatnvar_confusing_U8_8 *= _activatnvar_confusing_chararray_7[0x2];

	/* inline */ _activation_check_proc_0b_func_2073086931(_activatnvar_confusing_int_0);
}

void _activation_check_proc_0b_func_437635753(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] != 0xf) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0b_func_1487582042(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_d)
{
	
	_activatnvar_confusing_LLUUID_6 = _activatnvar_section1;

	if(_activatnvar_confusing_LLUUID_d.mData[0xe] != 0xd) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_0b_func_320338937(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0b_func_477244846(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d <<= _activatnvar_confusing_chararray_4[0x4];

}

void _activation_check_proc_0b_func_2029491382(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_a;

	_activation_check_proc_0b_func_1931853709(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0b_func_1931853709(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_0b_func_1441712242(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0b_func_1557367069(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x2] = _activatnvar_confusing_LLUUID_3.mData[0xd];

}

void _activation_check_proc_0b_func_1524570520(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("763ce2fb-5dda-1e46-aa1e-7036ad83d4b4");

	_activation_check_proc_0b_func_1557367069(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_0b_func_470412835(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_0b_func_1164246818(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = 0xf;

}

void _activation_check_proc_0b_func_1431295254(char& _activatnvar_feat, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c &= _activatnvar_feat;

}

void _activation_check_proc_0b_func_1815599809(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[7] = _activatnvar_fscked.mData[7];
}

void _activation_check_proc_0b_func_797086656(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_369933880(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_797086656(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_confusing_int_5);
	_activation_check_proc_0b_func_1956766319(_activatnvar_confusing_char_7, _activatnvar_confusing_U8_b);
	/* inline */ _activation_check_proc_0b_func_423084191(_activatnvar_doaccount, _activatnvar_confusing_char_a);
	_activation_check_proc_0b_func_172195472(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0b_func_1956766319(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b ^= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0b_func_172195472(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 ^= 0x9;

}

void _activation_check_proc_0b_func_483270073(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] &= _activatnvar_confusing_LLUUID_a.mData[0x1];

}

void _activation_check_proc_0b_func_513648289(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_7[0x8] *= _activatnvar_confusing_chararray_6[0xa];

	_activation_check_proc_0b_func_1460598586(_activatnvar_confusing_U8_9);
	/* inline */ _activation_check_proc_0b_func_821839896(_activatnvar_lace, _activatnvar_feat, _activatnvar_generic_bool_1, _activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1460598586(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_0b_func_1905701675(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_844506892()
{
	
}

void _activation_check_proc_0b_func_2096064719(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_LLUUID_9.mData[0x1];

	_activation_check_proc_0b_func_844506892();
}

void _activation_check_proc_0b_func_303487063(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x6] ^= _activatnvar_code.mData[0xc];

}

void _activation_check_proc_0b_func_1638441597(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_e[0x0] &= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_0b_func_853980907(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0b_func_264235428(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] *= _activatnvar_confusing_chararray_e[0x8];

	_activation_check_proc_0b_func_1673960067(_activatnvar_doaccount, _activatnvar_confusing_U8_6, _activatnvar_confusing_char_7);
	_activation_check_proc_0b_func_853980907(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0b_func_1673960067(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_6 ^= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0b_func_1927762035(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_0b_func_807663443(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_doaccount;

}

void _activation_check_proc_0b_func_188409663(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xb] &= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_0b_func_1770205800(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_5 *= 0x7;

	_activatnvar_confusing_char_b = _activatnvar_fscked.mData[0x9];

}

void _activation_check_proc_0b_func_989558820(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_c[0xb] = _activatnvar_confusing_chararray_4[0xc];

}

void _activation_check_proc_0b_func_867520487(bool& _activatnvar_confusing_bool_7, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 ^= _activatnvar_confusing_chararray_7[0xc];

	/* inline */ _activation_check_proc_0b_func_192464537(_activatnvar_confusing_U8_1, _activatnvar_confusing_bool_7, _activatnvar_feat);
	_activation_check_proc_0b_func_1289169056(_activatnvar_generic_iterator);
	_activation_check_proc_0b_func_1991527363(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_1289169056(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1991527363(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1273468242(unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_chararray_c[0x4] += _activatnvar_confusing_chararray_c[0xa];

	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0b_func_2123861693(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_c, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_chararray_1[0xc];

	_activation_check_proc_0b_func_1273468242(_activatnvar_confusing_chararray_c, _activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_0b_func_1551949239(_activatnvar_confusing_U8_b, _activatnvar_confusing_bool_1);
	/* inline */ _activation_check_proc_0b_func_843433068(_activatnvar_confusing_int_c);
	_activation_check_proc_0b_func_1207124156(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0b_func_1207124156(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("511a3493-1ceb-ed39-fc51-21b8a4d97bfd");

}

void _activation_check_proc_0b_func_1526642993(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_chararray_c[0xb];

}

void _activation_check_proc_0b_func_1853228152(bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_0b_func_716328333(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_generic_bool_1);
}

void _activation_check_proc_0b_func_716328333(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0b_func_2070905635(unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b <<= 0xb;

	/* inline */ _activation_check_proc_0b_func_2069300544(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_d);
	/* inline */ _activation_check_proc_0b_func_1511792030(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code, _activatnvar_confusing_chararray_4, _activatnvar_combined_id, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_0b_func_1748199711(_activatnvar_combined_id, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_0b_func_1748763443(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_0b_func_963583884(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_e[0xe] += _activatnvar_confusing_chararray_a[0x8];

	_activatnvar_confusing_LLUUID_6.mData[0x1] = _activatnvar_confusing_chararray_1[0x5];

}

void _activation_check_proc_0b_func_1320445491(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_0b_func_322222896(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_0b_func_742376208(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_LLUUID_d.mData[0xc];

}

void _activation_check_proc_0b_func_2013345472()
{
	
}

void _activation_check_proc_0b_func_1045995906(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_7 <<= _activatnvar_confusing_char_4;

	/* inline */ _activation_check_proc_0b_func_1694748767(_activatnvar_generic_iterator);
	_activation_check_proc_0b_func_2013345472();
	/* inline */ _activation_check_proc_0b_func_2052620897(_activatnvar_confusing_U8_0);
}

void _activation_check_proc_0b_func_373033103(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_0b_func_1201663392(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_0b_func_1201663392(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1925446556(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_0b_func_885747964(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_3 = _activatnvar_fscked.mData[0xd];

}

void _activation_check_proc_0b_func_933056958(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x0] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_7 = true;

	_activatnvar_t0 &= 7;
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_0b_func_486443364(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_0b_func_1489086195(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xd] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_0b_func_486443364(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_0b_func_259402338(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0b_func_1585458420(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0b_func_2128446230(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x2] += _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_0b_func_985942119(char& _activatnvar_feat, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_3;

	_activation_check_proc_0b_func_1687780511(_activatnvar_feat, _activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0b_func_1690263950(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_0b_func_742832787();
}

void _activation_check_proc_0b_func_1687780511(char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0b_func_1354608228(LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_0b_func_423339819(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1764101837(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1999964043(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("12045110-df41-7731-cb7b-2869e26a1ea9");

}

void _activation_check_proc_0b_func_1597040758(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_e)
{
	
	/* inline */ _activation_check_proc_0b_func_1498052686(_activatnvar_confusing_char_e, _activatnvar_confusing_char_6);
	_activation_check_proc_0b_func_55759177(_activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_0b_func_55759177(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x9] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_0b_func_92547973(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = 0x3;

}

void _activation_check_proc_0b_func_2121901939(U8& _activatnvar_pos, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_1 <<= _activatnvar_confusing_int_0;

	_activatnvar_pos |= 8;
}

void _activation_check_proc_0b_func_215716318(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1149367104(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_927353231()
{
	
}

void _activation_check_proc_0b_func_355505937(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] <<= _activatnvar_confusing_chararray_3[0x9];

	_activation_check_proc_0b_func_927353231();
}

void _activation_check_proc_0b_func_1264315676(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_code;

}

void _activation_check_proc_0b_func_666171341(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 *= _activatnvar_confusing_int_a;

}

void _activation_check_proc_0b_func_2023499311(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0b_func_1510998333(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_949382455(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("efb594ab-8e08-962e-e3a2-1557a23f4e12");

}

void _activation_check_proc_0b_func_936438202(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0b_func_1853727194(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_0b_func_180255188(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1139438071(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_464320785(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_8)
{
	_activatnvar_generic_iterator = 8;
	/* inline */ _activation_check_proc_0b_func_243264135(_activatnvar_confusing_char_8);
}

void _activation_check_proc_0b_func_1250553996(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_0b_func_912310637(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 ^= 0x2;

}

void _activation_check_proc_0b_func_1118719137(BOOL& _activatnvar_success, DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial)
{
	_activatnvar_gvi_flags = 0;
	_activation_check_proc_0b_func_66161920(_activatnvar_gvi_flags, _activatnvar_success, _activatnvar_serial);
}

void _activation_check_proc_0b_func_66161920(DWORD& _activatnvar_gvi_flags, BOOL& _activatnvar_success, DWORD& _activatnvar_serial)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
}

void _activation_check_proc_0b_func_2048537964(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_9.mData[0x6];

	/* inline */ _activation_check_proc_0b_func_364642104(_activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_0b_func_2082203840(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0b_func_2089666243(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_0b_func_237184777(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_1[0x3] += _activatnvar_fscked.mData[0x8];

}

void _activation_check_proc_0b_func_195738448(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_f[0x0] = _activatnvar_confusing_chararray_3[0xb];

}

void _activation_check_proc_0b_func_1064821117(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xb] *= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_0b_func_11356108(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

	_activation_check_proc_0b_func_1064821117(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0b_func_1935131849(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a |= 0xa;

}

void _activation_check_proc_0b_func_1405083033(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 <<= _activatnvar_confusing_int_f;

}

void _activation_check_proc_0b_func_1289692634(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos |= 8;
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_0b_func_1908464578(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_pos)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_a <<= _activatnvar_confusing_U8_0;

	_activation_check_proc_0b_func_1289692634(_activatnvar_pos, _activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_1895008882(LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_0b_func_1761633268(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0b_func_1362540799(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_0b_func_267219787(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_1068099606(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1472616224(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0b_func_491917549(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_0b_func_1534260294(bool& _activatnvar_confusing_bool_b, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_0 = false;

	_activation_check_proc_0b_func_228881350(_activatnvar_combined_id, _activatnvar_name_digest);
	/* inline */ _activation_check_proc_0b_func_1385432226(_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_0b_func_838954295(_activatnvar_strbuf_0, _activatnvar_section1);
}

void _activation_check_proc_0b_func_228881350(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_0b_func_626894875(U8& _activatnvar_t0, int& _activatnvar_confusing_int_b)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_0b_func_547256546(_activatnvar_confusing_int_b);
}

void _activation_check_proc_0b_func_547256546(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_0b_func_1976576297(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_1646282289(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_656051425(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_c)
{
	
	/* inline */ _activation_check_proc_0b_func_904848538(_activatnvar_confusing_char_c, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_0b_func_1394806784(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0b_func_159831806(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x7] = _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_0b_func_1771376728(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_9.mData[0x7] += _activatnvar_section1.mData[0x4];

	/* inline */ _activation_check_proc_0b_func_1169184362(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0b_func_88569102(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("6bfb9072-734e-ad80-beac-46e9b4c2544e");

}

void _activation_check_proc_0b_func_770954220(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 *= 0xa;

}

void _activation_check_proc_0b_func_775905184(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_770954220(_activatnvar_confusing_char_2);
	_activation_check_proc_0b_func_88569102(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0b_func_1709564998(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e <<= _activatnvar_confusing_chararray_2[0x3];

}

void _activation_check_proc_0b_func_1389090384(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_0b_func_1741403648(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_0b_func_335910289(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_0b_func_243021542(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0b_func_1713983181(unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x0] <<= _activatnvar_confusing_chararray_4[0x8];

}

void _activation_check_proc_0b_func_1287847780(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_0b_func_561717012(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x3] += _activatnvar_section1.mData[0x7];

	_activation_check_proc_0b_func_1524984587(_activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_0b_func_522280243(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1524984587(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_0b_func_1184335623(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= 0xf;

}

void _activation_check_proc_0b_func_1958692229(char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0b_func_1376103075(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0b_func_1392277395(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] |= _activatnvar_confusing_chararray_6[0x2];

}

void _activation_check_proc_0b_func_858515876(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_fscked;

}

void _activation_check_proc_0b_func_1614237564(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_2;

	_activation_check_proc_0b_func_1392277395(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_0b_func_1029856092(_activatnvar_confusing_char_1, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_0b_func_1376103075(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_e);
	_activation_check_proc_0b_func_858515876(_activatnvar_fscked, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_0b_func_1051192715(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_125363330(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_0b_func_1961432401(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_7++;

	/* inline */ _activation_check_proc_0b_func_884137409(_activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_0b_func_1306585765(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_0, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

	/* inline */ _activation_check_proc_0b_func_54710448(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0b_func_585925202(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_chararray_4[0x3];

}

void _activation_check_proc_0b_func_1414844823(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	/* inline */ _activation_check_proc_0b_func_368388782(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_6, _activatnvar_confusing_U8_e);
	_activation_check_proc_0b_func_585925202(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_0b_func_148712098(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_244458413(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_8, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_e.mData[0xf] = _activatnvar_confusing_LLUUID_d.mData[0x8];

	_activation_check_proc_0b_func_1434926850(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_0b_func_845484088(_activatnvar_generic_iterator, _activatnvar_confusing_int_8);
	_activation_check_proc_0b_func_996102424(_activatnvar_confusing_chararray_9, _activatnvar_confusing_U8_f);
	_activation_check_proc_0b_func_613478496(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_0b_func_1434926850(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x6] <<= _activatnvar_confusing_chararray_6[0xb];

}

void _activation_check_proc_0b_func_613478496(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("54ecd5fb-9594-21d4-393a-e6092541b787");

}

void _activation_check_proc_0b_func_996102424(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_chararray_9[0xb];

}

void _activation_check_proc_0b_func_35483541(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_2 *= _activatnvar_confusing_chararray_d[0x8];

}

void _activation_check_proc_0b_func_1263353973(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_2;

	/* inline */ _activation_check_proc_0b_func_242537265(_activatnvar_confusing_char_e, _activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0b_func_144124189(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] >>= _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_0b_func_185998186(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0b_func_650699286(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] += _activatnvar_confusing_chararray_0[0xb];

}

void _activation_check_proc_0b_func_1482331787(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_2;

	/* inline */ _activation_check_proc_0b_func_1353266493(_activatnvar_confusing_LLUUID_9, _activatnvar_section2);
}

void _activation_check_proc_0b_func_601451166(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_1581001534(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] ^= _activatnvar_code.mData[0x8];

	_activation_check_proc_0b_func_879284324();
}

void _activation_check_proc_0b_func_879284324()
{
	
}

void _activation_check_proc_0b_func_887629182(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f ^= 0xb;

}

void _activation_check_proc_0b_func_1288097967(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_d.mData[0xc] <<= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_0b_func_330393964(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0b_func_289346150(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1997461638(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c ^= 0x4;

}

void _activation_check_proc_0b_func_962498330(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1029433189()
{
	
}

void _activation_check_proc_0b_func_1325793756(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_1862732855(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_0b_func_173836736(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_0 *= _activatnvar_confusing_char_4;

	_activation_check_proc_0b_func_2042919960(_activatnvar_confusing_char_5, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0b_func_2042919960(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_chararray_3[0x3];

}

void _activation_check_proc_0b_func_745013153(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0b_func_1830946766(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0b_func_1126195501(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("09abd736-f7e8-930b-cfb2-b129c30f2563");

}

void _activation_check_proc_0b_func_1093344229(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0b_func_544387097(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0b_func_48947699(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_5;

	/* inline */ _activation_check_proc_0b_func_386952915(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_0b_func_1351837368(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_0b_func_1403509261(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_5 >>= _activatnvar_confusing_char_3;

}

void _activation_check_proc_0b_func_2012193386(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0b_func_511449603(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_618614170()
{
	
}

void _activation_check_proc_0b_func_1425076725(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x1] = _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_0b_func_391860220(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_0b_func_875552710(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_0b_func_1165729300(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0b_func_1186708672(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] ^= _activatnvar_confusing_LLUUID_a.mData[0xd];

	_activation_check_proc_0b_func_1658845124(_activatnvar_pos, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_0b_func_2092470507(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0b_func_1658845124(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_0b_func_2055323368(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_0b_func_1177468659(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_section1;

	/* inline */ _activation_check_proc_0b_func_963628284(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_0b_func_2055323368(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1697047498(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("24abf562-c67f-fe0c-39de-96b60ca03b8f");

}

void _activation_check_proc_0b_func_591558420(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_U8_7;

	/* inline */ _activation_check_proc_0b_func_213401569(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
	/* inline */ _activation_check_proc_0b_func_114890078(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_28453317(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_6 += 0x0;

}

void _activation_check_proc_0b_func_953191564(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0b_func_54853039(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0b_func_471604471(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1005685865()
{
	
}

void _activation_check_proc_0b_func_1235189614(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_261404610(_activatnvar_confusing_U8_5, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_0b_func_740407117(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_0b_func_728842707(char& _activatnvar_confusing_char_5, U8& _activatnvar_pos, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_U8_1 ^= _activatnvar_confusing_char_5;

	/* inline */ _activation_check_proc_0b_func_1643058649(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_0b_func_431653947(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x6] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_0b_func_295455909(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x0] &= _activatnvar_ser_digest[0xa];

}

void _activation_check_proc_0b_func_349424515(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] >>= _activatnvar_so.mData[0x8];

}

void _activation_check_proc_0b_func_329984178(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_1385825116(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_0b_func_441887512(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_9.mData[0x2];

}

void _activation_check_proc_0b_func_560490043(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_952712317(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_0b_func_952712317(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_0b_func_1687154001()
{
	
}

void _activation_check_proc_0b_func_1340301914(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] = _activatnvar_section2.mData[0x9];

}

void _activation_check_proc_0b_func_1936808922(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 <<= 0xe;

}

void _activation_check_proc_0b_func_1510480371(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_f;

	_activation_check_proc_0b_func_6725622(_activatnvar_doaccount, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_0b_func_6725622(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_doaccount;

}

void _activation_check_proc_0b_func_763609063(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x7] ^= _activatnvar_confusing_LLUUID_8.mData[0x7];

}

void _activation_check_proc_0b_func_2140576877(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_0b_func_1910506476(bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_0b_func_73244173(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_0b_func_1220198018(_activatnvar_confusing_int_7);
}

void _activation_check_proc_0b_func_1220198018(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0b_func_1350548163(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_7.mData[0x9];

}

void _activation_check_proc_0b_func_1738934766(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0b_func_831310405(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("a4e165de-3c76-a8fa-5d5f-4db32bef4827");

}

void _activation_check_proc_0b_func_498323629(char& _activatnvar_confusing_char_7, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_4 += _activatnvar_confusing_char_7;

	
}

void _activation_check_proc_0b_func_30738876(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_f;

	_activation_check_proc_0b_func_1945505867(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0b_func_1945505867(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_combined_id;

}

void _activation_check_proc_0b_func_264102979(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_35922541(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_0b_func_1722533693(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 *= 0xf;

	_activation_check_proc_0b_func_35922541(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_718287339(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_0)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_0 |= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0b_func_493518885(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_0b_func_1121279217(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_LLUUID_4.mData[0x3] = _activatnvar_confusing_LLUUID_3.mData[0xe];

	/* inline */ _activation_check_proc_0b_func_1343869612();
	_activation_check_proc_0b_func_310180993(_activatnvar_confusing_U8_8, _activatnvar_confusing_U8_1);
	_activation_check_proc_0b_func_1018556223(_activatnvar_t0);
	_activation_check_proc_0b_func_844743413(_activatnvar_t0);
}

void _activation_check_proc_0b_func_844743413(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_0b_func_310180993(U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0b_func_1018556223(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_1202858019(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x7] ^= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_0b_func_1711203164(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_0 += 0x1;

	_activation_check_proc_0b_func_1202858019(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_0b_func_1752034405(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("138c6533-20de-fdb4-5a46-3c8321102fe7");

}

void _activation_check_proc_0b_func_784595773(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a |= _activatnvar_fscked.mData[0xc];

}

void _activation_check_proc_0b_func_1931563640(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_0b_func_2077069003(LLMD5*& _activatnvar_nmd5, std::string& _activatnvar_fullname)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_0b_func_767657794(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_6;

	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_0b_func_1842581316(U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_0b_func_22678153(_activatnvar_confusing_U8_9);
}

void _activation_check_proc_0b_func_299038871(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_lace;

}

void _activation_check_proc_0b_func_444565581(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0b_func_791051809(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_char_c *= _activatnvar_confusing_U8_1;

	_activation_check_proc_0b_func_1439677381(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0b_func_1439677381(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_a;

	_activatnvar_confusing_LLUUID_4.mData[0x5] *= _activatnvar_confusing_LLUUID_7.mData[0xb];

}

void _activation_check_proc_0b_func_165034482(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_5 <<= _activatnvar_confusing_int_6;

}

void _activation_check_proc_0b_func_248461394(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] >>= _activatnvar_confusing_chararray_0[0x2];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1542176866(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xb] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_7 = true;

	_activation_check_proc_0b_func_902082701(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0b_func_902082701(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("f7fdda03-7c02-31f4-fb26-9aa765bd4b7c");

}

void _activation_check_proc_0b_func_484410633(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0b_func_905300950(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1137038094(LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_a;

	/* inline */ _activation_check_proc_0b_func_1349496809(_activatnvar_confusing_char_5, _activatnvar_secret);
}

void _activation_check_proc_0b_func_218836240(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x5] == _activatnvar_pos) _activatnvar_confusing_bool_e = _activatnvar_generic_bool_0;

}

void _activation_check_proc_0b_func_443198499(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] ^= _activatnvar_section2.mData[0x6];

	_activation_check_proc_0b_func_218836240(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_e, _activatnvar_pos, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0b_func_944111538(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_char_6;

}

void _activation_check_proc_0b_func_1740042086(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_0b_func_814745212(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x5] ^= _activatnvar_confusing_chararray_0[0xc];

	_activation_check_proc_0b_func_1397398504(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0b_func_1397398504(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_3[0xc] &= _activatnvar_confusing_LLUUID_f.mData[0x2];

}

void _activation_check_proc_0b_func_1175850448(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_f.mData[0xe] >>= _activatnvar_confusing_LLUUID_4.mData[0x2];

	_activation_check_proc_0b_func_830263248(_activatnvar_t0, _activatnvar_t1, _activatnvar_so);
}

void _activation_check_proc_0b_func_830263248(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_0b_func_952231480(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1000991810(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_b <<= _activatnvar_confusing_int_f;

}

void _activation_check_proc_0b_func_282473470(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	
	_activation_check_proc_0b_func_1382494546(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_0b_func_1095538040(_activatnvar_confusing_bool_b, _activatnvar_confusing_char_c);
	_activation_check_proc_0b_func_385004887(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_char_a);
}

void _activation_check_proc_0b_func_385004887(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_LLUUID_5.mData[0x7];

}

void _activation_check_proc_0b_func_1382494546(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_0b_func_1011153800(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("3114ec76-a7db-3767-00cb-4a49902b4d45");

}

void _activation_check_proc_0b_func_46404047(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_290444060(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0b_func_1393056886(_activatnvar_generic_iterator);
	_activation_check_proc_0b_func_1011153800(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0b_func_835727248(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0b_func_842055300(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_0b_func_318769842(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_0b_func_616760947(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_e[0xa] = _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_0b_func_681162791(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x2] ^= _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_0b_func_1234327179(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_e;

	_activation_check_proc_0b_func_971969729(_activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_0b_func_1533158139(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_0b_func_208962530(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_971969729(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0b_func_951810148(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x2] ^= _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_0b_func_970703833(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	/* inline */ _activation_check_proc_0b_func_1192492196(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1043358761(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1568958488(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_char_9 = _activatnvar_confusing_char_e;

}

void _activation_check_proc_0b_func_1957788423(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_d.mData[0xc] &= _activatnvar_section1.mData[0x6];

}

void _activation_check_proc_0b_func_561175893(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_9;

	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_0b_func_632939115(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xa] >>= _activatnvar_section1.mData[0x6];

}

void _activation_check_proc_0b_func_130803102(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0b_func_958270540(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_114019059(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x8] |= _activatnvar_confusing_LLUUID_9.mData[0x0];

}

void _activation_check_proc_0b_func_1864442369(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0b_func_642962162(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

	_activation_check_proc_0b_func_1864442369(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_0b_func_655431219(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_1 |= 0x9;

}

void _activation_check_proc_0b_func_1845442096(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_t1)
{
	_activatnvar_confusing_U8_d <<= _activatnvar_t1;

	_activation_check_proc_0b_func_655431219(_activatnvar_confusing_U8_1, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_0b_func_1852706822(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0b_func_114433783(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
	_activation_check_proc_0b_func_1248116169(_activatnvar_confusing_char_8, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_0b_func_1248116169(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_chararray_b[0x9];

}

void _activation_check_proc_0b_func_1232721934(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_590779703(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x3] += _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_0b_func_1834706360(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xb;

}

void _activation_check_proc_0b_func_1257025298(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_0b_func_1870575547(bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_3)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_char_3 = 0x0;

}

void _activation_check_proc_0b_func_1769585062(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_chararray_7[0xe];

	_activatnvar_confusing_LLUUID_a = LLUUID("362cef52-dc7b-9706-96e8-74ffe0f2b4d5");

	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_LLUUID_9.mData[0x8];

}

void _activation_check_proc_0b_func_1847727625(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0b_func_1516023327(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_c |= 0x0;

}

void _activation_check_proc_0b_func_532102871(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_2126055586(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_0b_func_1516023327(_activatnvar_confusing_U8_c, _activatnvar_doaccount);
	_activation_check_proc_0b_func_1468725344(_activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_0b_func_121569620(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0b_func_1468725344(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("26dd7439-af15-838c-2c7e-2e6d818d9b09");

}

void _activation_check_proc_0b_func_2121170821(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_t0)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] != _activatnvar_t0) _activatnvar_confusing_bool_b = false;

	
}

void _activation_check_proc_0b_func_1758042480(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_char_f = _activatnvar_fscked.mData[0x2];

	_activation_check_proc_0b_func_456619975(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0b_func_456619975(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] >>= _activatnvar_confusing_LLUUID_2.mData[0x7];

}

void _activation_check_proc_0b_func_1461422274()
{
	
}

void _activation_check_proc_0b_func_209222898(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 ^= _activatnvar_confusing_int_1;

	/* inline */ _activation_check_proc_0b_func_1336819996(_activatnvar_confusing_int_7);
	_activation_check_proc_0b_func_771655687(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_a);
}

void _activation_check_proc_0b_func_771655687(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_d.mData[0xf];

}

void _activation_check_proc_0b_func_1419575146(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_e += _activatnvar_confusing_int_b;

}

void _activation_check_proc_0b_func_318242654(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] += _activatnvar_confusing_LLUUID_3.mData[0x8];

}

void _activation_check_proc_0b_func_1158565448(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_LLUUID_e.mData[0x4];

}

void _activation_check_proc_0b_func_1293785386(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_0b_func_1506870912(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1337950178(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_3.mData[0xb];

}

void _activation_check_proc_0b_func_1623391680(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_0b_func_1493818403(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] &= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_0b_func_1548713862(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_7 += _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_0b_func_1856100227(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_e[0x3] &= _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_0b_func_351905563(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0b_func_1856100227(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_0b_func_607359856(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_e[0xe] |= _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_0b_func_591587678(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0b_func_607359856(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_0b_func_1841643079();
	_activation_check_proc_0b_func_1687179521(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1687179521(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_666948411(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_9.mData[0x0];

}

void _activation_check_proc_0b_func_1790903604(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_c |= 0x2;

}

void _activation_check_proc_0b_func_135064184(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_e++;

	_activation_check_proc_0b_func_1790903604(_activatnvar_confusing_U8_c, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0b_func_1859492358(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= 0xa;

}

void _activation_check_proc_0b_func_282460788(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("a846b808-60f7-10ff-327d-b98383a85e75");

}

void _activation_check_proc_0b_func_338106283(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_0b_func_42152758(_activatnvar_confusing_chararray_f, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_0b_func_42152758(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b <<= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_0b_func_947460100(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xc] != 0x6) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0b_func_760583361(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_combined_id;

	_activation_check_proc_0b_func_135001258(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_0b_func_135001258(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x6] = _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_0b_func_909427100(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0b_func_879319705(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] <<= _activatnvar_confusing_chararray_4[0x2];

}

void _activation_check_proc_0b_func_1840826759(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_456195549(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0b_func_1069589647(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_74369995(LLUUID& _activatnvar_so, U8& _activatnvar_t0, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_3)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_0b_func_1528905941(_activatnvar_confusing_U8_a, _activatnvar_generic_bool_1, _activatnvar_confusing_char_3);
}

void _activation_check_proc_0b_func_1945368619(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_b = _activatnvar_doaccount;

}

void _activation_check_proc_0b_func_550530024(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0b_func_1129511244(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x5] <<= _activatnvar_code.mData[0x8];

}

void _activation_check_proc_0b_func_1556135950(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_0b_func_1911466861(bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_int_b >>= 0xe;

	/* inline */ _activation_check_proc_0b_func_1964771864(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_0b_func_519051132(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("bcccd353-eaca-266d-ea34-feb9e1cc8d28");

}

void _activation_check_proc_0b_func_321319495(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_int_b ^= 0xf;

	_activation_check_proc_0b_func_519051132(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0b_func_187632700(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0b_func_845212192(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0b_func_1420897360(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1115480055(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0b_func_799707523(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_0b_func_2031136374(_activatnvar_t0);
	_activation_check_proc_0b_func_107263471(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_0b_func_107263471(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_0b_func_2031136374(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0b_func_1105056138(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0x8;

}

void _activation_check_proc_0b_func_1324204593(bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_int_4 >>= _activatnvar_confusing_int_a;

	/* inline */ _activation_check_proc_0b_func_1366195155(_activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_f, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_0b_func_602663201(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x1] = _activatnvar_code.mData[0xc];

}

void _activation_check_proc_0b_func_540372347(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] *= _activatnvar_confusing_chararray_a[0x8];

	/* inline */ _activation_check_proc_0b_func_1913863523(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_0b_func_779170138(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0b_func_296381388(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_0b_func_2003537632(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_8, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0b_func_86605158(_activatnvar_confusing_int_5);
	_activation_check_proc_0b_func_296381388(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_2);
	_activation_check_proc_0b_func_779170138(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_0b_func_750653134(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0b_func_576272047(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_a ^= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_0b_func_2069674966(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 += _activatnvar_confusing_int_5;

}

void _activation_check_proc_0b_func_1879759935(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x4] == 0x7) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0b_func_389646852(bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_b[0xf] <<= _activatnvar_code.mData[0xc];

	_activation_check_proc_0b_func_1879759935(_activatnvar_confusing_bool_c, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0b_func_1442892967(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_section2;

}

void _activation_check_proc_0b_func_670550390(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0b_func_1527519060(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xf] *= _activatnvar_section2.mData[0x9];

	/* inline */ _activation_check_proc_0b_func_360667362(_activatnvar_confusing_int_a);
}

void _activation_check_proc_0b_func_860844609(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0b_func_13892121(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x5] != 0x1) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0b_func_2088545626(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 += 0xa;

}

void _activation_check_proc_0b_func_1138884788(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_317923518(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0b_func_652123562(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0b_func_646250304(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0b_func_1913514096(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_6[0x6] |= _activatnvar_confusing_LLUUID_5.mData[0x2];

}

void _activation_check_proc_0b_func_104478163(U8& _activatnvar_t0, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= _activatnvar_t0;

}

void _activation_check_proc_0b_func_1125654186(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_0b_func_141718929(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x6] &= _activatnvar_section2.mData[0xc];

}

void _activation_check_proc_0b_func_162699782(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_e)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x3] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0b_func_311136281(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xd] = _activatnvar_confusing_chararray_a[0xc];

}

void _activation_check_proc_0b_func_1588904894(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_0b_func_1682075270(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] *= _activatnvar_mac_digest[0xf];

}

void _activation_check_proc_0b_func_951289198(LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_secret.mData[0x5];

}

void _activation_check_proc_0b_func_1426537095(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_0b_func_4565940(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0b_func_1426537095(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0b_func_157877619(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_0b_func_1257594886(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_chararray_5[0x0];

}

void _activation_check_proc_0b_func_1595174973(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_0b_func_1253136128(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_0b_func_586253109(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_0)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x7] == _activatnvar_confusing_char_0) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_0b_func_1492580288(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_0b_func_1080454555(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0b_func_2091851301(U8& _activatnvar_pos, char& _activatnvar_confusing_char_5)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0b_func_1590298855(_activatnvar_confusing_char_5, _activatnvar_pos);
}

void _activation_check_proc_0b_func_1590298855(char& _activatnvar_confusing_char_5, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_0b_func_2138645207(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0b_func_1226811757(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_5.mData[0x2] <<= _activatnvar_confusing_LLUUID_7.mData[0xf];

}

void _activation_check_proc_0b_func_973811961(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("89f607f7-20c6-a510-68cb-4fe58d130f53");

	_activation_check_proc_0b_func_1699905070(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_0b_func_297138038(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0b_func_1699905070(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_0b_func_297138038(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_0b_func_2084135766(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f = 0xa;

}

void _activation_check_proc_0b_func_1447485683(unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] *= _activatnvar_name_digest[0xc];

	_activation_check_proc_0b_func_2084135766(_activatnvar_confusing_int_f);
}

void _activation_check_proc_0b_func_265147005(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0b_func_1522367669(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_f[0x7] <<= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_0b_func_2042945814(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0b_func_770453754(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("ff1802e7-20d9-2b58-f5b0-83cbec7e66d3");

	/* inline */ _activation_check_proc_0b_func_1567572793(_activatnvar_so, _activatnvar_section2);
}

void _activation_check_proc_0b_func_1401370868(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_9[0xf] <<= _activatnvar_confusing_LLUUID_c.mData[0x8];

	/* inline */ _activation_check_proc_0b_func_2044373649(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_0b_func_178557198(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] |= _activatnvar_confusing_LLUUID_a.mData[0x2];

}

void _activation_check_proc_0b_func_119875977(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_0b_func_851997148(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_7)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_7 *= 0x0;

}

void _activation_check_proc_0b_func_339330867(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_862410573(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_pos)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_e = _activatnvar_pos;

}

void _activation_check_proc_0b_func_180407800(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0b_func_194746583(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f *= 0xd;

	_activation_check_proc_0b_func_134785328(_activatnvar_confusing_chararray_b, _activatnvar_confusing_U8_d);
	_activation_check_proc_0b_func_180407800(_activatnvar_confusing_int_5);
	_activation_check_proc_0b_func_977087149(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0b_func_977087149(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_8[0xf] = _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_0b_func_134785328(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_chararray_b[0x9];

}

void _activation_check_proc_0b_func_1776360029(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xa] ^= _activatnvar_confusing_chararray_b[0x3];

}

void _activation_check_proc_0b_func_1405651456(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_0b_func_1922933260(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_1, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_1 = _activatnvar_t0;

}

void _activation_check_proc_0b_func_682245981(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x6] == _activatnvar_t0) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0b_func_935483771(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_0b_func_35958962(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1796042350(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0b_func_257422892(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a, int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_0b_func_1350435300(_activatnvar_generic_iterator);
	_activation_check_proc_0b_func_1796042350(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_0b_func_1350435300(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_199352502(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_LLUUID_c.mData[0x3];

}

void _activation_check_proc_0b_func_608443629()
{
	
}

void _activation_check_proc_0b_func_223239731(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0b_func_459755416(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_5 <<= _activatnvar_confusing_char_5;

}

void _activation_check_proc_0b_func_1612296979(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_0b_func_1194619967(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xc] *= _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_0b_func_503981699(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_0b_func_1195414502(_activatnvar_t0);
	_activation_check_proc_0b_func_1194619967(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_0b_func_496442847(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x1] += _activatnvar_secret.mData[0x5];

}

void _activation_check_proc_0b_func_1533636734(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= 0x0;

}

void _activation_check_proc_0b_func_1695862553(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_c = _activatnvar_confusing_U8_7;

}

void _activation_check_proc_0b_func_1716127804(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_char_e;

}

void _activation_check_proc_0b_func_323509472(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0b_func_2011376451(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_e, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_0b_func_1716127804(_activatnvar_confusing_char_e, _activatnvar_confusing_char_9);
	/* inline */ _activation_check_proc_0b_func_509971606(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0b_func_762795211(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_2);
	_activation_check_proc_0b_func_323509472(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_0b_func_540941163(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_0b_func_962316758(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_chararray_f[0x9];

	_activation_check_proc_0b_func_540941163(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_0b_func_869974745(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_295558626(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	/* inline */ _activation_check_proc_0b_func_1549822624(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	_activation_check_proc_0b_func_869974745(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1851446215(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 64; _activatnvar_strbuf_0[0] ^= 113; _activatnvar_strbuf_0[1] = 67; _activatnvar_strbuf_0[1] ^= 115; _activatnvar_strbuf_0[2] = 95; _activatnvar_strbuf_0[2] ^= 108; _activatnvar_strbuf_0[3] = 115; _activatnvar_strbuf_0[3] ^= 71; _activatnvar_strbuf_0[4] = 55; _activatnvar_strbuf_0[4] ^= 85; _activatnvar_strbuf_0[5] = 84; _activatnvar_strbuf_0[5] ^= 50; _activatnvar_strbuf_0[6] = 39; _activatnvar_strbuf_0[6] ^= 65; _activatnvar_strbuf_0[7] = 43; _activatnvar_strbuf_0[7] ^= 29; _activatnvar_strbuf_0[8] = 39; _activatnvar_strbuf_0[8] ^= 10; _activatnvar_strbuf_0[9] = 65; _activatnvar_strbuf_0[9] ^= 35; _activatnvar_strbuf_0[10] = 123; _activatnvar_strbuf_0[10] ^= 76; _activatnvar_strbuf_0[11] = 13; _activatnvar_strbuf_0[11] ^= 57; _activatnvar_strbuf_0[12] = 120; _activatnvar_strbuf_0[12] ^= 72; _activatnvar_strbuf_0[13] = 71; _activatnvar_strbuf_0[13] ^= 106; _activatnvar_strbuf_0[14] = 8; _activatnvar_strbuf_0[14] ^= 56; _activatnvar_strbuf_0[15] = 4; _activatnvar_strbuf_0[15] ^= 98; _activatnvar_strbuf_0[16] = 52; _activatnvar_strbuf_0[16] ^= 86; _activatnvar_strbuf_0[17] = 46; _activatnvar_strbuf_0[17] ^= 74; _activatnvar_strbuf_0[18] = 119; _activatnvar_strbuf_0[18] ^= 90; _activatnvar_strbuf_0[19] = 107; _activatnvar_strbuf_0[19] ^= 90; _activatnvar_strbuf_0[20] = 81; _activatnvar_strbuf_0[20] ^= 50; _activatnvar_strbuf_0[21] = 28; _activatnvar_strbuf_0[21] ^= 126; _activatnvar_strbuf_0[22] = 23; _activatnvar_strbuf_0[22] ^= 113; _activatnvar_strbuf_0[23] = 66; _activatnvar_strbuf_0[23] ^= 111; _activatnvar_strbuf_0[24] = 116; _activatnvar_strbuf_0[24] ^= 64; _activatnvar_strbuf_0[25] = 100; _activatnvar_strbuf_0[25] ^= 82; _activatnvar_strbuf_0[26] = 16; _activatnvar_strbuf_0[26] ^= 37; _activatnvar_strbuf_0[27] = 53; _activatnvar_strbuf_0[27] ^= 86; _activatnvar_strbuf_0[28] = 28; _activatnvar_strbuf_0[28] ^= 44; _activatnvar_strbuf_0[29] = 106; _activatnvar_strbuf_0[29] ^= 91; _activatnvar_strbuf_0[30] = 48; _activatnvar_strbuf_0[30] ^= 84; _activatnvar_strbuf_0[31] = 118; _activatnvar_strbuf_0[31] ^= 68; _activatnvar_strbuf_0[32] = 88; _activatnvar_strbuf_0[32] ^= 105; _activatnvar_strbuf_0[33] = 2; _activatnvar_strbuf_0[33] ^= 96; _activatnvar_strbuf_0[34] = 59; _activatnvar_strbuf_0[34] ^= 95; _activatnvar_strbuf_0[35] = 15; _activatnvar_strbuf_0[35] ^= 58; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0b_func_846241842(char& _activatnvar_feat, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_feat;

}

void _activation_check_proc_0b_func_1250114480(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x2] <<= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_0b_func_1466579334(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0b_func_1833030831(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1509809658(int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activation_check_proc_0b_func_1833030831(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
	_activation_check_proc_0b_func_1693641178(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1693641178(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_611145023(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0b_func_1541360933(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x8] |= _activatnvar_code.mData[0x7];

}

void _activation_check_proc_0b_func_95262177(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x3] != _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_0b_func_651865362(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_code)
{
	
	_activation_check_proc_0b_func_1541360933(_activatnvar_code, _activatnvar_confusing_chararray_2);
	_activation_check_proc_0b_func_95262177(_activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_0b_func_1995487943(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_so;

}

void _activation_check_proc_0b_func_1414462798()
{
	
}

void _activation_check_proc_0b_func_1431832871(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xe;

	_activation_check_proc_0b_func_1414462798();
}

void _activation_check_proc_0b_func_776010715(int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_int_e &= 0xa;

	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0b_func_1874112566(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_4 &= 0xd;

}

void _activation_check_proc_0b_func_847677107(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_0b_func_972473858(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_8++;

	/* inline */ _activation_check_proc_0b_func_2038471662(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0b_func_1530790837(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xa] == _activatnvar_t0) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0b_func_1620053071(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x8] |= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_0b_func_1663789903(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_a >>= 0x1;

	_activation_check_proc_0b_func_1620053071(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0b_func_1651662713(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
}

void _activation_check_proc_0b_func_2002659069(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
	_activation_check_proc_0b_func_1651662713(_activatnvar_combined_id, _activatnvar_name_digest);
	_activation_check_proc_0b_func_1466349747(_activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_0b_func_1919995055(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_0b_func_2029562046(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_1466349747(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_0b_func_308678926(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_100316813(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_100316813(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_685114636(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_0b_func_1160240404(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e += 0xc;

}

void _activation_check_proc_0b_func_1914339802(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_944246777(int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_0b_func_1991675578(_activatnvar_confusing_char_9);
}

void _activation_check_proc_0b_func_1991675578(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_0b_func_592289227()
{
	
}

void _activation_check_proc_0b_func_604789420(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_0b_func_996053935(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_t0, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_6 = _activatnvar_generic_bool_1;

	_activation_check_proc_0b_func_604789420(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_1938320619(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xe] ^= _activatnvar_name_digest[0xa];

}

void _activation_check_proc_0b_func_1079963096(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_0b_func_993602981(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xc] == 0xf) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0b_func_1414034248(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_secret;

}

void _activation_check_proc_0b_func_660288800(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_0b_func_1473481252(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x5] = _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_0b_func_1259393608(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xb] ^= _activatnvar_confusing_LLUUID_f.mData[0xa];

	/* inline */ _activation_check_proc_0b_func_1701061739(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_b);
	_activation_check_proc_0b_func_2086656164(_activatnvar_confusing_int_d);
	_activation_check_proc_0b_func_1743759938(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_0b_func_345108272(_activatnvar_section2, _activatnvar_confusing_char_c);
}

void _activation_check_proc_0b_func_1743759938(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] += _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_0b_func_2086656164(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0b_func_884693622(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_502822213(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xa] != 0x9) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0b_func_672718708(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] ^= _activatnvar_confusing_chararray_4[0x7];

}

void _activation_check_proc_0b_func_559139339(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_0b_func_2054725386(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_1491979046(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0b_func_522574636(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("b60a7627-5953-22a3-74cc-13323c21f212");

}

void _activation_check_proc_0b_func_367146364(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xc] &= _activatnvar_confusing_chararray_2[0x9];

}

void _activation_check_proc_0b_func_1376370302(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_0b_func_131076768(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_439612001(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_0b_func_1665123377(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_f ^= _activatnvar_confusing_char_6;

}

void _activation_check_proc_0b_func_82820879(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_f[0xc] <<= _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_0b_func_595534282(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_t1)
{
	_activatnvar_confusing_U8_0 += 0x7;

	/* inline */ _activation_check_proc_0b_func_2016589135(_activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_0b_func_1162803569(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_3[0x4] = _activatnvar_confusing_LLUUID_2.mData[0x6];

	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1295263879(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_0b_func_2146432292(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_0b_func_386774823(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_0b_func_870856207(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_0b_func_1188533827(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x7] != 0x8) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_0b_func_317899126(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= _activatnvar_confusing_int_c;

}

void _activation_check_proc_0b_func_1277854488(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_2053356255(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_0b_func_1363106838(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_0[0x5] = _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_0b_func_1009610071(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x6] ^= _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_0b_func_1547132449()
{
	
}

void _activation_check_proc_0b_func_1204883082(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 *= 0x4;

}

void _activation_check_proc_0b_func_1131109319(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_confusing_char_a;

}

void _activation_check_proc_0b_func_2033391100(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_0b_func_723792767()
{
	
}

void _activation_check_proc_0b_func_584492443(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activation_check_proc_0b_func_723792767();
}

void _activation_check_proc_0b_func_494682493(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1112083323(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_0b_func_72512613(U8& _activatnvar_t0, LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_7, U8& _activatnvar_pos)
{
	_activatnvar_confusing_char_7++;

	/* inline */ _activation_check_proc_0b_func_1988562322(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_0b_func_690520003(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_0b_func_607852393(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_0b_func_2128872240(int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_U8_7;

	/* inline */ _activation_check_proc_0b_func_427798595(_activatnvar_confusing_int_a);
	_activation_check_proc_0b_func_1810489261(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_1810489261(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_294111820(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] += _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_0b_func_298037166(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_4, char& _activatnvar_feat)
{
	_activatnvar_confusing_char_4 |= _activatnvar_secret.mData[0x1];

	/* inline */ _activation_check_proc_0b_func_2050046687(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_feat);
	/* inline */ _activation_check_proc_0b_func_721500815(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_0b_func_1731074798(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_0b_func_1294917619()
{
	
}

void _activation_check_proc_0b_func_1245398395(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_0b_func_766976614(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_166356528(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0b_func_1245398395(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_0b_func_766976614(_activatnvar_t0);
}

void _activation_check_proc_0b_func_1530671656(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_0b_func_29281154(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_0b_func_1086346121(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0b_func_804006340(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_pos, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_0b_func_1086346121(_activatnvar_so, _activatnvar_t0, _activatnvar_t1);
	/* inline */ _activation_check_proc_0b_func_970793333(_activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_1);
	_activation_check_proc_0b_func_29281154(_activatnvar_t1);
	/* inline */ _activation_check_proc_0b_func_2092715128(_activatnvar_t1, _activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_0b_func_1137073638(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_a ^= _activatnvar_confusing_int_8;

}

void _activation_check_proc_0b_func_1780060157(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_492780914(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_0b_func_1788570260(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_0b_func_213870599(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x4] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0b_func_169613528(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_813078772(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0b_func_42054560(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_0, _activatnvar_mac_digest);
}

void _activation_check_proc_0b_func_893260326(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0b_func_41611047(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0b_func_103010279(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0b_func_139638671()
{
	
}

void _activation_check_proc_0b_func_1929166029(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_e[0x2] <<= _activatnvar_name_digest[0xd];

	/* inline */ _activation_check_proc_0b_func_1846847760(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_0b_func_1879089859(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_0b_func_1571952531(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x3] <<= _activatnvar_confusing_LLUUID_6.mData[0x5];

}

void _activation_check_proc_0b_func_585762065(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_0b_func_18824588(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_3 *= 0xb;

	/* inline */ _activation_check_proc_0b_func_1106102810(_activatnvar_confusing_bool_7, _activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_0b_func_1243894994(_activatnvar_section2, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_0b_func_270239661(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_0b_func_270239661(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0b_func_818510486(bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_4 &= _activatnvar_confusing_U8_4;

	/* inline */ _activation_check_proc_0b_func_1818238844(_activatnvar_confusing_int_8);
}

void _activation_check_proc_0b_func_1936888937(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x6] != _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_0b_func_1216494475(_activatnvar_confusing_LLUUID_6, _activatnvar_lace);
	/* inline */ _activation_check_proc_0b_func_898514504();
}

void _activation_check_proc_0b_func_1216494475(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_lace;

}

void _activation_check_proc_0b_func_1795593259(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_777667064(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_0b_func_1288401859(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, int& _activatnvar_confusing_int_2)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
	_activation_check_proc_0b_func_777667064(_activatnvar_confusing_int_2);
}

void _activation_check_proc_0b_func_687670639(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] ^= _activatnvar_confusing_LLUUID_1.mData[0x8];

	_activation_check_proc_0b_func_1188345598(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_0b_func_1188345598(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_0b_func_215340597(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_2000822881(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("760ca806-d2cb-0031-efce-da398f01ed51");

}

void _activation_check_proc_0b_func_131093009(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_e.mData[0xa];

}

void _activation_check_proc_0b_func_200451925(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0b_func_1892412261(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x2] != 0x7) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_0b_func_856422032(_activatnvar_generic_iterator);
	_activation_check_proc_0b_func_1312641061(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_0b_func_1675553523();
}

void _activation_check_proc_0b_func_856422032(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1312641061(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_768185590(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_e[0xd] &= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_0b_func_770043250(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_e[0x3] &= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_0b_func_69317935(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_0b_func_371313822(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0b_func_371313822(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("a7edfbd4-972e-7e1a-c477-8296dbf934d8");

}

void _activation_check_proc_0b_func_282676554(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_2050421387(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_b[0x4] *= _activatnvar_confusing_chararray_c[0x6];

	_activation_check_proc_0b_func_282676554(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_0b_func_926279571(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0b_func_1202902441(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_0)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_0 = _activatnvar_confusing_char_b;

}

void _activation_check_proc_0b_func_418155188(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("9a76de32-4849-54eb-1772-4149fb16e1c7");

	_activation_check_proc_0b_func_1202902441(_activatnvar_confusing_bool_9, _activatnvar_confusing_char_b, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_0b_func_1984854788(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xd] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_0b_func_531682949(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_0b_func_1455083410(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	
	_activation_check_proc_0b_func_790589290(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_790589290(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_0b_func_2043897056(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= _activatnvar_confusing_int_2;

}

void _activation_check_proc_0b_func_644969154(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_851520103(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_854910937(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xf] ^= _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_0b_func_552058224(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_0b_func_814348984(unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_854910937(_activatnvar_ser_digest, _activatnvar_confusing_chararray_5);
	_activation_check_proc_0b_func_552058224(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0b_func_672651006(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_414723615(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_so.mData[0x2];

}

void _activation_check_proc_0b_func_268804408(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0b_func_858274466(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b <<= _activatnvar_confusing_int_0;

}

void _activation_check_proc_0b_func_1781534480(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0b_func_44495644(char& _activatnvar_confusing_char_d, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_generic_iterator = 0;
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_d &= 0xd;

}

void _activation_check_proc_0b_func_142589598(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_0b_func_938835726(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("e37315ab-3cab-0a89-260d-928c03c88605");

	/* inline */ _activation_check_proc_0b_func_1408115783(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_9);
	_activation_check_proc_0b_func_856614949(_activatnvar_confusing_LLUUID_c, _activatnvar_section1);
}

void _activation_check_proc_0b_func_856614949(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] |= _activatnvar_section1.mData[0x7];

}

void _activation_check_proc_0b_func_1245366700(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0b_func_1661058769(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_e |= _activatnvar_confusing_int_8;

	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_0b_func_1896185247(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_chararray_4[0x8];

	/* inline */ _activation_check_proc_0b_func_1368683784(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_0b_func_1661058769(_activatnvar_combined_id, _activatnvar_pos, _activatnvar_confusing_int_e, _activatnvar_confusing_int_8);
	_activation_check_proc_0b_func_1245366700(_activatnvar_pos);
}

void _activation_check_proc_0b_func_596737132(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_0b_func_982623950(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_0b_func_1406089035(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0b_func_1118012608(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_8, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_t0, char& _activatnvar_confusing_char_d)
{
	
	_activation_check_proc_0b_func_596737132(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_7);
	_activation_check_proc_0b_func_1406089035(_activatnvar_pos);
	/* inline */ _activation_check_proc_0b_func_790688397(_activatnvar_confusing_char_d, _activatnvar_confusing_U8_6, _activatnvar_confusing_bool_4);
	/* inline */ _activation_check_proc_0b_func_354833904(_activatnvar_confusing_char_1, _activatnvar_confusing_U8_8);
	_activation_check_proc_0b_func_982623950(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_1019527124(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0b_func_957460020(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
	_activation_check_proc_0b_func_1019527124(_activatnvar_pos);
}

void _activation_check_proc_0b_func_1872843466(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_131175601(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x0] *= _activatnvar_secret.mData[0xd];

	_activation_check_proc_0b_func_1872843466(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_0b_func_567462324(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_0b_func_850394060(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xb] += _activatnvar_so.mData[0x4];

}

void _activation_check_proc_0b_func_1401380324(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x1] *= _activatnvar_code.mData[0x9];

}

void _activation_check_proc_0b_func_912725586(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_4.mData[0xd] += _activatnvar_confusing_chararray_8[0x7];

}

void _activation_check_proc_0b_func_538616959()
{
	
}

void _activation_check_proc_0b_func_1040879475(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_0b_func_746073671(unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_b, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_0b_func_1887542300(_activatnvar_confusing_U8_c, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_0b_func_1278687080(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("aa208145-3305-53cd-014b-35f5ed8cf977");

	/* inline */ _activation_check_proc_0b_func_1737915314(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_3, _activatnvar_confusing_U8_5, _activatnvar_confusing_char_5, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0b_func_49156341(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_f <<= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_0b_func_1812158139(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1539236464(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_5)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_5 <<= _activatnvar_confusing_char_a;

}

void _activation_check_proc_0b_func_920293271(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_5)
{
	
	_activation_check_proc_0b_func_1539236464(_activatnvar_confusing_char_a, _activatnvar_confusing_bool_e, _activatnvar_confusing_char_5);
	_activation_check_proc_0b_func_166225252();
}

void _activation_check_proc_0b_func_166225252()
{
	
}

void _activation_check_proc_0b_func_969246727(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_chararray_9[0x2];

}

void _activation_check_proc_0b_func_531460106(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_1)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_1 = 0x8;

}

void _activation_check_proc_0b_func_1711153519(bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_doaccount, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0b_func_898442248(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0b_func_255787875(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_a);
	_activation_check_proc_0b_func_531460106(_activatnvar_doaccount, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_0b_func_898442248(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1252115088(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1968252785()
{
	
}

void _activation_check_proc_0b_func_330541304(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_0b_func_773960022(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_doaccount;

}

void _activation_check_proc_0b_func_1226594332(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] *= _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_0b_func_577388829(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_0b_func_2102595910(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0b_func_239155867(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x3] |= _activatnvar_so.mData[0xa];

}

void _activation_check_proc_0b_func_953123649(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_614073553(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_7)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_0 = _activatnvar_confusing_char_7;

}

void _activation_check_proc_0b_func_1071756322(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x3] |= _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_0b_func_319473673(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_0b_func_1584557086(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0b_func_1311003231(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_section2;

}

void _activation_check_proc_0b_func_213322948(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x9] |= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_0b_func_1741856847(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x6] *= _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_0b_func_1632312183(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_123574341(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0b_func_701380707(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0b_func_382334035(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_0b_func_739362493(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0x5;

}

void _activation_check_proc_0b_func_945220938(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_0b_func_1109937033(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_940917485(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0b_func_945220938(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_U8_5);
	/* inline */ _activation_check_proc_0b_func_204755273(_activatnvar_confusing_U8_4);
	_activation_check_proc_0b_func_1109937033(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_80714345(char& _activatnvar_confusing_char_0, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d = 0x5;

	_activation_check_proc_0b_func_1781964029(_activatnvar_confusing_char_0);
}

void _activation_check_proc_0b_func_1781964029(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 <<= 0x5;

}

void _activation_check_proc_0b_func_696175998(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f += _activatnvar_generic_iterator;

}

void _activation_check_proc_0b_func_60956906(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] &= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_0b_func_320212405(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_e++;

	_activation_check_proc_0b_func_2039970785(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0b_func_2039970785(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_0b_func_1837441523(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_0;

	/* inline */ _activation_check_proc_0b_func_349169394(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_0b_func_81186578(_activatnvar_confusing_U8_9, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_0b_func_1343588735(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_0b_func_1343588735(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_0b_func_978524973(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] *= _activatnvar_confusing_LLUUID_a.mData[0xf];

}

void _activation_check_proc_0b_func_757077952(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_f >>= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_0b_func_1851795844(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_0b_func_891829220(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0b_func_1568930851(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_0b_func_1323501585(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x1] = _activatnvar_confusing_LLUUID_a.mData[0xf];

	/* inline */ _activation_check_proc_0b_func_274783187(_activatnvar_confusing_int_2);
}

void _activation_check_proc_0b_func_611703855(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_1.mData[0x7] ^= _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_0b_func_2005115086(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 |= 0xf;

}

void _activation_check_proc_0b_func_1056090544(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x6] ^= _activatnvar_confusing_LLUUID_b.mData[0xa];

}

void _activation_check_proc_0b_func_405689663(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_e |= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_0b_func_1059487905(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1439468811(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_0b_func_1059487905(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_1300076989(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] |= _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_0b_func_133031422(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_0b_func_952738914(unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x4] |= _activatnvar_confusing_chararray_e[0xb];

}

void _activation_check_proc_0b_func_702710279(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_f.mData[0x5];

}

void _activation_check_proc_0b_func_192687116(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_0b_func_1584075116(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_lace;

	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_0b_func_1007029283(_activatnvar_confusing_U8_e);
	_activation_check_proc_0b_func_952738914(_activatnvar_confusing_chararray_e);
	_activation_check_proc_0b_func_702710279(_activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_0b_func_192687116(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_0b_func_89623637(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_a.mData[0x4] >>= _activatnvar_so.mData[0x4];

}

void _activation_check_proc_0b_func_125411131(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_0b_func_358010664(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0b_func_344859581(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_7 = true;

	_activatnvar_confusing_LLUUID_f.mData[0x3] *= _activatnvar_confusing_chararray_2[0x7];

}

void _activation_check_proc_0b_func_163312308(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_0[0x8] <<= _activatnvar_section1.mData[0x3];

}

void _activation_check_proc_0b_func_232816905(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_0b_func_1504304935(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_0b_func_232816905(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_0b_func_1163988172(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xb] = _activatnvar_confusing_LLUUID_a.mData[0xc];

}

void _activation_check_proc_0b_func_193832540(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
	/* inline */ _activation_check_proc_0b_func_1110452185(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_7);
	_activation_check_proc_0b_func_213585501(_activatnvar_confusing_LLUUID_2);
	_activation_check_proc_0b_func_1376077687(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0b_func_213585501(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x5] ^= _activatnvar_confusing_LLUUID_2.mData[0x9];

}

void _activation_check_proc_0b_func_1376077687(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("7c0e4b66-52bd-35a3-ed89-bb0a2001c102");

}

void _activation_check_proc_0b_func_2144277532(bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0b_func_282933278(int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_1 &= _activatnvar_confusing_int_0;

	_activation_check_proc_0b_func_2144277532(_activatnvar_confusing_bool_c);
}

void _activation_check_proc_0b_func_1747892761(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] >>= _activatnvar_confusing_chararray_e[0x9];

}

void _activation_check_proc_0b_func_1672519468(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_chararray_4[0xc] = _activatnvar_confusing_chararray_0[0x5];

	_activation_check_proc_0b_func_1747892761(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_0b_func_883305847(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_0b_func_695263028(U8& _activatnvar_t0, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_0b_func_883305847(_activatnvar_confusing_int_6);
}

void _activation_check_proc_0b_func_971903777(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_0b_func_212258478(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_c)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_c += _activatnvar_confusing_char_e;

}

void _activation_check_proc_0b_func_1697134195(LLUUID& _activatnvar_so, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_3, U8& _activatnvar_pos, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_c, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_e)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_0b_func_212258478(_activatnvar_confusing_bool_4, _activatnvar_confusing_char_e, _activatnvar_confusing_char_c);
	/* inline */ _activation_check_proc_0b_func_509040453(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_0b_func_971903777(_activatnvar_confusing_char_0, _activatnvar_confusing_U8_3);
	_activation_check_proc_0b_func_2105399463(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
	_activation_check_proc_0b_func_652352236(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0b_func_652352236(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x6] <<= _activatnvar_combined_id.mData[0x6];

}

void _activation_check_proc_0b_func_2105399463(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_0b_func_1999441793(int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_int_9 &= 0xff;

	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0b_func_2013103399(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0b_func_823693561(_activatnvar_confusing_char_8);
}

void _activation_check_proc_0b_func_1319789033(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_0b_func_167821955(_activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_167821955(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_582035620(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_0b_func_1677682961(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_0b_func_858482620(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x3] <<= _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_0b_func_1518613222(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_e.mData[0x2];

}

void _activation_check_proc_0b_func_2060395458(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1151653281(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_842988342(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_7;

	_activation_check_proc_0b_func_1048850934(_activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_0b_func_1481951378(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_0b_func_1481951378(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_0b_func_1048850934(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_0b_func_952528497(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_0b_func_1484433446();
	_activation_check_proc_0b_func_1106439979(_activatnvar_t0);
	_activation_check_proc_0b_func_1893673437(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0b_func_1484433446()
{
	
}

void _activation_check_proc_0b_func_1893673437(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_a[0xe] &= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_0b_func_1106439979(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0b_func_12317985(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_3[0xa] += _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_0b_func_320034492(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_3, DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
	_activation_check_proc_0b_func_12317985(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0b_func_770254174(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_LLUUID_c.mData[0x8];

}

void _activation_check_proc_0b_func_1473093018(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_267285551(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_9[0x2] += _activatnvar_mac_digest[0xa];

	/* inline */ _activation_check_proc_0b_func_917883663(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	_activation_check_proc_0b_func_1674736852();
}

void _activation_check_proc_0b_func_1674736852()
{
	
}

void _activation_check_proc_0b_func_1039692530(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_0b_func_329193730()
{
	
}

void _activation_check_proc_0b_func_1621553219(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_8)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_8 = _activatnvar_confusing_U8_3;

}

void _activation_check_proc_0b_func_828689300(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_0b_func_36855801(bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_int_7 ^= _activatnvar_confusing_int_e;

	/* inline */ _activation_check_proc_0b_func_591850055(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0b_func_1904564730(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_0b_func_1365062359(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0b_func_314908549(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0b_func_1759350773(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] <<= _activatnvar_confusing_chararray_2[0x7];

}

void _activation_check_proc_0b_func_632408702(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_a[0x8] &= _activatnvar_confusing_chararray_0[0x9];

}

void _activation_check_proc_0b_func_887954235(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_0b_func_1307619460(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_7.mData[0x2] *= _activatnvar_confusing_chararray_9[0xb];

	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0b_func_427670719(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
	_activation_check_proc_0b_func_480147324(_activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0b_func_480147324(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_0b_func_1745468344(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0b_func_1546586239(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_0b_func_949789519(LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0b_func_2063254385(unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x9] |= _activatnvar_confusing_chararray_3[0xa];

}

void _activation_check_proc_0b_func_1966152639(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_0b_func_345486315(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_3[0xa] |= _activatnvar_confusing_LLUUID_a.mData[0xc];

}

void _activation_check_proc_0b_func_356459890(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x9] ^= _activatnvar_combined_id.mData[0xa];

	_activation_check_proc_0b_func_345486315(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0b_func_1670585302(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_0b_func_1102584077(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x0] >>= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_0b_func_1704297750(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 *= 0x7;

}

void _activation_check_proc_0b_func_1430746526(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] = _activatnvar_secret.mData[0xd];

	_activatnvar_confusing_char_f += _activatnvar_confusing_chararray_7[0x7];

	_activation_check_proc_0b_func_1410173061();
	_activation_check_proc_0b_func_117174100(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_0b_func_1410173061()
{
	
}

void _activation_check_proc_0b_func_117174100(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0b_func_45919017(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_5, char* _activatnvar_strbuf_0, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_int_6++;

	/* inline */ _activation_check_proc_0b_func_1894219714(_activatnvar_confusing_U8_2, _activatnvar_confusing_chararray_5);
	_activation_check_proc_0b_func_1030150236(_activatnvar_strbuf_0, _activatnvar_secret);
}

void _activation_check_proc_0b_func_1030150236(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0b_func_1466863111(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_875643554(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_131618966(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_875643554(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_0b_func_900430871(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] = _activatnvar_combined_id.mData[0x2];

}

void _activation_check_proc_0b_func_1965657564(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_586238290(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_691219645(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_0b_func_739700933(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0b_func_938064776(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_6[0xe] *= _activatnvar_confusing_chararray_8[0xa];

	_activation_check_proc_0b_func_1012574210(_activatnvar_confusing_char_9);
}

void _activation_check_proc_0b_func_1012574210(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= 0x4;

}

void _activation_check_proc_0b_func_26939386(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_0.mData[0x4] &= _activatnvar_so.mData[0x1];

}

void _activation_check_proc_0b_func_635615947(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0b_func_1509648417(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1926755514(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_0b_func_8121027(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_2137125889(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_f++;

	/* inline */ _activation_check_proc_0b_func_793518584(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_0b_func_922825041(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0b_func_801656507(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0b_func_801656507(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("49b8063f-1d4a-66c4-6074-7fbb5347d88e");

}

void _activation_check_proc_0b_func_1677012545(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0b_func_1747119535(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_1677012545(_activatnvar_confusing_int_3);
	_activation_check_proc_0b_func_284424503(_activatnvar_confusing_int_9);
	/* inline */ _activation_check_proc_0b_func_794216580(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
	_activation_check_proc_0b_func_1444416083(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0b_func_1444416083(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x0] == 0xc) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_0b_func_284424503(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_0b_func_1159015778(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
	_activatnvar_confusing_LLUUID_c.mData[0xd] += _activatnvar_confusing_chararray_e[0xf];

}

void _activation_check_proc_0b_func_214752692(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1519839445(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_253236813(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_0b_func_293942601(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0b_func_201346179(_activatnvar_confusing_chararray_e, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_0b_func_201346179(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 >>= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_0b_func_1357481950(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0b_func_587546366(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xd] >>= _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_0b_func_20130812(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_0b_func_1680006154(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_1);
	_activation_check_proc_0b_func_587546366(_activatnvar_section1, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_0b_func_1357481950(_activatnvar_t0);
}

void _activation_check_proc_0b_func_1557458981(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x1] != 0x9) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0b_func_1409873078(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1971892526(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_chararray_4[0x0] *= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_0b_func_1391262106(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 >>= 0x7;

}

void _activation_check_proc_0b_func_1202399777(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] <<= _activatnvar_confusing_LLUUID_7.mData[0x0];

	_activation_check_proc_0b_func_1391262106(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_0b_func_385959107(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_0b_func_263906334(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 41; _activatnvar_strbuf_0[0] ^= 24; _activatnvar_strbuf_0[1] = 126; _activatnvar_strbuf_0[1] ^= 78; _activatnvar_strbuf_0[2] = 79; _activatnvar_strbuf_0[2] ^= 124; _activatnvar_strbuf_0[3] = 80; _activatnvar_strbuf_0[3] ^= 100; _activatnvar_strbuf_0[4] = 28; _activatnvar_strbuf_0[4] ^= 126; _activatnvar_strbuf_0[5] = 29; _activatnvar_strbuf_0[5] ^= 123; _activatnvar_strbuf_0[6] = 70; _activatnvar_strbuf_0[6] ^= 32; _activatnvar_strbuf_0[7] = 19; _activatnvar_strbuf_0[7] ^= 37; _activatnvar_strbuf_0[8] = 103; _activatnvar_strbuf_0[8] ^= 74; _activatnvar_strbuf_0[9] = 91; _activatnvar_strbuf_0[9] ^= 57; _activatnvar_strbuf_0[10] = 53; _activatnvar_strbuf_0[10] ^= 2; _activatnvar_strbuf_0[11] = 108; _activatnvar_strbuf_0[11] ^= 88; _activatnvar_strbuf_0[12] = 3; _activatnvar_strbuf_0[12] ^= 51; _activatnvar_strbuf_0[13] = 50; _activatnvar_strbuf_0[13] ^= 31; _activatnvar_strbuf_0[14] = 78; _activatnvar_strbuf_0[14] ^= 126; _activatnvar_strbuf_0[15] = 66; _activatnvar_strbuf_0[15] ^= 36; _activatnvar_strbuf_0[16] = 79; _activatnvar_strbuf_0[16] ^= 45; _activatnvar_strbuf_0[17] = 14; _activatnvar_strbuf_0[17] ^= 106; _activatnvar_strbuf_0[18] = 62; _activatnvar_strbuf_0[18] ^= 19; _activatnvar_strbuf_0[19] = 14; _activatnvar_strbuf_0[19] ^= 63; _activatnvar_strbuf_0[20] = 106; _activatnvar_strbuf_0[20] ^= 9; _activatnvar_strbuf_0[21] = 120; _activatnvar_strbuf_0[21] ^= 26; _activatnvar_strbuf_0[22] = 51; _activatnvar_strbuf_0[22] ^= 85; _activatnvar_strbuf_0[23] = 30; _activatnvar_strbuf_0[23] ^= 51; _activatnvar_strbuf_0[24] = 44; _activatnvar_strbuf_0[24] ^= 24; _activatnvar_strbuf_0[25] = 50; _activatnvar_strbuf_0[25] ^= 4; _activatnvar_strbuf_0[26] = 123; _activatnvar_strbuf_0[26] ^= 78; _activatnvar_strbuf_0[27] = 95; _activatnvar_strbuf_0[27] ^= 60; _activatnvar_strbuf_0[28] = 19; _activatnvar_strbuf_0[28] ^= 35; _activatnvar_strbuf_0[29] = 102; _activatnvar_strbuf_0[29] ^= 87; _activatnvar_strbuf_0[30] = 94; _activatnvar_strbuf_0[30] ^= 58; _activatnvar_strbuf_0[31] = 87; _activatnvar_strbuf_0[31] ^= 101; _activatnvar_strbuf_0[32] = 56; _activatnvar_strbuf_0[32] ^= 9; _activatnvar_strbuf_0[33] = 119; _activatnvar_strbuf_0[33] ^= 21; _activatnvar_strbuf_0[34] = 44; _activatnvar_strbuf_0[34] ^= 72; _activatnvar_strbuf_0[35] = 102; _activatnvar_strbuf_0[35] ^= 83; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0b_func_155282923(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_chararray_c[0x8];

}

void _activation_check_proc_0b_func_1977701779(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_char_0 >>= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_0b_func_1732614092(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xf] &= _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_0b_func_1114885409(U8& _activatnvar_confusing_U8_1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_c, char& _activatnvar_feat, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_U8_1;

	/* inline */ _activation_check_proc_0b_func_520150423(_activatnvar_confusing_int_c);
	_activation_check_proc_0b_func_384689672(_activatnvar_generic_iterator);
	_activation_check_proc_0b_func_1825721838(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_doaccount, _activatnvar_feat);
	/* inline */ _activation_check_proc_0b_func_1320286479(_activatnvar_feat, _activatnvar_lace);
}

void _activation_check_proc_0b_func_1825721838(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0b_func_384689672(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1584126048(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_a[0x0] >>= _activatnvar_so.mData[0x4];

}

void _activation_check_proc_0b_func_852077084(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_0b_func_1622759226(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_U8_0 += _activatnvar_confusing_chararray_c[0xe];

	/* inline */ _activation_check_proc_0b_func_1234822487(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_0b_func_141497042(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_261925249(char& _activatnvar_confusing_char_d, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_0b_func_1867519600(_activatnvar_confusing_char_d);
}

void _activation_check_proc_0b_func_1867519600(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_0b_func_2058524233(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_5[0x7] |= _activatnvar_confusing_LLUUID_5.mData[0x7];

}

void _activation_check_proc_0b_func_2011812966(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0b_func_2058524233(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_0b_func_864150230(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_0b_func_683311746(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_0b_func_1384565891(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1890714592(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_0b_func_1834282112(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_4)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0b_func_1890714592(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0b_func_298262541(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0b_func_1113380617(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_b.mData[0x4];

}

void _activation_check_proc_0b_func_1322553186(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_0b_func_1522583303(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_0b_func_1422576596(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x9] != _activatnvar_t1) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0b_func_757041589(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_char_6;

}

void _activation_check_proc_0b_func_2131398625(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_c &= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_0b_func_1797039688(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xf] <<= _activatnvar_confusing_chararray_6[0x6];

	_activation_check_proc_0b_func_1808157299(_activatnvar_confusing_LLUUID_1, _activatnvar_secret);
}

void _activation_check_proc_0b_func_1808157299(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] = _activatnvar_secret.mData[0xf];

}

void _activation_check_proc_0b_func_2111366775(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0b_func_1000891796(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_LLUUID_c.mData[0x6];

}

void _activation_check_proc_0b_func_1496829967(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_0b_func_300531676(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_section1.mData[0xe];

}

void _activation_check_proc_0b_func_643188264(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] >>= _activatnvar_confusing_LLUUID_5.mData[0x4];

	_activation_check_proc_0b_func_304414801(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0b_func_304414801(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("512e52f9-c206-f1f9-46b2-af9a30a0dfcb");

}

void _activation_check_proc_0b_func_1876167986(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e *= 0x8;

}

void _activation_check_proc_0b_func_358406965(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_section2)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x7] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_9 = true;

	/* inline */ _activation_check_proc_0b_func_1683291196(_activatnvar_confusing_LLUUID_b, _activatnvar_section2);
}

void _activation_check_proc_0b_func_2100411158(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_chararray_2[0x0] *= _activatnvar_confusing_LLUUID_9.mData[0x2];

	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_0b_func_2059397531(_activatnvar_generic_bool_0);
}

void _activation_check_proc_0b_func_1350507756(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0b_func_1661916989(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_0b_func_432456118(int& _activatnvar_confusing_int_5, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_5 ^= 0xc;

	_activation_check_proc_0b_func_1661916989(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_0b_func_556817266(U8& _activatnvar_pos, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_8, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_8++;

	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
	_activation_check_proc_0b_func_1152890637(_activatnvar_t0, _activatnvar_confusing_bool_9, _activatnvar_confusing_bool_d, _activatnvar_doaccount, _activatnvar_pos, _activatnvar_so);
	/* inline */ _activation_check_proc_0b_func_1763938187();
}

void _activation_check_proc_0b_func_1152890637(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_doaccount, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0b_func_126478907(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] |= _activatnvar_section1.mData[0xd];

}

void _activation_check_proc_0b_func_528091607(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xa] != 0xf) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0b_func_1719019502(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 *= 0x5;

}

void _activation_check_proc_0b_func_2101491814(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_e;

	/* inline */ _activation_check_proc_0b_func_1821748157(_activatnvar_confusing_LLUUID_c);
	_activation_check_proc_0b_func_1111478104(_activatnvar_generic_bool_1, _activatnvar_confusing_char_4, _activatnvar_confusing_U8_b);
	_activation_check_proc_0b_func_528091607(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_4, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_0b_func_1842590268(_activatnvar_confusing_U8_c, _activatnvar_confusing_U8_a, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_0b_func_1287685717(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_0b_func_300314725();
	_activation_check_proc_0b_func_1719019502(_activatnvar_confusing_int_7);
}

void _activation_check_proc_0b_func_1111478104(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_4 <<= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_0b_func_789009065(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = 0x7;

}

void _activation_check_proc_0b_func_1402384786(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0b_func_1005349927(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("e6788d7e-acd4-f94f-16d0-3172e35147e6");

	_activation_check_proc_0b_func_1402384786(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_0b_func_745095376()
{
	
}

void _activation_check_proc_0b_func_1297298867(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0b_func_1950340080(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x6] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0b_func_288218703(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_doaccount = false;
	/* inline */ _activation_check_proc_0b_func_302989881(_activatnvar_confusing_char_0, _activatnvar_confusing_char_9);
	_activation_check_proc_0b_func_644117288(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_2);
	_activation_check_proc_0b_func_1950340080(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_U8_0, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_0b_func_644117288(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0b_func_186426728(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= _activatnvar_confusing_int_0;

}

void _activation_check_proc_0b_func_196784486(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_c &= _activatnvar_generic_bool_0;

	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_d *= _activatnvar_confusing_U8_9;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
