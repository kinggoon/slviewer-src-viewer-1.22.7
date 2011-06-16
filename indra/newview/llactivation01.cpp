// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation01.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 01

void _activation_check_proc_01_func_1640602142(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_c[0xb] |= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_01_func_995829797(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] &= _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_01_func_91532440(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xd] >>= _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_01_func_794491834(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("72f4879e-800b-4295-6537-38e0ddbc7011");

}

void _activation_check_proc_01_func_116971581(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_b &= 0xe;

}

void _activation_check_proc_01_func_306353163(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_01_func_194556635(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_01_func_306353163(_activatnvar_t0, _activatnvar_so, _activatnvar_t1);
}

void _activation_check_proc_01_func_935446286()
{
	
}

void _activation_check_proc_01_func_1842480806(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_461814125(unsigned char* _activatnvar_mac_digest, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x8] <<= _activatnvar_ser_digest[0xe];

	/* inline */ _activation_check_proc_01_func_15873911(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_d);
	_activation_check_proc_01_func_1842480806(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	_activation_check_proc_01_func_935446286();
	/* inline */ _activation_check_proc_01_func_1747310763(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_01_func_1794296477(int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_9 = false;

	/* inline */ _activation_check_proc_01_func_1970370459(_activatnvar_confusing_int_6);
}

void _activation_check_proc_01_func_1059202620(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 <<= 0x0;

}

void _activation_check_proc_01_func_1067141537(bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_c |= 0x6;

}

void _activation_check_proc_01_func_353672562(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_chararray_4[0x8];

}

void _activation_check_proc_01_func_498858216(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xa] <<= _activatnvar_so.mData[0xe];

	_activatnvar_confusing_LLUUID_9.mData[0x7] *= _activatnvar_confusing_chararray_6[0x0];

	
}

void _activation_check_proc_01_func_1989552529(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_534383213(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1916281683(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_1[0xf] |= _activatnvar_confusing_chararray_d[0xd];

}

void _activation_check_proc_01_func_1294193441(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_2[0x5] &= _activatnvar_confusing_LLUUID_0.mData[0x5];

	/* inline */ _activation_check_proc_01_func_312266215(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code);
	/* inline */ _activation_check_proc_01_func_961565028(_activatnvar_confusing_U8_0, _activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_01_func_1721955346(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_f[0x4] >>= _activatnvar_confusing_LLUUID_0.mData[0xa];

}

void _activation_check_proc_01_func_490858763(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_01_func_168466069(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_01_func_790448105(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_204237185(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 *= _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_01_func_958926180(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_3, char& _activatnvar_feat)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_3 &= _activatnvar_feat;

}

void _activation_check_proc_01_func_439687310(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_498356954(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_01_func_291433799(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_01_func_1932156282(LLUUID& _activatnvar_fscked, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_d;

	_activation_check_proc_01_func_1362628435(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_01_func_908768435(_activatnvar_doaccount, _activatnvar_confusing_bool_5, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_01_func_1362628435(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1936833353(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_f ^= _activatnvar_confusing_U8_8;

	_activatnvar_generic_iterator++;
	_activatnvar_confusing_LLUUID_8.mData[0x7] &= _activatnvar_confusing_chararray_a[0xa];

}

void _activation_check_proc_01_func_1546132685(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1992556192(U8& _activatnvar_confusing_U8_8, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_U8_c;

	_activatnvar_confusing_int_5 += _activatnvar_confusing_int_5;

	_activation_check_proc_01_func_1546132685(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_970642612(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_6[0x7] = _activatnvar_mac_digest[0x6];

}

void _activation_check_proc_01_func_119632020(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a |= _activatnvar_lace.mData[0x2];

	_activation_check_proc_01_func_970642612(_activatnvar_confusing_chararray_6, _activatnvar_mac_digest);
	_activation_check_proc_01_func_1736105756(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1736105756(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1266581881(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_section1, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_2 |= _activatnvar_section1.mData[0x2];

	/* inline */ _activation_check_proc_01_func_2069160105(_activatnvar_t0);
}

void _activation_check_proc_01_func_322811432(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_doaccount)
{
	
	/* inline */ _activation_check_proc_01_func_1677249176(_activatnvar_code, _activatnvar_confusing_U8_9);
	/* inline */ _activation_check_proc_01_func_1013231168(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_e);
	_activation_check_proc_01_func_2085353042(_activatnvar_fscked, _activatnvar_confusing_char_7);
	_activation_check_proc_01_func_1320575174(_activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_01_func_1320575174(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_01_func_2085353042(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_01_func_1163825267(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_01_func_1476630481(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_01_func_186522772(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_d[0x2] ^= _activatnvar_name_digest[0x2];

}

void _activation_check_proc_01_func_362170159(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_8, U8& _activatnvar_pos, int& _activatnvar_confusing_int_0)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
	_activation_check_proc_01_func_1291289116(_activatnvar_confusing_int_0, _activatnvar_confusing_int_8);
}

void _activation_check_proc_01_func_1291289116(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_0 <<= _activatnvar_confusing_int_8;

}

void _activation_check_proc_01_func_456349872(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_2;

	_activatnvar_confusing_LLUUID_8.mData[0x1] &= _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_01_func_734302337(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_9[0xe] &= _activatnvar_confusing_LLUUID_3.mData[0xf];

}

void _activation_check_proc_01_func_479998133(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_secret;

	/* inline */ _activation_check_proc_01_func_992615889(_activatnvar_name_digest, _activatnvar_confusing_chararray_f);
	_activation_check_proc_01_func_1672484206(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_01_func_1672484206(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] *= _activatnvar_confusing_chararray_6[0xd];

}

void _activation_check_proc_01_func_1206135300(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_01_func_2065582721(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_01_func_1418021347()
{
	
}

void _activation_check_proc_01_func_1299949433(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_01_func_1256771570(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_01_func_519228219(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_fscked, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_01_func_133538440(_activatnvar_confusing_U8_2, _activatnvar_fscked);
}

void _activation_check_proc_01_func_133538440(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_2 = _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_01_func_168188481(LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
}

void _activation_check_proc_01_func_552374560(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_e = _activatnvar_confusing_char_4;

}

void _activation_check_proc_01_func_1595176809(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_2;

}

void _activation_check_proc_01_func_119140067(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_section1, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_01_func_75267864(_activatnvar_confusing_LLUUID_d, _activatnvar_section1, _activatnvar_confusing_bool_0, _activatnvar_confusing_bool_b, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_01_func_1338364264(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0xc] = _activatnvar_confusing_LLUUID_1.mData[0x6];

}

void _activation_check_proc_01_func_724710916(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_2++;

	_activation_check_proc_01_func_548774649(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_01_func_548774649(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_01_func_621912694(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_01_func_1028312340(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xe] += _activatnvar_ser_digest[0xa];

}

void _activation_check_proc_01_func_1049159947(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_01_func_1032137136(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_01_func_1634693782(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_2.mData[0x9] |= _activatnvar_confusing_chararray_b[0x6];

}

void _activation_check_proc_01_func_1646028412(int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_int_1++;

	/* inline */ _activation_check_proc_01_func_1421629346(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_01_func_881535755(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = 0x9;

}

void _activation_check_proc_01_func_1496568521(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_e = _activatnvar_confusing_char_a;

	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_01_func_1472688503(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_secret;

}

void _activation_check_proc_01_func_643411244(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] += _activatnvar_confusing_chararray_1[0xf];

}

void _activation_check_proc_01_func_2095146274(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("3d0990fd-dd69-3a15-6054-b82da1b71fd3");

}

void _activation_check_proc_01_func_1704543318(bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_e;

	/* inline */ _activation_check_proc_01_func_1872204706(_activatnvar_confusing_char_c, _activatnvar_generic_bool_1);
	_activation_check_proc_01_func_2095146274(_activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_01_func_2145030805(_activatnvar_confusing_U8_1, _activatnvar_confusing_bool_7, _activatnvar_confusing_char_b);
}

void _activation_check_proc_01_func_491835225(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_f.mData[0x3] += _activatnvar_name_digest[0xe];

}

void _activation_check_proc_01_func_2031705022(int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_int_e |= 0x8;

	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_01_func_333657722(int& _activatnvar_confusing_int_e)
{
	
	_activation_check_proc_01_func_848354461(_activatnvar_confusing_int_e);
}

void _activation_check_proc_01_func_848354461(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_01_func_208388240(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_d ^= _activatnvar_confusing_int_a;

}

void _activation_check_proc_01_func_1392684346(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_d)
{
	
	/* inline */ _activation_check_proc_01_func_1813147576(_activatnvar_confusing_char_5, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_01_func_1214435096(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_3);
	_activation_check_proc_01_func_208388240(_activatnvar_confusing_int_d, _activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_01_func_1020792976(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_01_func_1517417095(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] *= _activatnvar_confusing_chararray_4[0xa];

}

void _activation_check_proc_01_func_90670937(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_6[0x2] <<= _activatnvar_confusing_chararray_4[0x6];

	/* inline */ _activation_check_proc_01_func_1502493551(_activatnvar_generic_iterator);
	_activation_check_proc_01_func_1517417095(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_01_func_1341023419(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_01_func_1822026871(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= _activatnvar_confusing_int_0;

}

void _activation_check_proc_01_func_749874685(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_0, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x2] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_01_func_2101689804(_activatnvar_confusing_U8_1, _activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_01_func_359871341(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1538411874(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_01_func_431206331(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] = _activatnvar_confusing_LLUUID_c.mData[0x7];

}

void _activation_check_proc_01_func_434311344(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_01_func_1519027408(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_f >>= 0x1;

}

void _activation_check_proc_01_func_1694007128(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_01_func_1519027408(_activatnvar_confusing_U8_f, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_01_func_1358893982(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_6 >>= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_01_func_1225993447(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_01_func_1251054900(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_3)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
	/* inline */ _activation_check_proc_01_func_1006658637(_activatnvar_lace, _activatnvar_fscked);
	/* inline */ _activation_check_proc_01_func_498393041(_activatnvar_confusing_char_3, _activatnvar_confusing_bool_7, _activatnvar_confusing_char_0);
}

void _activation_check_proc_01_func_2074014585(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_d)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_d &= 0xb;

}

void _activation_check_proc_01_func_1360733926(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

	_activation_check_proc_01_func_2074014585(_activatnvar_confusing_bool_e, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_01_func_2121357969()
{
	
}

void _activation_check_proc_01_func_833696073(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_01_func_43463844(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_01_func_1831455767(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xd] &= _activatnvar_confusing_chararray_5[0xc];

	_activation_check_proc_01_func_43463844(_activatnvar_confusing_char_3);
}

void _activation_check_proc_01_func_1501397630(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_1 <<= _activatnvar_confusing_char_6;

}

void _activation_check_proc_01_func_540465837(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_5.mData[0xc] >>= _activatnvar_combined_id.mData[0x0];

}

void _activation_check_proc_01_func_310676855(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1496734797(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] ^= _activatnvar_ser_digest[0x3];

}

void _activation_check_proc_01_func_1573089370(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_01_func_129369648(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_7;

	_activation_check_proc_01_func_1573089370(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_char_2);
}

void _activation_check_proc_01_func_1968986015()
{
	
}

void _activation_check_proc_01_func_1259471199(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("caf7dde8-2923-a721-aa54-02236cdbb86a");

}

void _activation_check_proc_01_func_447213685(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_5[0xf] *= _activatnvar_confusing_LLUUID_5.mData[0xb];

}

void _activation_check_proc_01_func_1079738044(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_c++;

	/* inline */ _activation_check_proc_01_func_65427143(_activatnvar_confusing_char_a, _activatnvar_fscked, _activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_3, _activatnvar_lace);
	_activation_check_proc_01_func_447213685(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_01_func_763152426(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_01_func_1515665765(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_558427386(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 *= 0x2;

}

void _activation_check_proc_01_func_1110364678(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_so.mData[0x2];

}

void _activation_check_proc_01_func_738557314(int& _activatnvar_confusing_int_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("421e3152-c8ae-d192-6d4c-f066c72f5c02");

	_activation_check_proc_01_func_558427386(_activatnvar_confusing_int_0);
	_activation_check_proc_01_func_1110364678(_activatnvar_so, _activatnvar_confusing_char_b);
	_activation_check_proc_01_func_311182917(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
	/* inline */ _activation_check_proc_01_func_63062063(_activatnvar_generic_iterator);
	_activation_check_proc_01_func_1515665765(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_311182917(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_687395058(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x3] == 0xc) _activatnvar_confusing_bool_f = false;

	/* inline */ _activation_check_proc_01_func_1578596113(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_01_func_1741015485(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_b)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_b |= 0x7;

}

void _activation_check_proc_01_func_557206549(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_01_func_1648883610(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_int_5 *= _activatnvar_confusing_int_0;

	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_1 += _activatnvar_confusing_char_c;

}

void _activation_check_proc_01_func_2012416526(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_01_func_2004767867(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_combined_id)
{
	
	_activation_check_proc_01_func_557187073(_activatnvar_confusing_char_f, _activatnvar_confusing_U8_7);
	_activation_check_proc_01_func_1352994046(_activatnvar_confusing_chararray_4, _activatnvar_combined_id);
	_activation_check_proc_01_func_2012416526(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_01_func_1340682140(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_a);
	_activation_check_proc_01_func_51224935();
}

void _activation_check_proc_01_func_51224935()
{
	
}

void _activation_check_proc_01_func_557187073(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 >>= _activatnvar_confusing_char_f;

}

void _activation_check_proc_01_func_1352994046(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_4[0xf] &= _activatnvar_combined_id.mData[0x0];

}

void _activation_check_proc_01_func_356436826(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_2)
{
	_activatnvar_generic_iterator = 4;
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_01_func_1930510600(_activatnvar_confusing_chararray_a);
	_activation_check_proc_01_func_383189770(_activatnvar_confusing_int_c);
	_activation_check_proc_01_func_785547768(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
	/* inline */ _activation_check_proc_01_func_821399889(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_9, _activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1930510600(unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xa] |= _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_01_func_785547768(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_383189770(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_01_func_793469445(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_01_func_251096461(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_01_func_568157819(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1711550606(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("3692bf74-154c-9633-0fc1-f74f62c04517");

	/* inline */ _activation_check_proc_01_func_214418564(_activatnvar_t0);
}

void _activation_check_proc_01_func_910732642(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
	/* inline */ _activation_check_proc_01_func_697613743(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_7);
	_activation_check_proc_01_func_662796633(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_01_func_662796633(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_7.mData[0xa] >>= _activatnvar_confusing_LLUUID_e.mData[0xa];

}

void _activation_check_proc_01_func_346260183(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_01_func_1387413608(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_LLUUID_e.mData[0x8];

}

void _activation_check_proc_01_func_2028343396(int& _activatnvar_confusing_int_9, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_9 &= _activatnvar_confusing_int_7;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1206541605(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1806913252(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1193816968(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_01_func_159222117(U8& _activatnvar_t0, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
	_activation_check_proc_01_func_1193816968(_activatnvar_t0);
	_activation_check_proc_01_func_27333383(_activatnvar_confusing_LLUUID_b, _activatnvar_code);
}

void _activation_check_proc_01_func_27333383(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_b.mData[0xf] = _activatnvar_code.mData[0x9];

}

void _activation_check_proc_01_func_1936619289(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_261217142(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xa] *= _activatnvar_ser_digest[0x1];

}

void _activation_check_proc_01_func_1890989060(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_6 >>= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_01_func_1048368872(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_01_func_703380956(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1199009219(DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_01_func_1448023512(DWORD& _activatnvar_serial, DWORD& _activatnvar_gvi_flags, BOOL& _activatnvar_success)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
}

void _activation_check_proc_01_func_1278956544(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_01_func_1197167050(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x7] >>= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_01_func_562479375(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_4 = LLUUID("d321e179-d895-e42c-93ef-55ca27e2418e");

}

void _activation_check_proc_01_func_678984273(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 *= 0xe;

}

void _activation_check_proc_01_func_2033642069(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_01_func_1309479437(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_combined_id)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_01_func_2033642069(_activatnvar_confusing_int_b);
	_activation_check_proc_01_func_737886088(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_01_func_1508704152(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_01_func_737886088(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_01_func_1880164973(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1579841593(unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] ^= _activatnvar_confusing_chararray_4[0xb];

	_activation_check_proc_01_func_1880164973(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_2039196349(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_LLUUID_a.mData[0xa];

	_activation_check_proc_01_func_1013021876(_activatnvar_confusing_chararray_0, _activatnvar_lace);
}

void _activation_check_proc_01_func_1013021876(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_0[0x1] <<= _activatnvar_lace.mData[0x3];

}

void _activation_check_proc_01_func_1257711645(int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_U8_a++;

	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_e;

	_activation_check_proc_01_func_844056729(_activatnvar_confusing_int_a, _activatnvar_confusing_int_1);
}

void _activation_check_proc_01_func_844056729(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_a ^= _activatnvar_confusing_int_1;

}

void _activation_check_proc_01_func_635705151(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1533886528(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_962964667(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x5] ^= _activatnvar_section2.mData[0x3];

	/* inline */ _activation_check_proc_01_func_1925101637(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_01_func_1758604776(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_01_func_596286326(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_01_func_829310078(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_01_func_573445638(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_573445638(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1420063715(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1719207175(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] == 0x9) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_01_func_1626869045(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1171865323(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_0 *= _activatnvar_confusing_chararray_6[0xd];

}

void _activation_check_proc_01_func_1639215062(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] ^= _activatnvar_confusing_chararray_4[0x2];

}

void _activation_check_proc_01_func_1288371464(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xf] *= _activatnvar_lace.mData[0x1];

	_activation_check_proc_01_func_1171865323(_activatnvar_confusing_U8_0, _activatnvar_confusing_chararray_6);
	_activation_check_proc_01_func_1639215062(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_4);
	_activation_check_proc_01_func_1626869045(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1089420234(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1374985579(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_3 ^= _activatnvar_confusing_U8_d;

	/* inline */ _activation_check_proc_01_func_452498708(_activatnvar_pos);
}

void _activation_check_proc_01_func_1278512184(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] <<= _activatnvar_confusing_chararray_3[0xf];

	/* inline */ _activation_check_proc_01_func_401296017(_activatnvar_confusing_int_f);
}

void _activation_check_proc_01_func_1345478187(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_chararray_c[0x5];

}

void _activation_check_proc_01_func_2082481183(int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_01_func_411585619(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_01_func_305048386(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
	_activation_check_proc_01_func_411585619(_activatnvar_confusing_chararray_1, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_01_func_1538227150(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] >>= _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_01_func_2096367300(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_9[0x5] >>= _activatnvar_confusing_LLUUID_5.mData[0x9];

	_activation_check_proc_01_func_1538227150(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_01_func_803030643(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_01_func_80311665(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] ^= _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_01_func_522111008(U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_01_func_2089985093(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_01_func_598442017(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1035051201(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
	_activation_check_proc_01_func_1883840904();
	_activation_check_proc_01_func_949833599(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_01_func_1883840904()
{
	
}

void _activation_check_proc_01_func_949833599(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x7] |= _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_01_func_1480250951(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_01_func_103561269(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_01_func_1295105789(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] += _activatnvar_section2.mData[0x3];

}

void _activation_check_proc_01_func_1042088901(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_d[0x8] ^= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_01_func_681875008(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x1] += _activatnvar_confusing_LLUUID_a.mData[0xa];

}

void _activation_check_proc_01_func_543951464(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_01_func_1042088901(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_3);
	_activation_check_proc_01_func_681875008(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_01_func_1742292177(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_01_func_2049492805(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_01_func_332153148(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x3] += _activatnvar_section1.mData[0x7];

}

void _activation_check_proc_01_func_827909299(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("afbe4438-d213-5615-ccde-cd8e97f1f7e1");

}

void _activation_check_proc_01_func_1208011569(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_01_func_827909299(_activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_01_func_1750533861(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_01_func_1777666122(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_9.mData[0xe] |= _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_01_func_1727123403(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_01_func_553943364(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_f = 0x5;

}

void _activation_check_proc_01_func_1348667103(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_8 += 0x9;

}

void _activation_check_proc_01_func_772422507(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] *= _activatnvar_confusing_chararray_0[0xa];

	_activation_check_proc_01_func_1348667103(_activatnvar_confusing_U8_8, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_01_func_1896717581(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 >>= 0x4;

}

void _activation_check_proc_01_func_1829595232(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1423755592(U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_01_func_1994037935(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_01_func_1097997247(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_01_func_250722840(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_01_func_1120332893(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_01_func_1800151337()
{
	
}

void _activation_check_proc_01_func_1433665440(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_01_func_1578758657(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_pos)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xe] != _activatnvar_pos) _activatnvar_confusing_bool_d = _activatnvar_generic_bool_0;

}

void _activation_check_proc_01_func_358434782(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_01_func_2131496758(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] ^= _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_01_func_494783554()
{
	
}

void _activation_check_proc_01_func_858807345(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_code;

}

void _activation_check_proc_01_func_774952931(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_8;

	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_01_func_283236335(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_01_func_616292516(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_b, int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_a;

	_activation_check_proc_01_func_316781339(_activatnvar_t0, _activatnvar_confusing_U8_b);
	/* inline */ _activation_check_proc_01_func_566789122(_activatnvar_confusing_int_3);
}

void _activation_check_proc_01_func_316781339(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b >>= _activatnvar_t0;

}

void _activation_check_proc_01_func_418217493(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d += 0x8;

}

void _activation_check_proc_01_func_2130749729(int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x7] >>= _activatnvar_confusing_chararray_d[0x7];

	_activation_check_proc_01_func_418217493(_activatnvar_confusing_int_d);
}

void _activation_check_proc_01_func_1229550640(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x3] >>= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_01_func_599678843(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_a.mData[0xf] += _activatnvar_section1.mData[0x1];

}

void _activation_check_proc_01_func_288254487(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("4cb9534f-095a-2735-378d-9b8d1b829621");

}

void _activation_check_proc_01_func_539707566(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_6++;

	/* inline */ _activation_check_proc_01_func_1110063307(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_01_func_2144283551(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1068552865(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_01_func_1855172516(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_01_func_825172367(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_3)
{
	
	_activation_check_proc_01_func_1068552865(_activatnvar_confusing_U8_8, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_01_func_1872728157(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_01_func_1855172516(_activatnvar_confusing_int_3);
}

void _activation_check_proc_01_func_1331463042(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_01_func_1159301657(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1411696616(DWORD& _activatnvar_serial, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
}

void _activation_check_proc_01_func_1177399427(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_fscked;

}

void _activation_check_proc_01_func_190322137(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xe] <<= _activatnvar_confusing_chararray_7[0x1];

	_activation_check_proc_01_func_2083366517(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_01_func_2083366517(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e += 0x9;

}

void _activation_check_proc_01_func_1776974505(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x4] == 0xf) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_01_func_15167524(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_01_func_735139606(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] &= _activatnvar_section1.mData[0xd];

	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_01_func_677562583(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_01_func_151341940(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_4 |= _activatnvar_confusing_char_c;

	_activation_check_proc_01_func_677562583(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_01_func_1961217018(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_01_func_782700662(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] ^= _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_01_func_198705819(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_01_func_1523177275(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_01_func_765975994(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xe] != 0x4) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_01_func_1401791679(LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_d)
{
	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_01_func_1972222070(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_01_func_1510213585();
	/* inline */ _activation_check_proc_01_func_694615746(_activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_01_func_1195412206(_activatnvar_section1, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_01_func_1148502989(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("5fb89f97-1f7a-643d-5037-2c7ef0bd529b");

	/* inline */ _activation_check_proc_01_func_1418482816(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_01_func_998750472(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("da6144c6-8682-d8db-3c01-6b99b74017a3");

}

void _activation_check_proc_01_func_366092984(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x7] != 0x4) _activatnvar_confusing_bool_1 = false;

	_activation_check_proc_01_func_998750472(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_01_func_297598795(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_01_func_121910595(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_01_func_1616125093(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 >>= 0xd;

}

void _activation_check_proc_01_func_2046650799(int& _activatnvar_confusing_int_3, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_7;

	_activation_check_proc_01_func_1783902280(_activatnvar_confusing_char_c);
	_activation_check_proc_01_func_1616125093(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_01_func_971163325(_activatnvar_confusing_U8_9, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_01_func_1783902280(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_01_func_1438654988(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x8] ^= _activatnvar_section1.mData[0xf];

}

void _activation_check_proc_01_func_930757964(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f = _activatnvar_section1.mData[0x1];

}

void _activation_check_proc_01_func_711434885(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_LLUUID_b.mData[0x5];

}

void _activation_check_proc_01_func_1927141680(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xb] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_2 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_01_func_1413554208(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_01_func_719117247(_activatnvar_confusing_int_6);
}

void _activation_check_proc_01_func_719117247(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_01_func_1864591384(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_chararray_6[0x8];

	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_chararray_6[0xf];

	_activation_check_proc_01_func_1287578792();
}

void _activation_check_proc_01_func_1287578792()
{
	
}

void _activation_check_proc_01_func_2025746288(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_01_func_392915088(int& _activatnvar_confusing_int_8, U8& _activatnvar_t0)
{
	
	/* inline */ _activation_check_proc_01_func_1508055575(_activatnvar_t0);
	/* inline */ _activation_check_proc_01_func_415587711(_activatnvar_confusing_int_8);
}

void _activation_check_proc_01_func_136004117(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_c &= 0xf;

}

void _activation_check_proc_01_func_23859415(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_01_func_2026906464(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x5] *= _activatnvar_confusing_LLUUID_6.mData[0xd];

	_activation_check_proc_01_func_23859415(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_01_func_823696054(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("a1dc71ea-ae26-e78f-c6bf-eef6380b24e3");

}

void _activation_check_proc_01_func_1351410189(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_5[0x5] >>= _activatnvar_confusing_chararray_1[0xe];

}

void _activation_check_proc_01_func_1503236968(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] |= _activatnvar_combined_id.mData[0x5];

}

void _activation_check_proc_01_func_1293962393(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_01_func_1503236968(_activatnvar_confusing_LLUUID_0, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_01_func_367158000(_activatnvar_pos);
}

void _activation_check_proc_01_func_1523571750(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_t0, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_c, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_9 += 0x0;

	_activatnvar_confusing_char_c ^= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_01_func_2094382622(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_01_func_1954886297(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xb] += _activatnvar_confusing_chararray_6[0x3];

}

void _activation_check_proc_01_func_47749625(int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator = 0;
	_activatnvar_confusing_char_5 += 0x1;

	/* inline */ _activation_check_proc_01_func_3456164(_activatnvar_confusing_char_4, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_01_func_451288389(_activatnvar_confusing_int_7, _activatnvar_confusing_int_9);
	/* inline */ _activation_check_proc_01_func_1227319236();
	/* inline */ _activation_check_proc_01_func_1311171545(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_01_func_1913238416(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_01_func_520869725(_activatnvar_confusing_LLUUID_e, _activatnvar_secret);
	_activation_check_proc_01_func_1689404979(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_1689404979(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1231605698(LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_01_func_1838240333(LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_7)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_7 ^= 0xe;

	_activation_check_proc_01_func_1231605698(_activatnvar_lace, _activatnvar_feat);
}

void _activation_check_proc_01_func_402305913(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_01_func_408292616(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_d |= _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_01_func_1576758047(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_01_func_1985463194(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_01_func_1193509028(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_01_func_888425149(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x5] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_01_func_870098478(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_01_func_663673740(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_01_func_1484619498(char& _activatnvar_confusing_char_9)
{
	
	_activation_check_proc_01_func_663673740(_activatnvar_confusing_char_9);
}

void _activation_check_proc_01_func_1927161938(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_01_func_733233539(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_section1;

	/* inline */ _activation_check_proc_01_func_495987366(_activatnvar_confusing_int_3);
}

void _activation_check_proc_01_func_486783354(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_section2;

}

void _activation_check_proc_01_func_1773391492(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_01_func_834764309(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_char_f = _activatnvar_code.mData[0xb];

	_activation_check_proc_01_func_1270088174(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_e);
	_activation_check_proc_01_func_1773391492(_activatnvar_confusing_int_3);
}

void _activation_check_proc_01_func_1270088174(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_01_func_656244859(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_01_func_1379591985(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_char_3 >>= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_01_func_1288480027(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_650941086(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_1[0x1] <<= _activatnvar_confusing_chararray_3[0x6];

	/* inline */ _activation_check_proc_01_func_98835076(_activatnvar_confusing_chararray_e, _activatnvar_mac_digest);
}

void _activation_check_proc_01_func_155186820(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_8 &= 0x0;

	_activation_check_proc_01_func_1283674440(_activatnvar_confusing_U8_b, _activatnvar_confusing_char_0, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_01_func_1715737144(_activatnvar_confusing_LLUUID_d);
	_activation_check_proc_01_func_229425373(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_01_func_229425373(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_5[0x0] = _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_01_func_1283674440(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_0 = _activatnvar_confusing_U8_b;

}

void _activation_check_proc_01_func_1129002859()
{
	
}

void _activation_check_proc_01_func_1075377426(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_U8_5;

}

void _activation_check_proc_01_func_439465659(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_8[0xf] |= _activatnvar_confusing_LLUUID_b.mData[0xe];

}

void _activation_check_proc_01_func_1693378480(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_01_func_433437669(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_01_func_809134862(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1296899172(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_165612826(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1709553798(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 = 0x8;

}

void _activation_check_proc_01_func_238875468(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f |= _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_01_func_249263006(char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_chararray_2[0xc];

	/* inline */ _activation_check_proc_01_func_629610531(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_f);
	_activation_check_proc_01_func_1709553798(_activatnvar_confusing_int_6);
	_activation_check_proc_01_func_238875468(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_char_f);
}

void _activation_check_proc_01_func_1586416536(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_b.mData[0x7] |= _activatnvar_ser_digest[0x3];

}

void _activation_check_proc_01_func_1528561835(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_f += _activatnvar_confusing_U8_c;

}

void _activation_check_proc_01_func_1530168342(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_0 ^= _activatnvar_confusing_chararray_d[0xa];

}

void _activation_check_proc_01_func_270860163(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_0)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_01_func_424214316(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_0);
	_activation_check_proc_01_func_1530168342(_activatnvar_confusing_char_0, _activatnvar_confusing_chararray_d);
	_activation_check_proc_01_func_1589822836(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_01_func_424214316(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_8[0x7] <<= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_01_func_1589822836(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xe] *= _activatnvar_confusing_LLUUID_8.mData[0x9];

}

void _activation_check_proc_01_func_138743244(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_4 += _activatnvar_confusing_chararray_2[0xf];

	_activation_check_proc_01_func_1163475266(_activatnvar_confusing_bool_c, _activatnvar_confusing_U8_0, _activatnvar_confusing_char_f);
}

void _activation_check_proc_01_func_1163475266(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_0 += _activatnvar_confusing_char_f;

}

void _activation_check_proc_01_func_568056779(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_01_func_1144985635(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	if(_activatnvar_confusing_LLUUID_c.mData[0x1] == 0x4) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_01_func_1952566408(LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_LLUUID_8.mData[0x4] >>= _activatnvar_so.mData[0x3];

	_activation_check_proc_01_func_1144985635(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_confusing_bool_d, _activatnvar_ser_digest, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_01_func_1022541135(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_01_func_156901135(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_01_func_1302066935(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
}

void _activation_check_proc_01_func_1441682411(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_4[0xe];

}

void _activation_check_proc_01_func_1624838732(unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_bool_c &= _activatnvar_generic_bool_1;

	_activatnvar_confusing_chararray_d[0x7] *= _activatnvar_confusing_chararray_8[0x9];

}

void _activation_check_proc_01_func_788381324(U8& _activatnvar_t0, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_0 <<= _activatnvar_t0;

}

void _activation_check_proc_01_func_1989553646(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_t0, char& _activatnvar_confusing_char_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_01_func_788381324(_activatnvar_t0, _activatnvar_confusing_char_0, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_01_func_1714391882(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_01_func_1135675634(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_01_func_1505116665(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1955194339(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_confusing_bool_3)
{
	
	/* inline */ _activation_check_proc_01_func_1894436035(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_01_func_1129380367(_activatnvar_mac_digest, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_01_func_471852957(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_t0, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_a &= 0xd;

	_activation_check_proc_01_func_701107653(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_01_func_701107653(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_01_func_2033063896(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_01_func_1721891323(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_01_func_1211812100(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_LLUUID_6.mData[0xa];

}

void _activation_check_proc_01_func_358881016(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_chararray_3[0xe];

}

void _activation_check_proc_01_func_1889530067(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_6.mData[0xe] &= _activatnvar_confusing_chararray_1[0x1];

}

void _activation_check_proc_01_func_1927870435(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_01_func_1875672707(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_7 *= 0x4;

}

void _activation_check_proc_01_func_1594927047(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_01_func_1072563515(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_d, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_01_func_1875672707(_activatnvar_confusing_bool_f, _activatnvar_confusing_U8_7);
	_activation_check_proc_01_func_1594927047(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_char_d);
	/* inline */ _activation_check_proc_01_func_1568755324(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_01_func_2098591223()
{
	
}

void _activation_check_proc_01_func_1745388021(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_641402469(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_2[0x3];

	/* inline */ _activation_check_proc_01_func_763935147(_activatnvar_confusing_char_3, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_01_func_1007021895(char& _activatnvar_feat, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_01_func_342203317(_activatnvar_feat, _activatnvar_generic_bool_1, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_01_func_342203317(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_01_func_209036750(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_01_func_1601778810(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("a87f6448-78bc-0df1-8bf9-b40036b115af");

}

void _activation_check_proc_01_func_713123750(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_01_func_845751379(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_01_func_1892310355(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x8] >>= _activatnvar_confusing_LLUUID_1.mData[0x3];

}

void _activation_check_proc_01_func_19757475(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_01_func_424896903(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_01_func_1208332435(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_01_func_19757475(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_01_func_1978871775(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 0; _activatnvar_strbuf_0[0] ^= 57; _activatnvar_strbuf_0[1] = 94; _activatnvar_strbuf_0[1] ^= 110; _activatnvar_strbuf_0[2] = 27; _activatnvar_strbuf_0[2] ^= 40; _activatnvar_strbuf_0[3] = 8; _activatnvar_strbuf_0[3] ^= 60; _activatnvar_strbuf_0[4] = 27; _activatnvar_strbuf_0[4] ^= 121; _activatnvar_strbuf_0[5] = 47; _activatnvar_strbuf_0[5] ^= 75; _activatnvar_strbuf_0[6] = 119; _activatnvar_strbuf_0[6] ^= 66; _activatnvar_strbuf_0[7] = 29; _activatnvar_strbuf_0[7] ^= 42; _activatnvar_strbuf_0[8] = 63; _activatnvar_strbuf_0[8] ^= 18; _activatnvar_strbuf_0[9] = 28; _activatnvar_strbuf_0[9] ^= 126; _activatnvar_strbuf_0[10] = 44; _activatnvar_strbuf_0[10] ^= 27; _activatnvar_strbuf_0[11] = 97; _activatnvar_strbuf_0[11] ^= 5; _activatnvar_strbuf_0[12] = 18; _activatnvar_strbuf_0[12] ^= 42; _activatnvar_strbuf_0[13] = 51; _activatnvar_strbuf_0[13] ^= 30; _activatnvar_strbuf_0[14] = 41; _activatnvar_strbuf_0[14] ^= 29; _activatnvar_strbuf_0[15] = 19; _activatnvar_strbuf_0[15] ^= 112; _activatnvar_strbuf_0[16] = 74; _activatnvar_strbuf_0[16] ^= 40; _activatnvar_strbuf_0[17] = 57; _activatnvar_strbuf_0[17] ^= 91; _activatnvar_strbuf_0[18] = 120; _activatnvar_strbuf_0[18] ^= 85; _activatnvar_strbuf_0[19] = 36; _activatnvar_strbuf_0[19] ^= 28; _activatnvar_strbuf_0[20] = 44; _activatnvar_strbuf_0[20] ^= 73; _activatnvar_strbuf_0[21] = 1; _activatnvar_strbuf_0[21] ^= 99; _activatnvar_strbuf_0[22] = 16; _activatnvar_strbuf_0[22] ^= 118; _activatnvar_strbuf_0[23] = 125; _activatnvar_strbuf_0[23] ^= 80; _activatnvar_strbuf_0[24] = 28; _activatnvar_strbuf_0[24] ^= 40; _activatnvar_strbuf_0[25] = 111; _activatnvar_strbuf_0[25] ^= 89; _activatnvar_strbuf_0[26] = 29; _activatnvar_strbuf_0[26] ^= 40; _activatnvar_strbuf_0[27] = 85; _activatnvar_strbuf_0[27] ^= 54; _activatnvar_strbuf_0[28] = 51; _activatnvar_strbuf_0[28] ^= 3; _activatnvar_strbuf_0[29] = 71; _activatnvar_strbuf_0[29] ^= 116; _activatnvar_strbuf_0[30] = 93; _activatnvar_strbuf_0[30] ^= 62; _activatnvar_strbuf_0[31] = 76; _activatnvar_strbuf_0[31] ^= 126; _activatnvar_strbuf_0[32] = 113; _activatnvar_strbuf_0[32] ^= 64; _activatnvar_strbuf_0[33] = 66; _activatnvar_strbuf_0[33] ^= 35; _activatnvar_strbuf_0[34] = 3; _activatnvar_strbuf_0[34] ^= 103; _activatnvar_strbuf_0[35] = 17; _activatnvar_strbuf_0[35] ^= 36; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_01_func_1924283461(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_01_func_1234558847(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x7] *= _activatnvar_confusing_chararray_8[0xb];

}

void _activation_check_proc_01_func_652886688(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_01_func_143125407(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_01_func_1029266484()
{
	
}

void _activation_check_proc_01_func_341334358(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_01_func_1118221618(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_01_func_292815079(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_2;

	_activation_check_proc_01_func_620342288(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_01_func_620342288(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_01_func_1212916281(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_t0 &= 7;
	_activatnvar_confusing_U8_8 &= 0xb;

}

void _activation_check_proc_01_func_1068527246(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	
	_activatnvar_confusing_chararray_b[0x5] *= _activatnvar_confusing_chararray_1[0xf];

}

void _activation_check_proc_01_func_620607946(int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_4, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_e <<= _activatnvar_confusing_int_0;

	_activatnvar_confusing_char_4 ^= _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_01_func_1507494410(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_9)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x3] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_01_func_1598937690(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_01_func_2138289013(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_01_func_260082236(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x8] += _activatnvar_section2.mData[0x3];

}

void _activation_check_proc_01_func_2068406219(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_1.mData[0x8];

}

void _activation_check_proc_01_func_442566726(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_01_func_622245576(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_d = _activatnvar_confusing_int_b;

}

void _activation_check_proc_01_func_1699228029(U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_0.mData[0x6];

	_activation_check_proc_01_func_622245576(_activatnvar_confusing_int_d, _activatnvar_confusing_int_b);
}

void _activation_check_proc_01_func_2000098827(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_01_func_1044832148(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_610596706(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_e[0x0] += _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_01_func_489922810(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("7527ffc7-aa45-e5c3-da66-3e678ae8a38e");

	_activatnvar_confusing_LLUUID_9 = LLUUID("0b81e196-9545-af9b-8416-f65f8db8c619");

}

void _activation_check_proc_01_func_249637258(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_8++;

	_activation_check_proc_01_func_489922810(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_01_func_1815245553(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_a[0x5] <<= _activatnvar_confusing_chararray_e[0x8];

	/* inline */ _activation_check_proc_01_func_1823136114(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_01_func_1023189856(_activatnvar_confusing_char_d);
}

void _activation_check_proc_01_func_1023189856(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_01_func_97205474(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1820990825(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
	
}

void _activation_check_proc_01_func_414863934(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_generic_iterator = 0;
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1314264410(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_7.mData[0xb];

	_activation_check_proc_01_func_1377012431(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
}

void _activation_check_proc_01_func_1377012431(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_526218758(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xa] <<= _activatnvar_so.mData[0x5];

	/* inline */ _activation_check_proc_01_func_1861838201(_activatnvar_mac_digest, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_01_func_140311765(_activatnvar_confusing_U8_e, _activatnvar_confusing_char_4, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_01_func_140311765(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_4 |= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_01_func_1194274856(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1172994643(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_01_func_993828036(LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_6;

	_activation_check_proc_01_func_1172994643(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_01_func_1194274856(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_01_func_1137607454(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_602125393(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b |= _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_01_func_2142589693(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_01_func_827146352(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_01_func_1738519546(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x7] == _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_01_func_1845936970(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_01_func_1386734675(_activatnvar_confusing_char_1, _activatnvar_confusing_bool_3, _activatnvar_confusing_U8_7);
	_activation_check_proc_01_func_827146352(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_01_func_1287204948(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_01_func_993184085(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
	_activation_check_proc_01_func_1738519546(_activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_U8_1);
	/* inline */ _activation_check_proc_01_func_932601137(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_01_func_1287204948(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_2000446615(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_01_func_1583342527(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x8] &= _activatnvar_confusing_LLUUID_7.mData[0xa];

}

void _activation_check_proc_01_func_773118187(int& _activatnvar_confusing_int_5, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

	/* inline */ _activation_check_proc_01_func_535044056(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_01_func_1688667655();
	_activation_check_proc_01_func_2000446615(_activatnvar_confusing_int_5);
	_activation_check_proc_01_func_1583342527(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_01_func_840470444(_activatnvar_t0);
}

void _activation_check_proc_01_func_1980285342(bool& _activatnvar_confusing_bool_7, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_01_func_885820081(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_01_func_936674003(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_doaccount;

	_activation_check_proc_01_func_581079827(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_581079827(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_01_func_781602988(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] |= _activatnvar_secret.mData[0x6];

}

void _activation_check_proc_01_func_524451510(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_chararray_3[0xe];

}

void _activation_check_proc_01_func_230130583(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_01_func_175610180(U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_2, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_01_func_524451510(_activatnvar_confusing_U8_6, _activatnvar_confusing_chararray_3);
	_activation_check_proc_01_func_230130583(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_01_func_683071068(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_f, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_01_func_2082146601(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_186242886(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_f[0x6] >>= _activatnvar_code.mData[0xa];

}

void _activation_check_proc_01_func_152856358(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_1 ^= _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_01_func_386579866(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_6, U8& _activatnvar_pos, char& _activatnvar_confusing_char_a)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[4];
	/* inline */ _activation_check_proc_01_func_1411683879(_activatnvar_confusing_char_a, _activatnvar_confusing_char_6, _activatnvar_confusing_bool_0);
	_activation_check_proc_01_func_152856358(_activatnvar_confusing_char_1, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_01_func_642803704(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_01_func_427220801(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] &= _activatnvar_confusing_LLUUID_3.mData[0x0];

}

void _activation_check_proc_01_func_1088927388(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_8[0xc] += _activatnvar_confusing_LLUUID_7.mData[0x7];

	_activation_check_proc_01_func_1870418119(_activatnvar_secret, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_01_func_427220801(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_01_func_1324850584(_activatnvar_confusing_int_2);
	_activation_check_proc_01_func_865276767(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_01_func_865276767(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xe] = _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_01_func_1870418119(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_secret;

}

void _activation_check_proc_01_func_941811043(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_01_func_353305996(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_01_func_1219526501(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_4[0x4] *= _activatnvar_mac_digest[0x7];

	_activation_check_proc_01_func_1620392129(_activatnvar_so, _activatnvar_confusing_U8_c);
	_activation_check_proc_01_func_65580527(_activatnvar_confusing_int_0);
	_activation_check_proc_01_func_941811043(_activatnvar_t0);
	_activation_check_proc_01_func_353305996(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_01_func_65580527(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_01_func_1620392129(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_so.mData[0x1];

}

void _activation_check_proc_01_func_125652220(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_398566742(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_01_func_691788756(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_01_func_602343728(int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_int_d += 0x0;

	_activation_check_proc_01_func_812417307(_activatnvar_confusing_char_d);
}

void _activation_check_proc_01_func_812417307(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_01_func_1280751624(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_1.mData[0x9] ^= _activatnvar_confusing_chararray_7[0xa];

	_activatnvar_confusing_LLUUID_9.mData[0xf] ^= _activatnvar_confusing_LLUUID_6.mData[0xd];

}

void _activation_check_proc_01_func_1962716332(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_9.mData[0x6];

	/* inline */ _activation_check_proc_01_func_2070698568(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_01_func_1161809829(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_01_func_1948195187(int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_6[0x6] *= _activatnvar_ser_digest[0x7];

	/* inline */ _activation_check_proc_01_func_275422301(_activatnvar_confusing_int_9);
}

void _activation_check_proc_01_func_644021603(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0x8] &= _activatnvar_confusing_chararray_d[0x7];

}

void _activation_check_proc_01_func_1129711491(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 >>= _activatnvar_confusing_chararray_2[0x7];

}

void _activation_check_proc_01_func_1182452598(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_7[0x1] &= _activatnvar_confusing_chararray_1[0xf];

}

void _activation_check_proc_01_func_1347657082(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c += _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_01_func_230013556(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x8] = _activatnvar_confusing_chararray_3[0x8];

}

void _activation_check_proc_01_func_567337534(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e ^= 0xa;

}

void _activation_check_proc_01_func_481981560(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= _activatnvar_confusing_int_a;

}

void _activation_check_proc_01_func_1784450755(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] += _activatnvar_confusing_LLUUID_8.mData[0x4];

}

void _activation_check_proc_01_func_304201773(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xf] = _activatnvar_mac_digest[0x4];

}

void _activation_check_proc_01_func_696883852(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_01_func_508003655(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
	/* inline */ _activation_check_proc_01_func_1510529012(_activatnvar_confusing_chararray_3, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_01_func_477676610(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_01_func_1717945314(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_571406813(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_01_func_1552705363(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_01_func_953930419(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_7 = false;

	/* inline */ _activation_check_proc_01_func_1566564661(_activatnvar_confusing_bool_2, _activatnvar_confusing_char_f);
}

void _activation_check_proc_01_func_714926276(int& _activatnvar_confusing_int_9, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_01_func_365530982(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_365530982(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_01_func_2055205474(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_1 <<= 0xe;

}

void _activation_check_proc_01_func_1578418580(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = 0xf;

	/* inline */ _activation_check_proc_01_func_1272531288(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_01_func_2055205474(_activatnvar_confusing_char_1, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_01_func_2047097006(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0x8;

}

void _activation_check_proc_01_func_1109738214(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_9[0x8] >>= _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_01_func_719880126(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1009792884(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_572462769(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d <<= _activatnvar_confusing_chararray_7[0xe];

}

void _activation_check_proc_01_func_451007181(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xa] &= _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_01_func_972424152(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x7] += _activatnvar_confusing_LLUUID_7.mData[0xd];

	/* inline */ _activation_check_proc_01_func_1283051209();
}

void _activation_check_proc_01_func_1300555299(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_6[0x9] *= _activatnvar_lace.mData[0x6];

}

void _activation_check_proc_01_func_1131374359(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_5;

	_activation_check_proc_01_func_1300555299(_activatnvar_confusing_chararray_6, _activatnvar_lace);
	/* inline */ _activation_check_proc_01_func_513896877(_activatnvar_feat, _activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1098293965(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_01_func_664610617(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_f)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x9] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_01_func_1108969975(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1951824090(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1675151451(int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_b++;

	_activation_check_proc_01_func_1951824090(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_984029819(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_01_func_769713550(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_b[0xb] += _activatnvar_confusing_LLUUID_3.mData[0xc];

}

void _activation_check_proc_01_func_1064817763(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_01_func_1132405495()
{
	
}

void _activation_check_proc_01_func_1279139819(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_9 |= _activatnvar_confusing_char_f;

}

void _activation_check_proc_01_func_803851746(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_3, U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
	_activation_check_proc_01_func_1847743754(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_01_func_462946309(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_01_func_809729298(_activatnvar_confusing_int_3);
}

void _activation_check_proc_01_func_1847743754(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] &= _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_01_func_598551302(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1642940638(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_01_func_532272600(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_01_func_966735593(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1152191678(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_1[0xf] ^= _activatnvar_confusing_LLUUID_4.mData[0x8];

}

void _activation_check_proc_01_func_1189409360(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_7.mData[0x0] |= _activatnvar_confusing_chararray_c[0x9];

}

void _activation_check_proc_01_func_4076151(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_2.mData[0x3];

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_01_func_1921808625(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1372377990(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_section1;

}

void _activation_check_proc_01_func_1746748529(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x0] &= _activatnvar_secret.mData[0x9];

}

void _activation_check_proc_01_func_664435902(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 123; _activatnvar_strbuf_0[0] ^= 74; _activatnvar_strbuf_0[1] = 77; _activatnvar_strbuf_0[1] ^= 125; _activatnvar_strbuf_0[2] = 31; _activatnvar_strbuf_0[2] ^= 44; _activatnvar_strbuf_0[3] = 96; _activatnvar_strbuf_0[3] ^= 84; _activatnvar_strbuf_0[4] = 82; _activatnvar_strbuf_0[4] ^= 48; _activatnvar_strbuf_0[5] = 44; _activatnvar_strbuf_0[5] ^= 74; _activatnvar_strbuf_0[6] = 37; _activatnvar_strbuf_0[6] ^= 67; _activatnvar_strbuf_0[7] = 7; _activatnvar_strbuf_0[7] ^= 49; _activatnvar_strbuf_0[8] = 49; _activatnvar_strbuf_0[8] ^= 28; _activatnvar_strbuf_0[9] = 118; _activatnvar_strbuf_0[9] ^= 20; _activatnvar_strbuf_0[10] = 31; _activatnvar_strbuf_0[10] ^= 40; _activatnvar_strbuf_0[11] = 76; _activatnvar_strbuf_0[11] ^= 120; _activatnvar_strbuf_0[12] = 12; _activatnvar_strbuf_0[12] ^= 60; _activatnvar_strbuf_0[13] = 19; _activatnvar_strbuf_0[13] ^= 62; _activatnvar_strbuf_0[14] = 102; _activatnvar_strbuf_0[14] ^= 86; _activatnvar_strbuf_0[15] = 78; _activatnvar_strbuf_0[15] ^= 40; _activatnvar_strbuf_0[16] = 90; _activatnvar_strbuf_0[16] ^= 56; _activatnvar_strbuf_0[17] = 45; _activatnvar_strbuf_0[17] ^= 73; _activatnvar_strbuf_0[18] = 13; _activatnvar_strbuf_0[18] ^= 32; _activatnvar_strbuf_0[19] = 103; _activatnvar_strbuf_0[19] ^= 86; _activatnvar_strbuf_0[20] = 27; _activatnvar_strbuf_0[20] ^= 120; _activatnvar_strbuf_0[21] = 53; _activatnvar_strbuf_0[21] ^= 87; _activatnvar_strbuf_0[22] = 115; _activatnvar_strbuf_0[22] ^= 21; _activatnvar_strbuf_0[23] = 12; _activatnvar_strbuf_0[23] ^= 33; _activatnvar_strbuf_0[24] = 16; _activatnvar_strbuf_0[24] ^= 36; _activatnvar_strbuf_0[25] = 59; _activatnvar_strbuf_0[25] ^= 13; _activatnvar_strbuf_0[26] = 18; _activatnvar_strbuf_0[26] ^= 39; _activatnvar_strbuf_0[27] = 126; _activatnvar_strbuf_0[27] ^= 29; _activatnvar_strbuf_0[28] = 113; _activatnvar_strbuf_0[28] ^= 65; _activatnvar_strbuf_0[29] = 44; _activatnvar_strbuf_0[29] ^= 29; _activatnvar_strbuf_0[30] = 32; _activatnvar_strbuf_0[30] ^= 68; _activatnvar_strbuf_0[31] = 53; _activatnvar_strbuf_0[31] ^= 7; _activatnvar_strbuf_0[32] = 6; _activatnvar_strbuf_0[32] ^= 55; _activatnvar_strbuf_0[33] = 26; _activatnvar_strbuf_0[33] ^= 120; _activatnvar_strbuf_0[34] = 66; _activatnvar_strbuf_0[34] ^= 38; _activatnvar_strbuf_0[35] = 30; _activatnvar_strbuf_0[35] ^= 43; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_01_func_1552174188(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_11810361(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_01_func_55524615(U8& _activatnvar_t0, int& _activatnvar_confusing_int_1, U8& _activatnvar_t1)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_01_func_11810361(_activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_01_func_1517138422(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xa] += _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_01_func_1907714494(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_5[0x1] &= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_01_func_2039056926(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_01_func_2010301648(int& _activatnvar_confusing_int_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_01_func_2039056926(_activatnvar_confusing_U8_b);
	_activation_check_proc_01_func_988066962(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
	_activation_check_proc_01_func_839069572(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_839069572(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_988066962(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_823569052(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] ^= _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_01_func_1636858025(int& _activatnvar_confusing_int_e, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_01_func_1000066575(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_1 *= _activatnvar_confusing_int_3;

}

void _activation_check_proc_01_func_705410384(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_char_9;

}

void _activation_check_proc_01_func_680988706(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_4 <<= _activatnvar_confusing_chararray_e[0x6];

}

void _activation_check_proc_01_func_1621100603(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_8.mData[0xc] *= _activatnvar_secret.mData[0x6];

}

void _activation_check_proc_01_func_1951318670(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_secret, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
	_activation_check_proc_01_func_1621100603(_activatnvar_confusing_LLUUID_8, _activatnvar_secret);
	_activation_check_proc_01_func_680988706(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_01_func_583126611(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_01_func_1306465985(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 |= 0x9;

}

void _activation_check_proc_01_func_577915054(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x8] *= _activatnvar_confusing_chararray_f[0xd];

	/* inline */ _activation_check_proc_01_func_1294154517(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1343031010(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_8[0xd] = _activatnvar_ser_digest[0xc];

}

void _activation_check_proc_01_func_1712738344(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_section1;

}

void _activation_check_proc_01_func_1853098718(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_01_func_1838883006(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_01_func_967605995(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_01_func_2037935270(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_2.mData[0x9] <<= _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_01_func_1019054029(int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_fscked, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
	_activation_check_proc_01_func_305895472(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_f);
	/* inline */ _activation_check_proc_01_func_1906090662(_activatnvar_confusing_int_c);
}

void _activation_check_proc_01_func_305895472(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_01_func_728556086(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_01_func_158929963(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("19b982d6-d64b-d5a4-02fd-ba0847ae8a96");

}

void _activation_check_proc_01_func_391663593(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_01_func_375469772(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activation_check_proc_01_func_1995897277(_activatnvar_confusing_int_a);
}

void _activation_check_proc_01_func_1995897277(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_01_func_1976677838(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xd] = _activatnvar_secret.mData[0xf];

}

void _activation_check_proc_01_func_305553197(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_41240757(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_01_func_1237437284(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_char_f;

}

void _activation_check_proc_01_func_1117939316(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x8] >>= _activatnvar_section2.mData[0x8];

	/* inline */ _activation_check_proc_01_func_2100295508(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1359669946(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x8] ^= _activatnvar_confusing_LLUUID_c.mData[0x4];

}

void _activation_check_proc_01_func_444317220(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_01_func_1211562765(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1972571469()
{
	
}

void _activation_check_proc_01_func_1528395226(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_01_func_1808027556(int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xa] *= _activatnvar_confusing_chararray_c[0x2];

	_activation_check_proc_01_func_225306085(_activatnvar_confusing_int_6);
}

void _activation_check_proc_01_func_225306085(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_01_func_1962413580(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_01_func_1771978499(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x9] ^= _activatnvar_code.mData[0x0];

	/* inline */ _activation_check_proc_01_func_1399744155();
}

void _activation_check_proc_01_func_1302253527(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("97416978-9df1-0d7b-3715-b22093e0d6a5");

	_activation_check_proc_01_func_1851847242(_activatnvar_doaccount, _activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_01_func_1851847242(bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_01_func_1175521280(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_01_func_406014190(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_538464292(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_9;

	_activation_check_proc_01_func_1494706069(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_d);
	_activation_check_proc_01_func_1408403950(_activatnvar_generic_iterator, _activatnvar_generic_bool_1, _activatnvar_lace, _activatnvar_feat);
	_activation_check_proc_01_func_136712661(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_01_func_136712661(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_01_func_1494706069(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] >>= _activatnvar_confusing_chararray_d[0x3];

}

void _activation_check_proc_01_func_1408403950(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_01_func_134564763(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x7] += _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_01_func_895236725(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_01_func_847944893(_activatnvar_confusing_LLUUID_e);
	_activation_check_proc_01_func_2059532226(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_8, _activatnvar_confusing_char_a);
	_activation_check_proc_01_func_134564763(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_01_func_847944893(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("16c575a2-514b-b6cd-1498-fceb498fd9c7");

}

void _activation_check_proc_01_func_2059532226(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_a)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_8 = _activatnvar_confusing_char_a;

}

void _activation_check_proc_01_func_266130793(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] |= _activatnvar_confusing_chararray_5[0x9];

}

void _activation_check_proc_01_func_1906459098(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_01_func_272690856(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_01_func_679980720(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_01_func_1509807733(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
	_activation_check_proc_01_func_679980720(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_1294952127(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("8bca7a49-6536-e9a2-7053-8983ea29b73d");

}

void _activation_check_proc_01_func_199783373(char& _activatnvar_feat, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_01_func_720703355(_activatnvar_confusing_chararray_3, _activatnvar_confusing_char_f);
	_activation_check_proc_01_func_1868189630(_activatnvar_confusing_bool_b, _activatnvar_generic_bool_0, _activatnvar_confusing_U8_2, _activatnvar_feat);
}

void _activation_check_proc_01_func_1868189630(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_2, char& _activatnvar_feat)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_2 >>= _activatnvar_feat;

	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_01_func_261896312(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f ^= 0x9;

	_activation_check_proc_01_func_878672199();
}

void _activation_check_proc_01_func_878672199()
{
	
}

void _activation_check_proc_01_func_1407621692(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xe] = _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_01_func_787263390(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x6] ^= _activatnvar_confusing_LLUUID_0.mData[0x6];

}

void _activation_check_proc_01_func_1211639338(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_01_func_1258809838(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_3[0x3] ^= _activatnvar_confusing_LLUUID_4.mData[0xb];

}

void _activation_check_proc_01_func_1434310092(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_01_func_1533358857(unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
	_activation_check_proc_01_func_1434310092(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_01_func_1601475554(_activatnvar_confusing_int_4);
	_activation_check_proc_01_func_1258809838(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_01_func_1572853966(U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 >>= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_01_func_1540981631(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_char_c;

}

void _activation_check_proc_01_func_1624396629(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_01_func_1122245550(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_01_func_1135991381(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x8] ^= _activatnvar_confusing_chararray_8[0xe];

	/* inline */ _activation_check_proc_01_func_1534925971(_activatnvar_confusing_U8_8, _activatnvar_confusing_char_b);
}

void _activation_check_proc_01_func_500704376(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_01_func_1108332549(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_01_func_542946523(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_01_func_217608579(unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xd] += _activatnvar_confusing_chararray_4[0xb];

	_activation_check_proc_01_func_542946523(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_01_func_640213001(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_1399374558(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_01_func_383483003(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_01_func_1495417368(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_315871629(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1956659647(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_01_func_1039275778(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_157068583(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_1 <<= _activatnvar_confusing_chararray_5[0x2];

}

void _activation_check_proc_01_func_1043908836(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_char_a *= _activatnvar_confusing_chararray_3[0x6];

	_activation_check_proc_01_func_1633949113(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_1, _activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_U8_8, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_01_func_1633949113(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x5] != _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_1 = false;

	if(_activatnvar_confusing_LLUUID_6.mData[0xa] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_01_func_1516873998(U8& _activatnvar_t0, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_8)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_8 |= _activatnvar_t0;

	_activatnvar_confusing_char_4 += _activatnvar_confusing_chararray_e[0x4];

}

void _activation_check_proc_01_func_749588128(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t0, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

	_activation_check_proc_01_func_1516873998(_activatnvar_t0, _activatnvar_confusing_char_4, _activatnvar_confusing_bool_7, _activatnvar_confusing_chararray_e, _activatnvar_confusing_char_8);
	_activation_check_proc_01_func_2057835417(_activatnvar_confusing_char_2);
}

void _activation_check_proc_01_func_2057835417(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_01_func_1696321750(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_01_func_690656660(unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_e.mData[0x1] &= _activatnvar_confusing_chararray_5[0x5];

	_activation_check_proc_01_func_1696321750(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_01_func_1039453983(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_1 += 0x2;

	_activation_check_proc_01_func_31451511(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_01_func_31451511(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_3[0xc] >>= _activatnvar_confusing_LLUUID_d.mData[0x5];

}

void _activation_check_proc_01_func_980872994(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

	_activation_check_proc_01_func_1982348030(_activatnvar_secret, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_01_func_1121971104(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_01_func_1982348030(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xf] >>= _activatnvar_secret.mData[0xc];

}

void _activation_check_proc_01_func_879377961(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 += 0x7;

}

void _activation_check_proc_01_func_778570382(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_01_func_879377961(_activatnvar_confusing_char_0);
	_activation_check_proc_01_func_1892668450(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_01_func_263076201(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_01_func_1892668450(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x6] = _activatnvar_confusing_LLUUID_b.mData[0x2];

}

void _activation_check_proc_01_func_1461152335(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_01_func_124313113(unsigned char* _activatnvar_ser_digest, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_chararray_1[0x2] <<= _activatnvar_ser_digest[0xc];

	_activation_check_proc_01_func_1461152335(_activatnvar_confusing_bool_2, _activatnvar_doaccount);
}

void _activation_check_proc_01_func_569200488(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_01_func_1909175008(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1964865596(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_int_1 |= _activatnvar_confusing_int_4;

	_activation_check_proc_01_func_1909175008(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_code);
}

void _activation_check_proc_01_func_1989399897(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_01_func_1063170440(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_9[0x2] >>= _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_01_func_1508736266(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xe] <<= _activatnvar_confusing_chararray_a[0x5];

}

void _activation_check_proc_01_func_925813478()
{
	
}

void _activation_check_proc_01_func_2027175091(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("dadc1da9-aa49-d92c-32fc-f1a84caf7905");

}

void _activation_check_proc_01_func_2106689315(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_chararray_6[0xb];

	_activation_check_proc_01_func_2027175091(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_01_func_1839559749(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_f *= _activatnvar_confusing_int_d;

}

void _activation_check_proc_01_func_1344899043(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 108; _activatnvar_strbuf_0[0] ^= 93; _activatnvar_strbuf_0[1] = 17; _activatnvar_strbuf_0[1] ^= 33; _activatnvar_strbuf_0[2] = 4; _activatnvar_strbuf_0[2] ^= 55; _activatnvar_strbuf_0[3] = 7; _activatnvar_strbuf_0[3] ^= 51; _activatnvar_strbuf_0[4] = 65; _activatnvar_strbuf_0[4] ^= 35; _activatnvar_strbuf_0[5] = 103; _activatnvar_strbuf_0[5] ^= 1; _activatnvar_strbuf_0[6] = 9; _activatnvar_strbuf_0[6] ^= 111; _activatnvar_strbuf_0[7] = 66; _activatnvar_strbuf_0[7] ^= 116; _activatnvar_strbuf_0[8] = 63; _activatnvar_strbuf_0[8] ^= 18; _activatnvar_strbuf_0[9] = 0; _activatnvar_strbuf_0[9] ^= 98; _activatnvar_strbuf_0[10] = 72; _activatnvar_strbuf_0[10] ^= 127; _activatnvar_strbuf_0[11] = 31; _activatnvar_strbuf_0[11] ^= 43; _activatnvar_strbuf_0[12] = 102; _activatnvar_strbuf_0[12] ^= 86; _activatnvar_strbuf_0[13] = 96; _activatnvar_strbuf_0[13] ^= 77; _activatnvar_strbuf_0[14] = 53; _activatnvar_strbuf_0[14] ^= 5; _activatnvar_strbuf_0[15] = 64; _activatnvar_strbuf_0[15] ^= 38; _activatnvar_strbuf_0[16] = 47; _activatnvar_strbuf_0[16] ^= 77; _activatnvar_strbuf_0[17] = 87; _activatnvar_strbuf_0[17] ^= 51; _activatnvar_strbuf_0[18] = 108; _activatnvar_strbuf_0[18] ^= 65; _activatnvar_strbuf_0[19] = 18; _activatnvar_strbuf_0[19] ^= 35; _activatnvar_strbuf_0[20] = 51; _activatnvar_strbuf_0[20] ^= 80; _activatnvar_strbuf_0[21] = 43; _activatnvar_strbuf_0[21] ^= 73; _activatnvar_strbuf_0[22] = 61; _activatnvar_strbuf_0[22] ^= 91; _activatnvar_strbuf_0[23] = 84; _activatnvar_strbuf_0[23] ^= 121; _activatnvar_strbuf_0[24] = 96; _activatnvar_strbuf_0[24] ^= 84; _activatnvar_strbuf_0[25] = 0; _activatnvar_strbuf_0[25] ^= 54; _activatnvar_strbuf_0[26] = 112; _activatnvar_strbuf_0[26] ^= 69; _activatnvar_strbuf_0[27] = 115; _activatnvar_strbuf_0[27] ^= 16; _activatnvar_strbuf_0[28] = 92; _activatnvar_strbuf_0[28] ^= 108; _activatnvar_strbuf_0[29] = 9; _activatnvar_strbuf_0[29] ^= 56; _activatnvar_strbuf_0[30] = 73; _activatnvar_strbuf_0[30] ^= 45; _activatnvar_strbuf_0[31] = 64; _activatnvar_strbuf_0[31] ^= 114; _activatnvar_strbuf_0[32] = 44; _activatnvar_strbuf_0[32] ^= 29; _activatnvar_strbuf_0[33] = 114; _activatnvar_strbuf_0[33] ^= 16; _activatnvar_strbuf_0[34] = 126; _activatnvar_strbuf_0[34] ^= 26; _activatnvar_strbuf_0[35] = 87; _activatnvar_strbuf_0[35] ^= 98; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_01_func_401452394(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_351260344(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_01_func_893748618(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_5 ^= _activatnvar_confusing_int_4;

	/* inline */ _activation_check_proc_01_func_1803141232(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_01_func_812011627(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_01_func_1161057377(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_01_func_885351700();
}

void _activation_check_proc_01_func_1807109713(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_chararray_4[0xd];

}

void _activation_check_proc_01_func_957582692(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_725307470(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] |= _activatnvar_secret.mData[0xb];

	/* inline */ _activation_check_proc_01_func_1274234309(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_01_func_1172211587(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_0[0x1] &= _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_01_func_939713810(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 86; _activatnvar_strbuf_0[0] ^= 99; _activatnvar_strbuf_0[1] = 108; _activatnvar_strbuf_0[1] ^= 88; _activatnvar_strbuf_0[2] = 56; _activatnvar_strbuf_0[2] ^= 8; _activatnvar_strbuf_0[3] = 39; _activatnvar_strbuf_0[3] ^= 21; _activatnvar_strbuf_0[4] = 4; _activatnvar_strbuf_0[4] ^= 55; _activatnvar_strbuf_0[5] = 42; _activatnvar_strbuf_0[5] ^= 26; _activatnvar_strbuf_0[6] = 106; _activatnvar_strbuf_0[6] ^= 82; _activatnvar_strbuf_0[7] = 32; _activatnvar_strbuf_0[7] ^= 16; _activatnvar_strbuf_0[8] = 35; _activatnvar_strbuf_0[8] ^= 14; _activatnvar_strbuf_0[9] = 115; _activatnvar_strbuf_0[9] ^= 67; _activatnvar_strbuf_0[10] = 67; _activatnvar_strbuf_0[10] ^= 115; _activatnvar_strbuf_0[11] = 105; _activatnvar_strbuf_0[11] ^= 81; _activatnvar_strbuf_0[12] = 115; _activatnvar_strbuf_0[12] ^= 66; _activatnvar_strbuf_0[13] = 106; _activatnvar_strbuf_0[13] ^= 71; _activatnvar_strbuf_0[14] = 56; _activatnvar_strbuf_0[14] ^= 8; _activatnvar_strbuf_0[15] = 116; _activatnvar_strbuf_0[15] ^= 70; _activatnvar_strbuf_0[16] = 25; _activatnvar_strbuf_0[16] ^= 41; _activatnvar_strbuf_0[17] = 61; _activatnvar_strbuf_0[17] ^= 5; _activatnvar_strbuf_0[18] = 49; _activatnvar_strbuf_0[18] ^= 28; _activatnvar_strbuf_0[19] = 45; _activatnvar_strbuf_0[19] ^= 29; _activatnvar_strbuf_0[20] = 126; _activatnvar_strbuf_0[20] ^= 26; _activatnvar_strbuf_0[21] = 82; _activatnvar_strbuf_0[21] ^= 98; _activatnvar_strbuf_0[22] = 77; _activatnvar_strbuf_0[22] ^= 46; _activatnvar_strbuf_0[23] = 17; _activatnvar_strbuf_0[23] ^= 60; _activatnvar_strbuf_0[24] = 4; _activatnvar_strbuf_0[24] ^= 52; _activatnvar_strbuf_0[25] = 11; _activatnvar_strbuf_0[25] ^= 57; _activatnvar_strbuf_0[26] = 57; _activatnvar_strbuf_0[26] ^= 13; _activatnvar_strbuf_0[27] = 120; _activatnvar_strbuf_0[27] ^= 27; _activatnvar_strbuf_0[28] = 15; _activatnvar_strbuf_0[28] ^= 55; _activatnvar_strbuf_0[29] = 90; _activatnvar_strbuf_0[29] ^= 98; _activatnvar_strbuf_0[30] = 124; _activatnvar_strbuf_0[30] ^= 78; _activatnvar_strbuf_0[31] = 79; _activatnvar_strbuf_0[31] ^= 122; _activatnvar_strbuf_0[32] = 104; _activatnvar_strbuf_0[32] ^= 80; _activatnvar_strbuf_0[33] = 19; _activatnvar_strbuf_0[33] ^= 34; _activatnvar_strbuf_0[34] = 54; _activatnvar_strbuf_0[34] ^= 3; _activatnvar_strbuf_0[35] = 34; _activatnvar_strbuf_0[35] ^= 19; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_01_func_1164180760(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_a.mData[0xa] >>= _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_01_func_2024348237(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, char* _activatnvar_strbuf_0)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_01_func_939713810(_activatnvar_strbuf_0);
	_activation_check_proc_01_func_1164180760(_activatnvar_confusing_LLUUID_a, _activatnvar_fscked);
}

void _activation_check_proc_01_func_1373832553(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_01_func_142877805(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_f.mData[0x9];

}

void _activation_check_proc_01_func_1970238378(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_01_func_330165963(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_f)
{
	
	_activation_check_proc_01_func_142877805(_activatnvar_confusing_char_8, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_01_func_1970238378(_activatnvar_confusing_U8_f, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_01_func_353338632(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_01_func_1527540448(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xa] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_01_func_24856789(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_01_func_1521109800(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xa] ^= _activatnvar_section1.mData[0x6];

}

void _activation_check_proc_01_func_117787663(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_106216779(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_0++;

	/* inline */ _activation_check_proc_01_func_294361174(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_01_func_1486889063(_activatnvar_confusing_char_f, _activatnvar_confusing_char_e);
}

void _activation_check_proc_01_func_1486889063(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e *= _activatnvar_confusing_char_f;

}

void _activation_check_proc_01_func_408898008(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_6[0x2] >>= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_01_func_168550298()
{
	
}

void _activation_check_proc_01_func_1853144476(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_01_func_1846223702(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_01_func_2085474204(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_01_func_1185891666(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_lace);
}

void _activation_check_proc_01_func_1185891666(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_377245610(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_01_func_1293328020(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_01_func_1385471392(_activatnvar_confusing_char_2);
}

void _activation_check_proc_01_func_1679540243(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_01_func_938088000(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] += _activatnvar_confusing_chararray_5[0x6];

}

void _activation_check_proc_01_func_1356920823(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	
	/* inline */ _activation_check_proc_01_func_1428056408(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_01_func_582457798(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_0, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x6] >>= _activatnvar_confusing_LLUUID_1.mData[0x2];

	/* inline */ _activation_check_proc_01_func_1197365308(_activatnvar_confusing_int_9, _activatnvar_confusing_int_0);
}

void _activation_check_proc_01_func_1592394071(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_c.mData[0x2] += _activatnvar_secret.mData[0x2];

}

void _activation_check_proc_01_func_2086867030(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

	_activation_check_proc_01_func_1513899494(_activatnvar_confusing_LLUUID_8, _activatnvar_code);
}

void _activation_check_proc_01_func_1513899494(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_8.mData[0x4] = _activatnvar_code.mData[0x1];

}

void _activation_check_proc_01_func_655550091(bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_01_func_1794200265(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x3] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_01_func_23933783(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_U8_7;

	_activation_check_proc_01_func_1794200265(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_7, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_01_func_326523371(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_13653168(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1018003134(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xf] &= _activatnvar_confusing_LLUUID_c.mData[0xb];

	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_01_func_1796919822(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xf] &= _activatnvar_confusing_chararray_1[0x5];

}

void _activation_check_proc_01_func_1145073881(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_b <<= _activatnvar_confusing_chararray_9[0xd];

	/* inline */ _activation_check_proc_01_func_1529249228();
}

void _activation_check_proc_01_func_906821790(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_01_func_519193654(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_01_func_1527410268(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_01_func_73211342(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_combined_id;

	_activation_check_proc_01_func_519193654(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_01_func_1527410268(_activatnvar_confusing_int_2, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_01_func_61700409(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_section1;

	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_2 += _activatnvar_confusing_char_e;

	/* inline */ _activation_check_proc_01_func_1764524238(_activatnvar_confusing_int_b);
}

void _activation_check_proc_01_func_1629594357(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_01_func_843673351(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_01_func_1933702535(_activatnvar_feat, _activatnvar_doaccount, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_01_func_1629594357(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_01_func_1933702535(char& _activatnvar_feat, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_01_func_756365128(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_01_func_1921761967(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_01_func_1106803192(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_4.mData[0x6];

}

void _activation_check_proc_01_func_225328320(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xc] == 0xf) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_01_func_516601111(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_603936755(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_250831847(int& _activatnvar_generic_iterator, LLMD5*& _activatnvar_nmd5, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, std::string& _activatnvar_fullname)
{
	_activatnvar_confusing_U8_2 &= 0x2;

	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_4;

	_activation_check_proc_01_func_603936755(_activatnvar_generic_iterator);
	_activation_check_proc_01_func_516601111(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_01_func_429240750(_activatnvar_fullname);
	/* inline */ _activation_check_proc_01_func_967061172(_activatnvar_nmd5, _activatnvar_fullname);
	_activation_check_proc_01_func_933880546(_activatnvar_name_digest, _activatnvar_nmd5);
}

void _activation_check_proc_01_func_933880546(unsigned char* _activatnvar_name_digest, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_01_func_1078861634(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_01_func_1654033653(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("0c648262-e991-15ab-a9f4-b7a8093fc53f");

}

void _activation_check_proc_01_func_729210954(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 25; _activatnvar_strbuf_0[0] ^= 47; _activatnvar_strbuf_0[1] = 49; _activatnvar_strbuf_0[1] ^= 1; _activatnvar_strbuf_0[2] = 88; _activatnvar_strbuf_0[2] ^= 108; _activatnvar_strbuf_0[3] = 79; _activatnvar_strbuf_0[3] ^= 126; _activatnvar_strbuf_0[4] = 19; _activatnvar_strbuf_0[4] ^= 32; _activatnvar_strbuf_0[5] = 38; _activatnvar_strbuf_0[5] ^= 69; _activatnvar_strbuf_0[6] = 5; _activatnvar_strbuf_0[6] ^= 53; _activatnvar_strbuf_0[7] = 38; _activatnvar_strbuf_0[7] ^= 20; _activatnvar_strbuf_0[8] = 28; _activatnvar_strbuf_0[8] ^= 49; _activatnvar_strbuf_0[9] = 31; _activatnvar_strbuf_0[9] ^= 47; _activatnvar_strbuf_0[10] = 72; _activatnvar_strbuf_0[10] ^= 122; _activatnvar_strbuf_0[11] = 113; _activatnvar_strbuf_0[11] ^= 69; _activatnvar_strbuf_0[12] = 40; _activatnvar_strbuf_0[12] ^= 30; _activatnvar_strbuf_0[13] = 59; _activatnvar_strbuf_0[13] ^= 22; _activatnvar_strbuf_0[14] = 119; _activatnvar_strbuf_0[14] ^= 71; _activatnvar_strbuf_0[15] = 70; _activatnvar_strbuf_0[15] ^= 118; _activatnvar_strbuf_0[16] = 48; _activatnvar_strbuf_0[16] ^= 3; _activatnvar_strbuf_0[17] = 33; _activatnvar_strbuf_0[17] ^= 17; _activatnvar_strbuf_0[18] = 1; _activatnvar_strbuf_0[18] ^= 44; _activatnvar_strbuf_0[19] = 64; _activatnvar_strbuf_0[19] ^= 114; _activatnvar_strbuf_0[20] = 88; _activatnvar_strbuf_0[20] ^= 105; _activatnvar_strbuf_0[21] = 60; _activatnvar_strbuf_0[21] ^= 12; _activatnvar_strbuf_0[22] = 8; _activatnvar_strbuf_0[22] ^= 49; _activatnvar_strbuf_0[23] = 14; _activatnvar_strbuf_0[23] ^= 35; _activatnvar_strbuf_0[24] = 28; _activatnvar_strbuf_0[24] ^= 36; _activatnvar_strbuf_0[25] = 30; _activatnvar_strbuf_0[25] ^= 38; _activatnvar_strbuf_0[26] = 69; _activatnvar_strbuf_0[26] ^= 112; _activatnvar_strbuf_0[27] = 79; _activatnvar_strbuf_0[27] ^= 126; _activatnvar_strbuf_0[28] = 123; _activatnvar_strbuf_0[28] ^= 79; _activatnvar_strbuf_0[29] = 24; _activatnvar_strbuf_0[29] ^= 33; _activatnvar_strbuf_0[30] = 114; _activatnvar_strbuf_0[30] ^= 66; _activatnvar_strbuf_0[31] = 34; _activatnvar_strbuf_0[31] ^= 67; _activatnvar_strbuf_0[32] = 122; _activatnvar_strbuf_0[32] ^= 25; _activatnvar_strbuf_0[33] = 20; _activatnvar_strbuf_0[33] ^= 44; _activatnvar_strbuf_0[34] = 28; _activatnvar_strbuf_0[34] ^= 121; _activatnvar_strbuf_0[35] = 4; _activatnvar_strbuf_0[35] ^= 55; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_01_func_2016497245(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_f[0xf] = _activatnvar_confusing_chararray_9[0xe];

	_activation_check_proc_01_func_1348154923(_activatnvar_confusing_bool_4, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_01_func_1348154923(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] != 0x3) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_01_func_68069775(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_d <<= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_01_func_1172648283(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_01_func_970343433();
	/* inline */ _activation_check_proc_01_func_1018272499(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_d);
	/* inline */ _activation_check_proc_01_func_268352180(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_01_func_2090746851(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_01_func_1467496529(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_01_func_970343433()
{
	
}

void _activation_check_proc_01_func_2090746851(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x2] >>= _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_01_func_960835004(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_6[0xf] *= _activatnvar_confusing_chararray_5[0x9];

}

void _activation_check_proc_01_func_252110067(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_LLUUID_c.mData[0xf];

}

void _activation_check_proc_01_func_1612233747(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_01_func_100620049(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_2;

	/* inline */ _activation_check_proc_01_func_96029557(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_01_func_1131224478(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xe] += _activatnvar_ser_digest[0xc];

}

void _activation_check_proc_01_func_1818608238(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x8] *= _activatnvar_section2.mData[0x0];

}

void _activation_check_proc_01_func_96371523(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_01_func_1818608238(_activatnvar_section2, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_01_func_1854252040(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] |= _activatnvar_confusing_chararray_a[0xa];

}

void _activation_check_proc_01_func_908546564(bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_01_func_729753450(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("9b43f398-de44-24e2-de88-15a85c49306f");

}

void _activation_check_proc_01_func_1173016075(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_01_func_1068007681(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 <<= 0x6;

}

void _activation_check_proc_01_func_361698404(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_395251279(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_0 += _activatnvar_confusing_U8_5;

}

void _activation_check_proc_01_func_1878308983(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] <<= _activatnvar_confusing_chararray_e[0xf];

	_activation_check_proc_01_func_1154000427(_activatnvar_confusing_chararray_0, _activatnvar_fscked, _activatnvar_code, _activatnvar_confusing_LLUUID_1, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_01_func_1527571913(_activatnvar_generic_iterator);
	_activation_check_proc_01_func_395251279(_activatnvar_confusing_U8_5, _activatnvar_confusing_bool_0, _activatnvar_confusing_U8_0);
	/* inline */ _activation_check_proc_01_func_247336470(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_01_func_1154000427(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] *= _activatnvar_confusing_chararray_0[0x3];

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_2120521351(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_01_func_1254449914(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_01_func_1254449914(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xa] += _activatnvar_confusing_chararray_c[0x8];

}

void _activation_check_proc_01_func_1139269623(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_01_func_1867782608(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1513491637(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_2015296909(bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_1)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_01_func_881873724(_activatnvar_generic_iterator);
	_activation_check_proc_01_func_1610178901(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_01_func_1610178901(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xa] += _activatnvar_confusing_chararray_1[0x2];

}

void _activation_check_proc_01_func_881873724(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1502065371(int& _activatnvar_confusing_int_9, U8& _activatnvar_t0, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("59e9c4db-6ea0-1b92-9210-175ad3202d75");

	_activation_check_proc_01_func_214469901(_activatnvar_t0);
	/* inline */ _activation_check_proc_01_func_1319502528(_activatnvar_confusing_int_a, _activatnvar_confusing_int_9);
}

void _activation_check_proc_01_func_214469901(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_01_func_1730137155(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1588720936(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_998288736(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_7[0xe] = _activatnvar_confusing_chararray_b[0xa];

}

void _activation_check_proc_01_func_1527310807(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_553150640(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_01_func_304627887(int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("768dca8a-b618-155a-150b-0fbc7fb34254");

	_activation_check_proc_01_func_553150640(_activatnvar_confusing_int_0);
}

void _activation_check_proc_01_func_2137779894(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_01_func_852557996(bool& _activatnvar_confusing_bool_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_01_func_406314572(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_b, _activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_744784469(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_2074807823(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 >>= _activatnvar_confusing_chararray_7[0xe];

}

void _activation_check_proc_01_func_1628338220(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_b ^= 0xd;

}

void _activation_check_proc_01_func_1445023766(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_6;

	_activatnvar_confusing_chararray_3[0x4] >>= _activatnvar_secret.mData[0x4];

}

void _activation_check_proc_01_func_653592408(U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_int_e >>= _activatnvar_confusing_int_a;

	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_a *= 0x0;

}

void _activation_check_proc_01_func_951740040(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_f <<= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_01_func_34830949(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_d >>= _activatnvar_confusing_chararray_3[0x2];

}

void _activation_check_proc_01_func_1297586429(LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_01_func_1022785387(_activatnvar_confusing_int_a);
}

void _activation_check_proc_01_func_1423410200()
{
	
}

void _activation_check_proc_01_func_63447519(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
	/* inline */ _activation_check_proc_01_func_734532109(_activatnvar_lace, _activatnvar_fscked);
	_activation_check_proc_01_func_1423410200();
	/* inline */ _activation_check_proc_01_func_401199579(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_01_func_1388512276(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1849986826(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_01_func_1652552762(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_01_func_1116149274(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_01_func_1648715031(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_f.mData[0x8] |= _activatnvar_confusing_LLUUID_8.mData[0x4];

	_activation_check_proc_01_func_1116149274(_activatnvar_confusing_int_6);
}

void _activation_check_proc_01_func_918204960(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_01_func_1612801626(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1234976750(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1831304915(int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_d, char* _activatnvar_strbuf_0)
{
	_activatnvar_confusing_int_d = _activatnvar_confusing_int_a;

	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_01_func_1932650659(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_1932650659(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_01_func_109484106(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_code;

}

void _activation_check_proc_01_func_1558093121(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_01_func_282045464(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_code.mData[0x3];

}

void _activation_check_proc_01_func_1356946698(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 <<= _activatnvar_confusing_int_1;

}

void _activation_check_proc_01_func_677157262(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] += _activatnvar_confusing_LLUUID_b.mData[0x9];

}

void _activation_check_proc_01_func_152952980(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_lace.mData[0xe];

	/* inline */ _activation_check_proc_01_func_1333775740(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_01_func_1296705044(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_01_func_1664803272(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x0] |= _activatnvar_section1.mData[0x3];

}

void _activation_check_proc_01_func_2123517050(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_6[0x5] ^= _activatnvar_confusing_LLUUID_e.mData[0x9];

	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_LLUUID_6.mData[0xf];

	_activation_check_proc_01_func_1664803272(_activatnvar_section1, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_01_func_1228454380(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_01_func_238625651(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_01_func_451967732(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xf] >>= _activatnvar_confusing_LLUUID_4.mData[0x8];

}

void _activation_check_proc_01_func_33938006(LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] ^= _activatnvar_secret.mData[0x2];

	if(_activatnvar_confusing_LLUUID_b.mData[0xe] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_01_func_828395980(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_code;

}

void _activation_check_proc_01_func_1051995027(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_01_func_152755106(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x3] &= _activatnvar_confusing_LLUUID_0.mData[0x5];

}

void _activation_check_proc_01_func_439947370(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1215181051(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_01_func_2031194925(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
}

void _activation_check_proc_01_func_2031194925(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_104329720(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_chararray_f[0xb];

	/* inline */ _activation_check_proc_01_func_117978186(_activatnvar_confusing_U8_6, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_01_func_1669797509(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = 0xd;

}

void _activation_check_proc_01_func_1270076505(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_d = true;

	_activation_check_proc_01_func_1669797509(_activatnvar_confusing_char_c);
}

void _activation_check_proc_01_func_1160134196(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_01_func_391547510(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x0] == _activatnvar_confusing_char_6) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_01_func_548954397(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_01_func_651371752(LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = _activatnvar_confusing_int_f;

	_activation_check_proc_01_func_1729909911(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_01_func_1729909911(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("6d894d3c-5009-99dd-e4d9-0b1621cdb197");

}

void _activation_check_proc_01_func_183678500(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xe] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_01_func_1260067619(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_1 ^= 0x9;

	_activation_check_proc_01_func_183678500(_activatnvar_confusing_char_4, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_01_func_1608866636(_activatnvar_confusing_bool_9, _activatnvar_confusing_char_8);
}

void _activation_check_proc_01_func_1065282385(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_section1)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
	/* inline */ _activation_check_proc_01_func_1053391714(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_01_func_514518415(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_01_func_2143909402(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= 0x5;

}

void _activation_check_proc_01_func_1084894622(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x3] &= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_01_func_233966538(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_01_func_1791041948(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_01_func_145907397(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_0[0x9] <<= _activatnvar_section2.mData[0xc];

}

void _activation_check_proc_01_func_590061551(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_254113307(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("769438f0-b0cf-128f-d471-06b6c5dc5cbc");

}

void _activation_check_proc_01_func_313604599(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_01_func_1704453523(LLUUID& _activatnvar_so, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_t1)
{
	_activatnvar_confusing_chararray_d[0xf] |= _activatnvar_confusing_chararray_c[0x4];

	_activation_check_proc_01_func_313604599(_activatnvar_t1, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_01_func_1402445907(U8& _activatnvar_confusing_U8_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x7] != 0x9) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_01_func_1052279781(_activatnvar_generic_iterator);
	_activation_check_proc_01_func_923706578(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_01_func_923706578(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_01_func_1052279781(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1019644666(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_chararray_0[0x8];

	_activation_check_proc_01_func_1934394842(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_01_func_1934394842(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("c26b85bb-404a-5a35-ca74-9b07d8b51110");

}

void _activation_check_proc_01_func_1071596031()
{
	
}

void _activation_check_proc_01_func_814441879(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_f[0x5] |= _activatnvar_confusing_LLUUID_6.mData[0x8];

}

void _activation_check_proc_01_func_922736610(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_5 = _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_01_func_125168844(int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_e[0x7] *= _activatnvar_name_digest[0xf];

	_activation_check_proc_01_func_922736610(_activatnvar_confusing_U8_5, _activatnvar_combined_id);
	_activation_check_proc_01_func_758124809(_activatnvar_confusing_int_b);
	_activation_check_proc_01_func_814441879(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_01_func_758124809(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_01_func_1090141715(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_c[0x8] += _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_01_func_1384678788(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_8)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_7 ^= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_01_func_82277087(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_7 = false;

	_activation_check_proc_01_func_1048867813(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_6);
}

void _activation_check_proc_01_func_1048867813(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_3.mData[0x2];

}

void _activation_check_proc_01_func_1318329610(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0x4;

	/* inline */ _activation_check_proc_01_func_179754611(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_141509100(U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_char_f;

	
}

void _activation_check_proc_01_func_1697727702(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_c)
{
	
	_activation_check_proc_01_func_1546622173(_activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_01_func_141509100(_activatnvar_confusing_U8_2, _activatnvar_confusing_char_f);
}

void _activation_check_proc_01_func_1546622173(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_2.mData[0xb];

}

void _activation_check_proc_01_func_1120041435(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_0;

	_activation_check_proc_01_func_1036499734(_activatnvar_confusing_char_8, _activatnvar_confusing_char_d);
}

void _activation_check_proc_01_func_1036499734(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_8 <<= _activatnvar_confusing_char_d;

}

void _activation_check_proc_01_func_1249142369(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("413d58d0-6b25-b454-7fbf-deeb6d650351");

}

void _activation_check_proc_01_func_323636158(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_01_func_205793825(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xb] *= _activatnvar_confusing_chararray_9[0x1];

	_activation_check_proc_01_func_323636158(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_6);
	/* inline */ _activation_check_proc_01_func_556836170(_activatnvar_lace, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_01_func_243800395(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_3)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_3 ^= 0xb;

}

void _activation_check_proc_01_func_1008826284(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_LLUUID_b.mData[0x3] |= _activatnvar_section2.mData[0x1];

	/* inline */ _activation_check_proc_01_func_1396382390(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_01_func_1959568515(DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_gvi_flags = 0;
}

void _activation_check_proc_01_func_1130548626(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_01_func_1011118504(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1508647859()
{
	
}

void _activation_check_proc_01_func_36037749(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_27868643(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_e, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_e |= _activatnvar_confusing_char_5;

	_activation_check_proc_01_func_36037749(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
}

void _activation_check_proc_01_func_893547219(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_01_func_1922996230(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_2012572844(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_0 = _activatnvar_section2.mData[0x7];

}

void _activation_check_proc_01_func_1300547188(U8& _activatnvar_confusing_U8_c, U8& _activatnvar_t1)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_t1;

}

void _activation_check_proc_01_func_261012903(bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_01_func_2028969322(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_e;

	_activation_check_proc_01_func_326742681(_activatnvar_confusing_U8_b);
}

void _activation_check_proc_01_func_326742681(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_01_func_1437088121(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_f.mData[0xe] *= _activatnvar_mac_digest[0x2];

}

void _activation_check_proc_01_func_656547571(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_7.mData[0x8] &= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_01_func_397571600(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("555b798e-43c6-5879-b097-c73273688664");

}

void _activation_check_proc_01_func_619437889(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_01_func_2097339191(char& _activatnvar_confusing_char_5, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_01_func_619437889(_activatnvar_confusing_char_5);
	_activation_check_proc_01_func_1043218926(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_code, _activatnvar_fscked);
	/* inline */ _activation_check_proc_01_func_455212636(_activatnvar_generic_iterator);
	_activation_check_proc_01_func_397571600(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_01_func_1043218926(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1048790571(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_8 ^= _activatnvar_confusing_char_7;

}

void _activation_check_proc_01_func_157334955(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_01_func_465520711(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_U8_9;

}

void _activation_check_proc_01_func_1507341879(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c |= _activatnvar_confusing_LLUUID_6.mData[0x1];

}

void _activation_check_proc_01_func_833665297(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("946825b7-3e04-0cd1-2418-3a0dd730b911");

}

void _activation_check_proc_01_func_1281442571(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_01_func_833665297(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_01_func_1218917982(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_01_func_1787002004(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

	/* inline */ _activation_check_proc_01_func_1972093603(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_01_func_1041019649(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_3 <<= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_01_func_1901628343(unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_4, U8& _activatnvar_pos)
{
	_activatnvar_confusing_chararray_2[0x1] >>= _activatnvar_confusing_LLUUID_1.mData[0x0];

	/* inline */ _activation_check_proc_01_func_2119749028(_activatnvar_confusing_int_3, _activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_01_func_610259542(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_01_func_1118670418(int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("9439337a-fd08-35ce-feb9-f1c2fa3f9213");

	/* inline */ _activation_check_proc_01_func_323855076(_activatnvar_confusing_int_5);
}

void _activation_check_proc_01_func_620096715(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_01_func_400039560(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("a61f789d-dc3f-310d-09b0-17f8052413e4");

}

void _activation_check_proc_01_func_1909689683(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_01_func_336131299(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_01_func_1401540557(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_01_func_611697047(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_701277680(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 >>= _activatnvar_confusing_chararray_1[0x5];

}

void _activation_check_proc_01_func_534804528(U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 ^= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_01_func_68286341(int& _activatnvar_confusing_int_e)
{
	
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_01_func_246797003(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_6[0x4] = _activatnvar_confusing_LLUUID_4.mData[0x1];

}

void _activation_check_proc_01_func_1281771566(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_2.mData[0x5] >>= _activatnvar_confusing_LLUUID_c.mData[0x2];

	/* inline */ _activation_check_proc_01_func_116727711(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_6);
	_activation_check_proc_01_func_1388175499(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_01_func_1388175499(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("7e373980-901e-ecaf-03cc-65830e47c2fc");

}

void _activation_check_proc_01_func_1253900360(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)0x7f;
	/* inline */ _activation_check_proc_01_func_1886012819(_activatnvar_t1, _activatnvar_t0);
}

void _activation_check_proc_01_func_1197804557(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_2116236703(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xe;

}

void _activation_check_proc_01_func_1094780655(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_981048247(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_2[0xa] = _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_01_func_2112084767(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d += 0xa;

}

void _activation_check_proc_01_func_1681584728(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_01_func_1596784005(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
}

void _activation_check_proc_01_func_1134854144(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_01_func_808739438(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	
	_activation_check_proc_01_func_1134854144(_activatnvar_lace, _activatnvar_fscked);
	_activation_check_proc_01_func_1596784005(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_01_func_1109367895(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_01_func_1169179013(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_649607391(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_01_func_905934363(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("be05b409-acbb-b874-7b7b-b529cc1bc28a");

}

void _activation_check_proc_01_func_1590346570(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 += 0x4;

}

void _activation_check_proc_01_func_1181913110(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_0 = _activatnvar_code.mData[0x7];

	_activation_check_proc_01_func_905934363(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_01_func_1590346570(_activatnvar_confusing_int_2);
}

void _activation_check_proc_01_func_632764289(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] ^= _activatnvar_confusing_chararray_d[0x9];

}

void _activation_check_proc_01_func_2119686680()
{
	
}

void _activation_check_proc_01_func_912459954(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d += _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_01_func_156024941(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] >>= _activatnvar_confusing_LLUUID_5.mData[0x2];

}

void _activation_check_proc_01_func_952065170(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_01_func_1910983355(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f *= _activatnvar_confusing_chararray_2[0xf];

}

void _activation_check_proc_01_func_746893798(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator = 4;
	/* inline */ _activation_check_proc_01_func_106634346(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_01_func_1056663197(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d |= 0x4;

}

void _activation_check_proc_01_func_983413045(U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_01_func_1056663197(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_01_func_1914689208(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_01_func_509182907(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_0.mData[0x4] += _activatnvar_confusing_LLUUID_c.mData[0x1];

	/* inline */ _activation_check_proc_01_func_2061484852(_activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_01_func_870731770(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_01_func_186760257(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_01_func_1758955725(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_01_func_1245255280(U8& _activatnvar_pos, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_chararray_b[0x5];

	_activation_check_proc_01_func_1758955725(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_1412838602(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_01_func_597477387(int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_b >>= _activatnvar_generic_iterator;

}

void _activation_check_proc_01_func_604939939(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_01_func_2113525617(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_01_func_1799565061(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_2 |= _activatnvar_confusing_char_0;

	/* inline */ _activation_check_proc_01_func_2007791748(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_01_func_1116318767(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_01_func_168074934(_activatnvar_confusing_LLUUID_d);
	_activation_check_proc_01_func_242443800(_activatnvar_confusing_char_5, _activatnvar_confusing_U8_6, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_01_func_242443800(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_5 *= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_01_func_2068501872(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_01_func_1660221746(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x6] >>= _activatnvar_confusing_LLUUID_c.mData[0xb];

}

void _activation_check_proc_01_func_1025108188(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("9428ecce-3e06-5a1f-ffb4-c071caa68e32");

}

void _activation_check_proc_01_func_1139015438(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_c;

	_activation_check_proc_01_func_983449590(_activatnvar_t0);
	/* inline */ _activation_check_proc_01_func_1458598219(_activatnvar_confusing_U8_9, _activatnvar_doaccount);
}

void _activation_check_proc_01_func_983449590(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_01_func_287646198(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_a)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xa] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_01_func_731019747(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] |= _activatnvar_name_digest[0xe];

}

void _activation_check_proc_01_func_1184889454(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_01_func_1224244885(bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_01_func_1858483808(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_01_func_1669897801(_activatnvar_confusing_LLUUID_5);
	_activation_check_proc_01_func_1224244885(_activatnvar_confusing_bool_0);
}

void _activation_check_proc_01_func_1709523137(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_01_func_791420884(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_01_func_592704187(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_01_func_592704187(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1263230105(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_1.mData[0xd] ^= _activatnvar_confusing_chararray_0[0x8];

	/* inline */ _activation_check_proc_01_func_138570593(_activatnvar_confusing_char_1, _activatnvar_confusing_char_3);
}

void _activation_check_proc_01_func_1383646482(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xf] += _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_01_func_979945497(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_01_func_1461312536(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_01_func_1210947137(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_e, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
	_activation_check_proc_01_func_1461312536(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_01_func_2035190335(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_d, _activatnvar_confusing_U8_4, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_01_func_979945497(_activatnvar_confusing_int_e);
}

void _activation_check_proc_01_func_2035190335(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xf] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_01_func_72963029(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_01_func_116604696(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_char_f;

}

void _activation_check_proc_01_func_711350011(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x6] &= _activatnvar_confusing_chararray_8[0x0];

	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_1.mData[0x9];

}

void _activation_check_proc_01_func_678720910(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_01_func_1368528153(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("58af92c3-ee05-a10d-f39f-9595c9ec4a07");

}

void _activation_check_proc_01_func_626545816(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_0 <<= _activatnvar_confusing_int_2;

}

void _activation_check_proc_01_func_51449693(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("ea2f44b2-4277-5aa5-c9b7-7b3b8f90ec1b");

}

void _activation_check_proc_01_func_16714193(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_so;

}

void _activation_check_proc_01_func_192567277(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e <<= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_01_func_1160877055(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_combined_id;

	_activation_check_proc_01_func_192567277(_activatnvar_confusing_U8_0, _activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_01_func_1518367427(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_01_func_385187926(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_01_func_16714193(_activatnvar_confusing_LLUUID_4, _activatnvar_so);
}

void _activation_check_proc_01_func_1811787068(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_0)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x9] == 0x3) _activatnvar_confusing_bool_6 = false;

	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_01_func_1111395404(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f ^= 0x4;

}

void _activation_check_proc_01_func_643042406(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_01_func_1624773595(int& _activatnvar_confusing_int_5, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_01_func_340839236(_activatnvar_t0);
	/* inline */ _activation_check_proc_01_func_771890907(_activatnvar_confusing_int_5);
}

void _activation_check_proc_01_func_1579689239(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_6[0xd] = _activatnvar_section2.mData[0x0];

}

void _activation_check_proc_01_func_1156554923(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_a)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x3] == _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_01_func_2075721036(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_01_func_1800368936(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_3[0x3] &= _activatnvar_name_digest[0x1];

}

void _activation_check_proc_01_func_1079327480(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0x3;

	_activation_check_proc_01_func_1800368936(_activatnvar_confusing_chararray_3, _activatnvar_name_digest);
	/* inline */ _activation_check_proc_01_func_976739762(_activatnvar_confusing_U8_9, _activatnvar_confusing_chararray_3, _activatnvar_confusing_char_9);
}

void _activation_check_proc_01_func_1241385090(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_c.mData[0x2];

	/* inline */ _activation_check_proc_01_func_1955119439(_activatnvar_confusing_int_6);
	/* inline */ _activation_check_proc_01_func_801606882(_activatnvar_confusing_char_e, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_01_func_1377596938(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_01_func_1689298486(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_01_func_628165190(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_8 *= _activatnvar_confusing_chararray_1[0xd];

	_activation_check_proc_01_func_1689298486(_activatnvar_combined_id, _activatnvar_t0);
	_activation_check_proc_01_func_1377596938(_activatnvar_confusing_char_1);
}

void _activation_check_proc_01_func_1942941241(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x3] == _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_01_func_223298175(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] += _activatnvar_confusing_chararray_c[0xe];

	/* inline */ _activation_check_proc_01_func_616497220(_activatnvar_pos);
}

void _activation_check_proc_01_func_913476159(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xe] &= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_01_func_1659011119(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_01_func_1622257612(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_0[0x0] &= _activatnvar_confusing_LLUUID_c.mData[0xe];

}

void _activation_check_proc_01_func_1315016957(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0x3;

}

void _activation_check_proc_01_func_1407107894(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	/* inline */ _activation_check_proc_01_func_330869050(_activatnvar_lace, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_01_func_1559290344(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_01_func_1995897261(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_01_func_375926943(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_01_func_1610660281(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_01_func_1420473525(_activatnvar_confusing_LLUUID_1);
	_activation_check_proc_01_func_375926943(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_01_func_1391409930(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_917532940(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_01_func_1391409930(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_01_func_1635155794(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_01_func_1072352309(LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_8)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_7 = false;

	_activatnvar_confusing_U8_8 = _activatnvar_secret.mData[0x5];

}

void _activation_check_proc_01_func_919173176(bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] &= _activatnvar_confusing_chararray_6[0x7];

	/* inline */ _activation_check_proc_01_func_1124759174();
	/* inline */ _activation_check_proc_01_func_1806075712(_activatnvar_code, _activatnvar_confusing_chararray_f);
	_activation_check_proc_01_func_1072352309(_activatnvar_secret, _activatnvar_confusing_bool_9, _activatnvar_confusing_bool_7, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_01_func_2004431613(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_e += _activatnvar_confusing_U8_d;

	/* inline */ _activation_check_proc_01_func_290660977(_activatnvar_confusing_int_5, _activatnvar_confusing_int_2);
}

void _activation_check_proc_01_func_742816502(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_9;

	_activatnvar_confusing_LLUUID_f ^= _activatnvar_code;

	
}

void _activation_check_proc_01_func_1375562422(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_7.mData[0x7] >>= _activatnvar_confusing_LLUUID_0.mData[0x2];

}

void _activation_check_proc_01_func_1703155262(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_01_func_276785016(int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_3, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_3 = _activatnvar_confusing_int_1;

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_01_func_84700942(_activatnvar_confusing_char_5);
}

void _activation_check_proc_01_func_1527938225(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_3)
{
	
	/* inline */ _activation_check_proc_01_func_1125291306(_activatnvar_confusing_chararray_3, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_01_func_84685070(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_01_func_167158242(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 <<= _activatnvar_confusing_chararray_5[0xa];

	_activation_check_proc_01_func_84685070(_activatnvar_confusing_int_e);
}

void _activation_check_proc_01_func_139845281(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_01_func_1931363157(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x5] == _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_8;

	_activation_check_proc_01_func_139845281(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_01_func_239313439(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_01_func_1255830145(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 = _activatnvar_confusing_int_c;

}

void _activation_check_proc_01_func_1775177748(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_6, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_b, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_01_func_657388245(_activatnvar_fscked, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_01_func_250823490(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_01_func_205260202(_activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_01_func_35396911(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_2);
	_activation_check_proc_01_func_239313439(_activatnvar_confusing_U8_9);
	_activation_check_proc_01_func_1255830145(_activatnvar_confusing_int_c, _activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_01_func_725750747(_activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_01_func_1435670853(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b ^= 0xe;

	_activation_check_proc_01_func_1980654470(_activatnvar_confusing_int_8);
}

void _activation_check_proc_01_func_1980654470(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_01_func_355861539(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("088fad36-952f-52ff-e9f4-426b28197eea");

}

void _activation_check_proc_01_func_1433374863(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a |= _activatnvar_code.mData[0x9];

}

void _activation_check_proc_01_func_709352551(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_chararray_6[0x7] &= _activatnvar_confusing_LLUUID_0.mData[0xa];

	_activation_check_proc_01_func_1433374863(_activatnvar_code, _activatnvar_confusing_U8_a);
	_activation_check_proc_01_func_355861539(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_01_func_918231386(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_so, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_1)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	if(_activatnvar_confusing_LLUUID_b.mData[0x2] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_01_func_297183643(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_7[0x1] |= _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_01_func_1761262632(int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_01_func_909673238(_activatnvar_confusing_int_b);
}

void _activation_check_proc_01_func_2004955288(int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_01_func_1995222262(_activatnvar_confusing_int_b);
}

void _activation_check_proc_01_func_1907249638(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xe] != 0x6) _activatnvar_confusing_bool_3 = false;

	/* inline */ _activation_check_proc_01_func_1462833176(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_01_func_1812518547(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("663c1db7-0277-203f-e47e-5d23d7ecf750");

	_activation_check_proc_01_func_148230893(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_01_func_1621880759(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
	/* inline */ _activation_check_proc_01_func_1448194175(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_01_func_148230893(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_01_func_1621880759(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_01_func_165486205(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] += _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_01_func_933411057(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] &= _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_01_func_559474004(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_01_func_451624971(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_01_func_559474004(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_01_func_378498644(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_01_func_1980736309(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	/* inline */ _activation_check_proc_01_func_1022038172();
}

void _activation_check_proc_01_func_665503506(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_01_func_1287951311(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_5)
{
	
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_c.mData[0xd];

}

void _activation_check_proc_01_func_1644124628(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1005036594(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("7f415101-60c3-3b8a-2603-a9f8b9418689");

}

void _activation_check_proc_01_func_893272682(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_section2;

}

void _activation_check_proc_01_func_627661(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_01_func_513850360(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x9] = _activatnvar_confusing_chararray_e[0x6];

	/* inline */ _activation_check_proc_01_func_769317615(_activatnvar_generic_iterator);
	_activation_check_proc_01_func_55929028();
}

void _activation_check_proc_01_func_55929028()
{
	
}

void _activation_check_proc_01_func_588598360(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_919142167(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xc] != 0xb) _activatnvar_confusing_bool_f = false;

	_activation_check_proc_01_func_588598360(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_01_func_566159964(bool& _activatnvar_confusing_bool_f, char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_strbuf_0[0] = 98; _activatnvar_strbuf_0[0] ^= 90; _activatnvar_strbuf_0[1] = 26; _activatnvar_strbuf_0[1] ^= 120; _activatnvar_strbuf_0[2] = 51; _activatnvar_strbuf_0[2] ^= 80; _activatnvar_strbuf_0[3] = 92; _activatnvar_strbuf_0[3] ^= 105; _activatnvar_strbuf_0[4] = 40; _activatnvar_strbuf_0[4] ^= 28; _activatnvar_strbuf_0[5] = 8; _activatnvar_strbuf_0[5] ^= 60; _activatnvar_strbuf_0[6] = 32; _activatnvar_strbuf_0[6] ^= 18; _activatnvar_strbuf_0[7] = 119; _activatnvar_strbuf_0[7] ^= 66; _activatnvar_strbuf_0[8] = 10; _activatnvar_strbuf_0[8] ^= 39; _activatnvar_strbuf_0[9] = 117; _activatnvar_strbuf_0[9] ^= 69; _activatnvar_strbuf_0[10] = 24; _activatnvar_strbuf_0[10] ^= 41; _activatnvar_strbuf_0[11] = 52; _activatnvar_strbuf_0[11] ^= 2; _activatnvar_strbuf_0[12] = 45; _activatnvar_strbuf_0[12] ^= 29; _activatnvar_strbuf_0[13] = 49; _activatnvar_strbuf_0[13] ^= 28; _activatnvar_strbuf_0[14] = 69; _activatnvar_strbuf_0[14] ^= 117; _activatnvar_strbuf_0[15] = 85; _activatnvar_strbuf_0[15] ^= 101; _activatnvar_strbuf_0[16] = 82; _activatnvar_strbuf_0[16] ^= 106; _activatnvar_strbuf_0[17] = 100; _activatnvar_strbuf_0[17] ^= 86; _activatnvar_strbuf_0[18] = 75; _activatnvar_strbuf_0[18] ^= 102; _activatnvar_strbuf_0[19] = 38; _activatnvar_strbuf_0[19] ^= 21; _activatnvar_strbuf_0[20] = 116; _activatnvar_strbuf_0[20] ^= 70; _activatnvar_strbuf_0[21] = 13; _activatnvar_strbuf_0[21] ^= 61; _activatnvar_strbuf_0[22] = 109; _activatnvar_strbuf_0[22] ^= 95; _activatnvar_strbuf_0[23] = 64; _activatnvar_strbuf_0[23] ^= 109; _activatnvar_strbuf_0[24] = 95; _activatnvar_strbuf_0[24] ^= 60; _activatnvar_strbuf_0[25] = 103; _activatnvar_strbuf_0[25] ^= 95; _activatnvar_strbuf_0[26] = 57; _activatnvar_strbuf_0[26] ^= 9; _activatnvar_strbuf_0[27] = 107; _activatnvar_strbuf_0[27] ^= 89; _activatnvar_strbuf_0[28] = 6; _activatnvar_strbuf_0[28] ^= 54; _activatnvar_strbuf_0[29] = 63; _activatnvar_strbuf_0[29] ^= 13; _activatnvar_strbuf_0[30] = 54; _activatnvar_strbuf_0[30] ^= 15; _activatnvar_strbuf_0[31] = 118; _activatnvar_strbuf_0[31] ^= 70; _activatnvar_strbuf_0[32] = 4; _activatnvar_strbuf_0[32] ^= 52; _activatnvar_strbuf_0[33] = 26; _activatnvar_strbuf_0[33] ^= 34; _activatnvar_strbuf_0[34] = 124; _activatnvar_strbuf_0[34] ^= 76; _activatnvar_strbuf_0[35] = 102; _activatnvar_strbuf_0[35] ^= 84; _activatnvar_strbuf_0[36] = 0;
	_activation_check_proc_01_func_361448472(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_01_func_361448472(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_01_func_1430071667(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("1d652cc2-f46f-7795-841a-5879f34035d7");

}

void _activation_check_proc_01_func_1058880075(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_01_func_1787853285(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("6313bfa3-dd41-c9c2-323f-5f1f23a822a0");

	/* inline */ _activation_check_proc_01_func_1628951483(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_01_func_2049472687(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_e.mData[0xf] += _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_01_func_1496291701(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_01_func_2128970504(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xf] &= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_01_func_226185114(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_01_func_376245519(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_0[0x8] += _activatnvar_confusing_chararray_a[0xf];

}

void _activation_check_proc_01_func_1281664193(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_8;

	_activation_check_proc_01_func_376245519(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_01_func_452620316(_activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_01_func_303193319(_activatnvar_confusing_char_f, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_01_func_534320529(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_1;

	/* inline */ _activation_check_proc_01_func_632422970(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_01_func_1654532415(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_1237977214(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_7.mData[0x8] >>= _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_01_func_1030841422(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_4.mData[0x7];

	_activatnvar_confusing_LLUUID_d.mData[0xc] &= _activatnvar_confusing_LLUUID_1.mData[0x1];

	_activation_check_proc_01_func_1237977214(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_f);
	_activation_check_proc_01_func_1564733044(_activatnvar_confusing_char_9);
}

void _activation_check_proc_01_func_1564733044(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_01_func_1013298397(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_581420292(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x0] != _activatnvar_confusing_char_4) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_01_func_909252951(unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_c)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_c &= _activatnvar_confusing_U8_4;

	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_1529428077(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_01_func_1726370679(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] <<= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_01_func_1188474294(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1960091531(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_01_func_2031285849(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_01_func_1333983921(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_4 |= _activatnvar_lace.mData[0x2];

}

void _activation_check_proc_01_func_546380825(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b <<= _activatnvar_confusing_int_b;

	/* inline */ _activation_check_proc_01_func_1248934014(_activatnvar_confusing_int_a, _activatnvar_confusing_int_2);
	_activation_check_proc_01_func_110662412();
}

void _activation_check_proc_01_func_110662412()
{
	
}

void _activation_check_proc_01_func_1335544242(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_7[0x7];

}

void _activation_check_proc_01_func_1422065613(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("37ebd096-7693-f092-ddfb-f4fb950e3cad");

}

void _activation_check_proc_01_func_1692062660(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_1.mData[0x3] ^= _activatnvar_confusing_LLUUID_5.mData[0x7];

}

void _activation_check_proc_01_func_479159113(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_6 |= _activatnvar_confusing_int_f;

}

void _activation_check_proc_01_func_129065174(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_01_func_1154279508(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_01_func_1539584411(_activatnvar_confusing_bool_c, _activatnvar_confusing_char_6, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_01_func_1539584411(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_0)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_0 &= _activatnvar_confusing_char_6;

}

void _activation_check_proc_01_func_11648903(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xa] == 0xe) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_01_func_791725844(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1776487791(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x3] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_01_func_744915200(int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_b[0x4] <<= _activatnvar_confusing_chararray_3[0xc];

	_activation_check_proc_01_func_1550712596(_activatnvar_confusing_int_8);
}

void _activation_check_proc_01_func_1550712596(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_01_func_54533386(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_01_func_2105665442(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_b[0x3] = _activatnvar_fscked.mData[0x2];

}

void _activation_check_proc_01_func_873049699(int& _activatnvar_confusing_int_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_01_func_775718871(_activatnvar_confusing_int_d, _activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_2047566334(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_01_func_1694209143(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_01_func_699650067(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_3 = false;

	/* inline */ _activation_check_proc_01_func_810033382(_activatnvar_confusing_LLUUID_5);
	_activation_check_proc_01_func_1694209143(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_01_func_2045287806(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_01_func_53461462(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_01_func_852438772(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x2] += _activatnvar_combined_id.mData[0xb];

}

void _activation_check_proc_01_func_1454864273(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = 0xb;

}

void _activation_check_proc_01_func_1694789777(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_873600091(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_01_func_1582553118(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_01_func_1660408459(bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xf] == 0x9) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_01_func_874851444(_activatnvar_mac_digest, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_01_func_874851444(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x2] >>= _activatnvar_mac_digest[0x0];

}

void _activation_check_proc_01_func_955310927(LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_01_func_2052297651(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_3 = true;

	_activatnvar_confusing_LLUUID_2.mData[0xe] <<= _activatnvar_confusing_LLUUID_c.mData[0xf];

	_activation_check_proc_01_func_1870585943(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_01_func_1870585943(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_01_func_532882327(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_824859123(bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c |= _activatnvar_confusing_int_8;

	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_01_func_861289000(int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_c >>= _activatnvar_confusing_int_4;

	_activation_check_proc_01_func_1420496296(_activatnvar_confusing_char_e, _activatnvar_confusing_chararray_a);
	_activation_check_proc_01_func_1913833365(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_01_func_1913833365(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xc] <<= _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_01_func_1420496296(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_e += _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_01_func_1868133114(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x4] |= _activatnvar_confusing_LLUUID_6.mData[0x3];

}

void _activation_check_proc_01_func_1965211875(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xc] = _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_01_func_1721594135(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("0a5dd5f6-b194-ff54-4866-c6d271be58d2");

}

void _activation_check_proc_01_func_11513857(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_762105983(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_01_func_804722416(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_char_f;

	/* inline */ _activation_check_proc_01_func_279355046(_activatnvar_confusing_LLUUID_d, _activatnvar_doaccount, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_f);
	_activation_check_proc_01_func_835801687(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_01_func_835801687(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x2] != 0xb) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_01_func_539900824(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
	_activatnvar_confusing_chararray_5[0x3] += _activatnvar_so.mData[0x2];

}

void _activation_check_proc_01_func_1445936298(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_a = false;

	/* inline */ _activation_check_proc_01_func_380197857(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_01_func_1288099474(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_1 += 0xb;

}

void _activation_check_proc_01_func_471723279(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_01_func_738320027(char& _activatnvar_confusing_char_d, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_7)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_7 |= _activatnvar_confusing_char_d;

}

void _activation_check_proc_01_func_1994076030(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_LLUUID_b.mData[0x2];

}

void _activation_check_proc_01_func_36466328(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c *= 0xa;

}

void _activation_check_proc_01_func_476988007(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= _activatnvar_confusing_int_a;

}

void _activation_check_proc_01_func_1492953686(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_01_func_14352541(int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xc] = _activatnvar_confusing_chararray_7[0x2];

	/* inline */ _activation_check_proc_01_func_187541853(_activatnvar_confusing_bool_c, _activatnvar_confusing_U8_0, _activatnvar_confusing_char_f);
	/* inline */ _activation_check_proc_01_func_837945749(_activatnvar_confusing_bool_3, _activatnvar_confusing_char_9, _activatnvar_confusing_char_8, _activatnvar_confusing_chararray_1, _activatnvar_confusing_char_1);
	_activation_check_proc_01_func_1492953686(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
	_activation_check_proc_01_func_157235042(_activatnvar_confusing_int_b, _activatnvar_confusing_int_1);
}

void _activation_check_proc_01_func_157235042(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_b ^= _activatnvar_confusing_int_1;

}

void _activation_check_proc_01_func_868548626(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1751398154()
{
	
}

void _activation_check_proc_01_func_1186790689(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_01_func_827077554(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_01_func_1355961808(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] += _activatnvar_confusing_chararray_0[0xc];

	/* inline */ _activation_check_proc_01_func_107927401(_activatnvar_confusing_LLUUID_1, _activatnvar_so);
}

void _activation_check_proc_01_func_491758950(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a *= _activatnvar_confusing_chararray_3[0x5];

}

void _activation_check_proc_01_func_1316541050(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] |= _activatnvar_confusing_LLUUID_8.mData[0x6];

}

void _activation_check_proc_01_func_1142875123(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] >>= _activatnvar_name_digest[0x3];

}

void _activation_check_proc_01_func_929241905(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_1[0xd] <<= _activatnvar_confusing_chararray_e[0x2];

}

void _activation_check_proc_01_func_5932002(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_01_func_1458757608(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_01_func_266441226(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_1195772838(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x0] &= _activatnvar_confusing_chararray_6[0xb];

}

void _activation_check_proc_01_func_1678645393(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_01_func_1430863519(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_char_2;

}

void _activation_check_proc_01_func_1091223610(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_7.mData[0x8];

	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_01_func_159516877(_activatnvar_generic_iterator);
}

void _activation_check_proc_01_func_159516877(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_01_func_198174319(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
