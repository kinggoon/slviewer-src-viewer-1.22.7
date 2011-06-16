// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation0a.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 0a

void _activation_check_proc_0a_func_600044499(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_char_f >>= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_0a_func_793558721(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0a_func_1154920369(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xf;

}

void _activation_check_proc_0a_func_1542590234(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_8[0xc] ^= _activatnvar_confusing_chararray_4[0xd];

}

void _activation_check_proc_0a_func_767836454(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_secret;

	_activation_check_proc_0a_func_1608105760(_activatnvar_confusing_char_4, _activatnvar_confusing_bool_1, _activatnvar_confusing_bool_6, _activatnvar_confusing_bool_c, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_0a_func_1183441681(_activatnvar_t0);
}

void _activation_check_proc_0a_func_1608105760(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_0)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_1;

	_activatnvar_confusing_char_4 >>= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_0a_func_1217192043(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1183419354(unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_0 = false;

	_activatnvar_confusing_LLUUID_7.mData[0x3] <<= _activatnvar_confusing_LLUUID_6.mData[0x2];

	_activation_check_proc_0a_func_1049277982(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_0a_func_1049277982(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_c[0x3] ^= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_0a_func_1393262358(int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_int_6 |= _activatnvar_confusing_int_e;

	_activation_check_proc_0a_func_1452095811(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_0a_func_1452095811(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0a_func_314996184(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0a_func_503847660(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_0a_func_550982211()
{
	
}

void _activation_check_proc_0a_func_907262952(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_f >>= 0x7;

}

void _activation_check_proc_0a_func_654045216(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_0a_func_135617788(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x5] >>= _activatnvar_confusing_chararray_4[0x5];

}

void _activation_check_proc_0a_func_98645620(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	
	_activation_check_proc_0a_func_135617788(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_0a_func_1418955592(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_0a_func_40697868(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] = _activatnvar_confusing_chararray_3[0x9];

}

void _activation_check_proc_0a_func_171941785(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x2] *= _activatnvar_confusing_chararray_f[0x5];

	/* inline */ _activation_check_proc_0a_func_518065782(_activatnvar_confusing_char_5, _activatnvar_confusing_char_d);
}

void _activation_check_proc_0a_func_1991349116(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_0a_func_3475142(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_char_8;

}

void _activation_check_proc_0a_func_792381627(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_5.mData[0x4] ^= _activatnvar_confusing_chararray_7[0x4];

	_activation_check_proc_0a_func_3475142(_activatnvar_confusing_char_8, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_0a_func_449124101(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x4] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_0a_func_1649079076(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_0a_func_1925616690(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0a_func_1925616690(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_9.mData[0xf];

}

void _activation_check_proc_0a_func_665492030(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_7 >>= 0xd;

}

void _activation_check_proc_0a_func_780634903(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0a_func_39671608(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] |= _activatnvar_confusing_chararray_d[0x9];

}

void _activation_check_proc_0a_func_362861920(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

	/* inline */ _activation_check_proc_0a_func_1241323747(_activatnvar_strbuf_0);
	_activation_check_proc_0a_func_780634903(_activatnvar_section1, _activatnvar_strbuf_0);
	_activation_check_proc_0a_func_39671608(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0a_func_1513616177(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xf] >>= _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_0a_func_898059420(char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0a_func_704979636(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_char_6);
}

void _activation_check_proc_0a_func_705358350(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_U8_3 &= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0a_func_1481546245(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_0a_func_78625436(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0a_func_1146018700(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_c *= _activatnvar_confusing_U8_6;

	_activation_check_proc_0a_func_1336807450(_activatnvar_confusing_LLUUID_5, _activatnvar_fscked);
	_activation_check_proc_0a_func_1261845312(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_0a_func_1532406393(_activatnvar_confusing_int_7);
}

void _activation_check_proc_0a_func_1261845312(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] *= _activatnvar_confusing_LLUUID_a.mData[0xb];

}

void _activation_check_proc_0a_func_1532406393(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0a_func_1336807450(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_fscked;

}

void _activation_check_proc_0a_func_518678764(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0a_func_1531582821(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= 0x4;

}

void _activation_check_proc_0a_func_1262522588(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0a_func_310594588(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_c = _activatnvar_code.mData[0x7];

}

void _activation_check_proc_0a_func_178705455(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_532128083(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_5)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xf] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_8;

	/* inline */ _activation_check_proc_0a_func_106511097(_activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_0a_func_126608130(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_8, _activatnvar_confusing_char_4);
}

void _activation_check_proc_0a_func_1195827375(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1177277025(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0a_func_1920819746(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0a_func_35227565(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_8 *= _activatnvar_confusing_char_1;

}

void _activation_check_proc_0a_func_1187228851(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] <<= _activatnvar_confusing_LLUUID_e.mData[0xa];

}

void _activation_check_proc_0a_func_1984015806(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_6[0x2] *= _activatnvar_mac_digest[0x4];

	_activation_check_proc_0a_func_1187228851(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_0a_func_1000031727(_activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_char_2, _activatnvar_confusing_bool_6, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_0a_func_1763372922(_activatnvar_confusing_char_b);
}

void _activation_check_proc_0a_func_1531304629(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_0a_func_1161995232(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_0a_func_355660445(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_0a_func_434814779(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xd] >>= _activatnvar_confusing_chararray_b[0x2];

}

void _activation_check_proc_0a_func_416386969(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a += _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_0a_func_541960541(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_0a_func_735846361(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1717211654(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_735846361(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_644820656(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1314136417(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xa] = _activatnvar_confusing_chararray_8[0x0];

}

void _activation_check_proc_0a_func_1659376782(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_lace;

}

void _activation_check_proc_0a_func_2072240434(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	
	_activation_check_proc_0a_func_1659376782(_activatnvar_lace, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0a_func_1346617305(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_5, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_0a_func_394231518(_activatnvar_confusing_U8_f, _activatnvar_confusing_char_d, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_0a_func_1962915518(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1081635365(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_7, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_0a_func_1467819494(_activatnvar_t0);
	_activation_check_proc_0a_func_15544934(_activatnvar_confusing_char_7);
	/* inline */ _activation_check_proc_0a_func_507102676(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_0a_func_15544934(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_0a_func_1675065432(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0a_func_1266531542(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x2] *= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_0a_func_1761947778(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_5, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_f;

	/* inline */ _activation_check_proc_0a_func_1907684948(_activatnvar_confusing_char_7, _activatnvar_doaccount, _activatnvar_confusing_char_5);
}

void _activation_check_proc_0a_func_1378935350(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_0a_func_1959223030(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xb] != 0xc) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_0a_func_904664209(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_0a_func_2120870431(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_0a_func_607539587(int& _activatnvar_confusing_int_9, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
	_activation_check_proc_0a_func_2120870431(_activatnvar_confusing_int_9);
}

void _activation_check_proc_0a_func_417127489(bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0a_func_1096133553(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_0a_func_417127489(_activatnvar_confusing_bool_6);
	/* inline */ _activation_check_proc_0a_func_1499369896(_activatnvar_confusing_U8_c, _activatnvar_lace);
	_activation_check_proc_0a_func_518581620(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_518581620(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1214504904(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("356c50c1-f076-3db9-cf4f-63b1713dbaa1");

}

void _activation_check_proc_0a_func_1882178924(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_4 *= 0x3;

}

void _activation_check_proc_0a_func_2057119724(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a <<= 0x1;

}

void _activation_check_proc_0a_func_1166845380(char& _activatnvar_confusing_char_a, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_0a_func_2057119724(_activatnvar_confusing_char_a);
}

void _activation_check_proc_0a_func_826803989(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 = _activatnvar_confusing_int_5;

	_activatnvar_confusing_LLUUID_6.mData[0x7] *= _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_0a_func_501236069(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] <<= _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_0a_func_2008268911(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("90797238-0091-b6a4-1c07-c8ac00ff1f04");

}

void _activation_check_proc_0a_func_1876626079(bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0a_func_909007918(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b >>= _activatnvar_confusing_chararray_6[0x2];

}

void _activation_check_proc_0a_func_988310417(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_7, char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_strbuf_0[0] = 4; _activatnvar_strbuf_0[0] ^= 49; _activatnvar_strbuf_0[1] = 21; _activatnvar_strbuf_0[1] ^= 33; _activatnvar_strbuf_0[2] = 43; _activatnvar_strbuf_0[2] ^= 27; _activatnvar_strbuf_0[3] = 22; _activatnvar_strbuf_0[3] ^= 36; _activatnvar_strbuf_0[4] = 76; _activatnvar_strbuf_0[4] ^= 127; _activatnvar_strbuf_0[5] = 54; _activatnvar_strbuf_0[5] ^= 6; _activatnvar_strbuf_0[6] = 25; _activatnvar_strbuf_0[6] ^= 33; _activatnvar_strbuf_0[7] = 79; _activatnvar_strbuf_0[7] ^= 127; _activatnvar_strbuf_0[8] = 61; _activatnvar_strbuf_0[8] ^= 16; _activatnvar_strbuf_0[9] = 117; _activatnvar_strbuf_0[9] ^= 69; _activatnvar_strbuf_0[10] = 92; _activatnvar_strbuf_0[10] ^= 108; _activatnvar_strbuf_0[11] = 32; _activatnvar_strbuf_0[11] ^= 24; _activatnvar_strbuf_0[12] = 25; _activatnvar_strbuf_0[12] ^= 40; _activatnvar_strbuf_0[13] = 76; _activatnvar_strbuf_0[13] ^= 97; _activatnvar_strbuf_0[14] = 75; _activatnvar_strbuf_0[14] ^= 123; _activatnvar_strbuf_0[15] = 69; _activatnvar_strbuf_0[15] ^= 119; _activatnvar_strbuf_0[16] = 38; _activatnvar_strbuf_0[16] ^= 22; _activatnvar_strbuf_0[17] = 13; _activatnvar_strbuf_0[17] ^= 53; _activatnvar_strbuf_0[18] = 117; _activatnvar_strbuf_0[18] ^= 88; _activatnvar_strbuf_0[19] = 13; _activatnvar_strbuf_0[19] ^= 61; _activatnvar_strbuf_0[20] = 50; _activatnvar_strbuf_0[20] ^= 86; _activatnvar_strbuf_0[21] = 18; _activatnvar_strbuf_0[21] ^= 34; _activatnvar_strbuf_0[22] = 89; _activatnvar_strbuf_0[22] ^= 58; _activatnvar_strbuf_0[23] = 57; _activatnvar_strbuf_0[23] ^= 20; _activatnvar_strbuf_0[24] = 93; _activatnvar_strbuf_0[24] ^= 109; _activatnvar_strbuf_0[25] = 85; _activatnvar_strbuf_0[25] ^= 103; _activatnvar_strbuf_0[26] = 88; _activatnvar_strbuf_0[26] ^= 108; _activatnvar_strbuf_0[27] = 24; _activatnvar_strbuf_0[27] ^= 123; _activatnvar_strbuf_0[28] = 11; _activatnvar_strbuf_0[28] ^= 51; _activatnvar_strbuf_0[29] = 78; _activatnvar_strbuf_0[29] ^= 118; _activatnvar_strbuf_0[30] = 35; _activatnvar_strbuf_0[30] ^= 17; _activatnvar_strbuf_0[31] = 22; _activatnvar_strbuf_0[31] ^= 35; _activatnvar_strbuf_0[32] = 19; _activatnvar_strbuf_0[32] ^= 43; _activatnvar_strbuf_0[33] = 99; _activatnvar_strbuf_0[33] ^= 82; _activatnvar_strbuf_0[34] = 49; _activatnvar_strbuf_0[34] ^= 4; _activatnvar_strbuf_0[35] = 51; _activatnvar_strbuf_0[35] ^= 2; _activatnvar_strbuf_0[36] = 0;
	_activation_check_proc_0a_func_1876626079(_activatnvar_confusing_bool_7);
	_activation_check_proc_0a_func_909007918(_activatnvar_confusing_chararray_6, _activatnvar_confusing_char_b);
	_activation_check_proc_0a_func_1762403821(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_4);
	_activation_check_proc_0a_func_2008268911(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_0a_func_1762403821(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_b[0x6] ^= _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_0a_func_1602406311(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_0a_func_994635674(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0a_func_424401624(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_0a_func_448689017(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a *= 0xb;

}

void _activation_check_proc_0a_func_824014160(int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_4 = false;

	/* inline */ _activation_check_proc_0a_func_1380679607(_activatnvar_confusing_int_a);
}

void _activation_check_proc_0a_func_1054946373(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1)
{
	
	_activation_check_proc_0a_func_733330605(_activatnvar_confusing_bool_9, _activatnvar_confusing_U8_4, _activatnvar_confusing_U8_9);
	_activation_check_proc_0a_func_653912256(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_0a_func_733330605(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_4 &= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_0a_func_653912256(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0a_func_1856864176(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_0a_func_1583705611(int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_0a_func_1276496681(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_1276496681(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_389579431(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x1] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0a_func_1605424616(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_4 >>= 0x1;

}

void _activation_check_proc_0a_func_1198625158(U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0a_func_1547258387(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_1168280955(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0a_func_1168280955(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xf] != 0x1) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_0a_func_116702324(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_char_0;

}

void _activation_check_proc_0a_func_1211208915(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_7 >>= _activatnvar_confusing_chararray_1[0xc];

}

void _activation_check_proc_0a_func_363029524(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] == _activatnvar_pos) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_0a_func_116792674(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_4 >>= _activatnvar_t0;

}

void _activation_check_proc_0a_func_1219712757(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_0a_func_261755400(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_b.mData[0xd] >>= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_0a_func_1608057844(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_code;

}

void _activation_check_proc_0a_func_1047115317(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_LLUUID_a.mData[0x6];

	_activation_check_proc_0a_func_1120744742(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0a_func_1120744742(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_2[0x8] <<= _activatnvar_confusing_LLUUID_4.mData[0xe];

}

void _activation_check_proc_0a_func_808769519(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] >>= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_0a_func_789964219(unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_808769519(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0a_func_1443936119(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] &= _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_0a_func_105846629(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_secret;

	_activation_check_proc_0a_func_1178470665(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_0a_func_1178470665(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_0a_func_2138842416(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_0a_func_889799373(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_chararray_9[0xb];

	_activatnvar_confusing_char_8 += _activatnvar_confusing_chararray_9[0x5];

}

void _activation_check_proc_0a_func_1324611057(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_7 <<= _activatnvar_confusing_chararray_c[0x9];

	_activation_check_proc_0a_func_889799373(_activatnvar_confusing_char_8, _activatnvar_confusing_chararray_9, _activatnvar_confusing_char_5);
	/* inline */ _activation_check_proc_0a_func_40896632(_activatnvar_confusing_chararray_1, _activatnvar_mac_digest);
}

void _activation_check_proc_0a_func_1510765561(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_0a_func_1569024693(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xa] ^= _activatnvar_section2.mData[0xc];

}

void _activation_check_proc_0a_func_1380331053(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x4] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_0a_func_1755950772(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_7 = true;

	_activation_check_proc_0a_func_2080190241(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_0a_func_2080190241(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_0a_func_528626809(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_0a_func_745482795(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_0a_func_892426162(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_chararray_9[0x4];

}

void _activation_check_proc_0a_func_327741293(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_chararray_2[0x0];

}

void _activation_check_proc_0a_func_1239703891(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_0a_func_1987739451(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_e)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_e &= 0xff;

	_activation_check_proc_0a_func_892426162(_activatnvar_confusing_char_9, _activatnvar_confusing_chararray_9);
	_activation_check_proc_0a_func_1239703891(_activatnvar_confusing_chararray_e, _activatnvar_confusing_char_f);
	/* inline */ _activation_check_proc_0a_func_929220128(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_327741293(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_0a_func_35606577(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] *= _activatnvar_confusing_LLUUID_7.mData[0xb];

}

void _activation_check_proc_0a_func_446970686(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a <<= 0x2;

}

void _activation_check_proc_0a_func_1640661380(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_0a_func_1760347968(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xd] += _activatnvar_confusing_LLUUID_8.mData[0xa];

}

void _activation_check_proc_0a_func_1972430923(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_2.mData[0xa];

}

void _activation_check_proc_0a_func_520712347(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0a_func_1330698870(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x8] |= _activatnvar_confusing_chararray_3[0x7];

}

void _activation_check_proc_0a_func_2059223783(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
	/* inline */ _activation_check_proc_0a_func_1254178362(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_0, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_0a_func_1453352799(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_0a_func_466759776(_activatnvar_strbuf_0);
	_activation_check_proc_0a_func_884109350();
}

void _activation_check_proc_0a_func_884109350()
{
	
}

void _activation_check_proc_0a_func_466759776(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 78; _activatnvar_strbuf_0[0] ^= 118; _activatnvar_strbuf_0[1] = 35; _activatnvar_strbuf_0[1] ^= 65; _activatnvar_strbuf_0[2] = 72; _activatnvar_strbuf_0[2] ^= 43; _activatnvar_strbuf_0[3] = 89; _activatnvar_strbuf_0[3] ^= 108; _activatnvar_strbuf_0[4] = 56; _activatnvar_strbuf_0[4] ^= 12; _activatnvar_strbuf_0[5] = 86; _activatnvar_strbuf_0[5] ^= 98; _activatnvar_strbuf_0[6] = 65; _activatnvar_strbuf_0[6] ^= 115; _activatnvar_strbuf_0[7] = 37; _activatnvar_strbuf_0[7] ^= 16; _activatnvar_strbuf_0[8] = 34; _activatnvar_strbuf_0[8] ^= 15; _activatnvar_strbuf_0[9] = 115; _activatnvar_strbuf_0[9] ^= 67; _activatnvar_strbuf_0[10] = 13; _activatnvar_strbuf_0[10] ^= 60; _activatnvar_strbuf_0[11] = 82; _activatnvar_strbuf_0[11] ^= 100; _activatnvar_strbuf_0[12] = 58; _activatnvar_strbuf_0[12] ^= 10; _activatnvar_strbuf_0[13] = 91; _activatnvar_strbuf_0[13] ^= 118; _activatnvar_strbuf_0[14] = 7; _activatnvar_strbuf_0[14] ^= 55; _activatnvar_strbuf_0[15] = 4; _activatnvar_strbuf_0[15] ^= 52; _activatnvar_strbuf_0[16] = 26; _activatnvar_strbuf_0[16] ^= 34; _activatnvar_strbuf_0[17] = 17; _activatnvar_strbuf_0[17] ^= 35; _activatnvar_strbuf_0[18] = 91; _activatnvar_strbuf_0[18] ^= 118; _activatnvar_strbuf_0[19] = 63; _activatnvar_strbuf_0[19] ^= 12; _activatnvar_strbuf_0[20] = 90; _activatnvar_strbuf_0[20] ^= 104; _activatnvar_strbuf_0[21] = 9; _activatnvar_strbuf_0[21] ^= 57; _activatnvar_strbuf_0[22] = 88; _activatnvar_strbuf_0[22] ^= 106; _activatnvar_strbuf_0[23] = 39; _activatnvar_strbuf_0[23] ^= 10; _activatnvar_strbuf_0[24] = 81; _activatnvar_strbuf_0[24] ^= 50; _activatnvar_strbuf_0[25] = 79; _activatnvar_strbuf_0[25] ^= 119; _activatnvar_strbuf_0[26] = 68; _activatnvar_strbuf_0[26] ^= 116; _activatnvar_strbuf_0[27] = 62; _activatnvar_strbuf_0[27] ^= 12; _activatnvar_strbuf_0[28] = 20; _activatnvar_strbuf_0[28] ^= 36; _activatnvar_strbuf_0[29] = 38; _activatnvar_strbuf_0[29] ^= 20; _activatnvar_strbuf_0[30] = 41; _activatnvar_strbuf_0[30] ^= 16; _activatnvar_strbuf_0[31] = 117; _activatnvar_strbuf_0[31] ^= 69; _activatnvar_strbuf_0[32] = 100; _activatnvar_strbuf_0[32] ^= 84; _activatnvar_strbuf_0[33] = 95; _activatnvar_strbuf_0[33] ^= 103; _activatnvar_strbuf_0[34] = 123; _activatnvar_strbuf_0[34] ^= 75; _activatnvar_strbuf_0[35] = 87; _activatnvar_strbuf_0[35] ^= 101; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0a_func_2146709774(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_f.mData[0x1] <<= _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_0a_func_109813882(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
	_activation_check_proc_0a_func_560560536(_activatnvar_t1, _activatnvar_t0);
	_activation_check_proc_0a_func_1842791141(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_0a_func_560560536(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_0a_func_1842791141(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0a_func_582672646(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("414c622c-844e-ff68-cba5-cd4d93354707");

}

void _activation_check_proc_0a_func_1123816169(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_0a_func_799792044(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xe] *= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_0a_func_1460958818(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0a_func_878447067(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_b ^= _activatnvar_confusing_char_5;

}

void _activation_check_proc_0a_func_1219315531(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_0a_func_262241969(U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_6, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_6 &= 0x7;

	_activation_check_proc_0a_func_1219315531(_activatnvar_confusing_U8_8);
	_activation_check_proc_0a_func_313071114(_activatnvar_confusing_int_e);
}

void _activation_check_proc_0a_func_313071114(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0a_func_1467345281(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_0a_func_1409347894(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xb] *= _activatnvar_confusing_LLUUID_0.mData[0x9];

}

void _activation_check_proc_0a_func_825240328()
{
	
}

void _activation_check_proc_0a_func_1343263169(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1323798661(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_615788130()
{
	
}

void _activation_check_proc_0a_func_1835495307(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = _activatnvar_lace.mData[0x0];

	_activation_check_proc_0a_func_1672470858(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_0a_func_1672470858(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_0a_func_599448943(U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xb] != _activatnvar_t1) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0a_func_1144323781(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0a_func_415550764(int& _activatnvar_confusing_int_7, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b <<= _activatnvar_confusing_char_3;

	_activation_check_proc_0a_func_1144323781(_activatnvar_confusing_int_7);
}

void _activation_check_proc_0a_func_668751965(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0a_func_1710682230(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_0 ^= _activatnvar_confusing_char_4;

}

void _activation_check_proc_0a_func_1841076291(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_char_4;

	/* inline */ _activation_check_proc_0a_func_952658956();
}

void _activation_check_proc_0a_func_1782777892(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] |= _activatnvar_confusing_chararray_3[0xb];

	_activation_check_proc_0a_func_1567027545(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
}

void _activation_check_proc_0a_func_1567027545(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_390191069(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_chararray_6[0x2];

}

void _activation_check_proc_0a_func_1604199004(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 >>= _activatnvar_confusing_char_6;

}

void _activation_check_proc_0a_func_1632735362(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x6] |= _activatnvar_confusing_LLUUID_c.mData[0xc];

}

void _activation_check_proc_0a_func_182320644(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_a[0xb] += _activatnvar_section1.mData[0x4];

}

void _activation_check_proc_0a_func_536921097(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_0a_func_569216990(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_LLUUID_1.mData[0xe];

}

void _activation_check_proc_0a_func_535119826(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_8[0xe] <<= _activatnvar_confusing_chararray_f[0x0];

	_activation_check_proc_0a_func_1580461227(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_1672322039(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0a_func_1672322039(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0a_func_1580461227(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_445942777(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_0a_func_2026923093(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0a_func_1300299205(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] >>= _activatnvar_confusing_chararray_1[0x7];

}

void _activation_check_proc_0a_func_1052326979(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_LLUUID_0.mData[0xd];

	/* inline */ _activation_check_proc_0a_func_1239369083();
	_activation_check_proc_0a_func_1300299205(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_1);
	_activation_check_proc_0a_func_739977508(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_5, _activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0a_func_739977508(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_1.mData[0xd];

	_activatnvar_confusing_chararray_e[0x1] += _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_0a_func_1676299211(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_LLUUID_c.mData[0x4];

}

void _activation_check_proc_0a_func_1248264140(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1823718517(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] ^= _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_0a_func_427806324(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_0a_func_633415067(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_0a_func_659301960(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_2 *= _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_0a_func_486340902(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_0a_func_787458576(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 <<= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_0a_func_1909432315(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_f.mData[0x5] *= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_0a_func_1649297159(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_2076832674(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("3197f3f4-71a6-e224-6144-e5d7aa86b5e5");

}

void _activation_check_proc_0a_func_204433226(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[7] = _activatnvar_fscked.mData[7];
}

void _activation_check_proc_0a_func_866631345(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("4b4cf4db-020e-0b85-7fed-12f0933d1b88");

	_activation_check_proc_0a_func_204433226(_activatnvar_lace, _activatnvar_fscked);
	/* inline */ _activation_check_proc_0a_func_588772995(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_0a_func_145166963(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

	_activation_check_proc_0a_func_1990633335(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_0a_func_1206048735(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0a_func_1990633335(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0a_func_1869822781(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_e)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x2] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0a_func_377414807(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_e, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_U8_0++;

	/* inline */ _activation_check_proc_0a_func_332594318(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_0a_func_225761524(_activatnvar_confusing_char_e, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_0a_func_2097252126(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_281290669(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_0a_func_611153626(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_0a_func_281290669(_activatnvar_pos, _activatnvar_so, _activatnvar_t1, _activatnvar_t0);
	/* inline */ _activation_check_proc_0a_func_1047490198(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_0a_func_1450490140(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 += 0x6;

}

void _activation_check_proc_0a_func_1375873793(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_t1 >>= _activatnvar_t0;
	/* inline */ _activation_check_proc_0a_func_1929189289(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_0a_func_1450490140(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_0a_func_565367076(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_d.mData[0x2] ^= _activatnvar_confusing_LLUUID_6.mData[0x1];

}

void _activation_check_proc_0a_func_1259579818(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] = _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_0a_func_1710602755(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_a <<= _activatnvar_confusing_chararray_9[0xe];

	_activation_check_proc_0a_func_383291462(_activatnvar_confusing_char_4, _activatnvar_confusing_char_3);
}

void _activation_check_proc_0a_func_383291462(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_char_4;

}

void _activation_check_proc_0a_func_1041502492(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_0a_func_900636811(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 += _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_0a_func_1860878331(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_0a_func_754230654(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_0a_func_1049061965(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	
	/* inline */ _activation_check_proc_0a_func_2007362535(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0a_func_1182150182(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a |= 0x4;

	_activation_check_proc_0a_func_749295771(_activatnvar_secret, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_749295771(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1345093905(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0a_func_306646259(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f |= 0x5;

}

void _activation_check_proc_0a_func_883664255(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_0a_func_577634766(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_63702355(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] ^= _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_0a_func_830957665(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_2043995912(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_0a_func_749891963(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_t0, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_0a_func_1511714767(_activatnvar_combined_id, _activatnvar_t0);
	_activation_check_proc_0a_func_2043995912(_activatnvar_confusing_char_0, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_0a_func_1348571857(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 *= _activatnvar_confusing_char_1;

}

void _activation_check_proc_0a_func_82292613(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1500332070()
{
	
}

void _activation_check_proc_0a_func_939611473(bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_0a_func_290552754(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_b ^= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_0a_func_1304851148(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("410d4575-8233-8c84-b7ce-b5febae42c9d");

	_activation_check_proc_0a_func_290552754(_activatnvar_confusing_bool_5, _activatnvar_confusing_U8_a, _activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_0a_func_229842094(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_0a_func_1069909467(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_4, _activatnvar_doaccount);
}

void _activation_check_proc_0a_func_254693535(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_0a_func_15955007(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 >>= _activatnvar_confusing_chararray_2[0x7];

}

void _activation_check_proc_0a_func_185554777(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_4.mData[0x3] += _activatnvar_so.mData[0x9];

}

void _activation_check_proc_0a_func_1875619907(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1698195375(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_0a_func_179825247(_activatnvar_confusing_bool_4, _activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0a_func_179825247(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xa] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_0a_func_1725593617(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_0a_func_1344081623(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0a_func_1344081623(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_0a_func_1496564670(bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x2] += _activatnvar_ser_digest[0x6];

	_activation_check_proc_0a_func_1601654075(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_0a_func_1601654075(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x6] == 0x3) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0a_func_857973354(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("770aba47-0a3e-a71a-8a56-8d565fc5f80b");

}

void _activation_check_proc_0a_func_1830070003(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 ^= _activatnvar_confusing_char_f;

	_activation_check_proc_0a_func_802762406(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0a_func_802762406(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_0a_func_1180301698(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_7[0xf] |= _activatnvar_confusing_LLUUID_4.mData[0xb];

}

void _activation_check_proc_0a_func_1288617351(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_b &= 0x4;

	_activation_check_proc_0a_func_1180301698(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0a_func_1630531726(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xe] != 0x4) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_0a_func_87249152(_activatnvar_pos);
}

void _activation_check_proc_0a_func_990891982(unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_int_6 ^= 0x3;

	_activation_check_proc_0a_func_1271440801(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_0a_func_1271440801(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_2.mData[0x5] ^= _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_0a_func_1216560772(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_f = _activatnvar_code.mData[0x3];

}

void _activation_check_proc_0a_func_2033468769(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_0a_func_824933985(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_645176101(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_name_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_524053513(_activatnvar_name_digest, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_0a_func_524053513(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x3] *= _activatnvar_name_digest[0xf];

}

void _activation_check_proc_0a_func_2074102083(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_5;

	_activation_check_proc_0a_func_1941182515(_activatnvar_doaccount, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_0a_func_1941182515(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_doaccount;

}

void _activation_check_proc_0a_func_1720550405(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] >>= _activatnvar_confusing_chararray_0[0xb];

	/* inline */ _activation_check_proc_0a_func_598525352(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_d);
}

void _activation_check_proc_0a_func_1744377110(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("89477043-08cf-e12a-4c68-e9455f26e149");

}

void _activation_check_proc_0a_func_1346545912(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x1] != 0x0) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_0a_func_285272430(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0a_func_258016232(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x7] *= _activatnvar_confusing_LLUUID_6.mData[0x9];

}

void _activation_check_proc_0a_func_1412138728(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_generic_bool_0;

	_activation_check_proc_0a_func_258016232(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_0a_func_785301215(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_U8_5, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_0a_func_1178180103(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
}

void _activation_check_proc_0a_func_1713044370(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0a_func_1327164651(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_0a_func_540680587(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_int_9++;

	/* inline */ _activation_check_proc_0a_func_1527061941(_activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_0a_func_1612412119(_activatnvar_lace, _activatnvar_fscked);
	_activation_check_proc_0a_func_467635290(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_4, _activatnvar_so, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_a, _activatnvar_section1);
	/* inline */ _activation_check_proc_0a_func_2111071920(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0a_func_467635290(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_section1)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x3] != _activatnvar_confusing_char_4) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_a;

	_activatnvar_so = LLUUID(_activatnvar_section1);
}

void _activation_check_proc_0a_func_445590786(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_c[0xe] &= _activatnvar_section1.mData[0x5];

}

void _activation_check_proc_0a_func_213594558(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_890299462(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_890299462(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1779233978(char& _activatnvar_confusing_char_9, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_5, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0a_func_353175563(_activatnvar_generic_bool_0, _activatnvar_confusing_char_9, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_0a_func_1977923135(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_char_0;

	_activation_check_proc_0a_func_941500021(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0a_func_941500021(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0a_func_1107563825(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_0a_func_878619049(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] += _activatnvar_confusing_chararray_8[0x8];

	/* inline */ _activation_check_proc_0a_func_1673653107(_activatnvar_confusing_bool_2, _activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0a_func_1094999005(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_0a_func_1451373409(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_0a_func_1342378369(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0a_func_1917426879(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_2034663778(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0a_func_2034663778(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1348601343(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] >>= _activatnvar_confusing_chararray_4[0xc];

}

void _activation_check_proc_0a_func_1519245712(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_0a_func_1633018421(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0a_func_1659973339(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_0a_func_1924754401(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_6[0xd] += _activatnvar_confusing_chararray_d[0xa];

}

void _activation_check_proc_0a_func_2143969173(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_0a_func_472254913(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_f.mData[0x3] += _activatnvar_confusing_chararray_6[0x5];

	_activation_check_proc_0a_func_2143969173(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0a_func_880593619(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_char_8 <<= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_0a_func_444164074()
{
	
}

void _activation_check_proc_0a_func_1501667429(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0a_func_1350887941(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_0a_func_1417843125(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_8)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_8 <<= 0x1;

	_activatnvar_confusing_LLUUID_9.mData[0x0] *= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_0a_func_237286313(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_0a_func_1605451426(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_0a_func_620381211(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0a_func_1887222143(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_0a_func_987994562(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x2] != _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_0a_func_1412972542(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_section1;

}

void _activation_check_proc_0a_func_1383176123(LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
}

void _activation_check_proc_0a_func_77401421(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_8;

	_activatnvar_confusing_bool_b &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_0a_func_716583374(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_5)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_622712703(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_0a_func_1416935821(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0a_func_622712703(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_0a_func_971982993(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_4 <<= _activatnvar_confusing_char_d;

}

void _activation_check_proc_0a_func_2120322910(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_876062925(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_2[0x3] *= _activatnvar_confusing_LLUUID_1.mData[0xf];

	/* inline */ _activation_check_proc_0a_func_1884161432(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0a_func_847272566(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_0a_func_576787112(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0a_func_1656625690(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xd] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_b = false;

	/* inline */ _activation_check_proc_0a_func_1825730489(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0a_func_972527186(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b *= _activatnvar_confusing_char_6;

}

void _activation_check_proc_0a_func_1295256606(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x2] *= _activatnvar_confusing_chararray_0[0xe];

}

void _activation_check_proc_0a_func_432278516(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0a_func_1424030295(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_LLUUID_5.mData[0x6];

	_activatnvar_confusing_char_1 |= 0xe;

	_activation_check_proc_0a_func_1520362140(_activatnvar_confusing_char_b, _activatnvar_confusing_char_1);
}

void _activation_check_proc_0a_func_1520362140(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_char_b;

}

void _activation_check_proc_0a_func_2120776242(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_0a_func_1173531887(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 *= _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_0a_func_360272351(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_0, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_2073413329(_activatnvar_confusing_bool_7);
	_activation_check_proc_0a_func_1173531887(_activatnvar_confusing_chararray_b, _activatnvar_confusing_char_0);
}

void _activation_check_proc_0a_func_2073413329(bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_0a_func_446182600(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x2] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0a_func_1535903883(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("f0a5834a-a2f4-8bd0-7cbb-8f62eb3c292b");

}

void _activation_check_proc_0a_func_34268182(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_LLUUID_3.mData[0x5];

}

void _activation_check_proc_0a_func_704713024(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0a_func_1457445297(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	/* inline */ _activation_check_proc_0a_func_718817586(_activatnvar_confusing_int_f);
}

void _activation_check_proc_0a_func_10438736(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("03a70993-161d-c182-e12e-1ffbdbaecb62");

	_activation_check_proc_0a_func_295087528(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_8, _activatnvar_confusing_char_5);
	/* inline */ _activation_check_proc_0a_func_1914985456(_activatnvar_confusing_LLUUID_0, _activatnvar_section2);
	_activation_check_proc_0a_func_1065109657(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_f);
	_activation_check_proc_0a_func_15859379(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_0a_func_1065109657(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_0a_func_15859379(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0a_func_295087528(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x4] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_0a_func_506925768(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_pos)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x2] == _activatnvar_pos) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_0a_func_803466406(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_0a_func_1468444857(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] += _activatnvar_confusing_chararray_7[0x2];

}

void _activation_check_proc_0a_func_248365996(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_0a_func_1962638651(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_430752494(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_430752494(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1231454258(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

	/* inline */ _activation_check_proc_0a_func_567556985(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_1845919352(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_so ^= _activatnvar_section2;
}

void _activation_check_proc_0a_func_339974079(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = 0xe;

}

void _activation_check_proc_0a_func_468671699(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_b[0xd] &= _activatnvar_confusing_chararray_e[0xd];

}

void _activation_check_proc_0a_func_515130716(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0a_func_1510969668(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xe] != 0x6) _activatnvar_confusing_bool_4 = true;

	/* inline */ _activation_check_proc_0a_func_127043095();
}

void _activation_check_proc_0a_func_1405128390(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_0a_func_1597692535(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xc] >>= _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_0a_func_2075703875(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_d.mData[0x5] &= _activatnvar_name_digest[0xd];

	_activation_check_proc_0a_func_1597692535(_activatnvar_section1, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_0a_func_1662749581(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_660892071(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x7] >>= _activatnvar_confusing_LLUUID_2.mData[0x6];

}

void _activation_check_proc_0a_func_460033855(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_0a_func_2112641893(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0a_func_1194076659(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_0a_func_677735750(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0a_func_305836659(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_712333476(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_0a_func_1104185295(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_790684376(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_b.mData[0x7] >>= _activatnvar_confusing_chararray_9[0x8];

	_activation_check_proc_0a_func_1104185295(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked);
}

void _activation_check_proc_0a_func_1271077209(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0a_func_236102753(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0a_func_567218659(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0a_func_1114082151(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_95639661(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_3 <<= _activatnvar_t1;

}

void _activation_check_proc_0a_func_1522433112(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_0a_func_1255239559(U8& _activatnvar_confusing_U8_3)
{
	
	_activation_check_proc_0a_func_1522433112(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_0a_func_1960995374(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_0a_func_2096052797(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("c33696c7-9040-3902-9b1a-3aa21d79d271");

}

void _activation_check_proc_0a_func_2137840333(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_0a_func_1132236677(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_2074874181(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_5.mData[0xc] ^= _activatnvar_confusing_chararray_6[0xa];

}

void _activation_check_proc_0a_func_414509653(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x0] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_0a_func_2081622699(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xa;

}

void _activation_check_proc_0a_func_112271377(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("eaa9a7b9-8b2b-7550-9a31-7570ead44023");

}

void _activation_check_proc_0a_func_1943495758(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_d)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_112271377(_activatnvar_confusing_LLUUID_1);
	_activation_check_proc_0a_func_2081622699(_activatnvar_confusing_int_d);
}

void _activation_check_proc_0a_func_408181051(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_c, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_char_c = _activatnvar_confusing_U8_4;

	/* inline */ _activation_check_proc_0a_func_26885667(_activatnvar_confusing_int_9);
	_activation_check_proc_0a_func_1951235986();
	/* inline */ _activation_check_proc_0a_func_2101348550(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_0a_func_987487259(_activatnvar_confusing_LLUUID_7, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_0a_func_114897766();
}

void _activation_check_proc_0a_func_1951235986()
{
	
}

void _activation_check_proc_0a_func_667966421(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] &= _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_0a_func_1965354654(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_f.mData[0x8] <<= _activatnvar_confusing_LLUUID_9.mData[0x1];

}

void _activation_check_proc_0a_func_602307321(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_lace;

	_activation_check_proc_0a_func_1965354654(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0a_func_1189045371(int& _activatnvar_confusing_int_1, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_0a_func_869878432(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0a_func_438268119(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_0a_func_1642735849(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0a_func_1778819518(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] <<= _activatnvar_confusing_chararray_b[0x2];

}

void _activation_check_proc_0a_func_486013478(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section2)
{
	
	/* inline */ _activation_check_proc_0a_func_641377547(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
	_activation_check_proc_0a_func_412045453(_activatnvar_confusing_LLUUID_1, _activatnvar_secret);
}

void _activation_check_proc_0a_func_412045453(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_secret;

}

void _activation_check_proc_0a_func_1097170324(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_0a_func_1487906361(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0a_func_1309375496(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_2 ^= _activatnvar_confusing_char_0;

	/* inline */ _activation_check_proc_0a_func_1399937725(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_0a_func_1071044859(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_0a_func_478951144(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x0] == 0x7) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0a_func_680303083(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("2802b2ca-a362-95c3-f704-d920f3af4471");

}

void _activation_check_proc_0a_func_1983841464(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_0a_func_1140070619(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("b357164d-b9c7-37f2-de8c-020efa6746d7");

}

void _activation_check_proc_0a_func_1354586807(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_0a_func_1037094169(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0a_func_745803540(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_int_c++;

	_activation_check_proc_0a_func_259493986(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_0a_func_1085854735(_activatnvar_confusing_char_d);
}

void _activation_check_proc_0a_func_259493986(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_0a_func_1735224599(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_931950240(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_0a_func_1805563264(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_4[0x2] &= _activatnvar_confusing_LLUUID_a.mData[0xe];

}

void _activation_check_proc_0a_func_120826716(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_1687861823(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_1805563264(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0a_func_1687861823(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1936293628(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 26; _activatnvar_strbuf_0[0] ^= 43; _activatnvar_strbuf_0[1] = 120; _activatnvar_strbuf_0[1] ^= 72; _activatnvar_strbuf_0[2] = 61; _activatnvar_strbuf_0[2] ^= 14; _activatnvar_strbuf_0[3] = 26; _activatnvar_strbuf_0[3] ^= 46; _activatnvar_strbuf_0[4] = 103; _activatnvar_strbuf_0[4] ^= 5; _activatnvar_strbuf_0[5] = 64; _activatnvar_strbuf_0[5] ^= 38; _activatnvar_strbuf_0[6] = 91; _activatnvar_strbuf_0[6] ^= 61; _activatnvar_strbuf_0[7] = 76; _activatnvar_strbuf_0[7] ^= 122; _activatnvar_strbuf_0[8] = 69; _activatnvar_strbuf_0[8] ^= 104; _activatnvar_strbuf_0[9] = 47; _activatnvar_strbuf_0[9] ^= 77; _activatnvar_strbuf_0[10] = 47; _activatnvar_strbuf_0[10] ^= 24; _activatnvar_strbuf_0[11] = 98; _activatnvar_strbuf_0[11] ^= 86; _activatnvar_strbuf_0[12] = 95; _activatnvar_strbuf_0[12] ^= 111; _activatnvar_strbuf_0[13] = 68; _activatnvar_strbuf_0[13] ^= 105; _activatnvar_strbuf_0[14] = 54; _activatnvar_strbuf_0[14] ^= 6; _activatnvar_strbuf_0[15] = 14; _activatnvar_strbuf_0[15] ^= 104; _activatnvar_strbuf_0[16] = 5; _activatnvar_strbuf_0[16] ^= 103; _activatnvar_strbuf_0[17] = 42; _activatnvar_strbuf_0[17] ^= 78; _activatnvar_strbuf_0[18] = 112; _activatnvar_strbuf_0[18] ^= 93; _activatnvar_strbuf_0[19] = 103; _activatnvar_strbuf_0[19] ^= 86; _activatnvar_strbuf_0[20] = 56; _activatnvar_strbuf_0[20] ^= 91; _activatnvar_strbuf_0[21] = 78; _activatnvar_strbuf_0[21] ^= 44; _activatnvar_strbuf_0[22] = 25; _activatnvar_strbuf_0[22] ^= 127; _activatnvar_strbuf_0[23] = 56; _activatnvar_strbuf_0[23] ^= 21; _activatnvar_strbuf_0[24] = 125; _activatnvar_strbuf_0[24] ^= 73; _activatnvar_strbuf_0[25] = 17; _activatnvar_strbuf_0[25] ^= 39; _activatnvar_strbuf_0[26] = 104; _activatnvar_strbuf_0[26] ^= 93; _activatnvar_strbuf_0[27] = 30; _activatnvar_strbuf_0[27] ^= 125; _activatnvar_strbuf_0[28] = 62; _activatnvar_strbuf_0[28] ^= 14; _activatnvar_strbuf_0[29] = 107; _activatnvar_strbuf_0[29] ^= 90; _activatnvar_strbuf_0[30] = 55; _activatnvar_strbuf_0[30] ^= 83; _activatnvar_strbuf_0[31] = 84; _activatnvar_strbuf_0[31] ^= 102; _activatnvar_strbuf_0[32] = 46; _activatnvar_strbuf_0[32] ^= 31; _activatnvar_strbuf_0[33] = 113; _activatnvar_strbuf_0[33] ^= 19; _activatnvar_strbuf_0[34] = 62; _activatnvar_strbuf_0[34] ^= 90; _activatnvar_strbuf_0[35] = 99; _activatnvar_strbuf_0[35] ^= 86; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0a_func_1626279206(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_pos, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("ae591028-bf06-1b59-a0bd-e92750ada0b3");

	/* inline */ _activation_check_proc_0a_func_683295845(_activatnvar_pos);
	_activation_check_proc_0a_func_570256994(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_d, _activatnvar_code, _activatnvar_confusing_U8_a, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_0a_func_570256994(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xf] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_1 = true;

	_activatnvar_confusing_LLUUID_d.mData[0x5] |= _activatnvar_code.mData[0xb];

}

void _activation_check_proc_0a_func_1319659282(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1148758166(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_0a_func_1589166478(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_0a_func_969118840(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_confusing_chararray_b[0x9];

	_activation_check_proc_0a_func_2116419659(_activatnvar_combined_id, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_0a_func_2116419659(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x9] = _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_0a_func_1554925483(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_0a_func_1245326692(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_5[0xb] += _activatnvar_confusing_chararray_3[0x3];

}

void _activation_check_proc_0a_func_670287859(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_section2.mData[0x2];

}

void _activation_check_proc_0a_func_1685355836(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_0a_func_1841448793(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] ^= _activatnvar_confusing_LLUUID_c.mData[0x6];

}

void _activation_check_proc_0a_func_68234553(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0a_func_1360643415()
{
	
}

void _activation_check_proc_0a_func_1479504108(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_3 ^= 0x3;

}

void _activation_check_proc_0a_func_1826538400(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activation_check_proc_0a_func_817776874(_activatnvar_confusing_chararray_c, _activatnvar_section1);
}

void _activation_check_proc_0a_func_817776874(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_c[0xa] >>= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_0a_func_1396988595(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x3] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_0a_func_1166902544(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_0a_func_1396988595(_activatnvar_confusing_bool_d, _activatnvar_confusing_char_a, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0a_func_1388094191(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_b, U8& _activatnvar_t0)
{
	_activatnvar_confusing_int_b &= 0xff;

	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_0a_func_2082655433(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_0a_func_1693607189(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_9 |= _activatnvar_confusing_int_1;

}

void _activation_check_proc_0a_func_1820230653(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0a_func_1962903335(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_b)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xc] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0a_func_1679068225(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_c[0xf] *= _activatnvar_confusing_chararray_6[0x5];

	/* inline */ _activation_check_proc_0a_func_812508542(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_0a_func_1426253033(_activatnvar_confusing_chararray_c, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_0a_func_723439836(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_a;

	/* inline */ _activation_check_proc_0a_func_1670468993(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0a_func_924173105(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("6945092f-2b71-8c88-5715-e3e63d421ade");

	_activatnvar_confusing_U8_0 &= 0x3;

}

void _activation_check_proc_0a_func_1815592244(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x7] >>= _activatnvar_confusing_LLUUID_3.mData[0x1];

}

void _activation_check_proc_0a_func_1291982121(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] ^= _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_0a_func_382086666(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xc] == _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0a_func_2113721541(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("0e9c9483-dad1-554a-c494-a972b9cb35dd");

	_activation_check_proc_0a_func_382086666(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_U8_6, _activatnvar_confusing_bool_4, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_0a_func_1178700583(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0a_func_477014597(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_iterator++;
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0a_func_392473256(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_0a_func_256600914()
{
	
}

void _activation_check_proc_0a_func_707565941(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0a_func_522729738(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_8;

	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0a_func_493507573(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 |= 0x8;

}

void _activation_check_proc_0a_func_416152482(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("09fee680-7240-7c17-4860-689f30ac55ee");

}

void _activation_check_proc_0a_func_771301000(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("a3c4a175-10a7-8626-69e8-95eed4a9a1a7");

}

void _activation_check_proc_0a_func_1773128982(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x4] ^= _activatnvar_code.mData[0x6];

	_activation_check_proc_0a_func_771301000(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0a_func_1373625683(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_9 = 0xf;

}

void _activation_check_proc_0a_func_1819728248(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= 0x1;

}

void _activation_check_proc_0a_func_654810352(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_0a_func_1949798095(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xa] >>= _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_0a_func_83068251(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_U8_d;

}

void _activation_check_proc_0a_func_1757167259(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_U8_c;

}

void _activation_check_proc_0a_func_717791056(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0a_func_1302349124(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0a_func_192481577(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0a_func_1112604899(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0x4;

}

void _activation_check_proc_0a_func_133825347(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] <<= _activatnvar_secret.mData[0xc];

}

void _activation_check_proc_0a_func_928820109(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x5] = _activatnvar_confusing_chararray_6[0x3];

	/* inline */ _activation_check_proc_0a_func_2104471292(_activatnvar_confusing_chararray_d, _activatnvar_confusing_char_4);
	_activation_check_proc_0a_func_183994165(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0a_func_183994165(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_0a_func_2094584458(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
	_activatnvar_confusing_chararray_b[0x5] <<= _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_0a_func_1677765710(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0a_func_535625754(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_0a_func_1418112997(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_chararray_f[0x3];

}

void _activation_check_proc_0a_func_895938139(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_0a_func_355446418(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_2050689984();
}

void _activation_check_proc_0a_func_2050689984()
{
	
}

void _activation_check_proc_0a_func_557151054(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0a_func_1006969474(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0a_func_655613955(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_2071159019(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] = _activatnvar_confusing_LLUUID_8.mData[0x0];

}

void _activation_check_proc_0a_func_1217774090(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_0a_func_868206286(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0a_func_1002630741(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_0a_func_843777295(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_0a_func_679467416(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0a_func_271804764(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x7] *= _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_0a_func_510477396(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_626559659(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_t0, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_1 ^= _activatnvar_t0;

}

void _activation_check_proc_0a_func_231105104(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0a_func_750143454(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_combined_id;

}

void _activation_check_proc_0a_func_597135405(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

	/* inline */ _activation_check_proc_0a_func_1314858094(_activatnvar_fscked, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_0a_func_89741833(LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_e.mData[0x6] <<= _activatnvar_confusing_LLUUID_1.mData[0x4];

	/* inline */ _activation_check_proc_0a_func_695615000(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_105253763(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
	_activation_check_proc_0a_func_2084800844(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_0a_func_842592105(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_105253763(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_2084800844(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_7[0x8] |= _activatnvar_confusing_LLUUID_0.mData[0xd];

}

void _activation_check_proc_0a_func_1464495574(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0a_func_1569666455(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0a_func_1948284745(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_4 <<= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_0a_func_1900547018(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 *= 0x8;

}

void _activation_check_proc_0a_func_421515522()
{
	
}

void _activation_check_proc_0a_func_156494457(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_f.mData[0x8] >>= _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_0a_func_1117680382(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_2[0xc];

	/* inline */ _activation_check_proc_0a_func_298126630(_activatnvar_confusing_char_4, _activatnvar_lace);
}

void _activation_check_proc_0a_func_1375264044(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_pos)
{
	
	_activation_check_proc_0a_func_1087406033(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_0a_func_1570352196(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_0a_func_1087406033(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_5.mData[0x4] |= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_0a_func_853534032(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 += 0x4;

}

void _activation_check_proc_0a_func_1284292694(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_0a_func_1030573407(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_LLUUID_3.mData[0x3];

}

void _activation_check_proc_0a_func_2094918806(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0a_func_862370643(_activatnvar_confusing_char_9, _activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_0a_func_1284292694(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_0a_func_1847676992(_activatnvar_confusing_int_6);
	_activation_check_proc_0a_func_1030573407(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_0a_func_853534032(_activatnvar_confusing_int_6);
}

void _activation_check_proc_0a_func_862370643(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_9 = 0x9;

	_activatnvar_confusing_char_f |= _activatnvar_confusing_LLUUID_9.mData[0xd];

}

void _activation_check_proc_0a_func_645986338(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1189148591(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_0a_func_738824525(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0a_func_1160331657(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_0a_func_1845820661(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0a_func_1160331657(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_6);
	/* inline */ _activation_check_proc_0a_func_917186207(_activatnvar_t0);
}

void _activation_check_proc_0a_func_1093950166(char& _activatnvar_confusing_char_c, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_4 >>= _activatnvar_confusing_char_c;

}

void _activation_check_proc_0a_func_1610985568(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_c.mData[0x2];

}

void _activation_check_proc_0a_func_2005498446(U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_0a_func_525721032(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
	_activatnvar_pos &= 7;
	_activation_check_proc_0a_func_1503805443(_activatnvar_pos);
	_activation_check_proc_0a_func_1969856997(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_0a_func_1969856997(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_0a_func_1503805443(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0a_func_323793595(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x8] ^= _activatnvar_code.mData[0x8];

}

void _activation_check_proc_0a_func_598524051(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_b;

	/* inline */ _activation_check_proc_0a_func_312025516(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0a_func_759968967(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_int_1++;

	/* inline */ _activation_check_proc_0a_func_1101109795(_activatnvar_confusing_U8_e, _activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_U8_5, _activatnvar_t0);
	/* inline */ _activation_check_proc_0a_func_1507583983(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_0a_func_436002747(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("e6b229bb-23de-faf1-85d6-a22582e4bb94");

}

void _activation_check_proc_0a_func_2012930715(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
	_activatnvar_confusing_chararray_8[0x1] *= _activatnvar_confusing_LLUUID_e.mData[0x2];

}

void _activation_check_proc_0a_func_1977300914(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("a5d80032-88e1-1993-2a7f-170805aa1563");

}

void _activation_check_proc_0a_func_1114634605()
{
	
}

void _activation_check_proc_0a_func_875635504(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_b.mData[0xa] = _activatnvar_ser_digest[0xb];

	_activation_check_proc_0a_func_1114634605();
	_activation_check_proc_0a_func_1977300914(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0a_func_1813377753(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_5)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_5 >>= 0x2;

}

void _activation_check_proc_0a_func_791741663(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xe] |= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_0a_func_83120568(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0a_func_657095887(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] |= _activatnvar_confusing_chararray_f[0xa];

	_activation_check_proc_0a_func_458316589(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_c);
	_activation_check_proc_0a_func_83120568(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0a_func_458316589(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_c)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_a = false;

	_activatnvar_confusing_LLUUID_d.mData[0x9] >>= _activatnvar_confusing_chararray_c[0x7];

}

void _activation_check_proc_0a_func_2007833722(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_lace;

}

void _activation_check_proc_0a_func_1218604668(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

	/* inline */ _activation_check_proc_0a_func_1111323927(_activatnvar_confusing_U8_9);
}

void _activation_check_proc_0a_func_1671532716(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_0a_func_1658980185(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_0a_func_161811768(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0a_func_2019557548(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_4[0xd] &= _activatnvar_confusing_chararray_3[0x2];

	_activatnvar_confusing_char_6 &= _activatnvar_combined_id.mData[0xa];

	_activation_check_proc_0a_func_161811768(_activatnvar_t0);
	/* inline */ _activation_check_proc_0a_func_1202195919(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_f, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_0a_func_201778589(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_combined_id;

}

void _activation_check_proc_0a_func_264934793(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0a_func_1766989043()
{
	
}

void _activation_check_proc_0a_func_1836612846(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_2)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_2 += _activatnvar_confusing_char_e;

}

void _activation_check_proc_0a_func_369690255(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_chararray_8[0xc] *= _activatnvar_confusing_LLUUID_5.mData[0xf];

	_activation_check_proc_0a_func_1836612846(_activatnvar_confusing_bool_3, _activatnvar_confusing_char_e, _activatnvar_confusing_char_2);
}

void _activation_check_proc_0a_func_2064677256(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("aab56c76-e744-49e9-5b1c-c6d6f4a20a8c");

	_activation_check_proc_0a_func_1992655653(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_1992655653(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_72832079(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_2077788826(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_2077788826(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_0a_func_1958969483(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_0a_func_1611500382(bool& _activatnvar_confusing_bool_7, LLMD5& _activatnvar_smd5, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] *= _activatnvar_secret.mData[0x8];

	/* inline */ _activation_check_proc_0a_func_2085638504(_activatnvar_smd5);
	_activation_check_proc_0a_func_35335672(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_0a_func_35335672(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0a_func_910013758(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] <<= _activatnvar_confusing_chararray_3[0x1];

	/* inline */ _activation_check_proc_0a_func_1024577656(_activatnvar_confusing_int_8);
}

void _activation_check_proc_0a_func_860255809(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0a_func_2130279608(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_0[0x9] >>= _activatnvar_confusing_LLUUID_4.mData[0x9];

}

void _activation_check_proc_0a_func_2108049832(LLUUID& _activatnvar_so, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, char& _activatnvar_confusing_char_3, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_2, U8& _activatnvar_pos)
{
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_0a_func_87506717(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
	_activation_check_proc_0a_func_2005048801(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_0a_func_550294611(_activatnvar_confusing_char_2, _activatnvar_confusing_char_3, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_0a_func_2005048801(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_0a_func_550294611(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_3 <<= _activatnvar_confusing_char_2;

}

void _activation_check_proc_0a_func_1714144572(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_a)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_550642651(_activatnvar_confusing_int_a);
}

void _activation_check_proc_0a_func_550642651(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a |= _activatnvar_confusing_int_a;

}

void _activation_check_proc_0a_func_1757820748()
{
	
}

void _activation_check_proc_0a_func_1701458559(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_8.mData[0xc] <<= _activatnvar_name_digest[0x5];

}

void _activation_check_proc_0a_func_160879576(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0a_func_1099216597(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_d = 0x8;

}

void _activation_check_proc_0a_func_1734701733(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_1++;

	_activation_check_proc_0a_func_698325662(_activatnvar_fscked, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0a_func_698325662(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_fscked;

}

void _activation_check_proc_0a_func_219979430(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_LLUUID_9.mData[0xa];

}

void _activation_check_proc_0a_func_1450296401(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("544e9f8f-8056-1a1a-849e-67a8119b683e");

}

void _activation_check_proc_0a_func_1017510287(LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_0a_func_2025444762(_activatnvar_so, _activatnvar_section2);
}

void _activation_check_proc_0a_func_2025444762(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_0a_func_244968235(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0a_func_1453938445(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= _activatnvar_confusing_int_0;

}

void _activation_check_proc_0a_func_1003454108()
{
	
}

void _activation_check_proc_0a_func_1413333042(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_0a_func_1739399616(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_a);
	_activation_check_proc_0a_func_1886600437(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0a_func_1886600437(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xc] &= _activatnvar_confusing_LLUUID_9.mData[0x7];

}

void _activation_check_proc_0a_func_2038243469(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_658622041(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_0a_func_1928353437(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_e >>= _activatnvar_confusing_int_a;

}

void _activation_check_proc_0a_func_516231495(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_1 |= _activatnvar_confusing_char_2;

	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_13563660(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_4[0x8] <<= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_0a_func_257681825(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e <<= _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_0a_func_403388271(char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_13563660(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_c);
	_activation_check_proc_0a_func_1679915531(_activatnvar_confusing_int_b);
	_activation_check_proc_0a_func_257681825(_activatnvar_confusing_chararray_5, _activatnvar_confusing_char_e);
	_activation_check_proc_0a_func_516231495(_activatnvar_confusing_char_2, _activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_confusing_char_1, _activatnvar_section2, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_0a_func_306954487(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_0a_func_225325257(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_4, _activatnvar_confusing_char_a);
}

void _activation_check_proc_0a_func_1679915531(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_0a_func_693429454(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_0a_func_1622646983()
{
	
}

void _activation_check_proc_0a_func_1747657733(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1756246687(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_392469393(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_0a_func_1756246687(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_1747657733(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_0a_func_1864583398(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_1403214785(_activatnvar_strbuf_0);
	_activation_check_proc_0a_func_1559710662(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_0a_func_1559710662(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0a_func_1403214785(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 76; _activatnvar_strbuf_0[0] ^= 125; _activatnvar_strbuf_0[1] = 78; _activatnvar_strbuf_0[1] ^= 126; _activatnvar_strbuf_0[2] = 91; _activatnvar_strbuf_0[2] ^= 104; _activatnvar_strbuf_0[3] = 24; _activatnvar_strbuf_0[3] ^= 44; _activatnvar_strbuf_0[4] = 54; _activatnvar_strbuf_0[4] ^= 84; _activatnvar_strbuf_0[5] = 58; _activatnvar_strbuf_0[5] ^= 92; _activatnvar_strbuf_0[6] = 11; _activatnvar_strbuf_0[6] ^= 109; _activatnvar_strbuf_0[7] = 50; _activatnvar_strbuf_0[7] ^= 4; _activatnvar_strbuf_0[8] = 71; _activatnvar_strbuf_0[8] ^= 106; _activatnvar_strbuf_0[9] = 91; _activatnvar_strbuf_0[9] ^= 57; _activatnvar_strbuf_0[10] = 6; _activatnvar_strbuf_0[10] ^= 49; _activatnvar_strbuf_0[11] = 30; _activatnvar_strbuf_0[11] ^= 42; _activatnvar_strbuf_0[12] = 98; _activatnvar_strbuf_0[12] ^= 82; _activatnvar_strbuf_0[13] = 56; _activatnvar_strbuf_0[13] ^= 21; _activatnvar_strbuf_0[14] = 24; _activatnvar_strbuf_0[14] ^= 40; _activatnvar_strbuf_0[15] = 39; _activatnvar_strbuf_0[15] ^= 65; _activatnvar_strbuf_0[16] = 68; _activatnvar_strbuf_0[16] ^= 38; _activatnvar_strbuf_0[17] = 63; _activatnvar_strbuf_0[17] ^= 91; _activatnvar_strbuf_0[18] = 35; _activatnvar_strbuf_0[18] ^= 14; _activatnvar_strbuf_0[19] = 23; _activatnvar_strbuf_0[19] ^= 38; _activatnvar_strbuf_0[20] = 101; _activatnvar_strbuf_0[20] ^= 6; _activatnvar_strbuf_0[21] = 16; _activatnvar_strbuf_0[21] ^= 114; _activatnvar_strbuf_0[22] = 112; _activatnvar_strbuf_0[22] ^= 22; _activatnvar_strbuf_0[23] = 2; _activatnvar_strbuf_0[23] ^= 47; _activatnvar_strbuf_0[24] = 118; _activatnvar_strbuf_0[24] ^= 66; _activatnvar_strbuf_0[25] = 125; _activatnvar_strbuf_0[25] ^= 75; _activatnvar_strbuf_0[26] = 31; _activatnvar_strbuf_0[26] ^= 42; _activatnvar_strbuf_0[27] = 21; _activatnvar_strbuf_0[27] ^= 118; _activatnvar_strbuf_0[28] = 63; _activatnvar_strbuf_0[28] ^= 15; _activatnvar_strbuf_0[29] = 110; _activatnvar_strbuf_0[29] ^= 95; _activatnvar_strbuf_0[30] = 113; _activatnvar_strbuf_0[30] ^= 21; _activatnvar_strbuf_0[31] = 44; _activatnvar_strbuf_0[31] ^= 30; _activatnvar_strbuf_0[32] = 42; _activatnvar_strbuf_0[32] ^= 27; _activatnvar_strbuf_0[33] = 111; _activatnvar_strbuf_0[33] ^= 13; _activatnvar_strbuf_0[34] = 36; _activatnvar_strbuf_0[34] ^= 64; _activatnvar_strbuf_0[35] = 117; _activatnvar_strbuf_0[35] ^= 64; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0a_func_2054920918(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_LLUUID_2.mData[0x1];

}

void _activation_check_proc_0a_func_788577509(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0a_func_1499814599(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_0a_func_1233300893(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_1499814599(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_0a_func_839476438(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_0a_func_885158617(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_t0 &= 7;
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_0a_func_1533081277(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_U8_b, _activatnvar_confusing_bool_a);
	_activation_check_proc_0a_func_839476438(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_0a_func_1533081277(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xd] != _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0a_func_263170301(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= _activatnvar_confusing_int_7;

}

void _activation_check_proc_0a_func_1896376515(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_0a_func_1782692769(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_section2, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_char_e <<= 0xc;

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0a_func_89907007(_activatnvar_confusing_int_2, _activatnvar_confusing_int_b);
	_activation_check_proc_0a_func_1896376515(_activatnvar_confusing_bool_6, _activatnvar_generic_bool_0);
}

void _activation_check_proc_0a_func_1453138376(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("62720435-e2d6-2636-1d94-881971f1049e");

}

void _activation_check_proc_0a_func_2020921076(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_section2;

}

void _activation_check_proc_0a_func_1680672301(LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_3, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_d)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_2 = false;

	/* inline */ _activation_check_proc_0a_func_1228582477(_activatnvar_confusing_int_c, _activatnvar_confusing_int_3);
	_activation_check_proc_0a_func_335113646(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_2);
	_activation_check_proc_0a_func_1453138376(_activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_0a_func_897166997(_activatnvar_confusing_int_3);
	_activation_check_proc_0a_func_2020921076(_activatnvar_section2, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_0a_func_1662192730(_activatnvar_confusing_U8_e, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0a_func_1662192730(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_c.mData[0x9];

}

void _activation_check_proc_0a_func_335113646(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x4] |= _activatnvar_confusing_chararray_d[0x7];

}

void _activation_check_proc_0a_func_745035837(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_t0, int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_0a_func_1852733294(_activatnvar_t0, _activatnvar_so);
	_activation_check_proc_0a_func_2081194837(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0a_func_2081194837(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0a_func_1852733294(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_0a_func_715259250(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_850602669(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_0a_func_935426844(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0a_func_1089678502(LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f = _activatnvar_section1.mData[0x8];

}

void _activation_check_proc_0a_func_320201112(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("ff646e21-f56b-3b71-d1f7-e0f6f9b04ca5");

}

void _activation_check_proc_0a_func_1964428263(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_320337915(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_387767775(_activatnvar_confusing_chararray_6, _activatnvar_code);
	/* inline */ _activation_check_proc_0a_func_2045999768(_activatnvar_confusing_U8_7);
	/* inline */ _activation_check_proc_0a_func_2113061200(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_1964428263(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
	_activation_check_proc_0a_func_918065053(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_0a_func_1989849833(_activatnvar_confusing_U8_f, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_0a_func_1343007952(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_0a_func_918065053(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_0a_func_387767775(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_6[0xa] += _activatnvar_code.mData[0xb];

}

void _activation_check_proc_0a_func_1988436724(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xa] <<= _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_0a_func_2000762046(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_d >>= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_0a_func_137756299(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_f[0x0] &= _activatnvar_confusing_LLUUID_5.mData[0x7];

}

void _activation_check_proc_0a_func_833683527(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0a_func_170028781(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x4] ^= _activatnvar_confusing_chararray_5[0x4];

	/* inline */ _activation_check_proc_0a_func_21450246(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_0a_func_1406893127(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("d100d785-e378-95e3-8117-dea940ce6ce0");

	/* inline */ _activation_check_proc_0a_func_1487889337(_activatnvar_confusing_char_4);
}

void _activation_check_proc_0a_func_1090587708(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0a_func_424818224(U8& _activatnvar_pos, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 <<= _activatnvar_pos;

}

void _activation_check_proc_0a_func_1549040219(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x9] &= _activatnvar_secret.mData[0xc];

}

void _activation_check_proc_0a_func_862973387(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1991799112(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_0a_func_1528200257(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= 0xc;

}

void _activation_check_proc_0a_func_935176441(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("fdf148fd-5bdf-2d34-3b21-1dfc322666e0");

}

void _activation_check_proc_0a_func_1550202532(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xd] <<= _activatnvar_confusing_chararray_c[0x1];

}

void _activation_check_proc_0a_func_1937452811(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0a_func_306560873(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0a_func_814277206()
{
	
}

void _activation_check_proc_0a_func_366056426(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0a_func_1658565669(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xf] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_3 = true;

	/* inline */ _activation_check_proc_0a_func_769019422(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_0a_func_596003915(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_0a_func_1364789055(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("205eeada-5f76-cd57-3dda-c972c5582abf");

	_activatnvar_confusing_LLUUID_7.mData[0x6] *= _activatnvar_confusing_LLUUID_6.mData[0x5];

}

void _activation_check_proc_0a_func_637047236(U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_7 &= 0x1;

	_activation_check_proc_0a_func_131715934(_activatnvar_confusing_chararray_3, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_0a_func_131715934(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_chararray_3[0x2];

}

void _activation_check_proc_0a_func_1765016769(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_char_d <<= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_0a_func_1018873216(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_so;

}

void _activation_check_proc_0a_func_645184694(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0a_func_450110384(int& _activatnvar_confusing_int_0, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
	_activation_check_proc_0a_func_645184694(_activatnvar_confusing_int_0);
}

void _activation_check_proc_0a_func_1188148824(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x7] &= _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_0a_func_1195574722(int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_e >>= _activatnvar_confusing_int_2;

	_activation_check_proc_0a_func_1137697092(_activatnvar_confusing_chararray_7, _activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_0a_func_20375169(_activatnvar_confusing_int_b, _activatnvar_confusing_int_a);
}

void _activation_check_proc_0a_func_1137697092(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a *= _activatnvar_confusing_chararray_7[0x5];

}

void _activation_check_proc_0a_func_988361755(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0a_func_1292972410(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0a_func_127850964(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_0a_func_1032906310(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_b, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
	_activation_check_proc_0a_func_21690656(_activatnvar_confusing_int_b);
}

void _activation_check_proc_0a_func_21690656(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0a_func_1975299312(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_0a_func_1068567399(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_0a_func_385154807(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xd] != _activatnvar_t1) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_0a_func_2045982445(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0a_func_1268797695(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_3)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_2045982445(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	_activation_check_proc_0a_func_834156479(_activatnvar_confusing_char_3, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_0a_func_834156479(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_3 |= 0x0;

}

void _activation_check_proc_0a_func_932497449(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_4 <<= _activatnvar_confusing_int_9;

}

void _activation_check_proc_0a_func_1532063604(char& _activatnvar_confusing_char_2, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_9)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_2 += _activatnvar_confusing_char_f;

	_activation_check_proc_0a_func_932497449(_activatnvar_confusing_int_4, _activatnvar_confusing_int_9);
}

void _activation_check_proc_0a_func_1323678234(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0a_func_340492188(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_0a_func_1010670920(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("21585c5e-e8e5-d426-ca9c-a9e00ff66135");

	_activation_check_proc_0a_func_340492188(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0a_func_1379599897(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_0a_func_1225948205(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] <<= _activatnvar_confusing_chararray_a[0x4];

}

void _activation_check_proc_0a_func_387925028(int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x9] = _activatnvar_confusing_LLUUID_e.mData[0x1];

	/* inline */ _activation_check_proc_0a_func_1712142304(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0a_func_1597451342(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_e[0x5] <<= _activatnvar_confusing_chararray_f[0x0];

	_activation_check_proc_0a_func_2145713945(_activatnvar_t0);
	/* inline */ _activation_check_proc_0a_func_592094213(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0a_func_2145713945(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_0a_func_450046745(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_char_e;

}

void _activation_check_proc_0a_func_1825397697(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0a_func_1860056645(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_9 = _activatnvar_generic_bool_1;

}

void _activation_check_proc_0a_func_1849084622(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_3[0x5] |= _activatnvar_fscked.mData[0x7];

}

void _activation_check_proc_0a_func_1586731711(int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_0a_func_1849084622(_activatnvar_confusing_chararray_3, _activatnvar_fscked);
}

void _activation_check_proc_0a_func_1836229313(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0a_func_1579092029(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_0a_func_216756085(_activatnvar_generic_bool_0);
}

void _activation_check_proc_0a_func_1927348499(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] ^= _activatnvar_confusing_chararray_5[0x4];

}

void _activation_check_proc_0a_func_560094331(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_b, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_b &= 0x9;

	_activation_check_proc_0a_func_1927348499(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_0a_func_1328083257(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x4] &= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_0a_func_1291883780(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_0a_func_1956998053(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0a_func_210480033(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1570725033(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_0a_func_218967038()
{
	
}

void _activation_check_proc_0a_func_1425844843(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 = _activatnvar_confusing_int_e;

}

void _activation_check_proc_0a_func_737032998(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x0] >>= _activatnvar_confusing_LLUUID_b.mData[0xd];

	_activation_check_proc_0a_func_218967038();
	_activation_check_proc_0a_func_1425844843(_activatnvar_confusing_int_e, _activatnvar_confusing_int_8);
	_activation_check_proc_0a_func_1570725033(_activatnvar_confusing_char_f, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_0a_func_632703406(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_210480033(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_871677107(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_9 <<= _activatnvar_confusing_chararray_8[0x9];

}

void _activation_check_proc_0a_func_2056431087(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_0a_func_602068082(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_0a_func_827025834(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0a_func_610281286(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_0 |= 0x7;

}

void _activation_check_proc_0a_func_831615511(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_0a_func_510050036(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	
	/* inline */ _activation_check_proc_0a_func_2041073148(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_0a_func_2113257072(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1824213926(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1270823886(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0a_func_1687825390(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_d[0xa] ^= _activatnvar_confusing_chararray_e[0x4];

}

void _activation_check_proc_0a_func_1745195867(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_0a_func_1885291884(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_code;

}

void _activation_check_proc_0a_func_1274022056(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_0a_func_92733006(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_e[0x4] ^= _activatnvar_confusing_LLUUID_0.mData[0xe];

	/* inline */ _activation_check_proc_0a_func_1312159908(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0a_func_470617736(int& _activatnvar_confusing_int_e, char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_0a_func_1756008008(_activatnvar_confusing_int_e);
	_activation_check_proc_0a_func_1629521080(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_0a_func_2021126958(_activatnvar_generic_bool_0);
}

void _activation_check_proc_0a_func_1629521080(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0a_func_1756008008(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0a_func_330106682(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e <<= _activatnvar_confusing_chararray_9[0xb];

}

void _activation_check_proc_0a_func_469889770(LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_0a_func_1856082502(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0a_func_1856082502(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] &= _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_0a_func_1380248035(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_0a_func_391656266(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_0a_func_264508717(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("63fe7eb5-ab40-866f-da86-390b33fc0c12");

}

void _activation_check_proc_0a_func_1693187075(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_3[0x4] += _activatnvar_confusing_chararray_f[0x2];

	/* inline */ _activation_check_proc_0a_func_1341128946(_activatnvar_confusing_U8_0, _activatnvar_confusing_U8_6, _activatnvar_confusing_bool_2);
	_activation_check_proc_0a_func_1956347090(_activatnvar_confusing_chararray_b, _activatnvar_confusing_U8_0);
	_activation_check_proc_0a_func_264508717(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_0a_func_391656266(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_0a_func_1956347090(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_0a_func_1585202870(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_f[0xf] ^= _activatnvar_confusing_chararray_7[0xa];

}

void _activation_check_proc_0a_func_631623361(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xf] &= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_0a_func_424202826(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_0a_func_1951119655(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0a_func_1079861691(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x5] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0a_func_235992461(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("f8f35ba0-295e-f6e8-ac19-c2236b94d01e");

	/* inline */ _activation_check_proc_0a_func_1153368669(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_0a_func_1698251886(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_0a_func_70432695(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_0a_func_1692189115(_activatnvar_t0);
	/* inline */ _activation_check_proc_0a_func_104481878();
}

void _activation_check_proc_0a_func_1698251886(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] |= _activatnvar_confusing_LLUUID_5.mData[0x1];

}

void _activation_check_proc_0a_func_1692189115(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0a_func_70432695(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xd] = _activatnvar_confusing_chararray_0[0xe];

}

void _activation_check_proc_0a_func_760097671(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] <<= _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_0a_func_227085766(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0a_func_1341555108(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_0a_func_1898008262(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_generic_bool_0;

	if(_activatnvar_confusing_LLUUID_8.mData[0x2] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_0a_func_1183452052(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_0a_func_1183452052(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_75293601(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x1] *= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_0a_func_139473054(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xa] ^= _activatnvar_name_digest[0x9];

}

void _activation_check_proc_0a_func_54171981(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_0a_func_894793388(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] |= _activatnvar_fscked.mData[0xb];

}

void _activation_check_proc_0a_func_1039332412(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] >>= _activatnvar_confusing_chararray_4[0x8];

	_activation_check_proc_0a_func_1057876324(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
	_activation_check_proc_0a_func_894793388(_activatnvar_fscked, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0a_func_1057876324(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1078091940(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= 0x3;

}

void _activation_check_proc_0a_func_1327973891(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0a_func_1194187632(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1940834846(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 *= 0x6;

	/* inline */ _activation_check_proc_0a_func_359019193();
}

void _activation_check_proc_0a_func_565147685(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0a_func_658470426(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xa] <<= _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_0a_func_764363487(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_LLUUID_e.mData[0x7];

}

void _activation_check_proc_0a_func_185225341(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_0a_func_1923397150(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_0a_func_2139676963(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_348893053(_activatnvar_confusing_int_3);
}

void _activation_check_proc_0a_func_348893053(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_0a_func_2081397603(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_0a_func_19808172(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0a_func_1399642635(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0a_func_1770782176(int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] >>= _activatnvar_confusing_chararray_c[0x1];

	_activation_check_proc_0a_func_1939539075(_activatnvar_confusing_int_a);
}

void _activation_check_proc_0a_func_1939539075(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_0a_func_403174564(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_0a_func_612351271(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_chararray_4[0x3] ^= _activatnvar_code.mData[0x4];

	_activation_check_proc_0a_func_403174564(_activatnvar_confusing_char_9);
}

void _activation_check_proc_0a_func_1621842163(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_LLUUID_a.mData[0xc];

}

void _activation_check_proc_0a_func_167053732(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_0a_func_933423938(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xe] == 0x4) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_0a_func_1603425750(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("376349f8-b9c4-9eb3-3ee4-319bb0748982");

	_activation_check_proc_0a_func_933423938(_activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0a_func_1019712494(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1629057847(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_0a_func_1633606870(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_0a_func_2017006026(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0a_func_374200697()
{
	
}

void _activation_check_proc_0a_func_1188859000(U8& _activatnvar_confusing_U8_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_9 = _activatnvar_secret.mData[0x4];

	/* inline */ _activation_check_proc_0a_func_22482456(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_374200697();
}

void _activation_check_proc_0a_func_1558051985(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_fscked;

}

void _activation_check_proc_0a_func_887263293(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_227262399(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = 0x1;

}

void _activation_check_proc_0a_func_583857826(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_5[0xf] >>= _activatnvar_section2.mData[0xf];

}

void _activation_check_proc_0a_func_178068978(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_2.mData[0x5] = _activatnvar_confusing_LLUUID_4.mData[0x6];

	/* inline */ _activation_check_proc_0a_func_163998327(_activatnvar_confusing_chararray_5, _activatnvar_mac_digest);
}

void _activation_check_proc_0a_func_300620695(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_0a_func_2010709038(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_LLUUID_3.mData[0x3];

}

void _activation_check_proc_0a_func_640576470(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1440111482(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 |= _activatnvar_so.mData[0xb];

	/* inline */ _activation_check_proc_0a_func_1993411803(_activatnvar_confusing_int_2);
}

void _activation_check_proc_0a_func_1179188192(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_b.mData[0x7] += _activatnvar_confusing_chararray_3[0x5];

}

void _activation_check_proc_0a_func_2063847478(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x6] != _activatnvar_confusing_char_4) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_0a_func_716484959(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_115183137(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_7[0xa] *= _activatnvar_confusing_LLUUID_d.mData[0x9];

}

void _activation_check_proc_0a_func_369120463(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_t0)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_generic_bool_1;

	_activation_check_proc_0a_func_1198001673(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_0a_func_1314933678(_activatnvar_t0);
}

void _activation_check_proc_0a_func_1198001673(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_0a_func_321899922(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_0a_func_1176643822(char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_char_6;

}

void _activation_check_proc_0a_func_675987943(char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_8[0x4];

	_activation_check_proc_0a_func_1176643822(_activatnvar_confusing_char_c, _activatnvar_confusing_char_6);
}

void _activation_check_proc_0a_func_249181389(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0a_func_70877352(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_0a_func_549219989(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_0a_func_59078932(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0a_func_2002412071(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	
	_activation_check_proc_0a_func_1109899439(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0a_func_1109899439(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("3334d1bb-4899-ac8b-6d08-605198e9a263");

}

void _activation_check_proc_0a_func_1481228654(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_code;

}

void _activation_check_proc_0a_func_20554941(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x7] *= _activatnvar_confusing_chararray_e[0xb];

}

void _activation_check_proc_0a_func_1169277579(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_299732472(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0a_func_647200233(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("2bbcad04-af9f-e01a-e413-4c0fe9861827");

	_activation_check_proc_0a_func_299732472(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_8);
	_activation_check_proc_0a_func_1574609961(_activatnvar_confusing_U8_5);
	/* inline */ _activation_check_proc_0a_func_1512532506(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0a_func_1574609961(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_0a_func_1704130708(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_0a_func_1036018306(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_e = _activatnvar_so.mData[0x6];

}

void _activation_check_proc_0a_func_1999643837(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("7377aab0-9c2d-775a-f66c-f0340f0e25de");

	_activation_check_proc_0a_func_1704130708(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_2);
	_activation_check_proc_0a_func_1036018306(_activatnvar_confusing_char_e, _activatnvar_so);
}

void _activation_check_proc_0a_func_546365990(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_9 >>= _activatnvar_confusing_int_d;

}

void _activation_check_proc_0a_func_995557058(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_0a_func_546365990(_activatnvar_confusing_int_9, _activatnvar_confusing_int_d);
}

void _activation_check_proc_0a_func_405330317(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_6;

	_activation_check_proc_0a_func_1557650115(_activatnvar_confusing_char_8, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_0a_func_1557650115(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x7] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_0a_func_190843678(BOOL& _activatnvar_success, DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
}

void _activation_check_proc_0a_func_210876606(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_459230254(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_d.mData[0xf];

}

void _activation_check_proc_0a_func_758992123()
{
	
}

void _activation_check_proc_0a_func_2117320229(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0a_func_2081498366(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_0a_func_414948375(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x8] != 0x3) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0a_func_821548282(U8& _activatnvar_confusing_U8_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_1263746850(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_0a_func_414948375(_activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_4);
	_activation_check_proc_0a_func_2081498366(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_0a_func_1263746850(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1454064832(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_377385267(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0a_func_1597036216(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_155362769(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_1597036216(_activatnvar_generic_iterator);
	_activation_check_proc_0a_func_377385267(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_0a_func_245443124(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0a_func_189291074(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
	_activation_check_proc_0a_func_1456533447(_activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_0a_func_648495092(_activatnvar_confusing_chararray_4, _activatnvar_pos, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0a_func_1456533447(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("3d58a01c-3b09-fc67-e2c9-277e5d23b9f7");

}

void _activation_check_proc_0a_func_1948464660(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0a_func_446685263(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_combined_id, bool& _activatnvar_generic_bool_0)
{
	
	/* inline */ _activation_check_proc_0a_func_1675684534(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_a, _activatnvar_confusing_bool_3, _activatnvar_combined_id, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_0a_func_955141140(_activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_0a_func_1343780438(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_0a_func_1791485124(_activatnvar_confusing_bool_6, _activatnvar_generic_bool_0);
	_activation_check_proc_0a_func_210148001(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_0a_func_514731686(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_0a_func_210148001(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0a_func_955141140(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_1)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xe] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0a_func_1791485124(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_0a_func_1537835343(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] = _activatnvar_confusing_LLUUID_f.mData[0xe];

}

void _activation_check_proc_0a_func_1267049861(unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_e[0x4] = _activatnvar_so.mData[0x3];

	_activation_check_proc_0a_func_1612235027(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_0a_func_1612235027(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xf] != 0x1) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_0a_func_1377327076(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_b &= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_0a_func_175069456(int& _activatnvar_confusing_int_0, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activation_check_proc_0a_func_1377327076(_activatnvar_confusing_char_b, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_0a_func_243817963(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_a, U8& _activatnvar_pos)
{
	_activatnvar_confusing_int_a++;

	/* inline */ _activation_check_proc_0a_func_1098060985(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_0a_func_1313020746(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1825095515(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0a_func_1987518485(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_225145935(char& _activatnvar_confusing_char_e, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_e *= _activatnvar_pos;

}

void _activation_check_proc_0a_func_594810790(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_e, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
	_activation_check_proc_0a_func_225145935(_activatnvar_confusing_char_e, _activatnvar_pos, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0a_func_55490349(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] <<= _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_0a_func_2008438425(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_f &= _activatnvar_confusing_int_a;

}

void _activation_check_proc_0a_func_1858498107(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_0a_func_479975063(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_0a_func_766862572(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_c, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_c |= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_0a_func_60334518(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_chararray_c[0xc];

}

void _activation_check_proc_0a_func_645349264(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_0a_func_1400532740(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_0a_func_1574346646(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("7bdf4128-be3d-d8e9-0e48-276cef107b36");

	/* inline */ _activation_check_proc_0a_func_1475348066(_activatnvar_confusing_int_2);
}

void _activation_check_proc_0a_func_149411619(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] += _activatnvar_name_digest[0x7];

}

void _activation_check_proc_0a_func_1447869005(unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_U8_e;

	_activation_check_proc_0a_func_149411619(_activatnvar_name_digest, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_0a_func_411785364(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_d[0x5] = _activatnvar_confusing_LLUUID_7.mData[0xd];

}

void _activation_check_proc_0a_func_699858774(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_9.mData[0x1];

}

void _activation_check_proc_0a_func_998942665(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_7;

	_activation_check_proc_0a_func_699858774(_activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0a_func_966001856(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xe] += _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_0a_func_1152241381(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_0a_func_1662091234(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_7.mData[0x4];

}

void _activation_check_proc_0a_func_1138542249(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_c)
{
	
	_activation_check_proc_0a_func_1662091234(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_c);
}

void _activation_check_proc_0a_func_688950826(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_0a_func_254637499(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_LLUUID_1.mData[0x6];

}

void _activation_check_proc_0a_func_468110589(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_0a_func_714474079(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0x5;

}

void _activation_check_proc_0a_func_1747391732(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1023949226(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] *= _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_0a_func_1603809405(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_920521106(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_0a_func_422644484(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_0a_func_877071302(LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_422644484(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_0a_func_1181266161()
{
	
}

void _activation_check_proc_0a_func_332824355(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_5 = true;

	/* inline */ _activation_check_proc_0a_func_1931739346(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_0a_func_1181266161();
}

void _activation_check_proc_0a_func_359102743(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0a_func_1732460865(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_a)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_a = 0x5;

}

void _activation_check_proc_0a_func_392582628(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

	/* inline */ _activation_check_proc_0a_func_1200497122(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_code);
}

void _activation_check_proc_0a_func_854620219()
{
	
}

void _activation_check_proc_0a_func_1748938383(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d >>= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0a_func_1604891011(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_3[0x8] <<= _activatnvar_confusing_LLUUID_e.mData[0x8];

}

void _activation_check_proc_0a_func_652226183(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_a >>= _activatnvar_confusing_char_f;

	_activation_check_proc_0a_func_1604891011(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0a_func_844298598(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_4 = 0x6;

}

void _activation_check_proc_0a_func_1621907365(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 |= 0x2;

}

void _activation_check_proc_0a_func_36272400(int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_1)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	/* inline */ _activation_check_proc_0a_func_2112820929(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_0a_func_374312664(_activatnvar_confusing_bool_e, _activatnvar_generic_bool_1);
	_activation_check_proc_0a_func_461553891(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0a_func_461553891(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xa] != 0xb) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0a_func_2010075276(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("f3784cb8-7abb-223f-e8b7-ccfa9c75d785");

	/* inline */ _activation_check_proc_0a_func_586997730(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_1, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_0a_func_652949885(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0a_func_1798848508(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_LLUUID_1.mData[0xd] &= _activatnvar_mac_digest[0xa];

	/* inline */ _activation_check_proc_0a_func_512934348(_activatnvar_confusing_int_b);
}

void _activation_check_proc_0a_func_676711359(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_0a_func_510061916(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_0a_func_1164408123(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1322834604(int& _activatnvar_confusing_int_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0a_func_751099327(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_0a_func_1497651449(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_1443086138(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_896059203(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_b |= _activatnvar_confusing_chararray_9[0xe];

}

void _activation_check_proc_0a_func_1141459830(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_0a_func_1148265208(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] += _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_0a_func_1097679439(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_so.mData[0x7];

}

void _activation_check_proc_0a_func_1704374206(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_so)
{
	
	_activation_check_proc_0a_func_1097679439(_activatnvar_so, _activatnvar_confusing_char_3);
}

void _activation_check_proc_0a_func_688909715(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x1] |= _activatnvar_confusing_chararray_6[0x1];

}

void _activation_check_proc_0a_func_340145565(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_chararray_d[0x1];

	/* inline */ _activation_check_proc_0a_func_2096926253(_activatnvar_t0);
}

void _activation_check_proc_0a_func_1345570573(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_b <<= _activatnvar_confusing_int_5;

}

void _activation_check_proc_0a_func_550954234(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_5, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_char_d++;

	/* inline */ _activation_check_proc_0a_func_969743841(_activatnvar_confusing_int_1);
	_activation_check_proc_0a_func_1345570573(_activatnvar_confusing_int_b, _activatnvar_confusing_int_5);
}

void _activation_check_proc_0a_func_1227185578(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_a = _activatnvar_lace.mData[0x3];

}

void _activation_check_proc_0a_func_804902595(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] |= _activatnvar_confusing_LLUUID_0.mData[0x6];

	_activation_check_proc_0a_func_1227185578(_activatnvar_confusing_U8_a, _activatnvar_lace);
	/* inline */ _activation_check_proc_0a_func_1362974178(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_0a_func_1503181373(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_0a_func_1286618377(int& _activatnvar_confusing_int_1)
{
	
	/* inline */ _activation_check_proc_0a_func_497526386(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0a_func_331580437(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_0a_func_1664569199(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_4.mData[0xe] |= _activatnvar_confusing_chararray_9[0x3];

}

void _activation_check_proc_0a_func_1958667537()
{
	
}

void _activation_check_proc_0a_func_467689438(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_f |= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_0a_func_735195044(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_so;

}

void _activation_check_proc_0a_func_865142791(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0a_func_971879001(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_0a_func_1671738476(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
	_activation_check_proc_0a_func_971879001(_activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_0a_func_1002811570(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_629988416(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_0.mData[0xd] ^= _activatnvar_lace.mData[0x3];

}

void _activation_check_proc_0a_func_15293108(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_0a_func_384379338(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_615877160()
{
	
}

void _activation_check_proc_0a_func_64781044(std::string& _activatnvar_fullname, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_0a_func_975788418(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("66b65e13-24b3-15cd-40f3-b9f4174d3292");

}

void _activation_check_proc_0a_func_202385311(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_0a_func_1050861365(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_1)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x0] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_0 = _activatnvar_generic_bool_1;

}

void _activation_check_proc_0a_func_1632192621(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_5.mData[0x3] *= _activatnvar_confusing_chararray_7[0x5];

}

void _activation_check_proc_0a_func_1970200843(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_776512280(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_474188552(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
	/* inline */ _activation_check_proc_0a_func_16819977(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0a_func_1119216898(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_b.mData[0xd] &= _activatnvar_confusing_LLUUID_7.mData[0x7];

}

void _activation_check_proc_0a_func_2004465423(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_7)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_U8_7 |= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_0a_func_1394876398(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] >>= _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_0a_func_174023701(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_b = _activatnvar_section1.mData[0x6];

	_activatnvar_confusing_LLUUID_5.mData[0x4] += _activatnvar_confusing_chararray_f[0x3];

}

void _activation_check_proc_0a_func_1792047934(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_char_0 ^= _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_0a_func_267929412(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_0a_func_1294964104(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_606165530(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1940662204(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_combined_id;

	_activation_check_proc_0a_func_606165530(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0a_func_90302239(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_f[0x8] += _activatnvar_confusing_LLUUID_b.mData[0xb];

}

void _activation_check_proc_0a_func_1288915884(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0a_func_550395475(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_8 = true;

	/* inline */ _activation_check_proc_0a_func_1870142122(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_0a_func_996073339(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_0a_func_88610778(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0a_func_1217678036(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_0a_func_874913692(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_6)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_6 = 0x5;

}

void _activation_check_proc_0a_func_1167989119(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_6, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("7b6db11f-f145-830b-32f4-b9b87d9fc64e");

	_activation_check_proc_0a_func_874913692(_activatnvar_doaccount, _activatnvar_confusing_char_6);
}

void _activation_check_proc_0a_func_1907043442(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x0] |= _activatnvar_confusing_chararray_e[0xd];

}

void _activation_check_proc_0a_func_983928303(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_787156771(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = 0xf;

}

void _activation_check_proc_0a_func_1922246752(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1502397396(char& _activatnvar_confusing_char_e, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_1;

	/* inline */ _activation_check_proc_0a_func_1119657436(_activatnvar_doaccount, _activatnvar_confusing_bool_0);
	_activation_check_proc_0a_func_1139977518(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_char_e);
}

void _activation_check_proc_0a_func_1139977518(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_0.mData[0xb];

}

void _activation_check_proc_0a_func_152282725(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_lace;

	/* inline */ _activation_check_proc_0a_func_278080704(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_1188179958(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_f[0xe] *= _activatnvar_confusing_LLUUID_4.mData[0x6];

}

void _activation_check_proc_0a_func_802528364(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0a_func_2022172779(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_0a_func_79394543(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x7] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_0a_func_2022172779(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0a_func_1899717294(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xa] = _activatnvar_confusing_LLUUID_e.mData[0x0];

}

void _activation_check_proc_0a_func_821993127(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0a_func_2145261348(LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_0a_func_661136856(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("5d0d1a9a-5f9e-7ff4-03e5-d111662d809c");

}

void _activation_check_proc_0a_func_209491875(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_0a_func_521080583(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0a_func_1299418386(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0a_func_1299418386(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1119792192(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_fscked;

}

void _activation_check_proc_0a_func_1592519357(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x3] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_5 = true;

	_activation_check_proc_0a_func_1119792192(_activatnvar_fscked, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_0a_func_1775121656(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_0a_func_660885450(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_8.mData[0xf] >>= _activatnvar_confusing_chararray_0[0x2];

}

void _activation_check_proc_0a_func_389348168(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0a_func_939884757(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("f30d4c4f-ad2c-774f-4c3c-6ff33459091d");

}

void _activation_check_proc_0a_func_437786792(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_d ^= 0x5;

	/* inline */ _activation_check_proc_0a_func_112475342(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_7);
	_activation_check_proc_0a_func_939884757(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_0a_func_922178585(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_f);
	_activation_check_proc_0a_func_1665498102(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_0a_func_882624650(_activatnvar_confusing_char_0);
}

void _activation_check_proc_0a_func_1665498102(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xd] == 0x9) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_0a_func_843180971(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_397582089(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_0a_func_1689921040(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1366026904(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_3.mData[0x7] += _activatnvar_confusing_LLUUID_d.mData[0x7];

}

void _activation_check_proc_0a_func_1604628610(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = 0x9;

}

void _activation_check_proc_0a_func_1823356366(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0a_func_230017933(char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_4.mData[0xd];

	_activation_check_proc_0a_func_1090823218(_activatnvar_confusing_char_6);
	_activation_check_proc_0a_func_1823356366(_activatnvar_confusing_int_f);
	_activation_check_proc_0a_func_1387170400(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_0a_func_1090823218(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0a_func_1387170400(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_0a_func_426605458(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_9 = _activatnvar_confusing_U8_1;

}

void _activation_check_proc_0a_func_464682181(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x0] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0a_func_1027912995(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0a_func_376940307(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
	_activation_check_proc_0a_func_1027912995(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_7);
	_activation_check_proc_0a_func_1000947037(_activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_0a_func_1000947037(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_chararray_6[0xd];

}

void _activation_check_proc_0a_func_1834270180(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_0a_func_1674179272(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0a_func_1674179272(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] &= _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_0a_func_1738491998(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_0a_func_1144246904()
{
	
}

void _activation_check_proc_0a_func_1101165553(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_0a_func_1488160242()
{
	
}

void _activation_check_proc_0a_func_666324458(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_code;

	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_0a_func_2125540920(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_0a_func_2070858458(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_0 |= 0xf;

}

void _activation_check_proc_0a_func_1865992147(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_a[0x4] *= _activatnvar_confusing_LLUUID_5.mData[0x1];

}

void _activation_check_proc_0a_func_1046735664(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0a_func_1865992147(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_0a_func_2070858458(_activatnvar_confusing_char_0, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_0a_func_24824594(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0a_func_2145391338(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1891024599(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0a_func_1605791589(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_confusing_chararray_c[0xb];

	_activation_check_proc_0a_func_2004430915(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0a_func_2004430915(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("772ee6f1-b408-5609-2b5f-c561758f911a");

}

void _activation_check_proc_0a_func_1877510043(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_b = true;

	/* inline */ _activation_check_proc_0a_func_1109040163(_activatnvar_confusing_chararray_a, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_0a_func_130012297(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_3)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_3 ^= _activatnvar_confusing_char_d;

}

void _activation_check_proc_0a_func_938390374(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_3.mData[0x7] >>= _activatnvar_confusing_chararray_a[0x7];

}

void _activation_check_proc_0a_func_1753950363(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 <<= 0xf;

}

void _activation_check_proc_0a_func_1472310811()
{
	
}

void _activation_check_proc_0a_func_50630525(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_4 <<= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0a_func_1570914708(char& _activatnvar_confusing_char_7, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_4, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_LLUUID_d.mData[0xd];

	/* inline */ _activation_check_proc_0a_func_570169712(_activatnvar_confusing_U8_a, _activatnvar_confusing_bool_0);
	_activation_check_proc_0a_func_1865900002(_activatnvar_confusing_int_1, _activatnvar_confusing_int_b);
	_activation_check_proc_0a_func_50630525(_activatnvar_confusing_char_4, _activatnvar_confusing_char_7, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_0a_func_1865900002(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_1 <<= _activatnvar_confusing_int_b;

}

void _activation_check_proc_0a_func_567316177(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_chararray_8[0xd];

}

void _activation_check_proc_0a_func_216067362(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_9;

	_activation_check_proc_0a_func_567316177(_activatnvar_confusing_U8_4, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_0a_func_1793835036(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xf] <<= _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_0a_func_1235642270(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1649966907(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1848242074(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0a_func_543528402(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_char_0;

}

void _activation_check_proc_0a_func_232263150(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_0a_func_1807694112(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	
	_activatnvar_confusing_chararray_1[0xf] |= _activatnvar_confusing_LLUUID_8.mData[0xe];

}

void _activation_check_proc_0a_func_385259111(int& _activatnvar_confusing_int_3, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0a_func_1490159187(_activatnvar_confusing_int_3);
}

void _activation_check_proc_0a_func_1490159187(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0x3;

}

void _activation_check_proc_0a_func_1578762596(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_7, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 = _activatnvar_generic_iterator;

	/* inline */ _activation_check_proc_0a_func_192272573(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_7, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_0a_func_1974820285(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_0a_func_271836656(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_6)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_b &= _activatnvar_confusing_char_6;

}

void _activation_check_proc_0a_func_1741738966(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_0, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_f = false;

	_activation_check_proc_0a_func_730708478(_activatnvar_confusing_char_7, _activatnvar_confusing_char_0, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_0a_func_730708478(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_7 += _activatnvar_confusing_char_0;

}

void _activation_check_proc_0a_func_1071881706(bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_0a_func_2057517398(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_2 ^= _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_0a_func_855539346(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] += _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_0a_func_1032237622(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0a_func_1901642600(U8& _activatnvar_pos, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_1, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_0a_func_825960623(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_0a_func_1383694386(_activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_0a_func_825960623(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_0a_func_2035782385(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] ^= _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_0a_func_1906113149(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0a_func_817796127(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_2 += _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_0a_func_1644664540(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xe] == _activatnvar_confusing_char_d) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_0a_func_1813721440(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_947052440(bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_2 = true;

	_activation_check_proc_0a_func_1496342317(_activatnvar_confusing_int_e);
}

void _activation_check_proc_0a_func_1496342317(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xd;

}

void _activation_check_proc_0a_func_595630145(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_0a_func_1878337667(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_669172825(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_2 = _activatnvar_confusing_U8_2;

}

void _activation_check_proc_0a_func_501292279(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_0a_func_642340973(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0a_func_501292279(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_0a_func_1623791536(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_0a_func_777746491(bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_chararray_0[0x0] *= _activatnvar_confusing_LLUUID_4.mData[0x2];

	_activation_check_proc_0a_func_1489097835(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_0a_func_1489097835(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0a_func_1787943879(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x4] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_0a_func_1868417204(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0a_func_763446915(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_char_4;

}

void _activation_check_proc_0a_func_772336665(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("a55b5c57-6b6f-422c-8247-a91ef5a668c6");

}

void _activation_check_proc_0a_func_981504045(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_0a_func_1080493856(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_3[0xd] += _activatnvar_confusing_LLUUID_7.mData[0xb];

}

void _activation_check_proc_0a_func_787663990(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0a_func_1030846758()
{
	
}

void _activation_check_proc_0a_func_1010799168()
{
	
}

void _activation_check_proc_0a_func_1692032243(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_534821188(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_fscked, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_0a_func_256592886(_activatnvar_confusing_LLUUID_2, _activatnvar_fscked, _activatnvar_confusing_chararray_2);
	/* inline */ _activation_check_proc_0a_func_1600765287(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_doaccount);
	_activation_check_proc_0a_func_1692032243(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_256592886(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("f623d062-7268-7625-766a-02e0b14195fe");

	_activatnvar_confusing_chararray_2[0xf] += _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_0a_func_274528165(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 = _activatnvar_confusing_int_a;

}

void _activation_check_proc_0a_func_1607006444(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_0a_func_2041135233(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("46c7cb4f-f974-0774-d4be-4714c5bdea73");

}

void _activation_check_proc_0a_func_1327896154(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0a_func_558431504(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_115580717(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_1807757579(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_int_c ^= _activatnvar_generic_iterator;

	/* inline */ _activation_check_proc_0a_func_1008865332(_activatnvar_section2, _activatnvar_confusing_chararray_c);
	_activation_check_proc_0a_func_115580717(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_0a_func_1989352814(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_0a_func_1688146367(int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("3a30d33f-5fcd-c1ec-05b2-c28067c9b468");

	_activation_check_proc_0a_func_72638574(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_c);
	_activation_check_proc_0a_func_1989352814(_activatnvar_confusing_int_6);
}

void _activation_check_proc_0a_func_72638574(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0a_func_582811432(LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 |= _activatnvar_secret.mData[0xf];

	
}

void _activation_check_proc_0a_func_981938573(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x5] += _activatnvar_code.mData[0xd];

}

void _activation_check_proc_0a_func_1499553647(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
	/* inline */ _activation_check_proc_0a_func_1220527240(_activatnvar_pos);
	/* inline */ _activation_check_proc_0a_func_271191426(_activatnvar_confusing_U8_8, _activatnvar_confusing_bool_f, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_0a_func_1213664064(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] = _activatnvar_confusing_LLUUID_8.mData[0x7];

	_activation_check_proc_0a_func_835604181(_activatnvar_generic_iterator);
}

void _activation_check_proc_0a_func_835604181(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_860952241(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0a_func_646352685(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1211960118(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0a_func_142193769(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_3.mData[0x4] ^= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_0a_func_42123801(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0a_func_1440715499(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	/* inline */ _activation_check_proc_0a_func_314689419(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0a_func_851914457(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_e);
	_activation_check_proc_0a_func_42123801(_activatnvar_doaccount, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_0a_func_845910639(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_0a_func_2000770219(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_0a_func_1609992022(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_0a_func_1260258840(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 *= 0x5;

}

void _activation_check_proc_0a_func_185792543(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0a_func_586794393(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_0a_func_2083496280()
{
	
}

void _activation_check_proc_0a_func_1364658061(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_7 |= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0a_func_1240419013(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f >>= 0x0;

	_activation_check_proc_0a_func_2083496280();
	_activation_check_proc_0a_func_1364658061(_activatnvar_confusing_U8_8, _activatnvar_confusing_bool_3, _activatnvar_confusing_U8_7);
	_activation_check_proc_0a_func_185792543(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_4);
	_activation_check_proc_0a_func_586794393(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_0a_func_1147321818(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_2131737262(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 ^= _activatnvar_confusing_int_5;

}

void _activation_check_proc_0a_func_1240363881(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_0a_func_996310021(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_c, LLMD5*& _activatnvar_mmd5, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
	/* inline */ _activation_check_proc_0a_func_1527447502(_activatnvar_confusing_bool_6, _activatnvar_confusing_U8_3, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_1);
	_activation_check_proc_0a_func_2131737262(_activatnvar_confusing_int_5, _activatnvar_confusing_int_6);
	_activation_check_proc_0a_func_1240363881(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0a_func_636819058(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_chararray_e[0x9] ^= _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_0a_func_1768523335(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_e)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_e |= 0xe;

}

void _activation_check_proc_0a_func_2060886675(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_0 = _activatnvar_code.mData[0x3];

}

void _activation_check_proc_0a_func_1072702031(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_0)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_0 &= 0x7;

}

void _activation_check_proc_0a_func_998174142(int& _activatnvar_generic_iterator)
{
	
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_2027788024(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0a_func_1433816886(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_0a_func_1331971334(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0a_func_851133915(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_f;

	_activation_check_proc_0a_func_1642306530(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_0a_func_1007680131(_activatnvar_confusing_U8_b, _activatnvar_section2);
}

void _activation_check_proc_0a_func_1642306530(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] = _activatnvar_confusing_chararray_f[0x1];

}

void _activation_check_proc_0a_func_394231177(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0a_func_1234575847(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 |= 0xf;

	/* inline */ _activation_check_proc_0a_func_1259024417();
}

void _activation_check_proc_0a_func_951227934(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_0a_func_555301091()
{
	
}

void _activation_check_proc_0a_func_580608683(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0x9;

}

void _activation_check_proc_0a_func_870953634(bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x8] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_3 = false;

	_activation_check_proc_0a_func_580608683(_activatnvar_confusing_int_e);
}

void _activation_check_proc_0a_func_1410799513(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x8] != _activatnvar_confusing_char_e) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_0a_func_1485124271()
{
	
}

void _activation_check_proc_0a_func_87606458(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x9] != 0x9) _activatnvar_confusing_bool_c = false;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
