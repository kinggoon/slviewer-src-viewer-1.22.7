// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation05.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 05

void _activation_check_proc_05_func_142850765(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_868709615(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_7 = true;

	/* inline */ _activation_check_proc_05_func_1167838039(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_05_func_839215920(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] ^= _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_05_func_332273402(LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_05_func_169580911(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_37945010(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_05_func_984917166(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x6] == 0x0) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_05_func_1981060194(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_f++;

	/* inline */ _activation_check_proc_05_func_52480020(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_05_func_2097455278(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_05_func_1701530771(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_chararray_8[0xa];

	_activation_check_proc_05_func_2140348517(_activatnvar_confusing_chararray_0, _activatnvar_confusing_char_4);
}

void _activation_check_proc_05_func_2140348517(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_05_func_1260950415(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_U8_8;

	_activation_check_proc_05_func_509248940(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_05_func_509248940(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_05_func_1889165428(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_845026426(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("e3ba25b4-f465-6510-8d6d-298f28f36eb2");

}

void _activation_check_proc_05_func_141895258(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_pos, char& _activatnvar_confusing_char_8)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_8 >>= _activatnvar_pos;

}

void _activation_check_proc_05_func_373391356(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_pos, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activation_check_proc_05_func_141895258(_activatnvar_confusing_bool_3, _activatnvar_pos, _activatnvar_confusing_char_8);
}

void _activation_check_proc_05_func_1505493081(unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x3] &= _activatnvar_confusing_chararray_1[0xb];

}

void _activation_check_proc_05_func_2090165421(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] |= _activatnvar_confusing_LLUUID_a.mData[0x0];

	_activatnvar_confusing_LLUUID_0.mData[0x8] <<= _activatnvar_fscked.mData[0xf];

}

void _activation_check_proc_05_func_288046953(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] ^= _activatnvar_confusing_LLUUID_2.mData[0x3];

	/* inline */ _activation_check_proc_05_func_316975726(_activatnvar_confusing_char_9, _activatnvar_confusing_bool_5, _activatnvar_confusing_U8_e);
	_activation_check_proc_05_func_2090165421(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_0, _activatnvar_fscked, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_05_func_427573590(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_d <<= _activatnvar_confusing_chararray_7[0x3];

}

void _activation_check_proc_05_func_675086512(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_204667351(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_2[0x2] *= _activatnvar_confusing_chararray_0[0x0];

	/* inline */ _activation_check_proc_05_func_905047514(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_05_func_675086512(_activatnvar_generic_iterator);
	_activation_check_proc_05_func_565324865(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_05_func_565324865(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_154273906(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_e.mData[0x0];

}

void _activation_check_proc_05_func_1130594058(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_5 += _activatnvar_confusing_char_f;

}

void _activation_check_proc_05_func_755001830(bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_e = _activatnvar_doaccount;

	/* inline */ _activation_check_proc_05_func_1971964527(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id);
}

void _activation_check_proc_05_func_1927066572(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x1] != _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_05_func_1626991795(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_a[0x2] >>= _activatnvar_confusing_chararray_3[0x1];

}

void _activation_check_proc_05_func_707501816(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1465152147(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_LLUUID_2.mData[0xa];

	_activation_check_proc_05_func_707501816(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_636780100(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_f[0xb] >>= _activatnvar_ser_digest[0x3];

	/* inline */ _activation_check_proc_05_func_1233059818(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_05_func_895537653(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_1.mData[0xb];

}

void _activation_check_proc_05_func_1104424177(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_05_func_2129837678(_activatnvar_confusing_LLUUID_0, _activatnvar_section2);
}

void _activation_check_proc_05_func_2129837678(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_section2;

}

void _activation_check_proc_05_func_35476753(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_d, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_05_func_292902585(_activatnvar_confusing_char_d, _activatnvar_confusing_char_3, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_05_func_1664013411(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
	_activation_check_proc_05_func_8273463(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_05_func_637922315(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_05_func_8273463(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] |= _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_05_func_637922315(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_c.mData[0xa];

}

void _activation_check_proc_05_func_160453041(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_chararray_d[0x7] &= _activatnvar_confusing_chararray_1[0x0];

	_activation_check_proc_05_func_758415607(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_char_7, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_05_func_758415607(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xe] != _activatnvar_confusing_char_7) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_05_func_169046485(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_f <<= _activatnvar_confusing_chararray_4[0x4];

}

void _activation_check_proc_05_func_300300180(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_05_func_1028958156(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("a7bd5f1e-9a2f-6a1d-c1dd-be1817503b9c");

	_activation_check_proc_05_func_611531970(_activatnvar_t0, _activatnvar_confusing_U8_6, _activatnvar_confusing_chararray_b);
	_activation_check_proc_05_func_300300180(_activatnvar_t0);
}

void _activation_check_proc_05_func_611531970(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_6 ^= _activatnvar_confusing_chararray_b[0x9];

	_activatnvar_t0 &= 7;
}

void _activation_check_proc_05_func_1182885986(LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_05_func_2037710081(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] |= _activatnvar_code.mData[0xb];

}

void _activation_check_proc_05_func_2085646724(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_05_func_1065243318(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 >>= 0x1;

}

void _activation_check_proc_05_func_1548684375(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 >>= _activatnvar_confusing_chararray_a[0x4];

}

void _activation_check_proc_05_func_1687442548(char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x9] != 0xb) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_05_func_548436329(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_doaccount);
}

void _activation_check_proc_05_func_548436329(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_05_func_442744703(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator++;
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1174488954(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_3 *= _activatnvar_confusing_char_7;

}

void _activation_check_proc_05_func_1785670685(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_7)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_05_func_1174488954(_activatnvar_confusing_bool_1, _activatnvar_confusing_U8_3, _activatnvar_confusing_char_7);
}

void _activation_check_proc_05_func_2007807696(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 <<= _activatnvar_confusing_chararray_d[0x4];

}

void _activation_check_proc_05_func_976842209(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_05_func_2060410389(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_05_func_287300837(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_05_func_265751291(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_05_func_517607470(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_05_func_1204355888(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_0 |= _activatnvar_combined_id.mData[0xe];

	/* inline */ _activation_check_proc_05_func_1845489356(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1383290342(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_combined_id, char* _activatnvar_strbuf_0, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
	_activation_check_proc_05_func_173401877(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_f);
	_activation_check_proc_05_func_884276162(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_d);
	_activation_check_proc_05_func_143858489(_activatnvar_strbuf_0);
}

void _activation_check_proc_05_func_884276162(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_05_func_143858489(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 82; _activatnvar_strbuf_0[0] ^= 107; _activatnvar_strbuf_0[1] = 115; _activatnvar_strbuf_0[1] ^= 67; _activatnvar_strbuf_0[2] = 69; _activatnvar_strbuf_0[2] ^= 118; _activatnvar_strbuf_0[3] = 86; _activatnvar_strbuf_0[3] ^= 98; _activatnvar_strbuf_0[4] = 73; _activatnvar_strbuf_0[4] ^= 43; _activatnvar_strbuf_0[5] = 73; _activatnvar_strbuf_0[5] ^= 45; _activatnvar_strbuf_0[6] = 46; _activatnvar_strbuf_0[6] ^= 27; _activatnvar_strbuf_0[7] = 41; _activatnvar_strbuf_0[7] ^= 30; _activatnvar_strbuf_0[8] = 122; _activatnvar_strbuf_0[8] ^= 87; _activatnvar_strbuf_0[9] = 119; _activatnvar_strbuf_0[9] ^= 21; _activatnvar_strbuf_0[10] = 125; _activatnvar_strbuf_0[10] ^= 74; _activatnvar_strbuf_0[11] = 12; _activatnvar_strbuf_0[11] ^= 104; _activatnvar_strbuf_0[12] = 42; _activatnvar_strbuf_0[12] ^= 18; _activatnvar_strbuf_0[13] = 63; _activatnvar_strbuf_0[13] ^= 18; _activatnvar_strbuf_0[14] = 42; _activatnvar_strbuf_0[14] ^= 30; _activatnvar_strbuf_0[15] = 117; _activatnvar_strbuf_0[15] ^= 22; _activatnvar_strbuf_0[16] = 27; _activatnvar_strbuf_0[16] ^= 121; _activatnvar_strbuf_0[17] = 61; _activatnvar_strbuf_0[17] ^= 95; _activatnvar_strbuf_0[18] = 39; _activatnvar_strbuf_0[18] ^= 10; _activatnvar_strbuf_0[19] = 51; _activatnvar_strbuf_0[19] ^= 11; _activatnvar_strbuf_0[20] = 57; _activatnvar_strbuf_0[20] ^= 92; _activatnvar_strbuf_0[21] = 9; _activatnvar_strbuf_0[21] ^= 107; _activatnvar_strbuf_0[22] = 108; _activatnvar_strbuf_0[22] ^= 10; _activatnvar_strbuf_0[23] = 87; _activatnvar_strbuf_0[23] ^= 122; _activatnvar_strbuf_0[24] = 2; _activatnvar_strbuf_0[24] ^= 54; _activatnvar_strbuf_0[25] = 0; _activatnvar_strbuf_0[25] ^= 54; _activatnvar_strbuf_0[26] = 95; _activatnvar_strbuf_0[26] ^= 106; _activatnvar_strbuf_0[27] = 74; _activatnvar_strbuf_0[27] ^= 41; _activatnvar_strbuf_0[28] = 55; _activatnvar_strbuf_0[28] ^= 7; _activatnvar_strbuf_0[29] = 46; _activatnvar_strbuf_0[29] ^= 29; _activatnvar_strbuf_0[30] = 6; _activatnvar_strbuf_0[30] ^= 101; _activatnvar_strbuf_0[31] = 65; _activatnvar_strbuf_0[31] ^= 115; _activatnvar_strbuf_0[32] = 34; _activatnvar_strbuf_0[32] ^= 19; _activatnvar_strbuf_0[33] = 102; _activatnvar_strbuf_0[33] ^= 7; _activatnvar_strbuf_0[34] = 75; _activatnvar_strbuf_0[34] ^= 47; _activatnvar_strbuf_0[35] = 14; _activatnvar_strbuf_0[35] ^= 59; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_05_func_173401877(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_c[0x5] *= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_05_func_1736973473(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_char_f;

}

void _activation_check_proc_05_func_1694321240(unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x1] &= _activatnvar_confusing_chararray_2[0x7];

}

void _activation_check_proc_05_func_764195988(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_05_func_1048836563(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 >>= _activatnvar_confusing_chararray_4[0xc];

	_activation_check_proc_05_func_448805116(_activatnvar_pos);
}

void _activation_check_proc_05_func_448805116(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_05_func_1283445122(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_05_func_818869047(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] &= _activatnvar_confusing_LLUUID_e.mData[0xd];

}

void _activation_check_proc_05_func_856966441()
{
	
}

void _activation_check_proc_05_func_2019622155(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xf] |= _activatnvar_confusing_chararray_e[0x3];

	_activation_check_proc_05_func_818869047(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_05_func_856966441();
}

void _activation_check_proc_05_func_1326552278(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_05_func_510127253(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xc] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_d = true;

	_activation_check_proc_05_func_292751783(_activatnvar_confusing_char_a);
}

void _activation_check_proc_05_func_292751783(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a += 0xe;

}

void _activation_check_proc_05_func_805095805(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e += _activatnvar_confusing_int_3;

}

void _activation_check_proc_05_func_1841453398(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_05_func_1942670234(U8& _activatnvar_t0, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_1)
{
	
	_activatnvar_confusing_int_0 &= _activatnvar_confusing_int_1;

	_activation_check_proc_05_func_1841453398(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_05_func_1398733213()
{
	
}

void _activation_check_proc_05_func_1496569816(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_05_func_1070322309(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_05_func_1693677162(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xd] == _activatnvar_feat) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_05_func_151440777();
}

void _activation_check_proc_05_func_151440777()
{
	
}

void _activation_check_proc_05_func_1451439502(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xa] >>= _activatnvar_confusing_chararray_3[0x0];

	_activation_check_proc_05_func_455233589(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_455233589(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1126710636(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_c *= 0x9;

}

void _activation_check_proc_05_func_462094174(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("222c10b6-9c5d-6d83-551b-d544145531d5");

	_activation_check_proc_05_func_2068768084(_activatnvar_confusing_bool_e, _activatnvar_confusing_U8_d, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_05_func_2068768084(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_d &= 0x9;

	if(_activatnvar_confusing_LLUUID_3.mData[0xb] == 0x9) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_05_func_907016527(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_chararray_5[0x2];

	_activation_check_proc_05_func_215298858(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_05_func_1297639751(_activatnvar_combined_id, _activatnvar_confusing_chararray_6);
	_activation_check_proc_05_func_743897396(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_05_func_743897396(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] += _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_05_func_1297639751(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x6] ^= _activatnvar_combined_id.mData[0xb];

}

void _activation_check_proc_05_func_215298858(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] &= _activatnvar_confusing_chararray_9[0x1];

}

void _activation_check_proc_05_func_876885394(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x3] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_05_func_33154629(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_f.mData[0x6];

}

void _activation_check_proc_05_func_59411630(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_a ^= _activatnvar_confusing_char_a;

	_activation_check_proc_05_func_293333652(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_6, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_05_func_293333652(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_05_func_1597205359(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1820212062(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xd] += _activatnvar_confusing_chararray_2[0x8];

}

void _activation_check_proc_05_func_2095489358(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_05_func_1820212062(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_05_func_918516884(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_f.mData[0x4];

}

void _activation_check_proc_05_func_1864308203(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_05_func_1230214501(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_958429779(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1235035805(LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_section1.mData[0xc];

	if(_activatnvar_confusing_LLUUID_1.mData[0x9] == 0x6) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_05_func_1714365702(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1172761918(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1327466084(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] = _activatnvar_confusing_LLUUID_6.mData[0xd];

}

void _activation_check_proc_05_func_684242690(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_LLUUID_f.mData[0x5];

}

void _activation_check_proc_05_func_102278722(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_05_func_956559881(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_05_func_536989753(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_05_func_1692843776(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_05_func_2093844510(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("194d4f7d-8058-cfad-8141-e373de191715");

}

void _activation_check_proc_05_func_1206748360(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("ad82a56c-3cf5-33bd-648b-b3c184b745d1");

}

void _activation_check_proc_05_func_1865210689(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= _activatnvar_confusing_int_6;

}

void _activation_check_proc_05_func_679809680(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_e)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x1] == _activatnvar_confusing_char_e) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_05_func_1489723833(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1832349313(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1718319684(bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_05_func_1061305258(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_char_f |= _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_05_func_2085502170(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] |= _activatnvar_confusing_LLUUID_6.mData[0xa];

}

void _activation_check_proc_05_func_979119488(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_05_func_464401854(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xf] <<= _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_05_func_1960604301(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_245539566(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_1[0x3] ^= _activatnvar_confusing_LLUUID_b.mData[0x4];

	_activation_check_proc_05_func_1704368993(_activatnvar_confusing_char_c, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_05_func_1704368993(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_chararray_e[0x2];

}

void _activation_check_proc_05_func_1424402897(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xc] ^= _activatnvar_ser_digest[0x4];

}

void _activation_check_proc_05_func_623353945(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] <<= _activatnvar_confusing_LLUUID_6.mData[0xe];

}

void _activation_check_proc_05_func_1540483061(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_05_func_1312838917(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] *= _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_05_func_1421916333()
{
	
}

void _activation_check_proc_05_func_1526737300(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_05_func_521760004(_activatnvar_generic_bool_1, _activatnvar_generic_iterator, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_05_func_1141145888(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_char_9++;

	_activation_check_proc_05_func_250992304(_activatnvar_confusing_int_f, _activatnvar_confusing_int_8);
	_activation_check_proc_05_func_1312656768(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_b, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_05_func_250992304(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_f >>= 0xa;

	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_05_func_1312656768(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x7] == 0xf) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_05_func_1300081095(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_05_func_1863099252(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_05_func_639123483(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_05_func_1413556883(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_05_func_1871540624(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_05_func_1782744517(_activatnvar_confusing_char_2, _activatnvar_confusing_chararray_2);
	_activation_check_proc_05_func_639123483(_activatnvar_confusing_int_3);
	_activation_check_proc_05_func_796428294(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_05_func_796428294(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] |= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_05_func_1667479051(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_05_func_326891674(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0x5;

	_activation_check_proc_05_func_1667479051(_activatnvar_confusing_U8_c, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_05_func_601622377(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 >>= _activatnvar_confusing_char_d;

}

void _activation_check_proc_05_func_698667280(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_05_func_867488856(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_05_func_1356092360(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_890680822(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("00412699-07e9-2ed5-f970-905facdc8acf");

}

void _activation_check_proc_05_func_793926936(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_05_func_380772240(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1101855478()
{
	
}

void _activation_check_proc_05_func_804346763(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_05_func_1479347112(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_05_func_1811888334(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("a45d5123-19b6-4c85-6927-70121ced521a");

}

void _activation_check_proc_05_func_1617837951(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_6 |= 0xd;

}

void _activation_check_proc_05_func_141964517(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_05_func_800092739(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_05_func_141964517(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_05_func_780329717(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_05_func_1993357930(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_05_func_1512080826(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_05_func_1449532320(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x7] == 0xe) _activatnvar_confusing_bool_b = true;

	_activation_check_proc_05_func_1206275013(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_05_func_1206275013(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_LLUUID_9.mData[0xe];

}

void _activation_check_proc_05_func_1639578712(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x8] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_0;

	/* inline */ _activation_check_proc_05_func_70862509(_activatnvar_confusing_char_b, _activatnvar_secret);
}

void _activation_check_proc_05_func_777081022(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_8)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_3 <<= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_05_func_50461939(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_05_func_1122338220(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_05_func_1739310961(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 51; _activatnvar_strbuf_0[0] ^= 5; _activatnvar_strbuf_0[1] = 35; _activatnvar_strbuf_0[1] ^= 19; _activatnvar_strbuf_0[2] = 69; _activatnvar_strbuf_0[2] ^= 113; _activatnvar_strbuf_0[3] = 82; _activatnvar_strbuf_0[3] ^= 99; _activatnvar_strbuf_0[4] = 107; _activatnvar_strbuf_0[4] ^= 88; _activatnvar_strbuf_0[5] = 8; _activatnvar_strbuf_0[5] ^= 107; _activatnvar_strbuf_0[6] = 1; _activatnvar_strbuf_0[6] ^= 49; _activatnvar_strbuf_0[7] = 90; _activatnvar_strbuf_0[7] ^= 104; _activatnvar_strbuf_0[8] = 126; _activatnvar_strbuf_0[8] ^= 83; _activatnvar_strbuf_0[9] = 8; _activatnvar_strbuf_0[9] ^= 56; _activatnvar_strbuf_0[10] = 12; _activatnvar_strbuf_0[10] ^= 62; _activatnvar_strbuf_0[11] = 75; _activatnvar_strbuf_0[11] ^= 127; _activatnvar_strbuf_0[12] = 6; _activatnvar_strbuf_0[12] ^= 48; _activatnvar_strbuf_0[13] = 102; _activatnvar_strbuf_0[13] ^= 75; _activatnvar_strbuf_0[14] = 112; _activatnvar_strbuf_0[14] ^= 64; _activatnvar_strbuf_0[15] = 87; _activatnvar_strbuf_0[15] ^= 103; _activatnvar_strbuf_0[16] = 47; _activatnvar_strbuf_0[16] ^= 28; _activatnvar_strbuf_0[17] = 31; _activatnvar_strbuf_0[17] ^= 47; _activatnvar_strbuf_0[18] = 47; _activatnvar_strbuf_0[18] ^= 2; _activatnvar_strbuf_0[19] = 25; _activatnvar_strbuf_0[19] ^= 43; _activatnvar_strbuf_0[20] = 117; _activatnvar_strbuf_0[20] ^= 68; _activatnvar_strbuf_0[21] = 85; _activatnvar_strbuf_0[21] ^= 101; _activatnvar_strbuf_0[22] = 12; _activatnvar_strbuf_0[22] ^= 53; _activatnvar_strbuf_0[23] = 5; _activatnvar_strbuf_0[23] ^= 40; _activatnvar_strbuf_0[24] = 89; _activatnvar_strbuf_0[24] ^= 97; _activatnvar_strbuf_0[25] = 97; _activatnvar_strbuf_0[25] ^= 89; _activatnvar_strbuf_0[26] = 90; _activatnvar_strbuf_0[26] ^= 111; _activatnvar_strbuf_0[27] = 66; _activatnvar_strbuf_0[27] ^= 115; _activatnvar_strbuf_0[28] = 76; _activatnvar_strbuf_0[28] ^= 120; _activatnvar_strbuf_0[29] = 110; _activatnvar_strbuf_0[29] ^= 87; _activatnvar_strbuf_0[30] = 127; _activatnvar_strbuf_0[30] ^= 79; _activatnvar_strbuf_0[31] = 105; _activatnvar_strbuf_0[31] ^= 8; _activatnvar_strbuf_0[32] = 122; _activatnvar_strbuf_0[32] ^= 25; _activatnvar_strbuf_0[33] = 92; _activatnvar_strbuf_0[33] ^= 100; _activatnvar_strbuf_0[34] = 112; _activatnvar_strbuf_0[34] ^= 21; _activatnvar_strbuf_0[35] = 17; _activatnvar_strbuf_0[35] ^= 34; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_05_func_83345530(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x8] == 0x6) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_05_func_365657991(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_05_func_797780173(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_7 |= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_05_func_480543960(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1500020299(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_05_func_19428952(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 += _activatnvar_confusing_int_c;

	/* inline */ _activation_check_proc_05_func_1303292606(_activatnvar_section1, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_05_func_269620408(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_05_func_1428888068(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_05_func_647875571(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_05_func_1805388483(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_char_3;

	_activation_check_proc_05_func_576968016(_activatnvar_confusing_LLUUID_2, _activatnvar_section2);
	_activation_check_proc_05_func_583929733();
}

void _activation_check_proc_05_func_583929733()
{
	
}

void _activation_check_proc_05_func_576968016(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_section2;

}

void _activation_check_proc_05_func_1832800925(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_05_func_384330038(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_425868572(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_425868572(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_163340748(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x8] != _activatnvar_t0) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_05_func_1766426038(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_05_func_854598555(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_8);
	_activation_check_proc_05_func_163340748(_activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_7, _activatnvar_t0);
	/* inline */ _activation_check_proc_05_func_639740567(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_05_func_195630239(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_845158233(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_05_func_195630239(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
}

void _activation_check_proc_05_func_622818030(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_t0, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_1 <<= _activatnvar_confusing_char_4;

	_activation_check_proc_05_func_1945206006(_activatnvar_confusing_char_7, _activatnvar_confusing_char_a);
	/* inline */ _activation_check_proc_05_func_1179109422(_activatnvar_confusing_U8_7, _activatnvar_confusing_chararray_3);
	/* inline */ _activation_check_proc_05_func_627319139(_activatnvar_t0);
}

void _activation_check_proc_05_func_1945206006(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a += _activatnvar_confusing_char_7;

}

void _activation_check_proc_05_func_758639884(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_05_func_1910377446(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_05_func_427984710(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_section2.mData[0x5];

	_activation_check_proc_05_func_370635028(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_370635028(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_05_func_939581686(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_05_func_1747304474(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 += _activatnvar_confusing_int_0;

}

void _activation_check_proc_05_func_1904207807(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_05_func_1122868155(_activatnvar_lace, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1122868155(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_580582231(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_741088412(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e >>= 0x4;

}

void _activation_check_proc_05_func_1006140518(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_f *= _activatnvar_confusing_char_a;

	_activation_check_proc_05_func_741088412(_activatnvar_confusing_char_e);
}

void _activation_check_proc_05_func_1510632156(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_6 += _activatnvar_confusing_U8_c;

}

void _activation_check_proc_05_func_938191243(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_chararray_8[0xb];

	_activation_check_proc_05_func_565355982(_activatnvar_mac_digest, _activatnvar_confusing_U8_d, _activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_05_func_1338745093();
}

void _activation_check_proc_05_func_565355982(unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_d *= _activatnvar_confusing_char_5;

	_activatnvar_confusing_LLUUID_7.mData[0x4] >>= _activatnvar_mac_digest[0x3];

}

void _activation_check_proc_05_func_1986618880(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1733967714(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
	/* inline */ _activation_check_proc_05_func_1904134555(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_05_func_100722719(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_05_func_1315021820(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0x7;

}

void _activation_check_proc_05_func_1027132221(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_U8_d >>= _activatnvar_confusing_char_5;

}

void _activation_check_proc_05_func_1853264022(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_05_func_1085323545(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_5, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_05_func_1853264022(_activatnvar_generic_bool_0);
	_activation_check_proc_05_func_1027132221(_activatnvar_confusing_U8_d, _activatnvar_confusing_char_5);
}

void _activation_check_proc_05_func_1136061132(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_6.mData[0xf];

}

void _activation_check_proc_05_func_1294930552(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 += 0xb;

}

void _activation_check_proc_05_func_837614665(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_05_func_1294930552(_activatnvar_confusing_int_1);
}

void _activation_check_proc_05_func_1083154914()
{
	
}

void _activation_check_proc_05_func_1808878766(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_05_func_2138217530(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xa] != 0xb) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_05_func_1978097832(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e ^= _activatnvar_confusing_chararray_4[0x7];

}

void _activation_check_proc_05_func_346817070(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1613081985(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x0] ^= _activatnvar_confusing_chararray_3[0xe];

}

void _activation_check_proc_05_func_1290712159(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_7;

	_activation_check_proc_05_func_1613081985(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_05_func_152291634(_activatnvar_confusing_LLUUID_9);
	_activation_check_proc_05_func_1830239797(_activatnvar_confusing_char_3, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_05_func_1830239797(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_05_func_1068968497(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1108465657(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_1 ^= _activatnvar_confusing_chararray_c[0x1];

	_activation_check_proc_05_func_851843612(_activatnvar_confusing_chararray_0, _activatnvar_confusing_char_6);
}

void _activation_check_proc_05_func_851843612(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_05_func_1491138063(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x5] *= _activatnvar_confusing_chararray_5[0x0];

}

void _activation_check_proc_05_func_1756605029(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_U8_6 = _activatnvar_section1.mData[0x1];

}

void _activation_check_proc_05_func_582762301(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xe] *= _activatnvar_section2.mData[0xf];

}

void _activation_check_proc_05_func_228385301(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_4 ^= _activatnvar_confusing_U8_3;

	_activatnvar_confusing_LLUUID_2 = LLUUID("9bfa676b-fef5-8b29-8b3e-aeae6fcc00bc");

}

void _activation_check_proc_05_func_1738469380(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_05_func_678502052(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_05_func_1516718733(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_05_func_2097555306(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_2.mData[0xc] &= _activatnvar_confusing_chararray_9[0x4];

	/* inline */ _activation_check_proc_05_func_1123215192(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1293660088(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] &= _activatnvar_mac_digest[0x7];

}

void _activation_check_proc_05_func_473708846(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_d += _activatnvar_confusing_U8_b;

}

void _activation_check_proc_05_func_323719515(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_char_b;

}

void _activation_check_proc_05_func_1677282827(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_05_func_1123938762(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_05_func_1123938762(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_f[0x2] <<= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_05_func_1693142387(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_combined_id;

}

void _activation_check_proc_05_func_226764185(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] >>= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_05_func_1030530559(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("b9856574-9ae3-e33b-0efc-8b4ed2e6bdf8");

	/* inline */ _activation_check_proc_05_func_1377349425(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_05_func_536377112(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_t0;

}

void _activation_check_proc_05_func_1618679034(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_0;

	/* inline */ _activation_check_proc_05_func_699872059(_activatnvar_secret, _activatnvar_confusing_chararray_d);
	_activation_check_proc_05_func_2091437102(_activatnvar_confusing_bool_7, _activatnvar_confusing_char_e, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_05_func_2091437102(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x7] != _activatnvar_confusing_char_e) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_05_func_330815512(int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_char_d = _activatnvar_lace.mData[0xe];

	_activation_check_proc_05_func_26942875(_activatnvar_confusing_int_3, _activatnvar_confusing_int_f);
}

void _activation_check_proc_05_func_26942875(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= _activatnvar_confusing_int_3;

}

void _activation_check_proc_05_func_644862952(LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xd] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_0 = true;

	/* inline */ _activation_check_proc_05_func_517996135(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_05_func_1001802520(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_05_func_1318843335(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_b[0x7] >>= _activatnvar_code.mData[0x0];

	_activatnvar_confusing_chararray_6[0xf] |= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_05_func_1266897575(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x6] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_b = true;

	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_05_func_376888689(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_7[0x8] += _activatnvar_confusing_chararray_0[0xd];

}

void _activation_check_proc_05_func_2102443330(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_b[0xf] ^= _activatnvar_confusing_LLUUID_d.mData[0x5];

}

void _activation_check_proc_05_func_281914337(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_05_func_1268505769(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] ^= _activatnvar_confusing_LLUUID_4.mData[0x5];

	/* inline */ _activation_check_proc_05_func_1747036103(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_05_func_753255652(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_05_func_1342197038()
{
	
}

void _activation_check_proc_05_func_240011866(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 <<= 0xe;

}

void _activation_check_proc_05_func_1706373866(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_d, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_d += _activatnvar_confusing_U8_0;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_166080462(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_05_func_1689899701(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_05_func_1285803982(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_05_func_1785926667(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] &= _activatnvar_confusing_chararray_f[0x8];

	/* inline */ _activation_check_proc_05_func_1203971512(_activatnvar_confusing_U8_8, _activatnvar_confusing_U8_b, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_char_6, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_05_func_312585703(char& _activatnvar_confusing_char_1, U8& _activatnvar_t1, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_1 = _activatnvar_code.mData[0x2];

	_activation_check_proc_05_func_1531226341(_activatnvar_t1);
}

void _activation_check_proc_05_func_1531226341(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_05_func_2098268128(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_3 = false;

	/* inline */ _activation_check_proc_05_func_1780481225(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_05_func_1932337635(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("1500f36f-fe28-cdcb-1821-fe3ce646f5c5");

}

void _activation_check_proc_05_func_1571371769(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_05_func_1464943267(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_419348153(U8& _activatnvar_confusing_U8_6, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	/* inline */ _activation_check_proc_05_func_1163204835(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_05_func_1864257927(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_05_func_937351404(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
	_activation_check_proc_05_func_1864257927(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_05_func_1838258446(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_8 ^= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_05_func_24146653(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_05_func_972733545(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_05_func_238406396(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_05_func_1051169731(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
	/* inline */ _activation_check_proc_05_func_802307385(_activatnvar_confusing_int_4);
}

void _activation_check_proc_05_func_1491206660(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_649044540(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_05_func_1165238026(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_chararray_9[0x5];

	/* inline */ _activation_check_proc_05_func_1487853187(_activatnvar_confusing_chararray_e, _activatnvar_so);
}

void _activation_check_proc_05_func_509418129(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x6] &= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_05_func_1553728719(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_b[0xf] |= _activatnvar_confusing_chararray_d[0x3];

}

void _activation_check_proc_05_func_306580902(unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_0)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_0 >>= 0x4;

	_activatnvar_confusing_chararray_7[0xb] *= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_05_func_1013144918(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_6.mData[0xc];

}

void _activation_check_proc_05_func_1731408371(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] = _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_05_func_1035482301(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_05_func_12421854(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_05_func_1373637674(_activatnvar_confusing_chararray_2, _activatnvar_confusing_char_d);
}

void _activation_check_proc_05_func_434903814(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("5cad0e95-dfc6-97f0-568f-b5bcb362788c");

}

void _activation_check_proc_05_func_904803553(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 >>= _activatnvar_confusing_char_9;

}

void _activation_check_proc_05_func_1717872747(unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_3, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_e[0xe] <<= _activatnvar_confusing_chararray_5[0xd];

	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_05_func_1592459766(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1592459766(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1655335604()
{
	
}

void _activation_check_proc_05_func_1178333600(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_1;

	/* inline */ _activation_check_proc_05_func_689203765(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_05_func_1455887038(_activatnvar_confusing_LLUUID_8, _activatnvar_so);
	_activation_check_proc_05_func_1157774850(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_05_func_1157774850(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1961792635(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("8871b477-674d-6f97-715d-617f9fa5fece");

}

void _activation_check_proc_05_func_634596923(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_05_func_1053073920(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_05_func_81448425(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_05_func_2134265223(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_2);
}

void _activation_check_proc_05_func_2134265223(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 *= _activatnvar_confusing_chararray_9[0xe];

}

void _activation_check_proc_05_func_81448425(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_05_func_1545137969(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_29547225(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("fed82fbb-128a-6a83-c25a-e5fe5da88dee");

	/* inline */ _activation_check_proc_05_func_716447747(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_05_func_647564284()
{
	
}

void _activation_check_proc_05_func_1930110464(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_b)
{
	
	_activation_check_proc_05_func_647564284();
	/* inline */ _activation_check_proc_05_func_163519611(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_U8_9, _activatnvar_confusing_bool_d, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_05_func_1962749057(_activatnvar_confusing_chararray_b, _activatnvar_confusing_char_c);
	/* inline */ _activation_check_proc_05_func_1289747530(_activatnvar_confusing_char_f);
}

void _activation_check_proc_05_func_1968413012(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_6)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x7] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_05_func_115808595(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_4[0x1] >>= _activatnvar_confusing_LLUUID_4.mData[0x2];

}

void _activation_check_proc_05_func_1940930167(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_a.mData[0x2];

}

void _activation_check_proc_05_func_2060839947(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_6, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_int_e <<= 0xf;

	_activation_check_proc_05_func_115808595(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_05_func_1940930167(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_char_e);
	_activation_check_proc_05_func_1968413012(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_c, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_05_func_900608240(bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_05_func_1482240407(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("1f02523c-fa8c-8102-9572-6136339fcaac");

}

void _activation_check_proc_05_func_399100300(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_05_func_447850477(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_05_func_1962811850(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("56657985-ebed-4611-abfa-9ee4d7a15592");

}

void _activation_check_proc_05_func_1278602259(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_638290327(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1503357379(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_628142498(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_0[0x4];

	/* inline */ _activation_check_proc_05_func_1163095835(_activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_b);
	_activation_check_proc_05_func_121103078(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_05_func_121103078(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_05_func_397803339(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_2068591629()
{
	
}

void _activation_check_proc_05_func_1162839678(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_05_func_884789064(_activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator);
	_activation_check_proc_05_func_2068591629();
}

void _activation_check_proc_05_func_884789064(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_17949731(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] <<= _activatnvar_confusing_LLUUID_c.mData[0x3];

}

void _activation_check_proc_05_func_385078168(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_252231263(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_05_func_1796997222(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_char_d;

}

void _activation_check_proc_05_func_796281739(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_2, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	
	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_LLUUID_f.mData[0x6];

	_activation_check_proc_05_func_1577624649(_activatnvar_confusing_int_d);
	_activation_check_proc_05_func_1796997222(_activatnvar_confusing_U8_9, _activatnvar_confusing_char_d);
	/* inline */ _activation_check_proc_05_func_424928157(_activatnvar_confusing_U8_2, _activatnvar_confusing_U8_b, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_05_func_1577624649(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_05_func_1298621145(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_05_func_39094978(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	
}

void _activation_check_proc_05_func_1730054434(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_05_func_2034487111(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1610651938(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_05_func_424838207(int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_0, BOOL& _activatnvar_success, DWORD& _activatnvar_serial, U8& _activatnvar_confusing_U8_f, DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	/* inline */ _activation_check_proc_05_func_1778323867(_activatnvar_success, _activatnvar_serial);
	/* inline */ _activation_check_proc_05_func_1305648977(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_05_func_1096081809(_activatnvar_confusing_U8_f, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_05_func_1498177620(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_05_func_532748589(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("2613da36-0e29-8be1-c572-4b8bdf6ad6cb");

}

void _activation_check_proc_05_func_787261146(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1994087774(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("80298e01-a45b-2c0d-fc58-1cf10d6c9018");

}

void _activation_check_proc_05_func_1340826587(char& _activatnvar_confusing_char_5, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_chararray_0[0x9];

	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_05_func_1955973055(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_78936122(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 >>= _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_05_func_2006767116(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_05_func_536622694(_activatnvar_generic_iterator);
	_activation_check_proc_05_func_78936122(_activatnvar_confusing_chararray_d, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_05_func_1222875562(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_d)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x1] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_05_func_810864833(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_1222875562(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_0, _activatnvar_confusing_char_d);
}

void _activation_check_proc_05_func_1724952554(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 = 0xc;

}

void _activation_check_proc_05_func_181884261()
{
	
}

void _activation_check_proc_05_func_1639996702(LLUUID& _activatnvar_combined_id, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_d = true;

	_activation_check_proc_05_func_2099878887(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_2099878887(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1143853662(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_3;

	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_05_func_4821540(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d *= 0xe;

}

void _activation_check_proc_05_func_1811149648(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_1987634438(_activatnvar_confusing_chararray_5, _activatnvar_confusing_char_9);
}

void _activation_check_proc_05_func_1987634438(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_05_func_529074649(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_05_func_1047952770(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_LLUUID_1.mData[0xc];

}

void _activation_check_proc_05_func_788720509(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_05_func_423849140(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= _activatnvar_confusing_int_c;

}

void _activation_check_proc_05_func_1896290682(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_so ^= _activatnvar_section2;
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_05_func_2138930632(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] ^= _activatnvar_confusing_LLUUID_8.mData[0xe];

}

void _activation_check_proc_05_func_1998313766(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_int_c++;

	_activation_check_proc_05_func_2138930632(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_05_func_826813390(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_320853406(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b *= 0xc;

}

void _activation_check_proc_05_func_520767151(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_05_func_2072560308(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x4] ^= _activatnvar_ser_digest[0xe];

}

void _activation_check_proc_05_func_1882715362(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_a *= _activatnvar_t0;

}

void _activation_check_proc_05_func_1681361580(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_05_func_1700345920(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_fscked;

	/* inline */ _activation_check_proc_05_func_2025953178(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_05_func_1303636566(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_05_func_1303636566(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_4[0x5] += _activatnvar_confusing_LLUUID_a.mData[0xc];

}

void _activation_check_proc_05_func_807458384(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] >>= _activatnvar_confusing_chararray_e[0xa];

}

void _activation_check_proc_05_func_1820771031(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_299054582(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_LLUUID_4.mData[0x1];

}

void _activation_check_proc_05_func_1036341832(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xa] != _activatnvar_confusing_char_c) _activatnvar_confusing_bool_a = true;

	/* inline */ _activation_check_proc_05_func_886098414(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_7, _activatnvar_t0);
	_activation_check_proc_05_func_1894375026(_activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_05_func_1184138258(_activatnvar_confusing_chararray_d, _activatnvar_section1);
}

void _activation_check_proc_05_func_1894375026(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("802f9b37-4a48-2291-8e3c-7f7056c8b974");

}

void _activation_check_proc_05_func_1152152200()
{
	
}

void _activation_check_proc_05_func_840655129(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_1152152200();
}

void _activation_check_proc_05_func_1076484855(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_05_func_1639758129(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_05_func_48291459(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_05_func_109875835(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1627957103(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = 0x2;

}

void _activation_check_proc_05_func_1756558365(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_05_func_104833042(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_chararray_5[0x6];

	/* inline */ _activation_check_proc_05_func_1702166550(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_05_func_513440206(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_05_func_1988838621(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("2b298312-ccb1-5dc3-72c1-ca08c9487e9c");

}

void _activation_check_proc_05_func_670125666(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_t1, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_f |= _activatnvar_t1;

}

void _activation_check_proc_05_func_153847425(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_4.mData[0xf] = _activatnvar_mac_digest[0x1];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_29490798(bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	if(_activatnvar_confusing_LLUUID_1.mData[0xc] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_05_func_1644073910(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_05_func_561293819(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_5, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_chararray_3[0x0] ^= _activatnvar_confusing_chararray_9[0x8];

	_activation_check_proc_05_func_153847425(_activatnvar_confusing_LLUUID_4, _activatnvar_generic_iterator, _activatnvar_mac_digest);
	_activation_check_proc_05_func_29490798(_activatnvar_confusing_bool_c, _activatnvar_ser_digest, _activatnvar_confusing_char_f, _activatnvar_confusing_bool_5, _activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_1, _activatnvar_combined_id);
	_activation_check_proc_05_func_1644073910(_activatnvar_confusing_int_7);
	_activation_check_proc_05_func_670125666(_activatnvar_confusing_bool_e, _activatnvar_t1, _activatnvar_confusing_char_f);
	/* inline */ _activation_check_proc_05_func_383158052(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_05_func_881814033(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_char_7 *= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_05_func_668041547(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_05_func_714748338(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_9)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_9 |= 0x6;

}

void _activation_check_proc_05_func_1601242240()
{
	
}

void _activation_check_proc_05_func_910611858(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x3] <<= _activatnvar_so.mData[0x6];

}

void _activation_check_proc_05_func_977598226(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_so, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_1601242240();
	_activation_check_proc_05_func_910611858(_activatnvar_so, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_05_func_628915854(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_05_func_628915854(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_1[0xc] <<= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_05_func_188199572(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_05_func_2127758068(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("64e74892-afcd-0236-d1c5-0aa046bdc7d0");

}

void _activation_check_proc_05_func_841501229(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_char_1;

}

void _activation_check_proc_05_func_1424507618(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_05_func_1127169127(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_05_func_1065044396(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_05_func_741249127(_activatnvar_confusing_bool_d, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_05_func_670876919(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x6] = _activatnvar_section1.mData[0xa];

}

void _activation_check_proc_05_func_246251387(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("36653ea6-e791-9366-d15c-70b1b843622b");

}

void _activation_check_proc_05_func_1864045036(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x6] >>= _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_05_func_44816012(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_a ^= 0xf;

	/* inline */ _activation_check_proc_05_func_1462650486(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_lace);
	_activation_check_proc_05_func_1864045036(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_05_func_1083665245()
{
	
}

void _activation_check_proc_05_func_384502255(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_05_func_106330639(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_05_func_814864537(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x6] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_f = true;

	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_05_func_1330761297(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_c, U8& _activatnvar_pos, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_2)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x7] != 0x2) _activatnvar_confusing_bool_e = false;

	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_c |= _activatnvar_pos;

	_activation_check_proc_05_func_814864537(_activatnvar_confusing_bool_f, _activatnvar_confusing_char_5, _activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_7);
	_activation_check_proc_05_func_106330639(_activatnvar_confusing_int_2);
}

void _activation_check_proc_05_func_478703841(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_1 += 0x3;

	/* inline */ _activation_check_proc_05_func_1952868920(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_05_func_1830424141(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_432511931(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_chararray_d[0x3];

	_activation_check_proc_05_func_1786863124(_activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_05_func_1077869173(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_5);
	_activation_check_proc_05_func_1830424141(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1786863124(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 >>= 0x5;

}

void _activation_check_proc_05_func_1130686361(int& _activatnvar_confusing_int_f, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

	_activation_check_proc_05_func_192808756(_activatnvar_confusing_int_f);
}

void _activation_check_proc_05_func_192808756(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f *= 0xa;

}

void _activation_check_proc_05_func_1721610894(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_1 &= 0xff;

	_activation_check_proc_05_func_1332572242(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_05_func_80961901(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_05_func_1332572242(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= 0xe;

}

void _activation_check_proc_05_func_1736794468(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_section2;

}

void _activation_check_proc_05_func_1758749938(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_05_func_1114138283(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x1] >>= _activatnvar_confusing_chararray_9[0xe];

}

void _activation_check_proc_05_func_1048989793(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c += _activatnvar_confusing_U8_f;

}

void _activation_check_proc_05_func_186904401(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1343260427()
{
	
}

void _activation_check_proc_05_func_1380360681(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_doaccount, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_feat, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	
	/* inline */ _activation_check_proc_05_func_63404833(_activatnvar_confusing_U8_0);
	/* inline */ _activation_check_proc_05_func_706486048(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_05_func_1314418788(_activatnvar_generic_bool_0);
	_activation_check_proc_05_func_186904401(_activatnvar_generic_iterator);
	_activation_check_proc_05_func_1048989793(_activatnvar_confusing_U8_f, _activatnvar_confusing_char_c);
	/* inline */ _activation_check_proc_05_func_45269263(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_05_func_45845801(_activatnvar_confusing_U8_a, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_05_func_1469601086(_activatnvar_ser_digest, _activatnvar_confusing_chararray_e);
	_activation_check_proc_05_func_1114138283(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_05_func_539926514(_activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_bool_1);
	_activation_check_proc_05_func_1758749938(_activatnvar_confusing_U8_1);
	_activation_check_proc_05_func_1343260427();
}

void _activation_check_proc_05_func_1618175637(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
}

void _activation_check_proc_05_func_1874319855(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_05_func_1586319180(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_9.mData[0x4] += _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_05_func_597028244(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_c[0xa] &= _activatnvar_confusing_LLUUID_6.mData[0xa];

}

void _activation_check_proc_05_func_177677393(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_05_func_1653578289(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_c &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_05_func_1089926441(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_05_func_1463808419(_activatnvar_confusing_chararray_9, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_05_func_33444104(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_05_func_629510069(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1516216220(bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_chararray_1[0x7];

	_activation_check_proc_05_func_2111756971(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_05_func_2111756971(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_05_func_1147637131(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_05_func_1447457850(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_05_func_1382776371(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_05_func_931754075(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_d >>= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_05_func_677056884(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] |= _activatnvar_confusing_chararray_e[0xe];

}

void _activation_check_proc_05_func_593366190(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 86; _activatnvar_strbuf_0[0] ^= 23; _activatnvar_strbuf_0[1] = 10; _activatnvar_strbuf_0[1] ^= 105; _activatnvar_strbuf_0[2] = 71; _activatnvar_strbuf_0[2] ^= 51; _activatnvar_strbuf_0[3] = 125; _activatnvar_strbuf_0[3] ^= 20; _activatnvar_strbuf_0[4] = 64; _activatnvar_strbuf_0[4] ^= 54; _activatnvar_strbuf_0[5] = 18; _activatnvar_strbuf_0[5] ^= 115; _activatnvar_strbuf_0[6] = 48; _activatnvar_strbuf_0[6] ^= 68; _activatnvar_strbuf_0[7] = 96; _activatnvar_strbuf_0[7] ^= 9; _activatnvar_strbuf_0[8] = 114; _activatnvar_strbuf_0[8] ^= 29; _activatnvar_strbuf_0[9] = 8; _activatnvar_strbuf_0[9] ^= 102; _activatnvar_strbuf_0[10] = 59; _activatnvar_strbuf_0[10] ^= 120; _activatnvar_strbuf_0[11] = 81; _activatnvar_strbuf_0[11] ^= 62; _activatnvar_strbuf_0[12] = 82; _activatnvar_strbuf_0[12] ^= 54; _activatnvar_strbuf_0[13] = 34; _activatnvar_strbuf_0[13] ^= 71; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_05_func_950059317(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_c <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_05_func_7135368(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_05_func_1912903025(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1238335871(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_05_func_7135368(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_8);
	_activation_check_proc_05_func_1912903025(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1795645720(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1900643877(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_6++;

	_activatnvar_confusing_int_4 += 0xf;

}

void _activation_check_proc_05_func_1972616889(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1349653672(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
}

void _activation_check_proc_05_func_1069781479(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_05_func_401496816(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_1 *= _activatnvar_confusing_char_3;

}

void _activation_check_proc_05_func_1845193589(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_05_func_1257601505(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_05_func_2127036882(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f *= 0x2;

}

void _activation_check_proc_05_func_177464422(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] <<= _activatnvar_confusing_LLUUID_c.mData[0x3];

}

void _activation_check_proc_05_func_285351877(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] &= _activatnvar_section1.mData[0xe];

	_activation_check_proc_05_func_798612120(_activatnvar_confusing_U8_1);
	/* inline */ _activation_check_proc_05_func_35474098(_activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_05_func_798612120(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 += 0x7;

}

void _activation_check_proc_05_func_896515436(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_05_func_700843001(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_05_func_1917557868(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_701366899(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_05_func_172504307(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1115746370(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_2133652226(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("6a1da20d-f828-19d6-32f5-af995024e069");

}

void _activation_check_proc_05_func_1955335487(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4, DWORD& _activatnvar_gvi_flags, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_gvi_flags = 0;
	_activatnvar_confusing_LLUUID_a.mData[0xc] &= _activatnvar_confusing_chararray_a[0xe];

	/* inline */ _activation_check_proc_05_func_1909262647(_activatnvar_confusing_bool_4, _activatnvar_generic_bool_0, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_05_func_1644808024(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x3] ^= _activatnvar_mac_digest[0x7];

}

void _activation_check_proc_05_func_1782857899(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] ^= _activatnvar_confusing_LLUUID_b.mData[0xa];

}

void _activation_check_proc_05_func_1364299120(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_4)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_char_4 *= _activatnvar_confusing_char_9;

	_activatnvar_confusing_int_3 &= 0xff;

	/* inline */ _activation_check_proc_05_func_1087266929(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_05_func_274556472(_activatnvar_confusing_chararray_a, _activatnvar_confusing_char_6);
	/* inline */ _activation_check_proc_05_func_815157000(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_05_func_958329322(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b ^= _activatnvar_confusing_int_1;

}

void _activation_check_proc_05_func_2134465572(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_b >>= _activatnvar_confusing_chararray_1[0xe];

}

void _activation_check_proc_05_func_1083768113(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_05_func_2134465572(_activatnvar_confusing_U8_b, _activatnvar_confusing_chararray_1);
	_activation_check_proc_05_func_958329322(_activatnvar_confusing_int_1, _activatnvar_confusing_int_b);
}

void _activation_check_proc_05_func_614629566(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xe] |= _activatnvar_confusing_LLUUID_b.mData[0xb];

}

void _activation_check_proc_05_func_1894219366(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_05_func_1797451637(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_05_func_730950970(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_int_0 ^= 0x2;

	/* inline */ _activation_check_proc_05_func_1692207902(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_05_func_1797451637(_activatnvar_confusing_char_a);
}

void _activation_check_proc_05_func_512889127(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] *= _activatnvar_code.mData[0x3];

}

void _activation_check_proc_05_func_1398338207(LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_e, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_05_func_512889127(_activatnvar_confusing_LLUUID_f, _activatnvar_code);
	/* inline */ _activation_check_proc_05_func_22842642(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_05_func_5463350()
{
	
}

void _activation_check_proc_05_func_1368960465(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_2, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_4 = false;

	/* inline */ _activation_check_proc_05_func_912422199(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_05_func_1393530721(_activatnvar_confusing_char_a, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_2, _activatnvar_confusing_bool_4);
	_activation_check_proc_05_func_1843261994(_activatnvar_confusing_LLUUID_0, _activatnvar_section1);
	_activation_check_proc_05_func_165333942(_activatnvar_generic_bool_1, _activatnvar_lace, _activatnvar_feat, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_165333942(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_05_func_1843261994(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_0.mData[0x7] ^= _activatnvar_section1.mData[0x8];

}

void _activation_check_proc_05_func_1393530721(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x7] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_05_func_2007500911(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_05_func_261818878(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_05_func_1257336210(unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_1506233270(_activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_05_func_1902081603(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_05_func_1506233270(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_05_func_1555406048(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_05_func_2023556368(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_05_func_1169614277(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_608416349(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] |= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_05_func_154610303(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_708426726(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos |= 8;
	/* inline */ _activation_check_proc_05_func_245768902(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_05_func_632842244(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_05_func_1740683035(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_05_func_1323031564(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 = 0xf;

}

void _activation_check_proc_05_func_312774752(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_d[0xe] <<= _activatnvar_so.mData[0x9];

}

void _activation_check_proc_05_func_1707092412(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_b |= _activatnvar_confusing_int_6;

}

void _activation_check_proc_05_func_1791927179(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_t1)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_a |= _activatnvar_t1;

}

void _activation_check_proc_05_func_482286997(bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_b, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_6, char& _activatnvar_confusing_char_a, U8& _activatnvar_t1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_a += 0x4;

	_activation_check_proc_05_func_1707092412(_activatnvar_confusing_int_b, _activatnvar_confusing_int_6);
	_activation_check_proc_05_func_1791927179(_activatnvar_confusing_bool_a, _activatnvar_confusing_U8_a, _activatnvar_t1);
}

void _activation_check_proc_05_func_980676679(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5)
{
	
	/* inline */ _activation_check_proc_05_func_794553542(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_05_func_145576697(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_b.mData[0xb];

}

void _activation_check_proc_05_func_533564250(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_05_func_290363744(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_05_func_2146261280(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_8 = _activatnvar_confusing_U8_8;

}

void _activation_check_proc_05_func_351346891(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1200218993(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_05_func_1768671784(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x2] &= _activatnvar_confusing_LLUUID_e.mData[0x9];

}

void _activation_check_proc_05_func_801624576(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_6[0x7] += _activatnvar_name_digest[0x3];

}

void _activation_check_proc_05_func_322853751(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_name_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_801624576(_activatnvar_confusing_chararray_6, _activatnvar_name_digest);
}

void _activation_check_proc_05_func_1307740816(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_05_func_1933457650(int& _activatnvar_confusing_int_7, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 >>= _activatnvar_confusing_int_7;

	_activation_check_proc_05_func_1307740816(_activatnvar_generic_bool_0);
}

void _activation_check_proc_05_func_1570869370(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_05_func_345245510(char& _activatnvar_confusing_char_2, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_2 |= 0xc;

}

void _activation_check_proc_05_func_1067712083(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x3] *= _activatnvar_lace.mData[0x2];

}

void _activation_check_proc_05_func_385228747(int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 <<= 0xa;

	_activation_check_proc_05_func_2053515318(_activatnvar_confusing_int_d);
	_activation_check_proc_05_func_193613997(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_05_func_193613997(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_2053515318(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_05_func_883025300(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_05_func_356620689(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_05_func_1209375487(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_05_func_1150157409(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0x0;

}

void _activation_check_proc_05_func_356761589(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1777205749(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("3fc6f13a-030c-3915-2c4f-00c1eb2158a9");

}

void _activation_check_proc_05_func_1536092419(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
	_activation_check_proc_05_func_1777205749(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_05_func_413679550(_activatnvar_lace, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_05_func_1062197659(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_fscked, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x1] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_3 = _activatnvar_generic_bool_0;

	/* inline */ _activation_check_proc_05_func_1352415001(_activatnvar_fscked, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_05_func_1328837265(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_7.mData[0x1] *= _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_05_func_1463617494(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_05_func_15240233(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_05_func_1889400592(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0x0;

}

void _activation_check_proc_05_func_740527329(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_secret;

}

void _activation_check_proc_05_func_1192498809(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_05_func_1355051665(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_05_func_1275490037(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_05_func_1464965307(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] = _activatnvar_confusing_chararray_b[0xf];

	_activation_check_proc_05_func_1275490037(_activatnvar_confusing_int_8);
	_activation_check_proc_05_func_1557173334(_activatnvar_confusing_char_8);
}

void _activation_check_proc_05_func_1557173334(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_05_func_434034969(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_05_func_1885980871(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_c[0x7] >>= _activatnvar_confusing_chararray_4[0xa];

	/* inline */ _activation_check_proc_05_func_1146551745(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_05_func_1414647784(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_05_func_1102911377(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_8[0x2] &= _activatnvar_confusing_LLUUID_b.mData[0x8];

}

void _activation_check_proc_05_func_271615628(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_05_func_612042452(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_05_func_498409888(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
	_activation_check_proc_05_func_271615628(_activatnvar_t1);
	_activation_check_proc_05_func_612042452(_activatnvar_t1, _activatnvar_t0);
}

void _activation_check_proc_05_func_1859642792(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_05_func_1060533828(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_05_func_1976029611(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_05_func_478187708(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
	_activation_check_proc_05_func_1976029611(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_05_func_1920173488(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_LLUUID_a.mData[0x2];

}

void _activation_check_proc_05_func_83775648(LLMD5*& _activatnvar_nmd5, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_05_func_849063666(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a += _activatnvar_confusing_chararray_1[0xf];

}

void _activation_check_proc_05_func_592014049(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_05_func_1059445952(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_8);
	_activation_check_proc_05_func_849063666(_activatnvar_confusing_chararray_1, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_05_func_1059445952(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_7.mData[0x5];

}

void _activation_check_proc_05_func_396973739(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_6[0x7] &= _activatnvar_confusing_chararray_2[0xd];

}

void _activation_check_proc_05_func_1226962128(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

	_activation_check_proc_05_func_899502647(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_05_func_899502647(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1775783005(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_05_func_1780772550(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_05_func_673594957(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_05_func_171464427(bool& _activatnvar_confusing_bool_d, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_f, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_4 *= _activatnvar_confusing_char_2;

	/* inline */ _activation_check_proc_05_func_1104207896(_activatnvar_confusing_int_f, _activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_05_func_731446626(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_05_func_1069443646(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_05_func_576422577(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] = _activatnvar_confusing_chararray_f[0xe];

	/* inline */ _activation_check_proc_05_func_809912190();
}

void _activation_check_proc_05_func_1463070012(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_05_func_473393429(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_05_func_716563803(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 >>= 0xc;

}

void _activation_check_proc_05_func_330128115(U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_t0, char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_05_func_1330685022(_activatnvar_confusing_U8_c, _activatnvar_confusing_char_f);
	_activation_check_proc_05_func_440344026(_activatnvar_t1, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_e, _activatnvar_t0);
}

void _activation_check_proc_05_func_440344026(U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_t0)
{
	_activatnvar_confusing_chararray_e[0xe] >>= _activatnvar_confusing_LLUUID_e.mData[0x7];

	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_05_func_686676796(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_05_func_1199973784(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 |= 0x7;

}

void _activation_check_proc_05_func_1540062797(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_0 &= _activatnvar_confusing_LLUUID_c.mData[0x4];

}

void _activation_check_proc_05_func_641304760(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_05_func_2143414879(char& _activatnvar_confusing_char_3, U8& _activatnvar_pos, U8& _activatnvar_t0, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_05_func_681125949(_activatnvar_confusing_char_3, _activatnvar_confusing_char_f, _activatnvar_confusing_bool_e);
	_activation_check_proc_05_func_641304760(_activatnvar_t0, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_05_func_681125949(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_f ^= _activatnvar_confusing_char_3;

}

void _activation_check_proc_05_func_1375298287(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("04c3a976-25a9-196d-dbe3-72aa6c725708");

}

void _activation_check_proc_05_func_704157531(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_2 >>= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_05_func_1609187085(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_05_func_1551731546(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x3] >>= _activatnvar_confusing_LLUUID_6.mData[0x9];

	/* inline */ _activation_check_proc_05_func_1327170613(_activatnvar_confusing_char_2);
	/* inline */ _activation_check_proc_05_func_1518953586(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_05_func_1202484863(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_05_func_1460248789(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_code;

	/* inline */ _activation_check_proc_05_func_1044596545(_activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_05_func_163072972(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= 0x6;

}

void _activation_check_proc_05_func_1397712322(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 48; _activatnvar_strbuf_0[0] ^= 8; _activatnvar_strbuf_0[1] = 86; _activatnvar_strbuf_0[1] ^= 52; _activatnvar_strbuf_0[2] = 3; _activatnvar_strbuf_0[2] ^= 96; _activatnvar_strbuf_0[3] = 74; _activatnvar_strbuf_0[3] ^= 127; _activatnvar_strbuf_0[4] = 119; _activatnvar_strbuf_0[4] ^= 67; _activatnvar_strbuf_0[5] = 30; _activatnvar_strbuf_0[5] ^= 42; _activatnvar_strbuf_0[6] = 65; _activatnvar_strbuf_0[6] ^= 115; _activatnvar_strbuf_0[7] = 127; _activatnvar_strbuf_0[7] ^= 74; _activatnvar_strbuf_0[8] = 98; _activatnvar_strbuf_0[8] ^= 79; _activatnvar_strbuf_0[9] = 61; _activatnvar_strbuf_0[9] ^= 13; _activatnvar_strbuf_0[10] = 108; _activatnvar_strbuf_0[10] ^= 93; _activatnvar_strbuf_0[11] = 58; _activatnvar_strbuf_0[11] ^= 12; _activatnvar_strbuf_0[12] = 88; _activatnvar_strbuf_0[12] ^= 104; _activatnvar_strbuf_0[13] = 54; _activatnvar_strbuf_0[13] ^= 27; _activatnvar_strbuf_0[14] = 23; _activatnvar_strbuf_0[14] ^= 39; _activatnvar_strbuf_0[15] = 100; _activatnvar_strbuf_0[15] ^= 84; _activatnvar_strbuf_0[16] = 39; _activatnvar_strbuf_0[16] ^= 31; _activatnvar_strbuf_0[17] = 71; _activatnvar_strbuf_0[17] ^= 117; _activatnvar_strbuf_0[18] = 110; _activatnvar_strbuf_0[18] ^= 67; _activatnvar_strbuf_0[19] = 66; _activatnvar_strbuf_0[19] ^= 113; _activatnvar_strbuf_0[20] = 52; _activatnvar_strbuf_0[20] ^= 6; _activatnvar_strbuf_0[21] = 24; _activatnvar_strbuf_0[21] ^= 40; _activatnvar_strbuf_0[22] = 97; _activatnvar_strbuf_0[22] ^= 83; _activatnvar_strbuf_0[23] = 32; _activatnvar_strbuf_0[23] ^= 13; _activatnvar_strbuf_0[24] = 54; _activatnvar_strbuf_0[24] ^= 85; _activatnvar_strbuf_0[25] = 30; _activatnvar_strbuf_0[25] ^= 38; _activatnvar_strbuf_0[26] = 18; _activatnvar_strbuf_0[26] ^= 34; _activatnvar_strbuf_0[27] = 76; _activatnvar_strbuf_0[27] ^= 126; _activatnvar_strbuf_0[28] = 1; _activatnvar_strbuf_0[28] ^= 49; _activatnvar_strbuf_0[29] = 15; _activatnvar_strbuf_0[29] ^= 61; _activatnvar_strbuf_0[30] = 20; _activatnvar_strbuf_0[30] ^= 45; _activatnvar_strbuf_0[31] = 72; _activatnvar_strbuf_0[31] ^= 120; _activatnvar_strbuf_0[32] = 112; _activatnvar_strbuf_0[32] ^= 64; _activatnvar_strbuf_0[33] = 98; _activatnvar_strbuf_0[33] ^= 90; _activatnvar_strbuf_0[34] = 28; _activatnvar_strbuf_0[34] ^= 44; _activatnvar_strbuf_0[35] = 31; _activatnvar_strbuf_0[35] ^= 45; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_05_func_1414233503(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_a = _activatnvar_code.mData[0x0];

	_activatnvar_confusing_bool_e &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_05_func_765892792(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_05_func_1166644774(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_9 = false;

	_activation_check_proc_05_func_765892792(_activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_05_func_1979487927(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_05_func_1205263701(U8& _activatnvar_t1, U8& _activatnvar_t0, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_05_func_705452830(_activatnvar_confusing_bool_3, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_05_func_1979487927(_activatnvar_t0, _activatnvar_so, _activatnvar_t1);
	/* inline */ _activation_check_proc_05_func_445327919(_activatnvar_section2, _activatnvar_so);
}

void _activation_check_proc_05_func_110543614(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_470705413(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_05_func_1717584786(int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("109556bd-4c81-1963-1fd0-7fa7cb615fb6");

	/* inline */ _activation_check_proc_05_func_1692154154(_activatnvar_confusing_int_5, _activatnvar_confusing_int_f);
}

void _activation_check_proc_05_func_1057354223(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1852558352(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_522153862(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_05_func_570834136(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xc] == 0x2) _activatnvar_confusing_bool_3 = false;

	_activation_check_proc_05_func_257513394();
	/* inline */ _activation_check_proc_05_func_1270792144(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_05_func_257513394()
{
	
}

void _activation_check_proc_05_func_1858808595(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_05_func_799959692(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_05_func_400802016(int& _activatnvar_confusing_int_3, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_1.mData[0xe];

}

void _activation_check_proc_05_func_1827160343(int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_05_func_86262367(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_05_func_400802016(_activatnvar_confusing_int_3, _activatnvar_confusing_U8_f, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_05_func_351389871(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_3[0x9] += _activatnvar_confusing_LLUUID_a.mData[0x0];

	_activation_check_proc_05_func_826705817(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_05_func_826705817(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = 0xd;

}

void _activation_check_proc_05_func_1516082328(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_05_func_2524985(int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_int_f &= 0xff;

	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_char_a;

}

void _activation_check_proc_05_func_1229995662(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xb] |= _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_05_func_1242654585(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_1229995662(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_05_func_462901313(char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_05_func_101929109(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_05_func_1224911828(bool& _activatnvar_confusing_bool_3, char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	
	/* inline */ _activation_check_proc_05_func_1428136300(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	_activation_check_proc_05_func_462901313(_activatnvar_feat, _activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_generic_iterator);
	_activation_check_proc_05_func_101929109(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_05_func_288941766(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_05_func_1048504317(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x8] ^= _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_05_func_373149173(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_05_func_1000222395(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_633791655(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("501b938c-c234-5d98-98c3-44bc1c57076d");

}

void _activation_check_proc_05_func_810609440(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_e)
{
	_activatnvar_generic_iterator = 4;
	_activation_check_proc_05_func_1352143396(_activatnvar_confusing_char_e);
	_activation_check_proc_05_func_1507362794(_activatnvar_confusing_U8_9);
}

void _activation_check_proc_05_func_1352143396(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_05_func_1507362794(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_05_func_2015549944(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_05_func_659801329(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_1 = 0x9;

}

void _activation_check_proc_05_func_486138254(LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_secret;

	/* inline */ _activation_check_proc_05_func_85422576(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_05_func_900049397(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_302217951(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1317680742(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1201054963(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1271068393(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_8, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_d ^= _activatnvar_confusing_char_8;

}

void _activation_check_proc_05_func_1709432856(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] = _activatnvar_confusing_LLUUID_7.mData[0xd];

	/* inline */ _activation_check_proc_05_func_1244860882(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_05_func_1392168007()
{
	
}

void _activation_check_proc_05_func_1683314488(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("3d2a73e2-ef77-e789-dbd9-c6d6ccca6f5e");

}

void _activation_check_proc_05_func_171625987(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("dcc1ee8e-a720-87d8-df6e-e10c77bdca49");

}

void _activation_check_proc_05_func_621435923(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_264056420(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1224817445(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_chararray_c[0x0];

}

void _activation_check_proc_05_func_1246871483()
{
	
}

void _activation_check_proc_05_func_387310917()
{
	
}

void _activation_check_proc_05_func_1713186343(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f += 0xa;

	/* inline */ _activation_check_proc_05_func_595626745(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_05_func_2105167284(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_lace.mData[0x0];

	/* inline */ _activation_check_proc_05_func_1122988319(_activatnvar_confusing_bool_e, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_05_func_439044832()
{
	
}

void _activation_check_proc_05_func_324118302(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1066626131(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_05_func_343991215(U8& _activatnvar_t1, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_7 = true;

	/* inline */ _activation_check_proc_05_func_1665288943(_activatnvar_t1, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_05_func_921909968(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_05_func_975873281(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_section2;

}

void _activation_check_proc_05_func_1594668892(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_f *= 0x3;

}

void _activation_check_proc_05_func_1159171793(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_b;

	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_05_func_1453470681(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("3a02d27f-7328-ef37-8231-18b1f4e7d42e");

}

void _activation_check_proc_05_func_176051573(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_05_func_575275951(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xa] += _activatnvar_lace.mData[0x1];

}

void _activation_check_proc_05_func_75806655(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_05_func_1768739842(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_05_func_1854991213(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_05_func_318319025(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] *= _activatnvar_so.mData[0x2];

	/* inline */ _activation_check_proc_05_func_321215152(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_05_func_759121864(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_0 = _activatnvar_confusing_int_9;

}

void _activation_check_proc_05_func_1372316908(int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 *= _activatnvar_confusing_int_c;

	_activation_check_proc_05_func_1148144884(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1148144884(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_368167311(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1787935483(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_05_func_77044511(_activatnvar_secret, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1562432963(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_9;

	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_05_func_824158920(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_05_func_1539242569(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_0 <<= 0xf;

}

void _activation_check_proc_05_func_95869283(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_05_func_839802138(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] &= _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_05_func_961418493(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_05_func_798168969(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] &= _activatnvar_confusing_LLUUID_2.mData[0x4];

	/* inline */ _activation_check_proc_05_func_404633533(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_05_func_1419392458(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_05_func_1419392458(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x3] ^= _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_05_func_1747881900(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_c.mData[0xe] += _activatnvar_section2.mData[0x5];

	_activation_check_proc_05_func_1392423910(_activatnvar_pos);
}

void _activation_check_proc_05_func_1392423910(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_05_func_1457951573(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_7.mData[0x6] >>= _activatnvar_confusing_chararray_0[0x6];

	_activation_check_proc_05_func_2003178281();
	_activation_check_proc_05_func_1000284289(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1000284289(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_2003178281()
{
	
}

void _activation_check_proc_05_func_586168434(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_05_func_505934928(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_8++;

	/* inline */ _activation_check_proc_05_func_1681182437(_activatnvar_confusing_chararray_2, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_05_func_1628848517(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_1, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

	_activation_check_proc_05_func_621481267(_activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_05_func_2125289412(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_05_func_1076079657(_activatnvar_confusing_char_1, _activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_e);
	_activation_check_proc_05_func_609596754();
}

void _activation_check_proc_05_func_621481267(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("d592ee35-280f-a2b4-81e2-843fcfb1b1e2");

}

void _activation_check_proc_05_func_609596754()
{
	
}

void _activation_check_proc_05_func_2085298749(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_b++;

	/* inline */ _activation_check_proc_05_func_1435134549(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_a, _activatnvar_confusing_chararray_d);
	_activation_check_proc_05_func_1486451816(_activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_05_func_958702420(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_05_func_1486451816(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_05_func_2106762522(char& _activatnvar_feat, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_feat;

}

void _activation_check_proc_05_func_21473023(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_05_func_358944738(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_05_func_1442505642()
{
	
}

void _activation_check_proc_05_func_1731953127(U8& _activatnvar_t0, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_t1 &= _activatnvar_t0;
	_activation_check_proc_05_func_1442505642();
	_activation_check_proc_05_func_2131694280(_activatnvar_section1, _activatnvar_confusing_U8_9);
	/* inline */ _activation_check_proc_05_func_663495835(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_05_func_2131694280(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_section1.mData[0x3];

}

void _activation_check_proc_05_func_313560864(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x3] += _activatnvar_confusing_chararray_c[0x1];

	_activation_check_proc_05_func_734754822();
}

void _activation_check_proc_05_func_734754822()
{
	
}

void _activation_check_proc_05_func_99158932(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_05_func_485258676(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x3] = _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_05_func_178496365(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_05_func_834325018(bool& _activatnvar_generic_bool_1, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_f, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_6)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_6 &= _activatnvar_confusing_char_f;

	/* inline */ _activation_check_proc_05_func_529386058(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_05_func_1808774201(_activatnvar_lace, _activatnvar_feat, _activatnvar_generic_bool_1, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_2102657925(U8& _activatnvar_t0)
{
	
	/* inline */ _activation_check_proc_05_func_1356565433(_activatnvar_t0);
}

void _activation_check_proc_05_func_113662806(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_chararray_a[0x6];

}

void _activation_check_proc_05_func_647559894(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b >>= _activatnvar_confusing_int_9;

}

void _activation_check_proc_05_func_1142968561(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 >>= 0x5;

}

void _activation_check_proc_05_func_994801269(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_2[0xc] += _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_05_func_315496347(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_05_func_704913311(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_05_func_2414664(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_97287851(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_05_func_4556856(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_05_func_2112763355(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_c &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_05_func_2141669454(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_05_func_1229766749(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_05_func_20497874(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("06bf8126-4452-e09d-e8c7-61a0be3537e7");

	_activatnvar_confusing_int_1 <<= _activatnvar_confusing_int_3;

}

void _activation_check_proc_05_func_469373035(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 *= _activatnvar_confusing_int_b;

}

void _activation_check_proc_05_func_1800445986(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_05_func_1129806815(bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_0;

	_activation_check_proc_05_func_1906345957(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_05_func_1906345957(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] *= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_05_func_851687021(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_05_func_1162646457(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_440909864(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_05_func_1048270939(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x6] &= _activatnvar_fscked.mData[0x7];

}

void _activation_check_proc_05_func_1942687903(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x1] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_05_func_52846476(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("ebd943aa-01f4-3f43-8fde-201917c59cfe");

}

void _activation_check_proc_05_func_1390480768(LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= _activatnvar_secret.mData[0x8];

}

void _activation_check_proc_05_func_1726112451(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_05_func_1982344378(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_05_func_197789052(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_1 >>= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_05_func_1174351210(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_6 >>= _activatnvar_confusing_int_9;

}

void _activation_check_proc_05_func_1063581266(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_chararray_8[0xd];

}

void _activation_check_proc_05_func_1295186272(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_05_func_1743826781(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x2] = _activatnvar_confusing_LLUUID_3.mData[0x6];

}

void _activation_check_proc_05_func_1341159342(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 >>= 0x3;

}

void _activation_check_proc_05_func_1665877896(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_4 = 0x4;

	/* inline */ _activation_check_proc_05_func_1288960830(_activatnvar_confusing_char_3);
	/* inline */ _activation_check_proc_05_func_672022879(_activatnvar_confusing_char_c, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_05_func_969000020(int& _activatnvar_confusing_int_a)
{
	
	/* inline */ _activation_check_proc_05_func_457367151(_activatnvar_confusing_int_a);
}

void _activation_check_proc_05_func_624514121(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= 0xc;

	/* inline */ _activation_check_proc_05_func_1841935650();
}

void _activation_check_proc_05_func_643043417(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_05_func_1855220355(_activatnvar_mac_digest, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_05_func_1855220355(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] *= _activatnvar_mac_digest[0xf];

}

void _activation_check_proc_05_func_2109484616(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_05_func_1429595089(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("cee480eb-1b65-ee6f-e0fb-aabf9240cf7b");

}

void _activation_check_proc_05_func_1490751448(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] |= _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_05_func_2049892620(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_05_func_1490751448(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_05_func_362833071(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 *= _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_05_func_1686523337(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	if(_activatnvar_confusing_LLUUID_d.mData[0x4] == _activatnvar_confusing_char_d) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_05_func_679644404(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a <<= 0x8;

	/* inline */ _activation_check_proc_05_func_191836143(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_05_func_432610244(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_fscked)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xd] == 0x8) _activatnvar_confusing_bool_3 = false;

	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_8 ^= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_05_func_786850805(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_05_func_90849996(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
	/* inline */ _activation_check_proc_05_func_1676576366(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_05_func_170550281(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_05_func_2090274127(_activatnvar_confusing_int_9, _activatnvar_confusing_int_e);
}

void _activation_check_proc_05_func_170550281(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xd] >>= _activatnvar_confusing_chararray_0[0x1];

}

void _activation_check_proc_05_func_2090274127(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_9 &= _activatnvar_confusing_int_e;

}

void _activation_check_proc_05_func_800589096(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] *= _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_05_func_1992240089(unsigned char* _activatnvar_mac_digest, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
}

void _activation_check_proc_05_func_829075311(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_c, LLMD5*& _activatnvar_mmd5, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_combined_id, LLMD5& _activatnvar_smd5, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_5, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_2, DWORD& _activatnvar_serial)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_a;

	_activation_check_proc_05_func_800589096(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_05_func_2000812744(_activatnvar_smd5, _activatnvar_serial);
	_activation_check_proc_05_func_493359142(_activatnvar_smd5);
	/* inline */ _activation_check_proc_05_func_515494144(_activatnvar_confusing_int_5);
	_activation_check_proc_05_func_977454006(_activatnvar_confusing_int_2, _activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_05_func_1471244068(_activatnvar_smd5, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_05_func_804141130(_activatnvar_mmd5);
	_activation_check_proc_05_func_1992240089(_activatnvar_mac_digest, _activatnvar_mmd5);
	_activation_check_proc_05_func_1532210816(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_05_func_153800622(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
}

void _activation_check_proc_05_func_1532210816(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_05_func_493359142(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_05_func_977454006(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_2 &= _activatnvar_confusing_int_f;

}

void _activation_check_proc_05_func_2000812744(LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
}

void _activation_check_proc_05_func_1459768437(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_b[0xb] &= _activatnvar_confusing_LLUUID_6.mData[0x5];

}

void _activation_check_proc_05_func_2059513311(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_05_func_1459768437(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_05_func_1611854184(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_05_func_150463126(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_05_func_621639882(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_05_func_1768516406(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x3] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_05_func_1511175842(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 >>= 0xb;

	
}

void _activation_check_proc_05_func_95572959(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x3] = _activatnvar_confusing_chararray_5[0xa];

	_activation_check_proc_05_func_874033755();
	_activation_check_proc_05_func_83598085(_activatnvar_confusing_int_7, _activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_05_func_699213404(_activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_d);
	_activation_check_proc_05_func_782346034(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_05_func_1266970071(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
	/* inline */ _activation_check_proc_05_func_700708504(_activatnvar_confusing_LLUUID_f, _activatnvar_combined_id);
}

void _activation_check_proc_05_func_874033755()
{
	
}

void _activation_check_proc_05_func_782346034(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_83598085(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_7 >>= _activatnvar_confusing_int_b;

}

void _activation_check_proc_05_func_1231198593(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_05_func_873857308(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_1.mData[0x5] ^= _activatnvar_confusing_LLUUID_3.mData[0x1];

}

void _activation_check_proc_05_func_1602882037(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_05_func_1551972110(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= _activatnvar_confusing_int_1;

}

void _activation_check_proc_05_func_1355519920(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_b;

	_activatnvar_confusing_int_4++;

	_activation_check_proc_05_func_1551972110(_activatnvar_confusing_int_1, _activatnvar_confusing_int_2);
	_activation_check_proc_05_func_402101213(_activatnvar_confusing_int_2);
}

void _activation_check_proc_05_func_402101213(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_05_func_1289056557(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] += _activatnvar_confusing_LLUUID_5.mData[0x1];

}

void _activation_check_proc_05_func_1979789899(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_so, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] ^= _activatnvar_so.mData[0x9];

	/* inline */ _activation_check_proc_05_func_1855033727(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_1667109744(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_05_func_583549414(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_05_func_1910742299(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_05_func_278067798(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

	_activatnvar_confusing_LLUUID_d.mData[0xf] += _activatnvar_mac_digest[0x3];

}

void _activation_check_proc_05_func_508872977(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] &= _activatnvar_mac_digest[0x0];

}

void _activation_check_proc_05_func_1932379689(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_05_func_1966187791(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xe] &= _activatnvar_confusing_chararray_2[0xa];

}

void _activation_check_proc_05_func_1816976019(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_696591392(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_364453953(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_05_func_1061289964(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_2 &= 0xd;

}

void _activation_check_proc_05_func_646782714(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_05_func_436212323(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_c |= _activatnvar_fscked.mData[0x5];

	_activatnvar_confusing_LLUUID_e.mData[0xb] <<= _activatnvar_confusing_LLUUID_6.mData[0xf];

}

void _activation_check_proc_05_func_994029147(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

	/* inline */ _activation_check_proc_05_func_74671028(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_05_func_1839381792(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_fscked.mData[0x8];

}

void _activation_check_proc_05_func_1769810(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_05_func_1360844481(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xa] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_05_func_2115410938(U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_b, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_3 += _activatnvar_confusing_U8_3;

	/* inline */ _activation_check_proc_05_func_728715148(_activatnvar_confusing_char_7, _activatnvar_confusing_int_b, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_05_func_84395896(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 += _activatnvar_confusing_int_0;

	_activation_check_proc_05_func_1211106642(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_05_func_1211106642(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_e.mData[0x8];

}

void _activation_check_proc_05_func_583358737(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_LLUUID_f.mData[0x7];

	_activatnvar_confusing_U8_7 |= _activatnvar_section1.mData[0xb];

	_activation_check_proc_05_func_2119383024(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_05_func_1350662853(_activatnvar_confusing_char_3, _activatnvar_confusing_char_f);
	_activation_check_proc_05_func_1210813951(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_2119383024(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_05_func_1210813951(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_357310252(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x1] = _activatnvar_so.mData[0x2];

}

void _activation_check_proc_05_func_711466496(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0x1;

}

void _activation_check_proc_05_func_1931058954(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_chararray_9[0x6];

	_activation_check_proc_05_func_357310252(_activatnvar_so, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_05_func_711466496(_activatnvar_confusing_int_c);
}

void _activation_check_proc_05_func_1564442636(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_a &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_05_func_941907923(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_2.mData[0x7] = _activatnvar_confusing_LLUUID_0.mData[0x5];

}

void _activation_check_proc_05_func_2010826139(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_LLUUID_8.mData[0x8];

}

void _activation_check_proc_05_func_983537894(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_05_func_975507834(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_05_func_1590302570(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_05_func_1581457782(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_4[0x4] ^= _activatnvar_confusing_chararray_8[0xc];

}

void _activation_check_proc_05_func_276004793(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_463762419(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_05_func_1365966703(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_code.mData[0xc];

}

void _activation_check_proc_05_func_1078298070(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 >>= _activatnvar_confusing_int_4;

	/* inline */ _activation_check_proc_05_func_540941701();
}

void _activation_check_proc_05_func_1871581172(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_05_func_511770679(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_8 = false;

	_activation_check_proc_05_func_1871581172(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_05_func_1281643052(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_d, _activatnvar_confusing_char_1);
}

void _activation_check_proc_05_func_2028386644(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_05_func_2061520345(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x3] ^= _activatnvar_confusing_chararray_d[0x1];

}

void _activation_check_proc_05_func_57258586(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] >>= _activatnvar_confusing_LLUUID_6.mData[0x8];

}

void _activation_check_proc_05_func_1471766199(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("a4ad606e-03f1-516c-bef9-58400cc5e954");

	/* inline */ _activation_check_proc_05_func_970512862(_activatnvar_confusing_char_0, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_05_func_1137295504(bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_chararray_a[0xc] |= _activatnvar_confusing_LLUUID_e.mData[0xd];

	/* inline */ _activation_check_proc_05_func_781033199(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_e, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_05_func_277208120(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a += 0x5;

}

void _activation_check_proc_05_func_1442522322(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_4[0x0] <<= _activatnvar_ser_digest[0xc];

	/* inline */ _activation_check_proc_05_func_49107096();
}

void _activation_check_proc_05_func_884543030(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_05_func_483406698(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_8 |= _activatnvar_confusing_U8_f;

	/* inline */ _activation_check_proc_05_func_96395737(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_05_func_1296699305(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_433838598(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_05_func_689543769(unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_a[0x2] &= _activatnvar_combined_id.mData[0xe];

	_activation_check_proc_05_func_1574577231(_activatnvar_confusing_int_4);
}

void _activation_check_proc_05_func_1574577231(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_05_func_571884380(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_8 ^= _activatnvar_confusing_int_a;

}

void _activation_check_proc_05_func_270767700(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_b;

	_activation_check_proc_05_func_1043700560(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked, _activatnvar_combined_id);
	_activation_check_proc_05_func_571884380(_activatnvar_confusing_int_8, _activatnvar_confusing_int_a);
}

void _activation_check_proc_05_func_1043700560(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_782037046(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 23; _activatnvar_strbuf_0[0] ^= 38; _activatnvar_strbuf_0[1] = 64; _activatnvar_strbuf_0[1] ^= 112; _activatnvar_strbuf_0[2] = 105; _activatnvar_strbuf_0[2] ^= 90; _activatnvar_strbuf_0[3] = 67; _activatnvar_strbuf_0[3] ^= 119; _activatnvar_strbuf_0[4] = 120; _activatnvar_strbuf_0[4] ^= 26; _activatnvar_strbuf_0[5] = 30; _activatnvar_strbuf_0[5] ^= 120; _activatnvar_strbuf_0[6] = 117; _activatnvar_strbuf_0[6] ^= 19; _activatnvar_strbuf_0[7] = 41; _activatnvar_strbuf_0[7] ^= 31; _activatnvar_strbuf_0[8] = 103; _activatnvar_strbuf_0[8] ^= 74; _activatnvar_strbuf_0[9] = 44; _activatnvar_strbuf_0[9] ^= 78; _activatnvar_strbuf_0[10] = 85; _activatnvar_strbuf_0[10] ^= 98; _activatnvar_strbuf_0[11] = 6; _activatnvar_strbuf_0[11] ^= 50; _activatnvar_strbuf_0[12] = 90; _activatnvar_strbuf_0[12] ^= 106; _activatnvar_strbuf_0[13] = 37; _activatnvar_strbuf_0[13] ^= 8; _activatnvar_strbuf_0[14] = 93; _activatnvar_strbuf_0[14] ^= 109; _activatnvar_strbuf_0[15] = 124; _activatnvar_strbuf_0[15] ^= 26; _activatnvar_strbuf_0[16] = 86; _activatnvar_strbuf_0[16] ^= 52; _activatnvar_strbuf_0[17] = 79; _activatnvar_strbuf_0[17] ^= 43; _activatnvar_strbuf_0[18] = 70; _activatnvar_strbuf_0[18] ^= 107; _activatnvar_strbuf_0[19] = 78; _activatnvar_strbuf_0[19] ^= 127; _activatnvar_strbuf_0[20] = 90; _activatnvar_strbuf_0[20] ^= 57; _activatnvar_strbuf_0[21] = 25; _activatnvar_strbuf_0[21] ^= 123; _activatnvar_strbuf_0[22] = 74; _activatnvar_strbuf_0[22] ^= 44; _activatnvar_strbuf_0[23] = 88; _activatnvar_strbuf_0[23] ^= 117; _activatnvar_strbuf_0[24] = 119; _activatnvar_strbuf_0[24] ^= 67; _activatnvar_strbuf_0[25] = 68; _activatnvar_strbuf_0[25] ^= 114; _activatnvar_strbuf_0[26] = 34; _activatnvar_strbuf_0[26] ^= 23; _activatnvar_strbuf_0[27] = 89; _activatnvar_strbuf_0[27] ^= 58; _activatnvar_strbuf_0[28] = 31; _activatnvar_strbuf_0[28] ^= 47; _activatnvar_strbuf_0[29] = 103; _activatnvar_strbuf_0[29] ^= 86; _activatnvar_strbuf_0[30] = 49; _activatnvar_strbuf_0[30] ^= 85; _activatnvar_strbuf_0[31] = 57; _activatnvar_strbuf_0[31] ^= 11; _activatnvar_strbuf_0[32] = 82; _activatnvar_strbuf_0[32] ^= 99; _activatnvar_strbuf_0[33] = 1; _activatnvar_strbuf_0[33] ^= 99; _activatnvar_strbuf_0[34] = 11; _activatnvar_strbuf_0[34] ^= 111; _activatnvar_strbuf_0[35] = 60; _activatnvar_strbuf_0[35] ^= 9; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_05_func_1673575855(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_c[0x7] &= _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_05_func_184388620(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x7] *= _activatnvar_confusing_chararray_e[0xe];

}

void _activation_check_proc_05_func_1217011973(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_strbuf_0[0] = 81; _activatnvar_strbuf_0[0] ^= 100; _activatnvar_strbuf_0[1] = 113; _activatnvar_strbuf_0[1] ^= 69; _activatnvar_strbuf_0[2] = 109; _activatnvar_strbuf_0[2] ^= 93; _activatnvar_strbuf_0[3] = 7; _activatnvar_strbuf_0[3] ^= 53; _activatnvar_strbuf_0[4] = 101; _activatnvar_strbuf_0[4] ^= 86; _activatnvar_strbuf_0[5] = 8; _activatnvar_strbuf_0[5] ^= 56; _activatnvar_strbuf_0[6] = 9; _activatnvar_strbuf_0[6] ^= 49; _activatnvar_strbuf_0[7] = 94; _activatnvar_strbuf_0[7] ^= 110; _activatnvar_strbuf_0[8] = 77; _activatnvar_strbuf_0[8] ^= 96; _activatnvar_strbuf_0[9] = 83; _activatnvar_strbuf_0[9] ^= 99; _activatnvar_strbuf_0[10] = 36; _activatnvar_strbuf_0[10] ^= 20; _activatnvar_strbuf_0[11] = 118; _activatnvar_strbuf_0[11] ^= 78; _activatnvar_strbuf_0[12] = 62; _activatnvar_strbuf_0[12] ^= 15; _activatnvar_strbuf_0[13] = 63; _activatnvar_strbuf_0[13] ^= 18; _activatnvar_strbuf_0[14] = 29; _activatnvar_strbuf_0[14] ^= 45; _activatnvar_strbuf_0[15] = 115; _activatnvar_strbuf_0[15] ^= 65; _activatnvar_strbuf_0[16] = 107; _activatnvar_strbuf_0[16] ^= 91; _activatnvar_strbuf_0[17] = 4; _activatnvar_strbuf_0[17] ^= 60; _activatnvar_strbuf_0[18] = 61; _activatnvar_strbuf_0[18] ^= 16; _activatnvar_strbuf_0[19] = 80; _activatnvar_strbuf_0[19] ^= 96; _activatnvar_strbuf_0[20] = 4; _activatnvar_strbuf_0[20] ^= 96; _activatnvar_strbuf_0[21] = 99; _activatnvar_strbuf_0[21] ^= 83; _activatnvar_strbuf_0[22] = 73; _activatnvar_strbuf_0[22] ^= 42; _activatnvar_strbuf_0[23] = 48; _activatnvar_strbuf_0[23] ^= 29; _activatnvar_strbuf_0[24] = 56; _activatnvar_strbuf_0[24] ^= 8; _activatnvar_strbuf_0[25] = 70; _activatnvar_strbuf_0[25] ^= 116; _activatnvar_strbuf_0[26] = 45; _activatnvar_strbuf_0[26] ^= 25; _activatnvar_strbuf_0[27] = 113; _activatnvar_strbuf_0[27] ^= 18; _activatnvar_strbuf_0[28] = 103; _activatnvar_strbuf_0[28] ^= 95; _activatnvar_strbuf_0[29] = 92; _activatnvar_strbuf_0[29] ^= 100; _activatnvar_strbuf_0[30] = 126; _activatnvar_strbuf_0[30] ^= 76; _activatnvar_strbuf_0[31] = 59; _activatnvar_strbuf_0[31] ^= 14; _activatnvar_strbuf_0[32] = 87; _activatnvar_strbuf_0[32] ^= 111; _activatnvar_strbuf_0[33] = 72; _activatnvar_strbuf_0[33] ^= 121; _activatnvar_strbuf_0[34] = 69; _activatnvar_strbuf_0[34] ^= 112; _activatnvar_strbuf_0[35] = 104; _activatnvar_strbuf_0[35] ^= 89; _activatnvar_strbuf_0[36] = 0;
	_activatnvar_confusing_LLUUID_a.mData[0x5] ^= _activatnvar_name_digest[0xc];

}

void _activation_check_proc_05_func_989150618(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_05_func_816748324(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xa] == 0x0) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_f;

	/* inline */ _activation_check_proc_05_func_926423173(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_1);
	_activation_check_proc_05_func_1368203725(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_05_func_1368203725(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_05_func_497832074(int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xd] &= _activatnvar_confusing_chararray_a[0x9];

	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_05_func_1478051399(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_635555812(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e |= 0xc;

}

void _activation_check_proc_05_func_1701060762(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_447083873()
{
	
}

void _activation_check_proc_05_func_1089734098(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("0d3219a1-e366-50fe-5f56-866e86017203");

}

void _activation_check_proc_05_func_680700417(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_05_func_1589794364(U8& _activatnvar_confusing_U8_7, int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_3, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 <<= _activatnvar_confusing_U8_7;

	_activation_check_proc_05_func_744009943(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_05_func_1663375389(_activatnvar_confusing_int_3);
}

void _activation_check_proc_05_func_744009943(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_05_func_380377840(int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_b *= _activatnvar_confusing_int_8;

	/* inline */ _activation_check_proc_05_func_1995337715(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_942037929(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_f++;

	_activation_check_proc_05_func_581876062(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
	_activation_check_proc_05_func_184566306(_activatnvar_confusing_int_4);
	_activation_check_proc_05_func_26387320(_activatnvar_confusing_int_8);
}

void _activation_check_proc_05_func_26387320(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_05_func_581876062(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_184566306(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_05_func_1073330583(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("d2c302bc-69f2-f56a-d6ef-46c342c37d5d");

	/* inline */ _activation_check_proc_05_func_1206408754(_activatnvar_t0);
	/* inline */ _activation_check_proc_05_func_1772349205(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_05_func_394572249(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_05_func_2144847463(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_0 >>= _activatnvar_confusing_char_5;

	_activation_check_proc_05_func_929635113(_activatnvar_confusing_LLUUID_e, _activatnvar_secret);
}

void _activation_check_proc_05_func_929635113(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_e.mData[0x5] = _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_05_func_494742503(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 += _activatnvar_confusing_chararray_3[0x3];

}

void _activation_check_proc_05_func_1278459609(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 >>= _activatnvar_confusing_chararray_1[0xe];

}

void _activation_check_proc_05_func_527847908(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_05_func_91596294(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6, char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_c;

	/* inline */ _activation_check_proc_05_func_1954372159(_activatnvar_strbuf_0, _activatnvar_section1);
	_activation_check_proc_05_func_1602076170(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_1);
	_activation_check_proc_05_func_527847908(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_05_func_333249064(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_05_func_1602076170(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_6.mData[0xf] *= _activatnvar_confusing_chararray_1[0xb];

}

void _activation_check_proc_05_func_1494188446(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_code;

}

void _activation_check_proc_05_func_1247425310(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_chararray_b[0x3];

}

void _activation_check_proc_05_func_13445972()
{
	
}

void _activation_check_proc_05_func_1300263532(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_05_func_1151975651(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_359423437(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1228155249(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_b, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_05_func_1094350118(_activatnvar_confusing_int_b, _activatnvar_confusing_int_0);
}

void _activation_check_proc_05_func_1094350118(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 ^= _activatnvar_confusing_int_b;

}

void _activation_check_proc_05_func_874659936(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_d, int& _activatnvar_confusing_int_9, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_4 >>= _activatnvar_confusing_char_9;

	_activation_check_proc_05_func_1216642875(_activatnvar_confusing_char_d, _activatnvar_confusing_bool_d, _activatnvar_confusing_U8_b);
	/* inline */ _activation_check_proc_05_func_365738477(_activatnvar_confusing_int_9);
	_activation_check_proc_05_func_1130594167(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_05_func_1216642875(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_d |= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_05_func_1130594167(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x6] == 0x1) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_05_func_1147961003(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_05_func_1167652690(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_section2.mData[0xa];

}

void _activation_check_proc_05_func_868435961(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 >>= _activatnvar_confusing_chararray_3[0xa];

}

void _activation_check_proc_05_func_1078715761(U8& _activatnvar_confusing_U8_7, char* _activatnvar_strbuf_0, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_7, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_5 *= 0xc;

	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_05_func_868435961(_activatnvar_confusing_chararray_3, _activatnvar_confusing_char_7);
	_activation_check_proc_05_func_1147961003(_activatnvar_section2, _activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_05_func_1063858049(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_7);
	_activation_check_proc_05_func_1167652690(_activatnvar_section2, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_05_func_960248070(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1572178508()
{
	
}

void _activation_check_proc_05_func_1276844705(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_0)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_1 >>= _activatnvar_confusing_U8_0;

	/* inline */ _activation_check_proc_05_func_651589585();
}

void _activation_check_proc_05_func_1819601878(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_LLUUID_8.mData[0x2] >>= _activatnvar_confusing_chararray_5[0x7];

	_activation_check_proc_05_func_1501357170(_activatnvar_confusing_int_0);
}

void _activation_check_proc_05_func_1501357170(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_05_func_524887272(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_c[0x1] += _activatnvar_confusing_chararray_7[0x7];

}

void _activation_check_proc_05_func_138667689(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x9] &= _activatnvar_confusing_chararray_1[0x5];

}

void _activation_check_proc_05_func_1657834690(bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1661214048(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_931807285(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x9] >>= _activatnvar_ser_digest[0x0];

	/* inline */ _activation_check_proc_05_func_68152871(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_05_func_2033754171(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_05_func_500329401(U8& _activatnvar_t1, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	_activation_check_proc_05_func_634206688(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_05_func_634206688(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_f[0x6] |= _activatnvar_confusing_chararray_0[0xb];

}

void _activation_check_proc_05_func_800134730(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x2] ^= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_05_func_613696108(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_char_4;

	/* inline */ _activation_check_proc_05_func_279272986(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_05_func_800134730(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_05_func_104137184(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_05_func_292074539(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_5)
{
	
	_activation_check_proc_05_func_1734523331(_activatnvar_confusing_char_5, _activatnvar_confusing_U8_b, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_05_func_1734523331(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_b *= _activatnvar_confusing_char_5;

}

void _activation_check_proc_05_func_1527506033(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_7;

	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_LLUUID_4.mData[0xb];

	/* inline */ _activation_check_proc_05_func_636986098(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_05_func_892603632(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_2[0x4] |= _activatnvar_confusing_LLUUID_9.mData[0x2];

}

void _activation_check_proc_05_func_1840097899(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_b[0xb] = _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_05_func_207951821(char& _activatnvar_confusing_char_9, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_9 &= _activatnvar_t0;

}

void _activation_check_proc_05_func_1599947495(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_1.mData[0xc] <<= _activatnvar_confusing_chararray_0[0x5];

}

void _activation_check_proc_05_func_1324787774(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_05_func_1607339690(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_5;

	_activation_check_proc_05_func_1324787774(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_f);
	/* inline */ _activation_check_proc_05_func_58281149(_activatnvar_confusing_int_1);
}

void _activation_check_proc_05_func_2111739758(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xf] += _activatnvar_section2.mData[0xa];

}

void _activation_check_proc_05_func_1374048578(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("51b8a145-2538-4797-2426-4f0ec6907598");

}

void _activation_check_proc_05_func_84158454(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_05_func_779559212(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_05_func_1578258200(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_05_func_1593961508(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 <<= _activatnvar_confusing_int_e;

	/* inline */ _activation_check_proc_05_func_2013437148(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_05_func_361444759(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("4f8922a4-56f9-1d66-80fe-194882436901");

}

void _activation_check_proc_05_func_739343908(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_e;

	_activation_check_proc_05_func_550790425(_activatnvar_confusing_U8_f, _activatnvar_confusing_U8_1);
	_activation_check_proc_05_func_361444759(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_05_func_550790425(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_f >>= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_05_func_1521843030(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_code;

}

void _activation_check_proc_05_func_1750621667(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_4[0x5];

	_activation_check_proc_05_func_1521843030(_activatnvar_code, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_05_func_566207384(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_05_func_566207384(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("71f2ef09-9999-34cd-fe58-5569b1268d51");

}

void _activation_check_proc_05_func_30460382(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_U8_1;

	_activation_check_proc_05_func_1435913090(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_05_func_953995411(_activatnvar_confusing_char_3);
}

void _activation_check_proc_05_func_1435913090(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_05_func_1165578210(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_05_func_362447906(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1806198362(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x4] >>= _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_05_func_2081290410(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_U8_5;

	_activation_check_proc_05_func_1806198362(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_05_func_1165578210(_activatnvar_confusing_char_0);
	_activation_check_proc_05_func_370470957(_activatnvar_confusing_chararray_6, _activatnvar_section2);
	_activation_check_proc_05_func_362447906(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_370470957(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_6[0x3] <<= _activatnvar_section2.mData[0xc];

}

void _activation_check_proc_05_func_624442149(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_05_func_847082115(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_304096381(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xc] == 0xc) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_05_func_2072793633(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_05_func_1706556560(unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x2] &= _activatnvar_confusing_chararray_2[0x3];

}

void _activation_check_proc_05_func_1942760049(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_1[0x7] += _activatnvar_confusing_LLUUID_1.mData[0x2];

	_activation_check_proc_05_func_1706556560(_activatnvar_confusing_chararray_2);
}

void _activation_check_proc_05_func_1439841343(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_2;

	/* inline */ _activation_check_proc_05_func_1619805402(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_05_func_488937067()
{
	
}

void _activation_check_proc_05_func_1161432928(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_05_func_1298036205(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_f &= 0x5;

}

void _activation_check_proc_05_func_1471162053(U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_b, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_05_func_865429666(_activatnvar_confusing_U8_6, _activatnvar_generic_bool_1, _activatnvar_confusing_char_b);
}

void _activation_check_proc_05_func_74002509(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_doaccount;

}

void _activation_check_proc_05_func_1576888507(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] <<= _activatnvar_name_digest[0x4];

}

void _activation_check_proc_05_func_1063452040(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1571615788(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_chararray_0[0xf];

	_activation_check_proc_05_func_1239418465(_activatnvar_confusing_U8_9);
}

void _activation_check_proc_05_func_1239418465(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_05_func_1840765332(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1005622346(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_8 = _activatnvar_section1.mData[0x4];

}

void _activation_check_proc_05_func_1432306431(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_05_func_1061173046(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_2104705627(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_05_func_154531894(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_05_func_1997800383(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_05_func_1592384523(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_05_func_2001449844(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

	_activation_check_proc_05_func_1592384523(_activatnvar_confusing_U8_8, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_05_func_837765622(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_1)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_1 *= _activatnvar_confusing_char_2;

}

void _activation_check_proc_05_func_448158770(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_8 ^= _activatnvar_confusing_chararray_b[0x8];

}

void _activation_check_proc_05_func_385585323(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_e.mData[0x6] *= _activatnvar_confusing_chararray_0[0x9];

	_activation_check_proc_05_func_852283492(_activatnvar_confusing_U8_4, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_05_func_852283492(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_LLUUID_5.mData[0xb];

}

void _activation_check_proc_05_func_781883166(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_1;

	/* inline */ _activation_check_proc_05_func_584649274(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_05_func_1435254696(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_05_func_440081413(_activatnvar_section2, _activatnvar_confusing_U8_4, _activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_05_func_440081413(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_chararray_b[0xb];

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_2028807971(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_05_func_125613835(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_05_func_2028807971(_activatnvar_confusing_int_9);
}

void _activation_check_proc_05_func_94741912(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_4 >>= _activatnvar_confusing_chararray_e[0xd];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_516287683(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_05_func_1273369443(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1718087186(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_chararray_e[0x9];

}

void _activation_check_proc_05_func_1431437306(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] += _activatnvar_section1.mData[0xf];

	_activation_check_proc_05_func_516287683(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_05_func_1273369443(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_05_func_317450671(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_4);
	_activation_check_proc_05_func_1718087186(_activatnvar_confusing_char_d, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_05_func_262235008(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_05_func_1097289926(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1068604235(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_05_func_1612182096(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_05_func_385591412(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_0)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_c &= _activatnvar_confusing_char_0;

}

void _activation_check_proc_05_func_1649666285(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x2] |= _activatnvar_confusing_LLUUID_6.mData[0x9];

}

void _activation_check_proc_05_func_182773964(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_d[0xe] &= _activatnvar_code.mData[0x0];

}

void _activation_check_proc_05_func_1742146744(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_2++;

	_activation_check_proc_05_func_1649666285(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_0);
	_activation_check_proc_05_func_182773964(_activatnvar_confusing_chararray_d, _activatnvar_code);
}

void _activation_check_proc_05_func_1300080787(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_c += _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_05_func_1642525502(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_b *= _activatnvar_confusing_chararray_1[0xb];

}

void _activation_check_proc_05_func_777678905(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_e;

	/* inline */ _activation_check_proc_05_func_816772524(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_05_func_155152265(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x1] == _activatnvar_confusing_char_e) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_05_func_645205294(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_05_func_1849672412(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_05_func_580099152(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 ^= _activatnvar_confusing_int_6;

}

void _activation_check_proc_05_func_1350709526(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_05_func_658815745(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_05_func_1310380732(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_05_func_77993538(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_05_func_1597469357(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_5.mData[0xf] &= _activatnvar_confusing_chararray_1[0x5];

}

void _activation_check_proc_05_func_1455187735(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	
	/* inline */ _activation_check_proc_05_func_1627576726(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_05_func_908817135(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_05_func_1133269015(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_4 = _activatnvar_lace.mData[0x4];

}

void _activation_check_proc_05_func_1787875363(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_05_func_2112376039(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1882887361(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c ^= 0x0;

	_activation_check_proc_05_func_789695683(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_int_0);
}

void _activation_check_proc_05_func_789695683(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("974e4af6-84d5-ef3c-2fa8-0c19fd9aa3e2");

	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_05_func_1733729303(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t0, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_7 = _activatnvar_generic_bool_1;

	/* inline */ _activation_check_proc_05_func_1476212797(_activatnvar_confusing_U8_d, _activatnvar_code);
	/* inline */ _activation_check_proc_05_func_66716985(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_05_func_1812338420(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_fscked)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xc] != _activatnvar_pos) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_e;

	_activation_check_proc_05_func_1063485977(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_code);
}

void _activation_check_proc_05_func_1063485977(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_05_func_1589495430(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_05_func_40656782(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_d, LLMD5*& _activatnvar_nmd5, std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
	/* inline */ _activation_check_proc_05_func_442041041(_activatnvar_confusing_LLUUID_d);
	_activation_check_proc_05_func_1589495430(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_05_func_104229894(_activatnvar_fullname, _activatnvar_nmd5);
}

void _activation_check_proc_05_func_181778022(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_05_func_1179839233(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_6 >>= _activatnvar_confusing_int_5;

	/* inline */ _activation_check_proc_05_func_2046799371(_activatnvar_confusing_int_6, _activatnvar_confusing_int_5);
}

void _activation_check_proc_05_func_1173200807(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_05_func_1744964376(char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_05_func_1204580475(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] *= _activatnvar_combined_id.mData[0x5];

}

void _activation_check_proc_05_func_1366876411(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_8)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_9 &= _activatnvar_confusing_char_8;

}

void _activation_check_proc_05_func_850221438(char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_d, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_int_7 *= _activatnvar_confusing_int_b;

	_activation_check_proc_05_func_1366876411(_activatnvar_confusing_char_9, _activatnvar_confusing_bool_d, _activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_05_func_67591169(_activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_05_func_1839567172(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_4 *= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_05_func_460527115(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_05_func_672497414(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_05_func_628015302(unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_d <<= _activatnvar_confusing_chararray_7[0xa];

	_activatnvar_confusing_chararray_1[0xb] = _activatnvar_confusing_LLUUID_4.mData[0xa];

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_05_func_827672012(_activatnvar_generic_iterator);
}

void _activation_check_proc_05_func_72585384(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xe] ^= _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_05_func_747597335(unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x1] |= _activatnvar_confusing_chararray_c[0x9];

}

void _activation_check_proc_05_func_1012160207(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_int_8++;

	_activation_check_proc_05_func_72585384(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_05_func_1227928868(_activatnvar_confusing_LLUUID_8);
	_activation_check_proc_05_func_747597335(_activatnvar_confusing_chararray_c);
}

void _activation_check_proc_05_func_649566539(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] *= _activatnvar_confusing_LLUUID_b.mData[0xf];

}

void _activation_check_proc_05_func_1837265049(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_05_func_649566539(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_5);
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
