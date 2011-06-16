// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation1c.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 1c

void _activation_check_proc_1c_func_359547138(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_1c_func_1006407086(char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1c_func_151784612(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_b, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_confusing_char_b++;

	_activation_check_proc_1c_func_1006407086(_activatnvar_feat, _activatnvar_lace, _activatnvar_doaccount, _activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1656052294(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_1c_func_1006844097(_activatnvar_pos);
	_activation_check_proc_1c_func_1510753164(_activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_1c_func_2079854737(_activatnvar_t0, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1c_func_1534371302(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1c_func_1510753164(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_1c_func_11677913(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1c_func_615767794(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_8, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_8 <<= _activatnvar_confusing_chararray_5[0x1];

	_activation_check_proc_1c_func_1217691697(_activatnvar_confusing_chararray_e, _activatnvar_confusing_U8_b);
	_activation_check_proc_1c_func_11677913(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1c_func_1217691697(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_1c_func_1667928175(U8& _activatnvar_t0, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

	_activation_check_proc_1c_func_1976991815(_activatnvar_t0);
}

void _activation_check_proc_1c_func_1976991815(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1c_func_1785045304(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xb;

}

void _activation_check_proc_1c_func_1488149003(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_e;

	/* inline */ _activation_check_proc_1c_func_10262329(_activatnvar_code, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_1c_func_1838201032(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1c_func_1443990490(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] &= _activatnvar_combined_id.mData[0xa];

	_activatnvar_confusing_LLUUID_2.mData[0x1] >>= _activatnvar_confusing_LLUUID_2.mData[0x8];

}

void _activation_check_proc_1c_func_392800324(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_combined_id)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_1c_func_1443990490(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_2, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_2033163895(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_1c_func_2135798939(U8& _activatnvar_t0, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xb] += _activatnvar_mac_digest[0x5];

	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1c_func_302310004(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x1] = _activatnvar_confusing_chararray_1[0x7];

}

void _activation_check_proc_1c_func_1989928103(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_1c_func_365245510(_activatnvar_confusing_char_5, _activatnvar_confusing_bool_7);
	_activation_check_proc_1c_func_2135798939(_activatnvar_t0, _activatnvar_mac_digest, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_1c_func_302310004(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_1c_func_1147873163(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1063840945(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1c_func_956447694(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1c_func_11885200(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1c_func_1590165461(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_9.mData[0x1] >>= _activatnvar_ser_digest[0x7];

}

void _activation_check_proc_1c_func_407894366(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_c.mData[0xe] >>= _activatnvar_confusing_LLUUID_4.mData[0x1];

}

void _activation_check_proc_1c_func_144220810(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xa] <<= _activatnvar_confusing_chararray_9[0xc];

}

void _activation_check_proc_1c_func_2133892343(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_291258785(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xf] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_1c_func_565831695(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_5[0xf] *= _activatnvar_confusing_chararray_d[0x4];

}

void _activation_check_proc_1c_func_656244975(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_565831695(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_1c_func_1110945108(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1561124501(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1c_func_1894510411(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f += _activatnvar_confusing_chararray_4[0xa];

}

void _activation_check_proc_1c_func_2098933226(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 <<= _activatnvar_confusing_chararray_c[0x7];

	_activation_check_proc_1c_func_1894510411(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_1c_func_763791511(int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("238996e8-85a7-4bc1-9ae4-051b11ef0807");

	/* inline */ _activation_check_proc_1c_func_2043615568(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1c_func_1303786560(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_secret;

}

void _activation_check_proc_1c_func_450069019(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_1c_func_1046247655(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x5] += _activatnvar_confusing_LLUUID_a.mData[0xf];

}

void _activation_check_proc_1c_func_678832860(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1c_func_784371464(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_pos, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x2] = _activatnvar_confusing_chararray_b[0x7];

	_activation_check_proc_1c_func_678832860(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
	_activation_check_proc_1c_func_1046247655(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1c_func_474536181(_activatnvar_fscked, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_1c_func_678248987(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1c_func_678248987(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_1c_func_474536181(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xe] += _activatnvar_fscked.mData[0x7];

}

void _activation_check_proc_1c_func_433748166(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1c_func_286847442(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_6 = _activatnvar_secret.mData[0x1];

}

void _activation_check_proc_1c_func_852144936(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_secret, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_secret;

	_activation_check_proc_1c_func_433748166(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	_activation_check_proc_1c_func_286847442(_activatnvar_confusing_U8_6, _activatnvar_secret);
}

void _activation_check_proc_1c_func_96270632(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_b[0x4] |= _activatnvar_so.mData[0xd];

}

void _activation_check_proc_1c_func_1322276244(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_1c_func_1856872002(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

	_activation_check_proc_1c_func_1322276244(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_1c_func_1151924555();
}

void _activation_check_proc_1c_func_1408233159(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_6 += _activatnvar_confusing_int_f;

}

void _activation_check_proc_1c_func_502908083(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_1c_func_1177891237(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_chararray_5[0x5];

	_activation_check_proc_1c_func_502908083(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_1c_func_1408233159(_activatnvar_confusing_int_6, _activatnvar_confusing_int_f);
	_activation_check_proc_1c_func_1740490867(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_1c_func_1568328613(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1c_func_1740490867(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1c_func_1204713231(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_confusing_chararray_5[0x4];

}

void _activation_check_proc_1c_func_536536481(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_t0, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_t0 &= 7;
	
	_activation_check_proc_1c_func_490388101(_activatnvar_confusing_LLUUID_8, _activatnvar_mac_digest, _activatnvar_confusing_char_e);
	/* inline */ _activation_check_proc_1c_func_1584067142(_activatnvar_t0);
	_activation_check_proc_1c_func_1019656367(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_1c_func_1019656367(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= 0x7;

}

void _activation_check_proc_1c_func_490388101(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] ^= _activatnvar_mac_digest[0xe];

	_activatnvar_confusing_char_e &= 0xf;

}

void _activation_check_proc_1c_func_1947660868(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1c_func_1677312344(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_466288957(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("53964f90-380b-82f6-3e64-3743077348aa");

	_activation_check_proc_1c_func_1677312344(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	_activation_check_proc_1c_func_1947660868(_activatnvar_confusing_int_7);
}

void _activation_check_proc_1c_func_481231470(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 <<= 0x1;

}

void _activation_check_proc_1c_func_570222257(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_1c_func_1550699268(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_b[0x6] *= _activatnvar_confusing_chararray_d[0x5];

	_activation_check_proc_1c_func_570222257(_activatnvar_confusing_U8_6, _activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_1c_func_2066592553(_activatnvar_confusing_U8_4);
}

void _activation_check_proc_1c_func_1089192057(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0x7;

}

void _activation_check_proc_1c_func_1780866104(int& _activatnvar_confusing_int_0, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
	/* inline */ _activation_check_proc_1c_func_468663041(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_1c_func_1204517576(_activatnvar_confusing_char_f);
}

void _activation_check_proc_1c_func_288998168(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] >>= _activatnvar_confusing_chararray_6[0xb];

}

void _activation_check_proc_1c_func_1260649643(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_1c_func_423267322(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0x5;

}

void _activation_check_proc_1c_func_644376592(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1c_func_2048775577(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x9] |= _activatnvar_confusing_LLUUID_9.mData[0x3];

}

void _activation_check_proc_1c_func_705373135(U8& _activatnvar_confusing_U8_3)
{
	
	_activation_check_proc_1c_func_264000198(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_1c_func_264000198(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_1c_func_804722094()
{
	
}

void _activation_check_proc_1c_func_980809885(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("2d728a39-0426-1851-1d94-799c94edc819");

}

void _activation_check_proc_1c_func_648272732(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_char_5;

	_activation_check_proc_1c_func_980809885(_activatnvar_confusing_LLUUID_8);
	_activation_check_proc_1c_func_864521368(_activatnvar_fscked, _activatnvar_confusing_int_0, _activatnvar_confusing_chararray_a);
	_activation_check_proc_1c_func_1348302111(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1c_func_1348302111(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] += _activatnvar_confusing_LLUUID_f.mData[0xf];

}

void _activation_check_proc_1c_func_864521368(LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_0, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_int_0++;

	_activatnvar_confusing_chararray_a[0xa] ^= _activatnvar_fscked.mData[0xc];

}

void _activation_check_proc_1c_func_171154203(int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_6, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	/* inline */ _activation_check_proc_1c_func_1381282407(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_1c_func_1400238903(_activatnvar_confusing_char_6, _activatnvar_confusing_U8_1, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_1c_func_1950785418();
	_activation_check_proc_1c_func_442500720();
	/* inline */ _activation_check_proc_1c_func_455068288(_activatnvar_confusing_int_b);
}

void _activation_check_proc_1c_func_442500720()
{
	
}

void _activation_check_proc_1c_func_1716153255(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_c[0xa] &= _activatnvar_confusing_chararray_2[0xa];

}

void _activation_check_proc_1c_func_1239898466(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("63d0e2cd-711f-4c31-3abb-0fb4b793115b");

}

void _activation_check_proc_1c_func_583306196(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_e >>= _activatnvar_confusing_char_8;

}

void _activation_check_proc_1c_func_543523505()
{
	
}

void _activation_check_proc_1c_func_1744906586()
{
	
}

void _activation_check_proc_1c_func_885926323(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 <<= _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_1c_func_974046379(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_char_1;

	/* inline */ _activation_check_proc_1c_func_176623486(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_270368893(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1c_func_1507300786(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xe] <<= _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_1c_func_675351249(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("7e9ad9cf-7f8a-46e2-276b-605d8a24650d");

}

void _activation_check_proc_1c_func_515082490(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1c_func_500869642(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_c[0x7] &= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_1c_func_459952677(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_6.mData[0x5];

}

void _activation_check_proc_1c_func_1288695801(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_c[0xb] &= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_1c_func_406509593(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_278312707(int& _activatnvar_confusing_int_f, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_5)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_1c_func_1972651932(_activatnvar_confusing_int_f, _activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_1c_func_1675958395(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1c_func_1972651932(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_f &= _activatnvar_confusing_int_5;

}

void _activation_check_proc_1c_func_1887743642(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_1c_func_704292271(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1746645861(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_combined_id)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_0 += 0x6;

	_activation_check_proc_1c_func_704292271(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_927666229(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x3] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_1c_func_185237188(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_927666229(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_c, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_1c_func_265744514(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1c_func_649720496(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x7] += _activatnvar_confusing_LLUUID_1.mData[0x2];

	/* inline */ _activation_check_proc_1c_func_1451130053(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
	/* inline */ _activation_check_proc_1c_func_94524783(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_1c_func_558033775(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("8ac45620-aebe-5d18-639b-7a641f3e2af3");

	_activation_check_proc_1c_func_1037901684(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_f, _activatnvar_confusing_bool_5);
	_activation_check_proc_1c_func_1370694192(_activatnvar_confusing_int_9);
}

void _activation_check_proc_1c_func_1037901684(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1c_func_1370694192(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_1c_func_2061042823(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 &= _activatnvar_confusing_LLUUID_e.mData[0x7];

	_activation_check_proc_1c_func_1332404514(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_1c_func_1924531602(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_1c_func_585767592(_activatnvar_secret, _activatnvar_confusing_chararray_4);
	_activation_check_proc_1c_func_1368160069(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1368160069(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1332404514(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_1c_func_819591571(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_t1, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_t0)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_1c_func_705724716(_activatnvar_t0, _activatnvar_confusing_U8_e, _activatnvar_t1, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_1c_func_924351128(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_a.mData[0xb] >>= _activatnvar_confusing_LLUUID_6.mData[0x1];

}

void _activation_check_proc_1c_func_1769886618(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 *= _activatnvar_confusing_int_b;

	_activation_check_proc_1c_func_924351128(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1c_func_308296345(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_1c_func_1984364245(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x2] ^= _activatnvar_secret.mData[0x4];

}

void _activation_check_proc_1c_func_279513915(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_1c_func_1636699302(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_1c_func_1805564137(U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_1.mData[0x1] >>= _activatnvar_section2.mData[0x8];

	_activation_check_proc_1c_func_1636699302(_activatnvar_t1, _activatnvar_t0);
}

void _activation_check_proc_1c_func_1490052364(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xb] |= _activatnvar_confusing_LLUUID_7.mData[0x1];

}

void _activation_check_proc_1c_func_1367712359(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_1c_func_542214830(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_doaccount;

}

void _activation_check_proc_1c_func_1979088770(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x6] &= _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_1c_func_93802810(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1c_func_584470636(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_4.mData[0x0] <<= _activatnvar_confusing_LLUUID_d.mData[0xb];

}

void _activation_check_proc_1c_func_431095726(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_1c_func_434552296(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_1c_func_1508482625(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("0bc44fc7-b9da-79fd-92c3-ad458f7af187");

	_activation_check_proc_1c_func_247861544(_activatnvar_confusing_char_a);
}

void _activation_check_proc_1c_func_247861544(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_1c_func_465554174()
{
	
}

void _activation_check_proc_1c_func_343874923(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1c_func_1099056858(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("d18654b7-ab9a-3e39-04d5-1f8b2c239a4c");

}

void _activation_check_proc_1c_func_1507314877(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_1099056858(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1c_func_442337576(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1c_func_1100720232(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_d, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_char_d = _activatnvar_lace.mData[0x0];

	/* inline */ _activation_check_proc_1c_func_735288616(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_1c_func_1521592572(_activatnvar_generic_iterator);
	_activation_check_proc_1c_func_442337576(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_1c_func_1814761682(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1c_func_390590249(LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
	/* inline */ _activation_check_proc_1c_func_1272808265(_activatnvar_smd5, _activatnvar_serial);
}

void _activation_check_proc_1c_func_901624899(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1504184009(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 |= 0xe;

}

void _activation_check_proc_1c_func_499663613(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_a)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_a >>= 0x5;

}

void _activation_check_proc_1c_func_1854649843(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("14e71dee-0edf-2da3-424f-0a072843887e");

}

void _activation_check_proc_1c_func_2061974128(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1871720926(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_4 += _activatnvar_confusing_char_0;

}

void _activation_check_proc_1c_func_1289215856(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("50c0eb08-bd3e-bde6-5193-0f9412204f03");

}

void _activation_check_proc_1c_func_1210219566(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_confusing_char_2;

	_activation_check_proc_1c_func_1289215856(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1c_func_23155318(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1c_func_1385332606(bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1c_func_896568008(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_7, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
	/* inline */ _activation_check_proc_1c_func_1627621064(_activatnvar_pos);
	_activation_check_proc_1c_func_23155318(_activatnvar_pos);
	_activation_check_proc_1c_func_1385332606(_activatnvar_confusing_bool_1);
	/* inline */ _activation_check_proc_1c_func_683805553(_activatnvar_t0, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1c_func_1582487009(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_7, _activatnvar_t0);
}

void _activation_check_proc_1c_func_367334554(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_5.mData[0x3];

}

void _activation_check_proc_1c_func_88416527(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 += _activatnvar_confusing_chararray_9[0xc];

	/* inline */ _activation_check_proc_1c_func_54376854(_activatnvar_confusing_U8_b);
	_activation_check_proc_1c_func_367334554(_activatnvar_confusing_char_3, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1c_func_1472173703(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_39428961(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] = _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_1c_func_278800486(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_1c_func_1258273635(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_1c_func_1725953256(_activatnvar_confusing_U8_d);
	_activation_check_proc_1c_func_679614564(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_U8_8);
	_activation_check_proc_1c_func_278800486(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_1c_func_679614564(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_a.mData[0xb];

}

void _activation_check_proc_1c_func_1607317852(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_4 *= 0x0;

}

void _activation_check_proc_1c_func_652078023()
{
	
}

void _activation_check_proc_1c_func_1540668097(U8& _activatnvar_confusing_U8_4, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_652078023();
	_activation_check_proc_1c_func_1607317852(_activatnvar_confusing_U8_4, _activatnvar_doaccount);
}

void _activation_check_proc_1c_func_1616805560(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_confusing_chararray_3[0x1];

	/* inline */ _activation_check_proc_1c_func_1113699417(_activatnvar_confusing_chararray_3, _activatnvar_code);
}

void _activation_check_proc_1c_func_463759425(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_section2;

	_activatnvar_confusing_char_8 ^= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_1c_func_1621548646(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_1c_func_138675984(_activatnvar_t0);
}

void _activation_check_proc_1c_func_1177284938(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_8 >>= 0xb;

}

void _activation_check_proc_1c_func_1858812410(int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1c_func_1607595941(_activatnvar_confusing_int_c);
}

void _activation_check_proc_1c_func_380672993(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("b8279d1c-1f16-7ae4-dc51-45d2d3184f00");

}

void _activation_check_proc_1c_func_1954095387(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0xf;

}

void _activation_check_proc_1c_func_1550430614(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1c_func_315069861(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("54bb8d1c-d6b4-5204-c6a9-2b9343b88aa9");

	_activation_check_proc_1c_func_1550430614(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_1c_func_237928867(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1c_func_2084271483(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_237928867(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_1c_func_404198371(_activatnvar_confusing_int_2, _activatnvar_confusing_int_f);
}

void _activation_check_proc_1c_func_1061517216(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_974037098(_activatnvar_confusing_char_1, _activatnvar_feat);
	/* inline */ _activation_check_proc_1c_func_639181494(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1c_func_974037098(char& _activatnvar_confusing_char_1, char& _activatnvar_feat)
{
	_activatnvar_confusing_char_1 = _activatnvar_feat;

}

void _activation_check_proc_1c_func_1897838261(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_5)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_4 += _activatnvar_confusing_U8_5;

}

void _activation_check_proc_1c_func_793953732(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 += 0x3;

	/* inline */ _activation_check_proc_1c_func_1212631945(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_4);
	_activation_check_proc_1c_func_1437472117(_activatnvar_confusing_char_9);
}

void _activation_check_proc_1c_func_1437472117(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 ^= 0xb;

}

void _activation_check_proc_1c_func_1198937139(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_222634206(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1c_func_222634206(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("a5f177c1-7eba-e2a3-9f7c-009882d27909");

}

void _activation_check_proc_1c_func_437243539(bool& _activatnvar_confusing_bool_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1c_func_755174762(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_1c_func_693770427(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_1c_func_1188837047(_activatnvar_t0);
}

void _activation_check_proc_1c_func_378389833(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("00131bc9-968d-5f9e-b0cf-921673ad4eb1");

}

void _activation_check_proc_1c_func_1765031236(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_7 |= _activatnvar_confusing_LLUUID_c.mData[0x5];

	_activation_check_proc_1c_func_1732604215();
}

void _activation_check_proc_1c_func_1732604215()
{
	
}

void _activation_check_proc_1c_func_1625237423(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_d, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_1c_func_531428097(_activatnvar_confusing_U8_a, _activatnvar_confusing_U8_d);
	_activation_check_proc_1c_func_1380637257(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1380637257(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1026122565(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_9 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_1c_func_1594574551(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_section2.mData[0xf];

}

void _activation_check_proc_1c_func_1781421866(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_lace;

}

void _activation_check_proc_1c_func_1981140256(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xf] == 0x4) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_1c_func_356604942(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_LLUUID_c.mData[0xa];

	_activatnvar_t0 &= 3;
}

void _activation_check_proc_1c_func_15025047(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_1c_func_1736050903(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_pos, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_7;

	_activation_check_proc_1c_func_679307353(_activatnvar_pos, _activatnvar_so, _activatnvar_t1);
	_activation_check_proc_1c_func_15025047(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_1c_func_679307353(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_1c_func_1771292725()
{
	
}

void _activation_check_proc_1c_func_1312814543(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_1c_func_1458642277(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_601573832(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_2064480257(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_1c_func_805622985()
{
	
}

void _activation_check_proc_1c_func_1310282412(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_1c_func_1949293699(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_6 += 0x6;

}

void _activation_check_proc_1c_func_1397386255(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_chararray_9[0x5] += _activatnvar_confusing_LLUUID_c.mData[0xe];

	_activation_check_proc_1c_func_1949293699(_activatnvar_confusing_bool_6, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_1c_func_285261258(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1c_func_1864920606(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("14923b15-bf7e-bdcd-c85a-8137303c7fa3");

}

void _activation_check_proc_1c_func_1102421643(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_secret;

}

void _activation_check_proc_1c_func_1069617838(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_b |= _activatnvar_section1.mData[0x5];

	_activation_check_proc_1c_func_876148142(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_1c_func_876148142(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1c_func_1615203618(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1c_func_66131537(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_so ^= _activatnvar_section2;
}

void _activation_check_proc_1c_func_1271635358(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_1c_func_115516123(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_c[0x8];

}

void _activation_check_proc_1c_func_1288999869(int& _activatnvar_confusing_int_f, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = true;

	/* inline */ _activation_check_proc_1c_func_950805963(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1c_func_1562472310(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1c_func_183133974(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_1c_func_1651357217(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x4] == _activatnvar_confusing_char_d) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_1c_func_1369419293(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_7, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	/* inline */ _activation_check_proc_1c_func_1309020773(_activatnvar_confusing_U8_7, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_1c_func_1651357217(_activatnvar_confusing_bool_9, _activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1c_func_1882560962(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x1] += _activatnvar_confusing_LLUUID_0.mData[0xf];

}

void _activation_check_proc_1c_func_804108214(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_pos;

}

void _activation_check_proc_1c_func_1147914051(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_1c_func_1378941327(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1c_func_1378941327(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a = 0xe;

}

void _activation_check_proc_1c_func_1936106641(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
	/* inline */ _activation_check_proc_1c_func_218740235(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_1c_func_2081250278(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_1c_func_433830948(char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_4++;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1530604999(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1c_func_172956679(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xb] = _activatnvar_ser_digest[0xd];

}

void _activation_check_proc_1c_func_891638329(unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_e;

	_activation_check_proc_1c_func_1122825782(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_1c_func_1122825782(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] ^= _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_1c_func_2077383709(U8& _activatnvar_t1, U8& _activatnvar_pos, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
	/* inline */ _activation_check_proc_1c_func_416993028(_activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_1c_func_425502099(_activatnvar_confusing_char_f, _activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_1c_func_1973403936(_activatnvar_generic_bool_1, _activatnvar_confusing_U8_4, _activatnvar_confusing_char_9);
}

void _activation_check_proc_1c_func_425502099(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xb] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1c_func_457098821(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_c += _activatnvar_confusing_char_a;

	/* inline */ _activation_check_proc_1c_func_882268885(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1c_func_1973222477(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_1c_func_185510552(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_1c_func_2006023393(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_1c_func_1127356969(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1c_func_444391717(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_chararray_d[0x1];

}

void _activation_check_proc_1c_func_1592062089(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_7;

	_activation_check_proc_1c_func_1391177806(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1c_func_1391177806(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1c_func_339320584(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_1c_func_1412394056(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1c_func_1902050153(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("43f6e6f4-0642-266e-a11a-a4b2ddf3856c");

}

void _activation_check_proc_1c_func_283250869(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1c_func_1865445255(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_e *= _activatnvar_confusing_chararray_4[0xb];

}

void _activation_check_proc_1c_func_1327731428(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1c_func_1630251077(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x7] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1c_func_505407429(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x9] = _activatnvar_confusing_chararray_b[0x2];

	_activation_check_proc_1c_func_650654527(_activatnvar_confusing_chararray_8, _activatnvar_confusing_char_f);
}

void _activation_check_proc_1c_func_650654527(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f >>= _activatnvar_confusing_chararray_8[0x7];

}

void _activation_check_proc_1c_func_1921911708(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1c_func_1322056138(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("eca42470-6435-fe7b-a21f-67984ab04f55");

}

void _activation_check_proc_1c_func_732747952(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_c ^= _activatnvar_confusing_char_3;

}

void _activation_check_proc_1c_func_2129629344(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1c_func_1592981548(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1c_func_141113459(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_1 |= _activatnvar_confusing_char_7;

	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_2006881261(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xa] |= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_1c_func_389862244(int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_b &= _activatnvar_confusing_char_e;

	_activation_check_proc_1c_func_167173374(_activatnvar_name_digest, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_1c_func_1144516400(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_1c_func_441548066(_activatnvar_confusing_int_a, _activatnvar_confusing_int_e);
}

void _activation_check_proc_1c_func_167173374(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x4] ^= _activatnvar_name_digest[0x0];

}

void _activation_check_proc_1c_func_241330220(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_7++;

	_activation_check_proc_1c_func_1893620657(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1c_func_1893620657(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 <<= 0x1;

}

void _activation_check_proc_1c_func_1197273621(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x3] <<= _activatnvar_confusing_chararray_7[0x3];

}

void _activation_check_proc_1c_func_192401469(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_c, char* _activatnvar_strbuf_0)
{
	_activatnvar_confusing_chararray_5[0x4] <<= _activatnvar_confusing_LLUUID_c.mData[0xd];

	/* inline */ _activation_check_proc_1c_func_530977778(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_3);
	/* inline */ _activation_check_proc_1c_func_1329828580(_activatnvar_secret, _activatnvar_strbuf_0);
}

void _activation_check_proc_1c_func_234304802(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1c_func_365724512(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1c_func_1861005497(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_1c_func_183811780(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_chararray_d[0x7];

	_activation_check_proc_1c_func_1861005497(_activatnvar_confusing_char_2);
}

void _activation_check_proc_1c_func_1619844735(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] ^= _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_1c_func_819023694(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1c_func_2030539236(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_1c_func_1932084403(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1c_func_630160715(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_1[0x7] = _activatnvar_name_digest[0xb];

}

void _activation_check_proc_1c_func_1079973758(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 *= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_1c_func_1440779671(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

	/* inline */ _activation_check_proc_1c_func_1450122583(_activatnvar_mac_digest, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_1c_func_529939480(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1c_func_1809053324(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("778f2bf6-3d1c-9269-1463-dd6bf4145c53");

	/* inline */ _activation_check_proc_1c_func_2026815646(_activatnvar_doaccount, _activatnvar_confusing_bool_f);
	/* inline */ _activation_check_proc_1c_func_1242123550(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1c_func_1855081371(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1c_func_1732441159(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] <<= _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_1c_func_2049327636(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_1c_func_1989496146(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_d <<= _activatnvar_confusing_chararray_1[0xf];

}

void _activation_check_proc_1c_func_810767341(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x5] != 0xb) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_1c_func_102940824(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= 0xa;

}

void _activation_check_proc_1c_func_1416391803()
{
	
}

void _activation_check_proc_1c_func_1325917308(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_6;

	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_1c_func_622990005(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_1c_func_2003573635();
	/* inline */ _activation_check_proc_1c_func_31359951(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1c_func_1291358480(_activatnvar_combined_id, _activatnvar_confusing_char_0);
	_activation_check_proc_1c_func_35874042(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1c_func_2003573635()
{
	
}

void _activation_check_proc_1c_func_35874042(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_1c_func_622990005(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_3[0xb] >>= _activatnvar_confusing_LLUUID_1.mData[0x7];

}

void _activation_check_proc_1c_func_550614506(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_f[0x2] >>= _activatnvar_confusing_LLUUID_3.mData[0xa];

}

void _activation_check_proc_1c_func_678145568(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xf] |= _activatnvar_confusing_LLUUID_c.mData[0x6];

}

void _activation_check_proc_1c_func_1444890964(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] &= _activatnvar_confusing_chararray_3[0x0];

}

void _activation_check_proc_1c_func_1102486150(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_1.mData[0x3] &= _activatnvar_confusing_LLUUID_3.mData[0x3];

}

void _activation_check_proc_1c_func_260053594(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1c_func_1343839309(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_1c_func_1269689627(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_1c_func_1224827964(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_f >>= _activatnvar_confusing_chararray_b[0x0];

	_activation_check_proc_1c_func_1755528859(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1755528859(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_857042943(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_f;

	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1c_func_2026404592(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_1c_func_96638518(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_9;

	/* inline */ _activation_check_proc_1c_func_1211120150(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1c_func_2026404592(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_1c_func_1346578340(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_1c_func_411425488(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_9.mData[0x3];

}

void _activation_check_proc_1c_func_1804035132(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1c_func_1236601290(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("bfce80ab-d016-e501-067d-0d065788e598");

	/* inline */ _activation_check_proc_1c_func_1489091015(_activatnvar_confusing_LLUUID_1);
	_activation_check_proc_1c_func_1804035132(_activatnvar_confusing_int_3);
	_activation_check_proc_1c_func_450968403(_activatnvar_confusing_int_6, _activatnvar_confusing_int_8);
}

void _activation_check_proc_1c_func_450968403(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_6 = _activatnvar_confusing_int_8;

}

void _activation_check_proc_1c_func_566492490(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_6 >>= 0x4;

}

void _activation_check_proc_1c_func_2081031206(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_566492490(_activatnvar_confusing_bool_a, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_1c_func_445013428(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_330336042(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1c_func_330336042(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_658395238(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x5] != 0x9) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_9;

	_activation_check_proc_1c_func_1917085576(_activatnvar_confusing_bool_0, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1c_func_1917085576(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1c_func_1695554095(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_9[0xc] *= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_1c_func_820854867(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_d += _activatnvar_confusing_int_1;

}

void _activation_check_proc_1c_func_126066992()
{
	
}

void _activation_check_proc_1c_func_1998648024(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_1c_func_240165273(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x0] &= _activatnvar_confusing_LLUUID_0.mData[0x9];

	_activation_check_proc_1c_func_1998648024(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_1c_func_531049754(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_1c_func_1869149769(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("2dd21987-a2d9-4129-db53-181d26a857ff");

}

void _activation_check_proc_1c_func_2136514382(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_1c_func_831830439(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 8; _activatnvar_strbuf_0[0] ^= 73; _activatnvar_strbuf_0[1] = 111; _activatnvar_strbuf_0[1] ^= 12; _activatnvar_strbuf_0[2] = 28; _activatnvar_strbuf_0[2] ^= 104; _activatnvar_strbuf_0[3] = 5; _activatnvar_strbuf_0[3] ^= 108; _activatnvar_strbuf_0[4] = 39; _activatnvar_strbuf_0[4] ^= 81; _activatnvar_strbuf_0[5] = 119; _activatnvar_strbuf_0[5] ^= 22; _activatnvar_strbuf_0[6] = 100; _activatnvar_strbuf_0[6] ^= 16; _activatnvar_strbuf_0[7] = 86; _activatnvar_strbuf_0[7] ^= 63; _activatnvar_strbuf_0[8] = 91; _activatnvar_strbuf_0[8] ^= 52; _activatnvar_strbuf_0[9] = 5; _activatnvar_strbuf_0[9] ^= 107; _activatnvar_strbuf_0[10] = 34; _activatnvar_strbuf_0[10] ^= 97; _activatnvar_strbuf_0[11] = 112; _activatnvar_strbuf_0[11] ^= 31; _activatnvar_strbuf_0[12] = 71; _activatnvar_strbuf_0[12] ^= 35; _activatnvar_strbuf_0[13] = 47; _activatnvar_strbuf_0[13] ^= 74; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_1c_func_880223679(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] &= _activatnvar_confusing_LLUUID_2.mData[0x1];

}

void _activation_check_proc_1c_func_1017985023(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_2, DWORD& _activatnvar_serial, char* _activatnvar_strbuf_0, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

	_activation_check_proc_1c_func_880223679(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_1c_func_831830439(_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_1c_func_1035172074();
	/* inline */ _activation_check_proc_1c_func_1276536317(_activatnvar_code, _activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_1c_func_1094714346(_activatnvar_serial);
}

void _activation_check_proc_1c_func_121363616(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 = _activatnvar_confusing_int_3;

}

void _activation_check_proc_1c_func_940836353(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_chararray_0[0x5];

}

void _activation_check_proc_1c_func_1872149309(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_1c_func_1516565969(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_1c_func_998746400(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xb] == 0xa) _activatnvar_confusing_bool_0 = true;

	_activation_check_proc_1c_func_1516565969(_activatnvar_t1);
	_activation_check_proc_1c_func_1872149309(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1c_func_1261813518(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1c_func_1249472290(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x3] != 0xe) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_1c_func_958915978(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_1c_func_1743859611(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_1c_func_1704392372(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1c_func_1509451731(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_1c_func_811627106(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1c_func_1730575999(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("b6286d57-c229-a0ed-e879-7cec734a23cb");

}

void _activation_check_proc_1c_func_403917953(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x2] != 0xd) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_1c_func_512813420(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_444171620(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_secret.mData[0x5];

}

void _activation_check_proc_1c_func_1040447472(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_7;

	_activation_check_proc_1c_func_269433603(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1c_func_269433603(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] ^= _activatnvar_confusing_LLUUID_c.mData[0x1];

}

void _activation_check_proc_1c_func_1531666701()
{
	
}

void _activation_check_proc_1c_func_183791574(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_a[0x3] *= _activatnvar_confusing_LLUUID_4.mData[0x5];

}

void _activation_check_proc_1c_func_1473269820(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	
	/* inline */ _activation_check_proc_1c_func_918011982(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1c_func_1313749017(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_9.mData[0xd] &= _activatnvar_so.mData[0x6];

}

void _activation_check_proc_1c_func_1728666944(int& _activatnvar_confusing_int_3, U8& _activatnvar_t0)
{
	_activatnvar_confusing_int_3++;

	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1c_func_579853573(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_1c_func_1004714331(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 >>= 0x2;

}

void _activation_check_proc_1c_func_1191614721(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_lace;

}

void _activation_check_proc_1c_func_932111504(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_1c_func_323606042(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_feat, _activatnvar_generic_bool_1);
}

void _activation_check_proc_1c_func_323606042(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1c_func_912145444(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_1486523562(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_1486523562(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_537399183(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_1c_func_1400365119(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_1c_func_726401749(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_1c_func_887279592(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_doaccount;

}

void _activation_check_proc_1c_func_2090108687()
{
	
}

void _activation_check_proc_1c_func_1910472086(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_3;

	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_d;

	_activation_check_proc_1c_func_2090108687();
}

void _activation_check_proc_1c_func_1069319048(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_9[0x0] = _activatnvar_confusing_LLUUID_8.mData[0xe];

}

void _activation_check_proc_1c_func_1957834187(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x4] *= _activatnvar_combined_id.mData[0x0];

}

void _activation_check_proc_1c_func_1381812072(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_fscked;

	_activatnvar_confusing_U8_c |= _activatnvar_confusing_char_2;

}

void _activation_check_proc_1c_func_1935338696(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_1c_func_24041536(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_8++;

	/* inline */ _activation_check_proc_1c_func_589214828(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1354001078(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_1c_func_405081004(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1716449549(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x5] += _activatnvar_confusing_chararray_5[0xe];

	_activation_check_proc_1c_func_356523694(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_1c_func_356523694(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1c_func_1666763599(unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x3] += _activatnvar_confusing_chararray_2[0xd];

}

void _activation_check_proc_1c_func_1132120297(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_4[0xd] += _activatnvar_confusing_chararray_f[0x8];

}

void _activation_check_proc_1c_func_161061741(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_4 <<= 0x6;

	_activation_check_proc_1c_func_1666763599(_activatnvar_confusing_chararray_2);
	_activation_check_proc_1c_func_1132120297(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1c_func_35885851(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_1c_func_50674882(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_333604881(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1c_func_1278018470(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1c_func_138515936(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_c, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	
	/* inline */ _activation_check_proc_1c_func_1531383613(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_1c_func_333604881(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_1c_func_1182006485(_activatnvar_confusing_char_3, _activatnvar_confusing_bool_e);
	_activation_check_proc_1c_func_1278018470(_activatnvar_confusing_int_c);
}

void _activation_check_proc_1c_func_1222025250(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_217201443(bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_2 = true;

	_activation_check_proc_1c_func_1222025250(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_1c_func_762869458(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] &= _activatnvar_confusing_LLUUID_a.mData[0x1];

}

void _activation_check_proc_1c_func_92366718(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
	/* inline */ _activation_check_proc_1c_func_1915742538(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_181138638(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xf] |= _activatnvar_confusing_chararray_8[0x2];

}

void _activation_check_proc_1c_func_1570186191(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_c[0x8] <<= _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_1c_func_1359594473(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1909972179(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_440311363(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 ^= 0x9;

	_activation_check_proc_1c_func_1359594473(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_1c_func_1909972179(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_1c_func_1828769927(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_1c_func_1120070005(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_0)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_f >>= _activatnvar_confusing_char_0;

}

void _activation_check_proc_1c_func_2086159198(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xd] += _activatnvar_confusing_LLUUID_b.mData[0x7];

	_activation_check_proc_1c_func_1120070005(_activatnvar_confusing_char_f, _activatnvar_confusing_bool_7, _activatnvar_confusing_char_0);
}

void _activation_check_proc_1c_func_1218454813(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_f)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xf] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_1c_func_1624218329(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1c_func_101625782(_activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1c_func_1305839678(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_strbuf_0[0] = 53; _activatnvar_strbuf_0[0] ^= 13; _activatnvar_strbuf_0[1] = 21; _activatnvar_strbuf_0[1] ^= 119; _activatnvar_strbuf_0[2] = 79; _activatnvar_strbuf_0[2] ^= 44; _activatnvar_strbuf_0[3] = 95; _activatnvar_strbuf_0[3] ^= 106; _activatnvar_strbuf_0[4] = 3; _activatnvar_strbuf_0[4] ^= 55; _activatnvar_strbuf_0[5] = 32; _activatnvar_strbuf_0[5] ^= 20; _activatnvar_strbuf_0[6] = 30; _activatnvar_strbuf_0[6] ^= 44; _activatnvar_strbuf_0[7] = 34; _activatnvar_strbuf_0[7] ^= 23; _activatnvar_strbuf_0[8] = 89; _activatnvar_strbuf_0[8] ^= 116; _activatnvar_strbuf_0[9] = 3; _activatnvar_strbuf_0[9] ^= 51; _activatnvar_strbuf_0[10] = 5; _activatnvar_strbuf_0[10] ^= 52; _activatnvar_strbuf_0[11] = 101; _activatnvar_strbuf_0[11] ^= 83; _activatnvar_strbuf_0[12] = 28; _activatnvar_strbuf_0[12] ^= 44; _activatnvar_strbuf_0[13] = 11; _activatnvar_strbuf_0[13] ^= 38; _activatnvar_strbuf_0[14] = 83; _activatnvar_strbuf_0[14] ^= 99; _activatnvar_strbuf_0[15] = 119; _activatnvar_strbuf_0[15] ^= 71; _activatnvar_strbuf_0[16] = 12; _activatnvar_strbuf_0[16] ^= 52; _activatnvar_strbuf_0[17] = 25; _activatnvar_strbuf_0[17] ^= 43; _activatnvar_strbuf_0[18] = 90; _activatnvar_strbuf_0[18] ^= 119; _activatnvar_strbuf_0[19] = 47; _activatnvar_strbuf_0[19] ^= 28; _activatnvar_strbuf_0[20] = 54; _activatnvar_strbuf_0[20] ^= 4; _activatnvar_strbuf_0[21] = 43; _activatnvar_strbuf_0[21] ^= 27; _activatnvar_strbuf_0[22] = 110; _activatnvar_strbuf_0[22] ^= 92; _activatnvar_strbuf_0[23] = 54; _activatnvar_strbuf_0[23] ^= 27; _activatnvar_strbuf_0[24] = 9; _activatnvar_strbuf_0[24] ^= 106; _activatnvar_strbuf_0[25] = 25; _activatnvar_strbuf_0[25] ^= 33; _activatnvar_strbuf_0[26] = 50; _activatnvar_strbuf_0[26] ^= 2; _activatnvar_strbuf_0[27] = 118; _activatnvar_strbuf_0[27] ^= 68; _activatnvar_strbuf_0[28] = 4; _activatnvar_strbuf_0[28] ^= 52; _activatnvar_strbuf_0[29] = 118; _activatnvar_strbuf_0[29] ^= 68; _activatnvar_strbuf_0[30] = 115; _activatnvar_strbuf_0[30] ^= 74; _activatnvar_strbuf_0[31] = 15; _activatnvar_strbuf_0[31] ^= 63; _activatnvar_strbuf_0[32] = 62; _activatnvar_strbuf_0[32] ^= 14; _activatnvar_strbuf_0[33] = 17; _activatnvar_strbuf_0[33] ^= 41; _activatnvar_strbuf_0[34] = 3; _activatnvar_strbuf_0[34] ^= 51; _activatnvar_strbuf_0[35] = 98; _activatnvar_strbuf_0[35] ^= 80; _activatnvar_strbuf_0[36] = 0;
	/* inline */ _activation_check_proc_1c_func_1182895172(_activatnvar_strbuf_0, _activatnvar_section2);
}

void _activation_check_proc_1c_func_1118181460()
{
	
}

void _activation_check_proc_1c_func_1622516253(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x7] ^= _activatnvar_confusing_LLUUID_3.mData[0x2];

}

void _activation_check_proc_1c_func_1988401057(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x5] &= _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_1c_func_1765084881(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_7[0x1] <<= _activatnvar_confusing_chararray_a[0x2];

	_activation_check_proc_1c_func_2080383890(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1c_func_2080383890(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xf] <<= _activatnvar_confusing_LLUUID_e.mData[0xa];

}

void _activation_check_proc_1c_func_1984046293(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_chararray_9[0x6];

}

void _activation_check_proc_1c_func_629471367(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x7] |= _activatnvar_confusing_LLUUID_e.mData[0xd];

}

void _activation_check_proc_1c_func_71647909(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_4)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xf] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1c_func_2081513904(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_1c_func_1389362596(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1c_func_1194121776(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1c_func_869097957(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_1c_func_1673584757(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_1c_func_967960285(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x0] &= _activatnvar_confusing_chararray_9[0x3];

	_activation_check_proc_1c_func_1673584757(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_1c_func_33451004(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1483426530(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_7.mData[0x4] &= _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_1c_func_1153711959(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_1c_func_150562274(unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_7)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_1942523950(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1c_func_1440484096(_activatnvar_confusing_char_7, _activatnvar_doaccount);
	_activation_check_proc_1c_func_1153711959(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_a);
	_activation_check_proc_1c_func_893698501(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_1c_func_1942523950(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_893698501(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xc] += _activatnvar_confusing_chararray_1[0x8];

}

void _activation_check_proc_1c_func_1853572954(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] <<= _activatnvar_lace.mData[0x6];

}

void _activation_check_proc_1c_func_753787366(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1c_func_394998242(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("8ac10cf3-2420-1e88-fad0-95fe6dd6e974");

	_activation_check_proc_1c_func_1385315515(_activatnvar_confusing_int_8, _activatnvar_confusing_int_7);
}

void _activation_check_proc_1c_func_1385315515(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_8 *= _activatnvar_confusing_int_7;

}

void _activation_check_proc_1c_func_75993855(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x6] |= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_1c_func_1605995984(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("e86f87dc-5836-1225-b9de-57c6b4a043b4");

	_activation_check_proc_1c_func_75993855(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_1c_func_720113808(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1656726871(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

	_activation_check_proc_1c_func_720113808(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	/* inline */ _activation_check_proc_1c_func_392635895(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_1c_func_26417363(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_f[0xd] &= _activatnvar_confusing_LLUUID_b.mData[0xe];

}

void _activation_check_proc_1c_func_2071585099(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_LLUUID_9.mData[0xa] <<= _activatnvar_section1.mData[0xc];

	/* inline */ _activation_check_proc_1c_func_2086214916(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1c_func_222100336(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1707769123(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_124801828(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_1c_func_1675474613()
{
	
}

void _activation_check_proc_1c_func_1991567619(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1c_func_488690825(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1c_func_1208149806(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1c_func_809535200(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_lace;

	/* inline */ _activation_check_proc_1c_func_1573126956(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_1, _activatnvar_confusing_char_e);
}

void _activation_check_proc_1c_func_820646018(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_1c_func_1695313154(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_2077131403(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_4.mData[0x6];

}

void _activation_check_proc_1c_func_1813076113(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xc] ^= _activatnvar_confusing_chararray_c[0x9];

}

void _activation_check_proc_1c_func_1397344419(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_section2)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_f *= 0x2;

	_activation_check_proc_1c_func_1813076113(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_1c_func_1172923780(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_1c_func_1828519925(_activatnvar_section2, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_1c_func_1762256939(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1c_func_1431760207(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1c_func_199633526(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1c_func_1666327213(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x5] |= _activatnvar_so.mData[0x8];

}

void _activation_check_proc_1c_func_821210714(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_1c_func_81511109(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x8] = _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_1c_func_41052521(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xd] |= _activatnvar_confusing_LLUUID_6.mData[0xf];

	_activation_check_proc_1c_func_2080592522(_activatnvar_confusing_char_5, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_1c_func_2080592522(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_5 <<= 0x1;

}

void _activation_check_proc_1c_func_1053084300(char& _activatnvar_confusing_char_a, bool& _activatnvar_generic_bool_0, U8& _activatnvar_pos)
{
	
	/* inline */ _activation_check_proc_1c_func_5436848(_activatnvar_pos, _activatnvar_generic_bool_0, _activatnvar_confusing_char_a);
}

void _activation_check_proc_1c_func_548404384(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xe] += _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_1c_func_346629339(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_1c_func_1830405579(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_1c_func_1788610648(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_1c_func_75022941()
{
	
}

void _activation_check_proc_1c_func_2048218211()
{
	
	_activation_check_proc_1c_func_75022941();
}

void _activation_check_proc_1c_func_503824601(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_2119828259(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_6 = 0x7;

	/* inline */ _activation_check_proc_1c_func_1865763481(_activatnvar_confusing_LLUUID_5, _activatnvar_so);
}

void _activation_check_proc_1c_func_1912033640(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_1c_func_1840419516(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_U8_9 &= _activatnvar_confusing_char_e;

}

void _activation_check_proc_1c_func_833815513(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1c_func_1893351584()
{
	
	_activation_check_proc_1c_func_601648938();
}

void _activation_check_proc_1c_func_601648938()
{
	
}

void _activation_check_proc_1c_func_492848226(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1c_func_632485879(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_2.mData[0xd];

}

void _activation_check_proc_1c_func_1180403523(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_725139309(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_1180403523(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1859878236(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xb] = _activatnvar_section2.mData[0x9];

	/* inline */ _activation_check_proc_1c_func_663819643(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1c_func_247348210(U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_2)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_2 *= _activatnvar_t1;

}

void _activation_check_proc_1c_func_1284434259(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= 0x7;

	/* inline */ _activation_check_proc_1c_func_1859460845(_activatnvar_confusing_int_3, _activatnvar_confusing_int_8);
}

void _activation_check_proc_1c_func_1208947033(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1c_func_450201673(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_6[0x9] <<= _activatnvar_section1.mData[0x2];

}

void _activation_check_proc_1c_func_456206201(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_1c_func_2055753636(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_so, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1c_func_441415529(_activatnvar_confusing_LLUUID_4, _activatnvar_so);
}

void _activation_check_proc_1c_func_1253014887(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] <<= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_1c_func_1538701321(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_1c_func_1108472646(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_1c_func_265832969(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_8 = false;

	/* inline */ _activation_check_proc_1c_func_1593251018(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1c_func_1137294515()
{
	
}

void _activation_check_proc_1c_func_1288624727(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] = _activatnvar_confusing_LLUUID_d.mData[0x9];

}

void _activation_check_proc_1c_func_1145647938(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1842597056()
{
	
}

void _activation_check_proc_1c_func_1330845431(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_5;

	_activation_check_proc_1c_func_1842597056();
}

void _activation_check_proc_1c_func_518921942(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_1c_func_2107348263(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_a;

	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1c_func_1422064584(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_1454459382(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1454459382(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_676421233(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_1[0x4] += _activatnvar_confusing_LLUUID_8.mData[0xb];

}

void _activation_check_proc_1c_func_1210871701(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1c_func_1154915581(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

	_activation_check_proc_1c_func_1065956283(_activatnvar_confusing_U8_d);
	_activation_check_proc_1c_func_2090313208(_activatnvar_confusing_char_d, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_1065956283(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d <<= 0x4;

}

void _activation_check_proc_1c_func_2090313208(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_d = _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_1c_func_980548878(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c |= 0x1;

}

void _activation_check_proc_1c_func_850534100(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_code;

}

void _activation_check_proc_1c_func_1252329657(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1111880129(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_7[0xc] >>= _activatnvar_confusing_chararray_8[0xc];

}

void _activation_check_proc_1c_func_1481259331(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("b9e9e704-c31a-a58f-ee34-41f1f2afc462");

}

void _activation_check_proc_1c_func_2145332497(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_fscked;

}

void _activation_check_proc_1c_func_1125144529(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1003913040()
{
	
}

void _activation_check_proc_1c_func_993824511(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos |= 8;
	/* inline */ _activation_check_proc_1c_func_552900030(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_111262364(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
}

void _activation_check_proc_1c_func_1844211905(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1065202043(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1c_func_810268149(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x7] |= _activatnvar_confusing_chararray_d[0x2];

}

void _activation_check_proc_1c_func_511929967(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] &= _activatnvar_confusing_chararray_8[0xc];

}

void _activation_check_proc_1c_func_90804594(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1c_func_2133209900(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_d)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xd] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_1c_func_958167518()
{
	
}

void _activation_check_proc_1c_func_1914772930(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
	/* inline */ _activation_check_proc_1c_func_2059886349(_activatnvar_confusing_U8_6, _activatnvar_confusing_chararray_1);
	_activation_check_proc_1c_func_958167518();
}

void _activation_check_proc_1c_func_1761200741(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a *= _activatnvar_confusing_int_f;

}

void _activation_check_proc_1c_func_494968070(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_1c_func_1209940647(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_pos, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_9[0xd] >>= _activatnvar_section1.mData[0x2];

	_activation_check_proc_1c_func_494968070(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1c_func_1778705309(DWORD& _activatnvar_serial, BOOL& _activatnvar_success, DWORD& _activatnvar_gvi_flags, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_f, char& _activatnvar_feat)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	_activation_check_proc_1c_func_809389494(_activatnvar_feat, _activatnvar_confusing_bool_f, _activatnvar_confusing_char_6);
	/* inline */ _activation_check_proc_1c_func_1568828602(_activatnvar_confusing_int_5);
}

void _activation_check_proc_1c_func_809389494(char& _activatnvar_feat, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_6)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_6 *= _activatnvar_feat;

}

void _activation_check_proc_1c_func_1546991181(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1723018769()
{
	
}

void _activation_check_proc_1c_func_1607466048(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_1c_func_1256368645(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_144772874(U8& _activatnvar_confusing_U8_d, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_U8_d;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1030474509(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_U8_5++;

	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_2 |= _activatnvar_confusing_char_1;

}

void _activation_check_proc_1c_func_336730376(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1c_func_1434237415(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xf] == 0x2) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_1c_func_1861284456(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_fscked;

}

void _activation_check_proc_1c_func_1348674778(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f |= _activatnvar_confusing_LLUUID_4.mData[0xc];

}

void _activation_check_proc_1c_func_196417142(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1157576672(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1409244874(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_1c_func_1963488962(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1c_func_1906125698(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_c;

	_activation_check_proc_1c_func_1963488962(_activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_1c_func_1738040292(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1c_func_1152962403(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1c_func_1335110091(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1c_func_2119836022(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_591941274(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_8 *= _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_1c_func_12300105(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_6[0xd] = _activatnvar_confusing_LLUUID_9.mData[0x7];

}

void _activation_check_proc_1c_func_1265674726(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_c = true;

	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1c_func_987019586(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x4] *= _activatnvar_confusing_LLUUID_6.mData[0x1];

}

void _activation_check_proc_1c_func_1409512510(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xd] |= _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_1c_func_1849129749(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1c_func_1841475074(unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_section1;

	/* inline */ _activation_check_proc_1c_func_1713288422(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_1c_func_223729844(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_7);
	_activation_check_proc_1c_func_1849129749(_activatnvar_generic_bool_0);
	_activation_check_proc_1c_func_87660361(_activatnvar_confusing_int_5);
}

void _activation_check_proc_1c_func_87660361(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1c_func_45430932(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_692739679(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

	/* inline */ _activation_check_proc_1c_func_1289979324(_activatnvar_confusing_int_7, _activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_1c_func_706079124(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_3, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1c_func_1910836118(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1c_func_1170289030(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_124438699(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_4;

	_activation_check_proc_1c_func_1170289030(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_1140028105(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("3d07e70a-a959-b586-3252-207accc318a3");

}

void _activation_check_proc_1c_func_1600483373(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 <<= 0xb;

	_activation_check_proc_1c_func_1140028105(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1c_func_334861417(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1c_func_1293779296(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1338792229(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1377615105()
{
	
}

void _activation_check_proc_1c_func_758105461(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_1c_func_1377615105();
}

void _activation_check_proc_1c_func_213344344(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1c_func_894614439(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_1c_func_1718272673(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_1c_func_894614439(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_1672733543(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_1c_func_57020252(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x5] = _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_1c_func_109127788(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_fscked;

	/* inline */ _activation_check_proc_1c_func_479009138(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_2);
}

void _activation_check_proc_1c_func_304676224(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1c_func_280939359(bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_a <<= _activatnvar_confusing_char_0;

}

void _activation_check_proc_1c_func_487513566(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_c, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_int_c++;

	_activation_check_proc_1c_func_280939359(_activatnvar_confusing_bool_1, _activatnvar_confusing_char_0, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_1c_func_1369167951(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("2402277d-f1e9-2542-c66e-f0d347797afc");

	_activation_check_proc_1c_func_1602964009(_activatnvar_confusing_chararray_a, _activatnvar_confusing_char_7);
}

void _activation_check_proc_1c_func_1602964009(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_1c_func_354852844(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_1c_func_115733104(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_592684878(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_8;

	/* inline */ _activation_check_proc_1c_func_1192779624(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
	_activation_check_proc_1c_func_115733104(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1c_func_735445654(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_5 &= _activatnvar_confusing_int_7;

	_activation_check_proc_1c_func_1745934860();
}

void _activation_check_proc_1c_func_1745934860()
{
	
}

void _activation_check_proc_1c_func_1446521487(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_chararray_f[0x3];

}

void _activation_check_proc_1c_func_1876336851(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1c_func_88858776(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_1c_func_394826926(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_2 *= _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_1c_func_1824744617(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_1c_func_1419896797(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] = _activatnvar_confusing_chararray_8[0x9];

	_activation_check_proc_1c_func_984980342(_activatnvar_confusing_char_3);
}

void _activation_check_proc_1c_func_984980342(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_1c_func_520064909(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_1c_func_1047404901(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1c_func_1610065252(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1c_func_156073422(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
	_activation_check_proc_1c_func_1047404901(_activatnvar_confusing_int_f);
	_activation_check_proc_1c_func_1610065252(_activatnvar_t0);
	_activation_check_proc_1c_func_520064909(_activatnvar_confusing_int_6);
}

void _activation_check_proc_1c_func_1879589357(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_1c_func_1444499197(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_9.mData[0xd];

}

void _activation_check_proc_1c_func_2123351777(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_5;

	_activation_check_proc_1c_func_922349078(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1c_func_922349078(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("b7c9ee83-5949-d950-2ce3-e1be7621ab0f");

}

void _activation_check_proc_1c_func_560601353(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1919010917(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_1c_func_621691439(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1c_func_1015913959(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("8402345e-377b-9e82-0c8c-558167d44e4f");

	_activation_check_proc_1c_func_1708698260(_activatnvar_section2, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1c_func_1708698260(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] = _activatnvar_section2.mData[0x8];

}

void _activation_check_proc_1c_func_1954797629(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_char_a;

}

void _activation_check_proc_1c_func_17953896(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("a360fcf9-413c-e548-896c-510a3f653091");

	/* inline */ _activation_check_proc_1c_func_211320326(_activatnvar_confusing_int_0);
	_activation_check_proc_1c_func_1954797629(_activatnvar_confusing_char_6, _activatnvar_confusing_char_a);
}

void _activation_check_proc_1c_func_118940135(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("300a42aa-08ba-83b7-f010-2bd83d741be6");

}

void _activation_check_proc_1c_func_1006121879(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_1c_func_118940135(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1c_func_1871692053(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_1c_func_2085060682(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1c_func_330569158(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_524470344(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xf] >>= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_1c_func_1637883823(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = 0x9;

}

void _activation_check_proc_1c_func_888636149(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_8[0xa] ^= _activatnvar_confusing_chararray_0[0x9];

	/* inline */ _activation_check_proc_1c_func_1913111203(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_c);
	_activation_check_proc_1c_func_1637883823(_activatnvar_confusing_U8_6);
	/* inline */ _activation_check_proc_1c_func_711534075(_activatnvar_confusing_LLUUID_c, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_1c_func_786678071(_activatnvar_confusing_LLUUID_c);
	_activation_check_proc_1c_func_1133822992(_activatnvar_confusing_chararray_7, _activatnvar_confusing_char_1);
	_activation_check_proc_1c_func_524470344(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1c_func_1133822992(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 >>= _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_1c_func_735392324(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_1043950065(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
	_activation_check_proc_1c_func_1766937842(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_6);
	_activation_check_proc_1c_func_1280610654(_activatnvar_confusing_bool_5, _activatnvar_confusing_U8_f, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1c_func_1043950065(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1280610654(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x6] != _activatnvar_confusing_U8_f) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_1c_func_1766937842(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_c.mData[0x3];

}

void _activation_check_proc_1c_func_1937181949(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x8] |= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_1c_func_235282569(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1c_func_1055756256(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1c_func_989120590(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_chararray_2[0x7] ^= _activatnvar_code.mData[0x3];

	_activation_check_proc_1c_func_1055756256(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_1c_func_1322039899(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("d2758f46-ba8c-795f-609d-029ac655ccfd");

}

void _activation_check_proc_1c_func_946806024(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1c_func_2103912449(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1c_func_1374345822(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1c_func_1366831501(char& _activatnvar_feat, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_0;

	/* inline */ _activation_check_proc_1c_func_1462762604(_activatnvar_feat, _activatnvar_lace);
	_activation_check_proc_1c_func_1374345822(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_1c_func_697455330(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_179492084(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1c_func_1563913974(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1c_func_1442412249(bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_3;

	_activation_check_proc_1c_func_1563913974(_activatnvar_confusing_int_5);
}

void _activation_check_proc_1c_func_1402805927(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_1c_func_1627556767(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_9.mData[0x0];

	_activation_check_proc_1c_func_1402805927(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_1c_func_2042668886(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_1c_func_1262596432(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_2)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x8] == 0x5) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_1;

	/* inline */ _activation_check_proc_1c_func_186064193(_activatnvar_confusing_int_2);
	_activation_check_proc_1c_func_2042668886(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_1967295799(int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1c_func_1482462788(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1219884999(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_1c_func_2011796878(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_1482462788(_activatnvar_generic_iterator);
	_activation_check_proc_1c_func_1219884999(_activatnvar_confusing_U8_c);
}

void _activation_check_proc_1c_func_2137609533()
{
	
}

void _activation_check_proc_1c_func_173803431(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_7 |= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_1c_func_659798796(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1688805050(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

	/* inline */ _activation_check_proc_1c_func_705412833();
	_activation_check_proc_1c_func_602421487(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1c_func_602421487(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x8] |= _activatnvar_confusing_chararray_6[0xd];

}

void _activation_check_proc_1c_func_198203713(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_7.mData[0x1] <<= _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_1c_func_1868888852(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_d)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_a ^= _activatnvar_confusing_char_d;

	/* inline */ _activation_check_proc_1c_func_1383239126(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_1c_func_1595241954(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_chararray_2[0xc];

}

void _activation_check_proc_1c_func_1655592708(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] = _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_1c_func_594908526(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1c_func_1629299481(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activation_check_proc_1c_func_594908526(_activatnvar_confusing_bool_1, _activatnvar_generic_bool_1);
	_activation_check_proc_1c_func_533129801(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1c_func_533129801(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x8] ^= _activatnvar_confusing_LLUUID_4.mData[0x2];

}

void _activation_check_proc_1c_func_924794117(unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x4] ^= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_1c_func_1494725340(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_a ^= 0x4;

}

void _activation_check_proc_1c_func_1659877216(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b *= 0x8;

	/* inline */ _activation_check_proc_1c_func_1874643184(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
	_activation_check_proc_1c_func_2044942658(_activatnvar_confusing_int_3);
	_activation_check_proc_1c_func_533443333(_activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_1c_func_1835696789(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1c_func_533443333(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("ce87cade-ef11-3d62-31dd-a37535c5b1b6");

}

void _activation_check_proc_1c_func_2044942658(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1c_func_480565326(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_1c_func_100811846(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_f = _activatnvar_lace.mData[0x4];

}

void _activation_check_proc_1c_func_853052388(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_844626714(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_853052388(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1367849009(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_197828941(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_1c_func_1760062325(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_b.mData[0x0] |= _activatnvar_confusing_LLUUID_4.mData[0xf];

}

void _activation_check_proc_1c_func_1020807915(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_LLUUID_e.mData[0x3];

	_activation_check_proc_1c_func_197828941(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_1);
	_activation_check_proc_1c_func_1760062325(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1c_func_836482186(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("bec095a9-6d2a-d827-d8bf-819d96b88e78");

}

void _activation_check_proc_1c_func_695334948(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1c_func_1664471235(bool& _activatnvar_confusing_bool_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_c;

	_activation_check_proc_1c_func_335074992(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_1c_func_836482186(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1c_func_695334948(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_f);
	/* inline */ _activation_check_proc_1c_func_391159031(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_335074992(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_9[0x3] *= _activatnvar_confusing_LLUUID_a.mData[0x4];

}

void _activation_check_proc_1c_func_544523214(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1c_func_1006868726(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_f.mData[0x1] |= _activatnvar_confusing_chararray_0[0x2];

	_activation_check_proc_1c_func_544523214(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_1c_func_733792557(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("50283786-75c5-8e2f-a233-ee8a0460ca0b");

}

void _activation_check_proc_1c_func_593521074(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_1c_func_402259380(int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_LLUUID_9.mData[0xd] ^= _activatnvar_confusing_LLUUID_3.mData[0x5];

	/* inline */ _activation_check_proc_1c_func_436421177(_activatnvar_confusing_int_f, _activatnvar_confusing_int_6);
}

void _activation_check_proc_1c_func_930304711(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_2)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_2 = _activatnvar_confusing_U8_3;

}

void _activation_check_proc_1c_func_1883757986(bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_t1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_5 = true;

	_activation_check_proc_1c_func_1804401062(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_1c_func_1486922217(_activatnvar_t1, _activatnvar_so, _activatnvar_pos);
	/* inline */ _activation_check_proc_1c_func_2056545327(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1c_func_1804401062(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x6] >>= _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_1c_func_1070896918(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_7 = _activatnvar_code.mData[0xf];

	_activation_check_proc_1c_func_668854530(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_f, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_1c_func_1579104855(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1c_func_1443704391(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1c_func_668854530(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x0] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1c_func_679120250(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] >>= _activatnvar_confusing_LLUUID_f.mData[0x5];

	_activatnvar_confusing_chararray_6[0x7] ^= _activatnvar_confusing_LLUUID_f.mData[0x5];

}

void _activation_check_proc_1c_func_1766387442(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x5] == 0x4) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1c_func_2142321518(int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_1c_func_1766387442(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_3);
	_activation_check_proc_1c_func_679120250(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1c_func_492288257(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d <<= _activatnvar_confusing_chararray_5[0x7];

}

void _activation_check_proc_1c_func_1833303066(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_f;

	_activation_check_proc_1c_func_492288257(_activatnvar_confusing_chararray_5, _activatnvar_confusing_char_d);
}

void _activation_check_proc_1c_func_1919305080(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_304935513(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1c_func_1367187647()
{
	
}

void _activation_check_proc_1c_func_1553325411(int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f *= _activatnvar_confusing_int_3;

	_activation_check_proc_1c_func_80835599();
	/* inline */ _activation_check_proc_1c_func_936524149(_activatnvar_confusing_chararray_d, _activatnvar_confusing_char_c);
}

void _activation_check_proc_1c_func_80835599()
{
	
}

void _activation_check_proc_1c_func_562988893(unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1c_func_919124855(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_1c_func_665013018(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xa] >>= _activatnvar_confusing_LLUUID_7.mData[0x7];

}

void _activation_check_proc_1c_func_136328479(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1c_func_34138686(unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xd] >>= _activatnvar_ser_digest[0x0];

	_activation_check_proc_1c_func_136328479(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_1c_func_955098252(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_1c_func_1756881249(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("f442abf5-61ee-3a61-36c9-111ccfb922d6");

}

void _activation_check_proc_1c_func_1175296462(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 <<= _activatnvar_confusing_char_f;

}

void _activation_check_proc_1c_func_1364680766(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xd] = _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_1c_func_1838768521(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_1c_func_532752943(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("3f36b060-022e-16f9-7985-4002098af7f3");

	_activatnvar_confusing_U8_2 >>= _activatnvar_confusing_chararray_4[0x4];

}

void _activation_check_proc_1c_func_931704238(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] >>= _activatnvar_confusing_LLUUID_4.mData[0x1];

}

void _activation_check_proc_1c_func_2079253525(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1c_func_1876335010(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_379846907(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_2069643016(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1270890(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1c_func_560837743(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1102442068(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1c_func_1116630087(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("42962a50-727b-4e64-190a-0b08295a5d14");

}

void _activation_check_proc_1c_func_1477858697(unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xc] ^= _activatnvar_confusing_chararray_6[0xe];

}

void _activation_check_proc_1c_func_645700513(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_6)
{
	
	_activation_check_proc_1c_func_1477858697(_activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_1c_func_1437986240(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1422269860(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1c_func_1860456107(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_d, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x3] >>= _activatnvar_confusing_LLUUID_4.mData[0x1];

	_activation_check_proc_1c_func_898227777(_activatnvar_confusing_U8_7);
	_activation_check_proc_1c_func_1422269860(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1c_func_898227777(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 >>= 0x2;

}

void _activation_check_proc_1c_func_2084975769(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 |= _activatnvar_confusing_int_7;

}

void _activation_check_proc_1c_func_435176913(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_a *= _activatnvar_confusing_char_b;

}

void _activation_check_proc_1c_func_1146746530(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_1c_func_1805536602(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_957144363()
{
	
}

void _activation_check_proc_1c_func_1883733769(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x2] |= _activatnvar_confusing_chararray_1[0x9];

}

void _activation_check_proc_1c_func_1932457162(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_164125461(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("182d4979-9af8-6394-f1ae-4d812b35c2b6");

	_activation_check_proc_1c_func_497727128(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1c_func_497727128(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_1c_func_1427559472(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_8[0x7] |= _activatnvar_confusing_LLUUID_d.mData[0x8];

}

void _activation_check_proc_1c_func_1338507945(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_1c_func_316665153(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1c_func_249894244(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_6.mData[0x2] &= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_1c_func_1135285562(bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1c_func_943784540(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1c_func_867825904(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_241389730(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_867825904(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1c_func_921076568(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1c_func_2004877150(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_1c_func_200064424(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("0d8f9c5a-8e83-6908-520e-b3dde88435a4");

}

void _activation_check_proc_1c_func_346965886(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1c_func_16705625(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_1c_func_707485648(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_b.mData[0xe] <<= _activatnvar_confusing_LLUUID_9.mData[0x6];

}

void _activation_check_proc_1c_func_1782828(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_b++;

	_activation_check_proc_1c_func_707485648(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_b, _activatnvar_code, _activatnvar_confusing_LLUUID_9, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_1c_func_1603071556(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("12838a8c-23e6-cfe2-9a34-cb995c8219a8");

}

void _activation_check_proc_1c_func_422353094(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1c_func_1693105460(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_1c_func_1060410823(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_6.mData[0x9];

}

void _activation_check_proc_1c_func_14938552(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_5 += _activatnvar_confusing_char_f;

	/* inline */ _activation_check_proc_1c_func_234524240(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_e);
	_activation_check_proc_1c_func_1060410823(_activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_1c_func_564898959(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1c_func_564898959(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_3[0x7] *= _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_1c_func_1528513420(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1c_func_720842699(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 13; _activatnvar_strbuf_0[0] ^= 60; _activatnvar_strbuf_0[1] = 111; _activatnvar_strbuf_0[1] ^= 95; _activatnvar_strbuf_0[2] = 107; _activatnvar_strbuf_0[2] ^= 88; _activatnvar_strbuf_0[3] = 74; _activatnvar_strbuf_0[3] ^= 126; _activatnvar_strbuf_0[4] = 99; _activatnvar_strbuf_0[4] ^= 1; _activatnvar_strbuf_0[5] = 75; _activatnvar_strbuf_0[5] ^= 45; _activatnvar_strbuf_0[6] = 100; _activatnvar_strbuf_0[6] ^= 2; _activatnvar_strbuf_0[7] = 67; _activatnvar_strbuf_0[7] ^= 117; _activatnvar_strbuf_0[8] = 117; _activatnvar_strbuf_0[8] ^= 88; _activatnvar_strbuf_0[9] = 102; _activatnvar_strbuf_0[9] ^= 4; _activatnvar_strbuf_0[10] = 64; _activatnvar_strbuf_0[10] ^= 119; _activatnvar_strbuf_0[11] = 122; _activatnvar_strbuf_0[11] ^= 78; _activatnvar_strbuf_0[12] = 65; _activatnvar_strbuf_0[12] ^= 113; _activatnvar_strbuf_0[13] = 110; _activatnvar_strbuf_0[13] ^= 67; _activatnvar_strbuf_0[14] = 77; _activatnvar_strbuf_0[14] ^= 125; _activatnvar_strbuf_0[15] = 89; _activatnvar_strbuf_0[15] ^= 63; _activatnvar_strbuf_0[16] = 42; _activatnvar_strbuf_0[16] ^= 72; _activatnvar_strbuf_0[17] = 45; _activatnvar_strbuf_0[17] ^= 73; _activatnvar_strbuf_0[18] = 14; _activatnvar_strbuf_0[18] ^= 35; _activatnvar_strbuf_0[19] = 29; _activatnvar_strbuf_0[19] ^= 44; _activatnvar_strbuf_0[20] = 118; _activatnvar_strbuf_0[20] ^= 21; _activatnvar_strbuf_0[21] = 67; _activatnvar_strbuf_0[21] ^= 33; _activatnvar_strbuf_0[22] = 58; _activatnvar_strbuf_0[22] ^= 92; _activatnvar_strbuf_0[23] = 16; _activatnvar_strbuf_0[23] ^= 61; _activatnvar_strbuf_0[24] = 23; _activatnvar_strbuf_0[24] ^= 35; _activatnvar_strbuf_0[25] = 83; _activatnvar_strbuf_0[25] ^= 101; _activatnvar_strbuf_0[26] = 118; _activatnvar_strbuf_0[26] ^= 67; _activatnvar_strbuf_0[27] = 3; _activatnvar_strbuf_0[27] ^= 96; _activatnvar_strbuf_0[28] = 68; _activatnvar_strbuf_0[28] ^= 116; _activatnvar_strbuf_0[29] = 36; _activatnvar_strbuf_0[29] ^= 21; _activatnvar_strbuf_0[30] = 43; _activatnvar_strbuf_0[30] ^= 79; _activatnvar_strbuf_0[31] = 6; _activatnvar_strbuf_0[31] ^= 52; _activatnvar_strbuf_0[32] = 53; _activatnvar_strbuf_0[32] ^= 4; _activatnvar_strbuf_0[33] = 80; _activatnvar_strbuf_0[33] ^= 50; _activatnvar_strbuf_0[34] = 81; _activatnvar_strbuf_0[34] ^= 53; _activatnvar_strbuf_0[35] = 96; _activatnvar_strbuf_0[35] ^= 85; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1c_func_433405192(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 >>= 0x0;

}

void _activation_check_proc_1c_func_1299067958(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_1[0xf] <<= _activatnvar_combined_id.mData[0x8];

	_activatnvar_confusing_char_3 |= _activatnvar_confusing_LLUUID_b.mData[0xa];

	_activation_check_proc_1c_func_1516132874(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1c_func_1516132874(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_e[0x4] <<= _activatnvar_confusing_chararray_a[0x2];

}

void _activation_check_proc_1c_func_1856146901(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_4, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_int_a &= 0xff;

	/* inline */ _activation_check_proc_1c_func_981725294(_activatnvar_lace, _activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_generic_bool_1);
	_activation_check_proc_1c_func_704485990(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_e);
	_activation_check_proc_1c_func_2045633103(_activatnvar_confusing_char_4, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1c_func_2045633103(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_1.mData[0x2];

}

void _activation_check_proc_1c_func_704485990(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_1.mData[0x2] = _activatnvar_confusing_chararray_e[0x2];

}

void _activation_check_proc_1c_func_2010459259(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1c_func_1440559593(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1c_func_127330736(U8& _activatnvar_pos, U8& _activatnvar_t1, U8& _activatnvar_t0, int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_7;

	_activatnvar_confusing_int_4++;

	/* inline */ _activation_check_proc_1c_func_35772827(_activatnvar_confusing_int_d);
	_activation_check_proc_1c_func_1440559593(_activatnvar_t0);
	_activation_check_proc_1c_func_722216650(_activatnvar_t0);
	_activation_check_proc_1c_func_2010459259(_activatnvar_pos, _activatnvar_t1, _activatnvar_so);
}

void _activation_check_proc_1c_func_722216650(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1c_func_343529899(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x2] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_1c_func_237924813(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x2] ^= _activatnvar_confusing_LLUUID_2.mData[0x5];

	/* inline */ _activation_check_proc_1c_func_10197319(_activatnvar_generic_bool_0);
}

void _activation_check_proc_1c_func_2012847845(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_LLUUID_7.mData[0x8];

}

void _activation_check_proc_1c_func_1872842357(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_t0, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	_activation_check_proc_1c_func_1081995675(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_2, _activatnvar_confusing_char_f);
}

void _activation_check_proc_1c_func_1081995675(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x6] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1c_func_292556534(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_5.mData[0x6] += _activatnvar_lace.mData[0x5];

}

void _activation_check_proc_1c_func_2084365183(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 *= 0x2;

}

void _activation_check_proc_1c_func_1122741600(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1c_func_1600968419(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_LLUUID_1.mData[0x9];

	_activatnvar_t0 |= 8;
	_activation_check_proc_1c_func_1122741600(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_1c_func_1690876964(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1127933270(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1c_func_1011666891(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_1c_func_1050218122(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_chararray_e[0x3] ^= _activatnvar_confusing_chararray_8[0x4];

	_activatnvar_confusing_U8_d ^= 0x6;

	_activation_check_proc_1c_func_1011666891(_activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_1c_func_414722494(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_538388990(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 >>= 0x8;

}

void _activation_check_proc_1c_func_157142057(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1c_func_82492038(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_4[0xa] = _activatnvar_lace.mData[0x0];

}

void _activation_check_proc_1c_func_1689924586(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_chararray_0[0xc] &= _activatnvar_confusing_chararray_3[0xe];

	/* inline */ _activation_check_proc_1c_func_100599329(_activatnvar_confusing_chararray_d, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_1c_func_1244471581(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x0] &= _activatnvar_confusing_LLUUID_6.mData[0x0];

}

void _activation_check_proc_1c_func_1355095241(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_U8_f;

}

void _activation_check_proc_1c_func_1261477542(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_1c_func_367794493(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_1c_func_495555267(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_7++;

	_activatnvar_confusing_int_7 *= _activatnvar_confusing_int_8;

}

void _activation_check_proc_1c_func_1819909017(bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_9[0x7] &= _activatnvar_confusing_chararray_d[0x2];

	_activation_check_proc_1c_func_2118027992(_activatnvar_pos, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1c_func_1231024315(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1c_func_2118027992(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_1c_func_1833829969(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_5 |= _activatnvar_code.mData[0x8];

}

void _activation_check_proc_1c_func_471671058(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_so;

}

void _activation_check_proc_1c_func_807084026(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_so, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1c_func_471671058(_activatnvar_confusing_LLUUID_c, _activatnvar_so);
}

void _activation_check_proc_1c_func_1487978182(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 += 0xc;

}

void _activation_check_proc_1c_func_1411569009(char& _activatnvar_confusing_char_8, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_8 += _activatnvar_confusing_U8_1;

}

void _activation_check_proc_1c_func_744101800(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_1c_func_426939776(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_1c_func_744101800(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_284392714(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] ^= _activatnvar_name_digest[0x2];

}

void _activation_check_proc_1c_func_1732148427(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_1c_func_2145570753(U8& _activatnvar_t0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("6de09734-7fd4-f728-77d8-cb047e979000");

	/* inline */ _activation_check_proc_1c_func_58356380(_activatnvar_t0);
	/* inline */ _activation_check_proc_1c_func_363262961(_activatnvar_pos, _activatnvar_so, _activatnvar_t0);
	_activation_check_proc_1c_func_1941748946(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1c_func_813104243(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_1c_func_1941748946(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("dc257e4f-896c-19dd-5b27-5970cf945a21");

}

void _activation_check_proc_1c_func_813104243(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_f.mData[0x8] |= _activatnvar_confusing_chararray_7[0x7];

}

void _activation_check_proc_1c_func_961612846(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b >>= 0xf;

}

void _activation_check_proc_1c_func_485600672(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_d += _activatnvar_confusing_int_7;

	/* inline */ _activation_check_proc_1c_func_339295739(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_442751131(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_9[0x9] |= _activatnvar_lace.mData[0x9];

}

void _activation_check_proc_1c_func_708534906(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_0[0xe] <<= _activatnvar_confusing_chararray_4[0xd];

	_activation_check_proc_1c_func_442751131(_activatnvar_confusing_chararray_9, _activatnvar_lace);
}

void _activation_check_proc_1c_func_59271190(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("c9b2cccb-ab90-5089-fa2d-f9e2be802b91");

}

void _activation_check_proc_1c_func_2110640824(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("017f08d1-315e-b365-55c3-2eddd10a7c92");

	_activation_check_proc_1c_func_59271190(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1c_func_1297641908(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_char_2;

}

void _activation_check_proc_1c_func_1940671088(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_2)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x2] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_1c_func_1297641908(_activatnvar_confusing_char_2, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_1c_func_517262598(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_1c_func_1366605767(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_1c_func_1072692513(LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_7 &= _activatnvar_confusing_char_2;

	/* inline */ _activation_check_proc_1c_func_1558009880(_activatnvar_confusing_int_5);
	_activation_check_proc_1c_func_756568682(_activatnvar_confusing_LLUUID_3);
	_activation_check_proc_1c_func_1137534268(_activatnvar_generic_iterator);
	_activation_check_proc_1c_func_318630800(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_combined_id, _activatnvar_fscked);
}

void _activation_check_proc_1c_func_1137534268(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_756568682(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("a7768b27-a93e-f923-d432-f22cc328ed46");

}

void _activation_check_proc_1c_func_318630800(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_362526712(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] *= _activatnvar_confusing_chararray_f[0x4];

	/* inline */ _activation_check_proc_1c_func_2127040863(_activatnvar_code, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_1c_func_748020258(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_5;

	_activation_check_proc_1c_func_1238205956(_activatnvar_confusing_char_7);
}

void _activation_check_proc_1c_func_1238205956(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_1c_func_1070931409(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_0 = _activatnvar_confusing_U8_4;

}

void _activation_check_proc_1c_func_1209003157(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_1c_func_740258016(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_1c_func_1209003157(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1c_func_1205374320(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	
	/* inline */ _activation_check_proc_1c_func_2094557218(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1c_func_2004554796(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1466396927(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_chararray_7[0xa] ^= _activatnvar_confusing_LLUUID_b.mData[0x7];

	/* inline */ _activation_check_proc_1c_func_781470(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_2028736684(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_1c_func_344980651(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_344980651(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1475643679(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activatnvar_confusing_LLUUID_1 = LLUUID("af77d753-bc20-c073-a06a-a3e415c5c186");

}

void _activation_check_proc_1c_func_1371620134(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("7db82aaf-ee6e-62bd-65cf-a2dfec05a17f");

	_activation_check_proc_1c_func_1646148596(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1646148596(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_856215938(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_b.mData[0x0] <<= _activatnvar_name_digest[0x1];

}

void _activation_check_proc_1c_func_808313959(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] &= _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_1c_func_1304450791(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_1c_func_808313959(_activatnvar_confusing_LLUUID_8, _activatnvar_mac_digest);
}

void _activation_check_proc_1c_func_2019810546(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_so)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
}

void _activation_check_proc_1c_func_690600234(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1c_func_1857058991()
{
	
}

void _activation_check_proc_1c_func_1550853913(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_960858753(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1658372939(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_b)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_char_b++;

	/* inline */ _activation_check_proc_1c_func_1006638672(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1c_func_1643179925(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_1c_func_960858753(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1c_func_1860001542(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1c_func_2106294077(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_LLUUID_2.mData[0x9] *= _activatnvar_confusing_LLUUID_f.mData[0xc];

	/* inline */ _activation_check_proc_1c_func_1675756676(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_1c_func_1586407604(_activatnvar_confusing_int_3);
}

void _activation_check_proc_1c_func_1003642392()
{
	
}

void _activation_check_proc_1c_func_128631320(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_1c_func_1605289983(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1c_func_830595614(char& _activatnvar_confusing_char_b, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_2[0x9] *= _activatnvar_section1.mData[0xb];

	/* inline */ _activation_check_proc_1c_func_1006967833(_activatnvar_confusing_char_b, _activatnvar_pos);
}

void _activation_check_proc_1c_func_1028387746(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] ^= _activatnvar_confusing_LLUUID_9.mData[0x1];

}

void _activation_check_proc_1c_func_634444691(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_1c_func_1912050863(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_1c_func_1330581500(_activatnvar_t0, _activatnvar_pos, _activatnvar_so);
	/* inline */ _activation_check_proc_1c_func_128597539(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1c_func_1330581500(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1c_func_1801241150(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_1c_func_1033081114(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_f += 0x6;

}

void _activation_check_proc_1c_func_1698676183(U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_2, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c *= 0xc;

	_activation_check_proc_1c_func_31358105(_activatnvar_confusing_char_2, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_1c_func_31358105(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_1c_func_1839470080(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x5] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1c_func_1570151222(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1666069621(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_chararray_4[0xb];

}

void _activation_check_proc_1c_func_1039078554(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x3] >>= _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_1c_func_1155747099(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x9] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_1c_func_174211530(U8& _activatnvar_confusing_U8_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_5)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_5 &= _activatnvar_confusing_U8_c;

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1421558516(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_3;

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1c_func_1560766797(_activatnvar_generic_iterator);
	_activation_check_proc_1c_func_174211530(_activatnvar_confusing_U8_c, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_code, _activatnvar_fscked, _activatnvar_confusing_bool_8, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_1c_func_241614784(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1c_func_1832887325(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_char_d++;

	/* inline */ _activation_check_proc_1c_func_1983553880(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_1c_func_1589158110(_activatnvar_confusing_chararray_3, _activatnvar_confusing_int_a, _activatnvar_mac_digest);
}

void _activation_check_proc_1c_func_1593983515(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_chararray_1[0xc];

	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_1c_func_1849153200(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_1c_func_325496658(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_c)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xa] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_1c_func_2128106017(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b)
{
	
	/* inline */ _activation_check_proc_1c_func_1191846723(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1c_func_1892455834(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_0 ^= 0x9;

}

void _activation_check_proc_1c_func_975731398(unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_1386573888(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_1c_func_1386573888(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] >>= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_1c_func_1681987361(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_8.mData[0x1] >>= _activatnvar_name_digest[0x0];

	_activatnvar_confusing_LLUUID_8.mData[0x9] = _activatnvar_fscked.mData[0xa];

}

void _activation_check_proc_1c_func_1164710665(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("3fd4afac-dc2b-8fc0-1eb9-c657fef6284c");

}

void _activation_check_proc_1c_func_1084378118(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_1c_func_2135942440(unsigned char* _activatnvar_name_digest, std::string& _activatnvar_fullname, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_1c_func_1812368643(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] >>= _activatnvar_combined_id.mData[0x0];

}

void _activation_check_proc_1c_func_678886204(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0x0;

	/* inline */ _activation_check_proc_1c_func_1136026102(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1c_func_606272765()
{
	
}

void _activation_check_proc_1c_func_587978586(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_1c_func_1027241648(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("91735f48-4bbb-a853-e193-9a31fb945e92");

}

void _activation_check_proc_1c_func_1909443726(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_int_a ^= 0xe;

	_activation_check_proc_1c_func_606272765();
	_activation_check_proc_1c_func_1027241648(_activatnvar_confusing_LLUUID_3);
	_activation_check_proc_1c_func_587978586(_activatnvar_confusing_char_3, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_1c_func_771009460(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1288913220(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_676146615(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_1288913220(_activatnvar_generic_iterator);
	_activation_check_proc_1c_func_38629404(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_0);
	_activation_check_proc_1c_func_771009460(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_1c_func_38629404(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1c_func_965186056(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x9] *= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_1c_func_1042595109(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_section1;

}

void _activation_check_proc_1c_func_342592254(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_1c_func_640801069(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_1c_func_1832533710(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1c_func_229944565(int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_8;

	_activation_check_proc_1c_func_1297124821(_activatnvar_confusing_int_6);
}

void _activation_check_proc_1c_func_1297124821(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_1c_func_751667801(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f |= 0x3;

}

void _activation_check_proc_1c_func_1416982571(int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_f[0xf] *= _activatnvar_confusing_LLUUID_5.mData[0x5];

	_activation_check_proc_1c_func_751667801(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1c_func_151660293(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x7] += _activatnvar_confusing_LLUUID_a.mData[0x0];

}

void _activation_check_proc_1c_func_403569059(int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_5.mData[0x0] += _activatnvar_confusing_chararray_b[0xb];

	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1c_func_1506484595(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_581318860(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("9c84deeb-24dc-c02d-cf84-6c1e647a880a");

}

void _activation_check_proc_1c_func_39128156(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1716502754(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xa] != 0xe) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_1c_func_39128156(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1802290392(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_6[0xa];

}

void _activation_check_proc_1c_func_1605039689(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] ^= _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_1c_func_169616716(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_doaccount;

}

void _activation_check_proc_1c_func_1634435432(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_6;

	_activation_check_proc_1c_func_169616716(_activatnvar_confusing_bool_2, _activatnvar_doaccount);
}

void _activation_check_proc_1c_func_265889193(int& _activatnvar_confusing_int_d, U8& _activatnvar_t0)
{
	_activatnvar_confusing_int_d <<= _activatnvar_confusing_int_d;

	/* inline */ _activation_check_proc_1c_func_206396800(_activatnvar_t0);
}

void _activation_check_proc_1c_func_853880008(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_959927520(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_853880008(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_823884569(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1c_func_1566762576(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_1c_func_119978547(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_6 ^= _activatnvar_confusing_chararray_c[0xb];

}

void _activation_check_proc_1c_func_436718090(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_b[0x9] ^= _activatnvar_confusing_chararray_d[0x7];

}

void _activation_check_proc_1c_func_1203706008(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_t1 &= 0xff;
	_activation_check_proc_1c_func_208201390(_activatnvar_confusing_U8_5);
	_activation_check_proc_1c_func_217242880();
	_activation_check_proc_1c_func_772853237(_activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1c_func_772853237(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x7] != 0x5) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_1c_func_217242880()
{
	
}

void _activation_check_proc_1c_func_208201390(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_1c_func_385857276(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_1c_func_1731776694(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_9.mData[0x1];

}

void _activation_check_proc_1c_func_751263895(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_chararray_2[0x9] *= _activatnvar_confusing_LLUUID_f.mData[0xd];

	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_3;

	/* inline */ _activation_check_proc_1c_func_378074530(_activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_1c_func_128419794(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_1c_func_1731776694(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_U8_1);
	_activation_check_proc_1c_func_385857276(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_1c_func_1650532170(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_1c_func_1141191939(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1c_func_1141191939(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1c_func_1359590969(unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

	/* inline */ _activation_check_proc_1c_func_1156783690(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_1, _activatnvar_confusing_int_1);
}

void _activation_check_proc_1c_func_1743766634(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("8c5cb67a-9778-e2fb-95a5-da1bd3f981e7");

}

void _activation_check_proc_1c_func_839221088(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_4)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x3] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_a = true;

	/* inline */ _activation_check_proc_1c_func_1326381422(_activatnvar_confusing_char_2, _activatnvar_confusing_char_3);
}

void _activation_check_proc_1c_func_1507299188(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1639584557(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5)
{
	
	_activation_check_proc_1c_func_1277464478(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1c_func_1277464478(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1c_func_1144529976(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1c_func_382185830(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_1c_func_1281409399(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_0[0x9] &= _activatnvar_lace.mData[0xa];

}

void _activation_check_proc_1c_func_364811128(char& _activatnvar_confusing_char_5, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_5 *= _activatnvar_confusing_chararray_d[0x1];

	_activation_check_proc_1c_func_1807318810(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_1807318810(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1064235263(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xb] = _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_1c_func_328231855(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_116778816(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1c_func_153641319(bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xb] == _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_5;

	_activation_check_proc_1c_func_116778816(_activatnvar_confusing_int_7);
}

void _activation_check_proc_1c_func_1801330848(char& _activatnvar_confusing_char_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_1c_func_901107017(_activatnvar_confusing_char_e);
}

void _activation_check_proc_1c_func_1709285315(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_1c_func_548621688(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1c_func_344883130(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1c_func_1685014294(bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_7++;

	/* inline */ _activation_check_proc_1c_func_791984027(_activatnvar_confusing_int_7, _activatnvar_confusing_int_a);
	_activation_check_proc_1c_func_344883130(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1c_func_1369486328(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_1c_func_192278654(LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator = 12;
	/* inline */ _activation_check_proc_1c_func_178678792(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
	_activation_check_proc_1c_func_1369486328(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1c_func_1362003071(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xc] >>= _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_1c_func_669648710(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_1c_func_98867976(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_b |= _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_1c_func_1546333318(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_4, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0xa;

	/* inline */ _activation_check_proc_1c_func_134910688(_activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_lace);
	_activation_check_proc_1c_func_1202578752(_activatnvar_confusing_char_4, _activatnvar_section2);
}

void _activation_check_proc_1c_func_1202578752(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_4 = _activatnvar_section2.mData[0xd];

}

void _activation_check_proc_1c_func_763026423(int& _activatnvar_confusing_int_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1427526899(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1c_func_1232651596(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1c_func_439449174(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xf] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_d = false;

	_activatnvar_confusing_LLUUID_2.mData[0x4] >>= _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_1c_func_662588444(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_d, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_int_d++;

	_activation_check_proc_1c_func_439449174(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_U8_3, _activatnvar_confusing_chararray_c, _activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1c_func_1027432114(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1c_func_96238834(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_f)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x1] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1c_func_1999734512(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_1c_func_335103189(_activatnvar_name_digest, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1c_func_335103189(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] *= _activatnvar_name_digest[0x4];

}

void _activation_check_proc_1c_func_6294242(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] = _activatnvar_confusing_LLUUID_b.mData[0x6];

}

void _activation_check_proc_1c_func_714438579(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_288767671(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1c_func_71504331(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xa] == 0x0) _activatnvar_confusing_bool_5 = true;

	/* inline */ _activation_check_proc_1c_func_384283112(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_1c_func_1487436438(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_1c_func_435196816(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1c_func_435196816(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_1748167951(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xb] ^= _activatnvar_confusing_chararray_2[0x0];

}

void _activation_check_proc_1c_func_1367086943(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x3] += _activatnvar_lace.mData[0xb];

}

void _activation_check_proc_1c_func_1917196521(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("04499107-fc73-b21b-a3ee-bca0c3e7e650");

	/* inline */ _activation_check_proc_1c_func_1236540867(_activatnvar_confusing_LLUUID_2, _activatnvar_secret);
}

void _activation_check_proc_1c_func_2134963089(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_chararray_1[0x0];

	/* inline */ _activation_check_proc_1c_func_1255127470(_activatnvar_confusing_U8_5, _activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_1c_func_1234070435(_activatnvar_code, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1c_func_231704607(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_1[0x6] ^= _activatnvar_ser_digest[0x8];

}

void _activation_check_proc_1c_func_550586586(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_2.mData[0xa];

}

void _activation_check_proc_1c_func_8107282(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 &= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_1c_func_1101039479(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_char_4 >>= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_1c_func_1713606606(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_chararray_c[0xf];

	/* inline */ _activation_check_proc_1c_func_366189610(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1c_func_542782423(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1c_func_820524641(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1c_func_1448386614(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_1c_func_1662318060(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("e0f5efcf-f7b0-ad3e-1341-5b11c173dbd8");

}

void _activation_check_proc_1c_func_336589238(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_chararray_5[0x2];

}

void _activation_check_proc_1c_func_203217227(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x7] ^= _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_1c_func_1468000130(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_chararray_0[0x2];

}

void _activation_check_proc_1c_func_220468839(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_2136826749(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_5)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_5 <<= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_1c_func_877095097(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 |= 0x7;

}

void _activation_check_proc_1c_func_507331882(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1c_func_1153315248(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_4, std::string& _activatnvar_fullname, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_fullname = gFullName;
	_activation_check_proc_1c_func_1648909293(_activatnvar_confusing_U8_4, _activatnvar_confusing_bool_3);
	_activation_check_proc_1c_func_1571659952(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1c_func_1571659952(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_1c_func_1648909293(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_4 *= 0x5;

}

void _activation_check_proc_1c_func_1586330606(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_572181728(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("512a1353-36e3-355f-d74d-0ed324ea90ad");

	_activation_check_proc_1c_func_594419209(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	_activation_check_proc_1c_func_1586330606(_activatnvar_generic_iterator);
}

void _activation_check_proc_1c_func_594419209(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_2119283646(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1c_func_1767639892(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_1c_func_818340332(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_chararray_3[0xe];

}

void _activation_check_proc_1c_func_797726286(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x3] = _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_1c_func_946465413(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_combined_id, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_9.mData[0xf] += _activatnvar_combined_id.mData[0x4];

	/* inline */ _activation_check_proc_1c_func_2112540241(_activatnvar_strbuf_0);
	_activation_check_proc_1c_func_1925496880(_activatnvar_strbuf_0, _activatnvar_section1);
}

void _activation_check_proc_1c_func_1925496880(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1c_func_1727767044(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_6[0xf] |= _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_1c_func_1744316(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f >>= 0xc;

	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
	_activation_check_proc_1c_func_1727767044(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1c_func_648843919(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_U8_b = _activatnvar_so.mData[0xc];

}

void _activation_check_proc_1c_func_1973223321(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1c_func_907993313(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_2, int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_8[0x9] = _activatnvar_confusing_chararray_9[0xc];

	_activation_check_proc_1c_func_1588000119(_activatnvar_confusing_char_4);
	_activation_check_proc_1c_func_1779383786(_activatnvar_confusing_U8_f, _activatnvar_generic_bool_1, _activatnvar_confusing_U8_7);
	_activation_check_proc_1c_func_2135758581(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_9);
	_activation_check_proc_1c_func_1559215555(_activatnvar_confusing_int_a, _activatnvar_confusing_U8_2, _activatnvar_confusing_char_f, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1c_func_1779383786(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_7 >>= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_1c_func_1588000119(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_1c_func_1559215555(int& _activatnvar_confusing_int_a, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_2 |= _activatnvar_confusing_char_f;

	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1c_func_2135758581(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_1c_func_1041302630(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_1c_func_450475299(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1c_func_334629783(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_2 <<= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_1c_func_214055925(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_f |= 0xc;

}

void _activation_check_proc_1c_func_969478577(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 |= 0x6;

}

void _activation_check_proc_1c_func_806587370(char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= 0xc;

	_activation_check_proc_1c_func_1219806797(_activatnvar_confusing_char_6);
}

void _activation_check_proc_1c_func_1219806797(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 *= 0x2;

}

void _activation_check_proc_1c_func_1784523632(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_LLUUID_5.mData[0x4];

}

void _activation_check_proc_1c_func_1992032611(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] |= _activatnvar_confusing_LLUUID_c.mData[0x4];

}

void _activation_check_proc_1c_func_780863159(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1c_func_930997615(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1c_func_1119311035(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	_activation_check_proc_1c_func_242636302(_activatnvar_confusing_int_c);
}

void _activation_check_proc_1c_func_242636302(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1c_func_636840622(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 += _activatnvar_confusing_char_e;

}

void _activation_check_proc_1c_func_1816852756(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

	_activation_check_proc_1c_func_636840622(_activatnvar_confusing_char_e, _activatnvar_confusing_char_9);
}

void _activation_check_proc_1c_func_1195149627(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_1c_func_2083408559(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_1c_func_480373916(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_1c_func_480373916(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x7] *= _activatnvar_confusing_LLUUID_2.mData[0x2];

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
