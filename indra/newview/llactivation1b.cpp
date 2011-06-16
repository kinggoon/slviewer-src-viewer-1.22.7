// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation1b.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 1b

void _activation_check_proc_1b_func_1462229765(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_1b_func_650922853(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= _activatnvar_confusing_int_d;

}

void _activation_check_proc_1b_func_1885024985(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_LLUUID_8.mData[0x4] ^= _activatnvar_confusing_chararray_b[0x6];

	/* inline */ _activation_check_proc_1b_func_1807361249(_activatnvar_confusing_char_6, _activatnvar_confusing_bool_5, _activatnvar_confusing_char_0);
	_activation_check_proc_1b_func_948229169(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1b_func_948229169(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_e.mData[0x5] = _activatnvar_confusing_LLUUID_5.mData[0x2];

}

void _activation_check_proc_1b_func_1157954948(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_1b_func_1765884182(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x7] &= _activatnvar_confusing_LLUUID_5.mData[0x7];

}

void _activation_check_proc_1b_func_1814027976(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_1b_func_436113291(int& _activatnvar_confusing_int_6, BOOL& _activatnvar_success, DWORD& _activatnvar_serial)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
	_activation_check_proc_1b_func_1814027976(_activatnvar_confusing_int_6);
}

void _activation_check_proc_1b_func_110196864(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_1b_func_230217559(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_char_6 *= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_1b_func_2094522792(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_1.mData[0x2];

}

void _activation_check_proc_1b_func_2038695764(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_1b_func_147352469(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1488341474(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_1b_func_1923173099(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_1b_func_1668396674(_activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_1668396674(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1987511417(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_1b_func_628689445(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1176977489(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] >>= _activatnvar_confusing_LLUUID_a.mData[0x2];

}

void _activation_check_proc_1b_func_1750962111(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1b_func_2066572369(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_e, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_1b_func_168490776(_activatnvar_confusing_int_c);
	_activation_check_proc_1b_func_1750962111(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1b_func_1041392064(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("8ae842ca-b6c0-0a2c-2e92-ac07e268f59d");

}

void _activation_check_proc_1b_func_19316552(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 <<= _activatnvar_confusing_char_0;

	_activation_check_proc_1b_func_1041392064(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1b_func_1766509948(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 += 0xb;

}

void _activation_check_proc_1b_func_1251713086()
{
	
}

void _activation_check_proc_1b_func_1036971998(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("dbd0bf9e-b061-e564-304f-8330173d44c4");

}

void _activation_check_proc_1b_func_133574310(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_1037872049(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_1b_func_1037872049(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1731910970(int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_int_3 |= 0x0;

	_activation_check_proc_1b_func_1755043534(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1b_func_1755043534(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1b_func_669678398(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_1b_func_1227130197(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1b_func_72015874(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_638695708(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_chararray_7[0x0];

}

void _activation_check_proc_1b_func_41352864(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
	_activation_check_proc_1b_func_1973809505(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_9);
	_activation_check_proc_1b_func_638695708(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_1b_func_2075692936();
}

void _activation_check_proc_1b_func_1973809505(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_1b_func_955325558(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x9] ^= _activatnvar_name_digest[0xf];

	/* inline */ _activation_check_proc_1b_func_364994332(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_1b_func_1949905947(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("0279a6a1-ad7e-d621-accf-90a7d19c3466");

}

void _activation_check_proc_1b_func_1345956033(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_1192391198();
	_activation_check_proc_1b_func_1949905947(_activatnvar_confusing_LLUUID_1);
	_activation_check_proc_1b_func_940342862(_activatnvar_confusing_int_0, _activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_1b_func_1122054130(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_1b_func_940342862(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= _activatnvar_confusing_int_0;

}

void _activation_check_proc_1b_func_1192391198()
{
	
}

void _activation_check_proc_1b_func_2108842906(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1b_func_742064190(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xf] ^= _activatnvar_section2.mData[0x8];

}

void _activation_check_proc_1b_func_89857652(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1b_func_2057472251(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1b_func_932798215(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1b_func_567504068(char& _activatnvar_confusing_char_b)
{
	
	/* inline */ _activation_check_proc_1b_func_913752538(_activatnvar_confusing_char_b);
}

void _activation_check_proc_1b_func_1195087584(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_f >>= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_1b_func_1620100152(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_8[0xf] >>= _activatnvar_confusing_LLUUID_8.mData[0x4];

}

void _activation_check_proc_1b_func_1517850087(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_1b_func_1392346180(_activatnvar_t0);
}

void _activation_check_proc_1b_func_1392346180(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1b_func_1673381491(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("c7efa6bf-f010-2305-234c-b25957f96a44");

	
	/* inline */ _activation_check_proc_1b_func_811746528(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_1b_func_1662431690(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] = _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_1b_func_1131889683(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_1b_func_502753672(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_7)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_7 &= _activatnvar_confusing_char_6;

}

void _activation_check_proc_1b_func_784073604(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_fscked, U8& _activatnvar_pos, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_lace)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_d *= _activatnvar_pos;

	_activation_check_proc_1b_func_502753672(_activatnvar_confusing_char_6, _activatnvar_confusing_bool_8, _activatnvar_confusing_char_7);
	_activation_check_proc_1b_func_566234487(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_1b_func_734346070(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_1b_func_66016570(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_566234487(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_66016570(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_734346070(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1356255881(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1b_func_1654944166(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1b_func_144988043(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_1b_func_756183224(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_1b_func_144988043(_activatnvar_confusing_chararray_f, _activatnvar_confusing_U8_3);
	/* inline */ _activation_check_proc_1b_func_1236503517(_activatnvar_confusing_U8_7, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1b_func_962942512(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1b_func_975410655(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1294184504(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_1b_func_519053127(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1332667470(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_1b_func_1787145334(_activatnvar_confusing_char_d, _activatnvar_fscked, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_1b_func_850915751(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1b_func_1010689005()
{
	
}

void _activation_check_proc_1b_func_1965093258(bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_1b_func_40324760(_activatnvar_generic_bool_0);
	_activation_check_proc_1b_func_631059535(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1b_func_631059535(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xe] ^= _activatnvar_confusing_chararray_a[0x5];

}

void _activation_check_proc_1b_func_926454257(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_int_c++;

	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1b_func_1047827778(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_c)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_926454257(_activatnvar_confusing_int_c, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1b_func_759006040(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_U8_1 ^= _activatnvar_confusing_char_9;

}

void _activation_check_proc_1b_func_1239708479(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_1b_func_1463802067(char& _activatnvar_confusing_char_8)
{
	
	_activation_check_proc_1b_func_1833349595(_activatnvar_confusing_char_8);
}

void _activation_check_proc_1b_func_1833349595(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_1b_func_1381655346(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("97b6fe3c-b62c-56e2-5582-462d84f39b7b");

	/* inline */ _activation_check_proc_1b_func_277875837(_activatnvar_fscked, _activatnvar_lace, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_1355992196(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x1] == 0x0) _activatnvar_confusing_bool_0 = true;

	/* inline */ _activation_check_proc_1b_func_908151895(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1b_func_1369436197(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1b_func_1209825298(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_2041454179(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_1b_func_1157607674(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_1b_func_2041454179(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_char_9);
}

void _activation_check_proc_1b_func_1317941136(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_724514971(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_1b_func_1016588873(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("2b1633ff-46b1-af4b-80e4-f72bf1492da9");

}

void _activation_check_proc_1b_func_51930204(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_int_8++;

	_activation_check_proc_1b_func_158786054(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_2);
	_activation_check_proc_1b_func_1016588873(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1b_func_158786054(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_1b_func_407113720(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_f.mData[0x9] <<= _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_1b_func_1610797657(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] |= _activatnvar_combined_id.mData[0xd];

}

void _activation_check_proc_1b_func_364847077(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
}

void _activation_check_proc_1b_func_172238448(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_d)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x5] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1b_func_453757170(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1b_func_1799900278(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_U8_4;

}

void _activation_check_proc_1b_func_1807460977(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] ^= _activatnvar_confusing_LLUUID_3.mData[0x4];

	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1b_func_311102224(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_7 >>= _activatnvar_confusing_char_b;

}

void _activation_check_proc_1b_func_66374538(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	_activatnvar_confusing_U8_f = 0x8;

	/* inline */ _activation_check_proc_1b_func_1272440296();
}

void _activation_check_proc_1b_func_1449637574()
{
	
}

void _activation_check_proc_1b_func_474550558(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_2035617148(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] *= _activatnvar_confusing_LLUUID_f.mData[0x5];

	/* inline */ _activation_check_proc_1b_func_175162829(_activatnvar_confusing_LLUUID_5, _activatnvar_pos, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_1b_func_1378842300(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_1b_func_1422126994(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 = 0xd;

}

void _activation_check_proc_1b_func_852201502(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] ^= _activatnvar_confusing_chararray_d[0x2];

}

void _activation_check_proc_1b_func_2022868393(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_b[0x8] += _activatnvar_confusing_chararray_3[0x8];

}

void _activation_check_proc_1b_func_711896489(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_chararray_0[0x7];

	_activation_check_proc_1b_func_2022868393(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_1b_func_844064020(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] = _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_1b_func_1647160394(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_c = true;

	_activation_check_proc_1b_func_844064020(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1b_func_102634816(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] <<= _activatnvar_confusing_chararray_a[0x4];

}

void _activation_check_proc_1b_func_114339959(LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1b_func_1970720697(_activatnvar_confusing_int_c);
}

void _activation_check_proc_1b_func_73997410(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = 0x4;

}

void _activation_check_proc_1b_func_1288779973(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_c, U8& _activatnvar_t1, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_c ^= _activatnvar_confusing_chararray_d[0x8];

	/* inline */ _activation_check_proc_1b_func_2051116037(_activatnvar_t1, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_1b_func_727407150(U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x7] == _activatnvar_t1) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_1b_func_938506217(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] >>= _activatnvar_mac_digest[0x7];

	
}

void _activation_check_proc_1b_func_1012537593(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1b_func_1121681681(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1b_func_409696490(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1b_func_287179814(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x8] = _activatnvar_fscked.mData[0xd];

	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1b_func_57993006(int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_int_b ^= _activatnvar_confusing_int_b;

}

void _activation_check_proc_1b_func_1577248709(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_combined_id.mData[0x9];

	_activatnvar_confusing_LLUUID_1.mData[0xb] *= _activatnvar_confusing_chararray_d[0x1];

}

void _activation_check_proc_1b_func_1798689579(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_1b_func_2038784577(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1b_func_428081805(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1b_func_1204714015(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1b_func_459448113(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
	/* inline */ _activation_check_proc_1b_func_330295118(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_1b_func_1204714015(_activatnvar_t0);
	_activation_check_proc_1b_func_428081805(_activatnvar_t0);
	/* inline */ _activation_check_proc_1b_func_276984177(_activatnvar_t0);
}

void _activation_check_proc_1b_func_398456981(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1933351305(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1209621187(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] *= _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_1b_func_1783949705(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xb] &= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_1b_func_471459164(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_4.mData[0x9];

}

void _activation_check_proc_1b_func_989009813(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_1b_func_1907553674(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] += _activatnvar_confusing_LLUUID_f.mData[0xe];

}

void _activation_check_proc_1b_func_861954210(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_chararray_9[0x7];

	/* inline */ _activation_check_proc_1b_func_277167484(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1b_func_2036583938(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_1b_func_133982549(int& _activatnvar_confusing_int_f, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

	_activatnvar_confusing_U8_a++;

	/* inline */ _activation_check_proc_1b_func_1231550255(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1b_func_1371031120(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_7.mData[0xc] *= _activatnvar_confusing_chararray_b[0xc];

	/* inline */ _activation_check_proc_1b_func_224680624(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_1885093233(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_1b_func_496691194(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_1b_func_474488760(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1b_func_920864963(U8& _activatnvar_confusing_U8_2, int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_confusing_U8_8;

	_activation_check_proc_1b_func_1690468761(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1b_func_1690468761(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 |= 0xa;

}

void _activation_check_proc_1b_func_12786678(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_e >>= _activatnvar_confusing_chararray_3[0x4];

	_activation_check_proc_1b_func_811198690(_activatnvar_confusing_char_e);
}

void _activation_check_proc_1b_func_811198690(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_1b_func_508674115(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_4 *= _activatnvar_pos;

}

void _activation_check_proc_1b_func_1335918859(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_4)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_1b_func_508674115(_activatnvar_pos, _activatnvar_confusing_bool_c, _activatnvar_confusing_char_4);
}

void _activation_check_proc_1b_func_371792289(int& _activatnvar_confusing_int_b)
{
	
	/* inline */ _activation_check_proc_1b_func_981103034(_activatnvar_confusing_int_b);
}

void _activation_check_proc_1b_func_75529315(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1b_func_284544023(U8& _activatnvar_pos, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_0)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_0 *= _activatnvar_pos;

}

void _activation_check_proc_1b_func_1668357123(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 <<= 0x5;

}

void _activation_check_proc_1b_func_1523069311(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1b_func_234376173(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] |= _activatnvar_confusing_chararray_8[0xc];

}

void _activation_check_proc_1b_func_1782596283(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a ^= 0xe;

	_activation_check_proc_1b_func_234376173(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_1b_func_260419141(_activatnvar_confusing_LLUUID_8);
	_activation_check_proc_1b_func_1296208384(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_1056970981(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1b_func_1056970981(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_1b_func_1296208384(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_689398775(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_1b_func_1463165832(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_d)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_2 += 0xb;

	_activation_check_proc_1b_func_689398775(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_1b_func_1566495130(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_4[0x3] &= _activatnvar_confusing_LLUUID_0.mData[0xd];

	_activatnvar_confusing_LLUUID_5.mData[0x7] &= _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_1b_func_1619967653(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_f.mData[0x6];

}

void _activation_check_proc_1b_func_343274476(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x9] ^= _activatnvar_confusing_LLUUID_1.mData[0x7];

}

void _activation_check_proc_1b_func_1505194902()
{
	
}

void _activation_check_proc_1b_func_1124468778(char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_code, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_d *= _activatnvar_confusing_char_9;

	/* inline */ _activation_check_proc_1b_func_126843569(_activatnvar_generic_bool_1, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1b_func_617035256(_activatnvar_code, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1b_func_1248845622(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_523486644(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_965467543(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1b_func_1797003379(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1b_func_523486644(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_1248845622(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_516516709(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] *= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_1b_func_1146442521(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1b_func_1036080707(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_1b_func_1874515175(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_pos |= 8;
	/* inline */ _activation_check_proc_1b_func_1726100993(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_1b_func_165271585(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1b_func_165271585(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_8[0xf] *= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_1b_func_536294880(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1450818387(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("11ce209e-1227-4717-6dfa-66173e7acf5a");

}

void _activation_check_proc_1b_func_369852067(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x2] *= _activatnvar_confusing_LLUUID_b.mData[0x4];

}

void _activation_check_proc_1b_func_135676401(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_605611618(U8& _activatnvar_confusing_U8_9, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_9 += 0x5;

	_activation_check_proc_1b_func_135676401(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_1222310296(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_7[0x5] <<= _activatnvar_confusing_chararray_4[0x7];

	_activation_check_proc_1b_func_1869923959(_activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1b_func_1869923959(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] != 0xb) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1b_func_622742946(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_1b_func_891832973(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section1, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_5.mData[0x6] = _activatnvar_section1.mData[0x4];

	_activation_check_proc_1b_func_622742946(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_1b_func_1207612352(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_c &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_1b_func_630877751(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e <<= _activatnvar_confusing_chararray_5[0x7];

}

void _activation_check_proc_1b_func_150800753(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_d >>= _activatnvar_confusing_char_7;

	_activation_check_proc_1b_func_522567607(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_1b_func_522567607(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1b_func_1194089059(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1b_func_833702259(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_2, int& _activatnvar_confusing_int_b)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_2 *= _activatnvar_confusing_char_2;

	_activation_check_proc_1b_func_1194089059(_activatnvar_confusing_int_b);
}

void _activation_check_proc_1b_func_720334161(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_1b_func_900315443(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1b_func_1369920350(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 <<= _activatnvar_confusing_char_a;

	/* inline */ _activation_check_proc_1b_func_853373841(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_1b_func_873413197(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x8] ^= _activatnvar_confusing_LLUUID_d.mData[0xb];

	_activation_check_proc_1b_func_54026937(_activatnvar_confusing_char_7, _activatnvar_code);
	_activation_check_proc_1b_func_1970063996(_activatnvar_confusing_bool_6, _activatnvar_confusing_U8_d, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_1b_func_1970063996(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x3] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_1b_func_54026937(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_7 |= _activatnvar_code.mData[0x8];

}

void _activation_check_proc_1b_func_2088118951(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("c078f332-eea6-d0a1-63d3-1255e73d01fe");

}

void _activation_check_proc_1b_func_1017135229(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_1b_func_511572755(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1b_func_1864500749(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_15959265(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x8] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_1b_func_1795701922(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("75df148a-83f2-c9ed-5275-cbf87eb570de");

}

void _activation_check_proc_1b_func_1817131624(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_1b_func_1708844427(U8& _activatnvar_t0, U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_1b_func_1788545122(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("d6c4b35a-6736-7d2c-8c04-f8f9d00f26b2");

}

void _activation_check_proc_1b_func_1824607705(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_b |= _activatnvar_fscked.mData[0xd];

	_activatnvar_confusing_chararray_0[0x3] += _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_1b_func_1537184418(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_1b_func_1363620077(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_chararray_a[0xd];

}

void _activation_check_proc_1b_func_430184946(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_2060415866(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1b_func_164252032(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_mac_digest)
{
	
	_activation_check_proc_1b_func_134271654(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
	_activation_check_proc_1b_func_839293118(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_1b_func_334567361(_activatnvar_generic_iterator, _activatnvar_confusing_bool_f, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1b_func_134271654(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_839293118(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1b_func_1540813006(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

	/* inline */ _activation_check_proc_1b_func_665295901(_activatnvar_confusing_LLUUID_5, _activatnvar_code);
	/* inline */ _activation_check_proc_1b_func_2077645985(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_1b_func_590993912(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_e.mData[0xe] <<= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_1b_func_380798114(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1b_func_838161175()
{
	
}

void _activation_check_proc_1b_func_364396702(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
	_activation_check_proc_1b_func_1761249268(_activatnvar_t0);
}

void _activation_check_proc_1b_func_1761249268(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1b_func_1083185481(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 <<= 0xe;

}

void _activation_check_proc_1b_func_1784026718(int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

	_activation_check_proc_1b_func_1083185481(_activatnvar_confusing_int_9);
}

void _activation_check_proc_1b_func_367496742(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 124; _activatnvar_strbuf_0[0] ^= 61; _activatnvar_strbuf_0[1] = 105; _activatnvar_strbuf_0[1] ^= 10; _activatnvar_strbuf_0[2] = 20; _activatnvar_strbuf_0[2] ^= 96; _activatnvar_strbuf_0[3] = 68; _activatnvar_strbuf_0[3] ^= 45; _activatnvar_strbuf_0[4] = 32; _activatnvar_strbuf_0[4] ^= 86; _activatnvar_strbuf_0[5] = 35; _activatnvar_strbuf_0[5] ^= 66; _activatnvar_strbuf_0[6] = 22; _activatnvar_strbuf_0[6] ^= 98; _activatnvar_strbuf_0[7] = 33; _activatnvar_strbuf_0[7] ^= 72; _activatnvar_strbuf_0[8] = 74; _activatnvar_strbuf_0[8] ^= 37; _activatnvar_strbuf_0[9] = 75; _activatnvar_strbuf_0[9] ^= 37; _activatnvar_strbuf_0[10] = 91; _activatnvar_strbuf_0[10] ^= 24; _activatnvar_strbuf_0[11] = 24; _activatnvar_strbuf_0[11] ^= 119; _activatnvar_strbuf_0[12] = 30; _activatnvar_strbuf_0[12] ^= 122; _activatnvar_strbuf_0[13] = 17; _activatnvar_strbuf_0[13] ^= 116; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_1b_func_898798429(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_LLUUID_6.mData[0x6] &= _activatnvar_combined_id.mData[0x3];

	/* inline */ _activation_check_proc_1b_func_172524505(_activatnvar_confusing_bool_b, _activatnvar_confusing_char_0);
}

void _activation_check_proc_1b_func_916342972(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_1b_func_1201566265(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x6] != 0x5) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_1b_func_1657634565(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1b_func_526123302(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activatnvar_confusing_int_2 |= _activatnvar_confusing_int_0;

}

void _activation_check_proc_1b_func_29713935(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_3)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x3] == _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_1b_func_1028902022(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1b_func_1930075818(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1b_func_130015062(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1b_func_1213434593(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_pos)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_5;

	_activation_check_proc_1b_func_1930075818(_activatnvar_pos);
	_activation_check_proc_1b_func_130015062(_activatnvar_pos);
}

void _activation_check_proc_1b_func_2044055435(char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1b_func_1250345838(_activatnvar_confusing_chararray_c, _activatnvar_confusing_char_4);
}

void _activation_check_proc_1b_func_1239377822(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_d[0x1] >>= _activatnvar_mac_digest[0xd];

}

void _activation_check_proc_1b_func_720798200(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1b_func_1621234379(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_chararray_3[0xb];

}

void _activation_check_proc_1b_func_2124584991(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x4] <<= _activatnvar_confusing_LLUUID_2.mData[0xb];

}

void _activation_check_proc_1b_func_438026514(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_1b_func_2124584991(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1b_func_1765532118(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("b0ea0d04-f7c0-f4a2-afae-635c9fd5b76a");

}

void _activation_check_proc_1b_func_1053760277(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1b_func_1581492002(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_1b_func_2138002533(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	
	_activatnvar_confusing_LLUUID_5.mData[0x8] >>= _activatnvar_confusing_chararray_4[0xc];

}

void _activation_check_proc_1b_func_1126579350(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_int_e++;

	/* inline */ _activation_check_proc_1b_func_617721666(_activatnvar_confusing_U8_e);
	_activation_check_proc_1b_func_2138002533(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1b_func_598227935(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("58a1b5e4-4918-33de-6a88-5a93b2239f21");

}

void _activation_check_proc_1b_func_1648301823(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x1] != _activatnvar_feat) _activatnvar_confusing_bool_5 = true;

	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_3 = false;

	_activation_check_proc_1b_func_598227935(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1b_func_363833884(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_1b_func_49593277(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 *= 0xd;

}

void _activation_check_proc_1b_func_310166031(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 *= 0xb;

}

void _activation_check_proc_1b_func_259878151(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1b_func_762232870(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1b_func_326739670(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_1b_func_1440699651(int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
	_activation_check_proc_1b_func_1531420566(_activatnvar_pos);
	_activation_check_proc_1b_func_259878151(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_4);
	_activation_check_proc_1b_func_762232870(_activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_1b_func_1894808193(_activatnvar_confusing_char_d, _activatnvar_confusing_U8_2, _activatnvar_confusing_bool_a);
	_activation_check_proc_1b_func_326739670(_activatnvar_confusing_U8_0, _activatnvar_confusing_char_f);
}

void _activation_check_proc_1b_func_1531420566(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1b_func_809782163(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_6)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_6 <<= _activatnvar_confusing_char_7;

}

void _activation_check_proc_1b_func_1017648463(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_d, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_1b_func_809782163(_activatnvar_confusing_bool_2, _activatnvar_confusing_char_7, _activatnvar_confusing_char_6);
	_activation_check_proc_1b_func_569318905(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_1b_func_321228230(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1b_func_321228230(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1b_func_569318905(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_1[0x1] = _activatnvar_confusing_LLUUID_7.mData[0x9];

}

void _activation_check_proc_1b_func_1824020431(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x8] += _activatnvar_confusing_LLUUID_1.mData[0x3];

}

void _activation_check_proc_1b_func_1566157840(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_1b_func_1936078052(int& _activatnvar_confusing_int_1, U8& _activatnvar_t1)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_1b_func_1566157840(_activatnvar_t1);
}

void _activation_check_proc_1b_func_1457197788(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x3] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_4 = _activatnvar_generic_bool_1;

}

void _activation_check_proc_1b_func_1701526167(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1b_func_627989779(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1b_func_39929413(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_6.mData[0x4];

}

void _activation_check_proc_1b_func_286511403(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_chararray_4[0xa];

}

void _activation_check_proc_1b_func_1669891757(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1b_func_1856618764(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] |= _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_1b_func_53915997(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1b_func_1896538018(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1b_func_186307289(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x4] += _activatnvar_confusing_chararray_e[0x2];

}

void _activation_check_proc_1b_func_1813312961(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 48; _activatnvar_strbuf_0[0] ^= 1; _activatnvar_strbuf_0[1] = 4; _activatnvar_strbuf_0[1] ^= 52; _activatnvar_strbuf_0[2] = 55; _activatnvar_strbuf_0[2] ^= 4; _activatnvar_strbuf_0[3] = 56; _activatnvar_strbuf_0[3] ^= 12; _activatnvar_strbuf_0[4] = 116; _activatnvar_strbuf_0[4] ^= 22; _activatnvar_strbuf_0[5] = 59; _activatnvar_strbuf_0[5] ^= 93; _activatnvar_strbuf_0[6] = 3; _activatnvar_strbuf_0[6] ^= 101; _activatnvar_strbuf_0[7] = 82; _activatnvar_strbuf_0[7] ^= 100; _activatnvar_strbuf_0[8] = 72; _activatnvar_strbuf_0[8] ^= 101; _activatnvar_strbuf_0[9] = 13; _activatnvar_strbuf_0[9] ^= 111; _activatnvar_strbuf_0[10] = 30; _activatnvar_strbuf_0[10] ^= 41; _activatnvar_strbuf_0[11] = 37; _activatnvar_strbuf_0[11] ^= 17; _activatnvar_strbuf_0[12] = 122; _activatnvar_strbuf_0[12] ^= 74; _activatnvar_strbuf_0[13] = 57; _activatnvar_strbuf_0[13] ^= 20; _activatnvar_strbuf_0[14] = 69; _activatnvar_strbuf_0[14] ^= 117; _activatnvar_strbuf_0[15] = 25; _activatnvar_strbuf_0[15] ^= 127; _activatnvar_strbuf_0[16] = 81; _activatnvar_strbuf_0[16] ^= 51; _activatnvar_strbuf_0[17] = 49; _activatnvar_strbuf_0[17] ^= 85; _activatnvar_strbuf_0[18] = 68; _activatnvar_strbuf_0[18] ^= 105; _activatnvar_strbuf_0[19] = 81; _activatnvar_strbuf_0[19] ^= 96; _activatnvar_strbuf_0[20] = 7; _activatnvar_strbuf_0[20] ^= 100; _activatnvar_strbuf_0[21] = 25; _activatnvar_strbuf_0[21] ^= 123; _activatnvar_strbuf_0[22] = 55; _activatnvar_strbuf_0[22] ^= 81; _activatnvar_strbuf_0[23] = 36; _activatnvar_strbuf_0[23] ^= 9; _activatnvar_strbuf_0[24] = 74; _activatnvar_strbuf_0[24] ^= 126; _activatnvar_strbuf_0[25] = 70; _activatnvar_strbuf_0[25] ^= 112; _activatnvar_strbuf_0[26] = 87; _activatnvar_strbuf_0[26] ^= 98; _activatnvar_strbuf_0[27] = 0; _activatnvar_strbuf_0[27] ^= 99; _activatnvar_strbuf_0[28] = 81; _activatnvar_strbuf_0[28] ^= 97; _activatnvar_strbuf_0[29] = 64; _activatnvar_strbuf_0[29] ^= 113; _activatnvar_strbuf_0[30] = 21; _activatnvar_strbuf_0[30] ^= 113; _activatnvar_strbuf_0[31] = 44; _activatnvar_strbuf_0[31] ^= 30; _activatnvar_strbuf_0[32] = 78; _activatnvar_strbuf_0[32] ^= 127; _activatnvar_strbuf_0[33] = 85; _activatnvar_strbuf_0[33] ^= 55; _activatnvar_strbuf_0[34] = 65; _activatnvar_strbuf_0[34] ^= 37; _activatnvar_strbuf_0[35] = 123; _activatnvar_strbuf_0[35] ^= 78; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1b_func_977595996(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_a++;

	_activatnvar_confusing_chararray_a[0x7] *= _activatnvar_section1.mData[0x4];

	/* inline */ _activation_check_proc_1b_func_1223797343(_activatnvar_confusing_char_5);
}

void _activation_check_proc_1b_func_101515791(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

	/* inline */ _activation_check_proc_1b_func_917780202(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
}

void _activation_check_proc_1b_func_518003333(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a *= _activatnvar_confusing_int_f;

	_activation_check_proc_1b_func_1769289087(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_1769289087(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1261333519(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1072810691(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_f)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xf] != _activatnvar_confusing_U8_f) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_1b_func_1272911662(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_1072810691(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_5, _activatnvar_confusing_U8_f);
	/* inline */ _activation_check_proc_1b_func_499345265(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1b_func_545732197(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_1261333519(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1b_func_181690224(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_lace);
}

void _activation_check_proc_1b_func_1923230543(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_a.mData[0x3] &= _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_1b_func_729267927(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_1 += _activatnvar_confusing_int_5;

}

void _activation_check_proc_1b_func_1172200995(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] >>= _activatnvar_confusing_chararray_1[0x9];

}

void _activation_check_proc_1b_func_328015244(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x7] &= _activatnvar_confusing_LLUUID_2.mData[0x9];

}

void _activation_check_proc_1b_func_991813623(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("6a2f7762-8b49-9a07-dc09-8afa2d70cd99");

}

void _activation_check_proc_1b_func_860387280(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1b_func_1981615304(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_1b_func_1524724592(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_1b_func_1981615304(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_1b_func_1845416846(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_1125668914(bool& _activatnvar_confusing_bool_e, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_1;

	/* inline */ _activation_check_proc_1b_func_473033868(_activatnvar_confusing_int_8, _activatnvar_confusing_int_3);
	_activation_check_proc_1b_func_986349178(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_1b_func_1042909032(_activatnvar_confusing_int_5);
}

void _activation_check_proc_1b_func_986349178(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1b_func_1235549191(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_char_d;

}

void _activation_check_proc_1b_func_1258130211(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("9438ef93-d150-8a9f-5594-28e5d61b8c2e");

}

void _activation_check_proc_1b_func_467944956(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_section2;

}

void _activation_check_proc_1b_func_491457069(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 |= 0xa;

}

void _activation_check_proc_1b_func_1793660892(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1b_func_1443955114(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_char_4++;

	_activation_check_proc_1b_func_1793660892(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_a, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_1b_func_1467792324(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] += _activatnvar_confusing_LLUUID_3.mData[0x9];

}

void _activation_check_proc_1b_func_1311781631(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1884307892(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1386181205(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_lace;

}

void _activation_check_proc_1b_func_509257547(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x4] += _activatnvar_confusing_LLUUID_0.mData[0xe];

}

void _activation_check_proc_1b_func_1444846573(int& _activatnvar_confusing_int_a, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_section1;

	_activation_check_proc_1b_func_1568346102(_activatnvar_confusing_int_a);
	_activation_check_proc_1b_func_1644464489(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_1b_func_1644464489(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d <<= 0xf;

}

void _activation_check_proc_1b_func_1568346102(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1b_func_983387605(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_1b_func_271261013(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_2, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_1b_func_271261013(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_6)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xe] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1b_func_1250611570(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_379316952(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xb] &= _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_1b_func_648923135(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("e59194b7-7659-3217-4580-0d4d59dae7a2");

}

void _activation_check_proc_1b_func_1907087917(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1b_func_429077891(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("51fed083-45e1-3ecc-9a8b-56edf8f2086d");

}

void _activation_check_proc_1b_func_1482526917(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x5] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_1b_func_756045289(U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_1b_func_2133659341(_activatnvar_confusing_U8_f, _activatnvar_confusing_bool_c, _activatnvar_confusing_char_a);
	/* inline */ _activation_check_proc_1b_func_1998665796(_activatnvar_confusing_int_b);
	_activation_check_proc_1b_func_1482526917(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_8, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_1b_func_180177071(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xe] == 0xa) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_1b_func_1205422374(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_6)
{
	
	_activatnvar_confusing_chararray_6[0x7] &= _activatnvar_confusing_chararray_8[0xe];

	_activation_check_proc_1b_func_343392962(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1b_func_1856239941(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_343392962(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1287251400(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_1b_func_2068810293(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_d >>= _activatnvar_confusing_char_2;

	_activation_check_proc_1b_func_716541218(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_716541218(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_397718198(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_4 >>= _activatnvar_confusing_chararray_5[0xa];

}

void _activation_check_proc_1b_func_2104663944(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1793461714(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_pos)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xb] != _activatnvar_pos) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1b_func_425373395(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_9)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_9 ^= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_1b_func_667698124(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_1b_func_1827318924(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_4)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_1b_func_667698124(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_1b_func_1302654522(_activatnvar_confusing_int_4, _activatnvar_confusing_int_1);
}

void _activation_check_proc_1b_func_1053886502(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d |= 0x9;

}

void _activation_check_proc_1b_func_28621195(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1b_func_1847124534(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xb] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_1b_func_1882068575(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("89b75baf-877f-dccf-9a84-1fbf8e66177e");

}

void _activation_check_proc_1b_func_478254246(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1776328291(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x9] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1b_func_347220006(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_char_2;

}

void _activation_check_proc_1b_func_1331872191()
{
	
}

void _activation_check_proc_1b_func_454342280(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_967521353(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_1b_func_1271414046(_activatnvar_confusing_chararray_6, _activatnvar_confusing_char_1);
}

void _activation_check_proc_1b_func_967521353(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1453758001(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x8] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_c = true;

	/* inline */ _activation_check_proc_1b_func_82442593(_activatnvar_confusing_U8_9, _activatnvar_confusing_char_1);
}

void _activation_check_proc_1b_func_2110617323(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x7] != 0xc) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1b_func_854455777(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] &= _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_1b_func_101830361(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_1b_func_2128776803(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_7[0xd] <<= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_1b_func_2117073324(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x0] &= _activatnvar_fscked.mData[0x5];

}

void _activation_check_proc_1b_func_1179622819(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_1b_func_2099153473(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1b_func_496314326(LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_a <<= _activatnvar_confusing_int_7;

	_activation_check_proc_1b_func_2099153473(_activatnvar_confusing_int_b);
	_activation_check_proc_1b_func_2050722407(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_2050722407(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1219709373(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_3[0xe] ^= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_1b_func_525154693(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_4[0x0] *= _activatnvar_confusing_LLUUID_e.mData[0x3];

}

void _activation_check_proc_1b_func_1457549903(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("d8212164-314e-b8e1-dad7-2f3ace911461");

	_activatnvar_confusing_char_0 |= _activatnvar_confusing_chararray_9[0x2];

}

void _activation_check_proc_1b_func_679086334(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_7++;

	/* inline */ _activation_check_proc_1b_func_496652710(_activatnvar_confusing_int_e, _activatnvar_confusing_int_0);
}

void _activation_check_proc_1b_func_840455223(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_1b_func_153260583(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1578166067(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_153260583(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_1663100677(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_1b_func_310809633(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_1663100677(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1b_func_913021439(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_1b_func_436702919(_activatnvar_generic_bool_0);
}

void _activation_check_proc_1b_func_2005233763(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activatnvar_confusing_LLUUID_6.mData[0xc] *= _activatnvar_confusing_LLUUID_d.mData[0xb];

}

void _activation_check_proc_1b_func_117578266(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1b_func_712696380(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] <<= _activatnvar_confusing_chararray_3[0x4];

}

void _activation_check_proc_1b_func_115823997(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_892328754(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_961517809(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_9[0xa] >>= _activatnvar_confusing_LLUUID_1.mData[0x1];

	_activation_check_proc_1b_func_1307372038(_activatnvar_confusing_bool_c, _activatnvar_confusing_char_f, _activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_1b_func_166823428(_activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_1b_func_678359454(_activatnvar_pos);
}

void _activation_check_proc_1b_func_1307372038(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_f &= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_1b_func_435083302(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_1b_func_1964791588(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("195f080e-435d-eff3-cfa3-7dbeae7128de");

	_activation_check_proc_1b_func_435083302(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_1b_func_229244408(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

	_activation_check_proc_1b_func_1254827900(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1b_func_1254827900(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("420c081f-d886-5db8-838a-eb93b4adc257");

}

void _activation_check_proc_1b_func_158749736(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_3 <<= _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_1b_func_1318045522(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_chararray_0[0x3] >>= _activatnvar_confusing_LLUUID_d.mData[0x5];

	_activation_check_proc_1b_func_158749736(_activatnvar_confusing_U8_3, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_1b_func_335153762(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1b_func_2118842173(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xc] &= _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_1b_func_526950556(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 34; _activatnvar_strbuf_0[0] ^= 23; _activatnvar_strbuf_0[1] = 87; _activatnvar_strbuf_0[1] ^= 99; _activatnvar_strbuf_0[2] = 89; _activatnvar_strbuf_0[2] ^= 105; _activatnvar_strbuf_0[3] = 42; _activatnvar_strbuf_0[3] ^= 24; _activatnvar_strbuf_0[4] = 111; _activatnvar_strbuf_0[4] ^= 92; _activatnvar_strbuf_0[5] = 92; _activatnvar_strbuf_0[5] ^= 108; _activatnvar_strbuf_0[6] = 88; _activatnvar_strbuf_0[6] ^= 96; _activatnvar_strbuf_0[7] = 62; _activatnvar_strbuf_0[7] ^= 14; _activatnvar_strbuf_0[8] = 42; _activatnvar_strbuf_0[8] ^= 7; _activatnvar_strbuf_0[9] = 10; _activatnvar_strbuf_0[9] ^= 58; _activatnvar_strbuf_0[10] = 111; _activatnvar_strbuf_0[10] ^= 95; _activatnvar_strbuf_0[11] = 14; _activatnvar_strbuf_0[11] ^= 54; _activatnvar_strbuf_0[12] = 56; _activatnvar_strbuf_0[12] ^= 9; _activatnvar_strbuf_0[13] = 46; _activatnvar_strbuf_0[13] ^= 3; _activatnvar_strbuf_0[14] = 102; _activatnvar_strbuf_0[14] ^= 86; _activatnvar_strbuf_0[15] = 109; _activatnvar_strbuf_0[15] ^= 95; _activatnvar_strbuf_0[16] = 64; _activatnvar_strbuf_0[16] ^= 112; _activatnvar_strbuf_0[17] = 24; _activatnvar_strbuf_0[17] ^= 32; _activatnvar_strbuf_0[18] = 70; _activatnvar_strbuf_0[18] ^= 107; _activatnvar_strbuf_0[19] = 16; _activatnvar_strbuf_0[19] ^= 32; _activatnvar_strbuf_0[20] = 43; _activatnvar_strbuf_0[20] ^= 79; _activatnvar_strbuf_0[21] = 41; _activatnvar_strbuf_0[21] ^= 25; _activatnvar_strbuf_0[22] = 104; _activatnvar_strbuf_0[22] ^= 11; _activatnvar_strbuf_0[23] = 89; _activatnvar_strbuf_0[23] ^= 116; _activatnvar_strbuf_0[24] = 123; _activatnvar_strbuf_0[24] ^= 75; _activatnvar_strbuf_0[25] = 30; _activatnvar_strbuf_0[25] ^= 44; _activatnvar_strbuf_0[26] = 81; _activatnvar_strbuf_0[26] ^= 101; _activatnvar_strbuf_0[27] = 126; _activatnvar_strbuf_0[27] ^= 29; _activatnvar_strbuf_0[28] = 88; _activatnvar_strbuf_0[28] ^= 96; _activatnvar_strbuf_0[29] = 110; _activatnvar_strbuf_0[29] ^= 86; _activatnvar_strbuf_0[30] = 11; _activatnvar_strbuf_0[30] ^= 57; _activatnvar_strbuf_0[31] = 104; _activatnvar_strbuf_0[31] ^= 93; _activatnvar_strbuf_0[32] = 126; _activatnvar_strbuf_0[32] ^= 70; _activatnvar_strbuf_0[33] = 37; _activatnvar_strbuf_0[33] ^= 20; _activatnvar_strbuf_0[34] = 109; _activatnvar_strbuf_0[34] ^= 88; _activatnvar_strbuf_0[35] = 85; _activatnvar_strbuf_0[35] ^= 100; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1b_func_623692595(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_1b_func_526950556(_activatnvar_strbuf_0);
}

void _activation_check_proc_1b_func_1692541572(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x7] >>= _activatnvar_confusing_LLUUID_e.mData[0xe];

}

void _activation_check_proc_1b_func_1688010327(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_LLUUID_b.mData[0x8];

	_activation_check_proc_1b_func_1692541572(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_1b_func_1052619491(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b ^= _activatnvar_confusing_char_f;

}

void _activation_check_proc_1b_func_469359471(int& _activatnvar_confusing_int_4, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_6, int& _activatnvar_confusing_int_3)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_a &= _activatnvar_confusing_U8_6;

	_activatnvar_confusing_int_4 = _activatnvar_confusing_int_3;

}

void _activation_check_proc_1b_func_560850601(int& _activatnvar_confusing_int_4, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_3, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_U8_9;

	_activation_check_proc_1b_func_469359471(_activatnvar_confusing_int_4, _activatnvar_doaccount, _activatnvar_confusing_char_a, _activatnvar_confusing_U8_6, _activatnvar_confusing_int_3);
	_activation_check_proc_1b_func_294329806(_activatnvar_lace, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_1b_func_332130563(_activatnvar_confusing_LLUUID_9);
	_activation_check_proc_1b_func_1052619491(_activatnvar_confusing_char_f, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_1b_func_294329806(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xd] += _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_1b_func_239797533(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1b_func_1978216895(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 += 0x9;

}

void _activation_check_proc_1b_func_402904306(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_chararray_a[0x6] |= _activatnvar_combined_id.mData[0x5];

	/* inline */ _activation_check_proc_1b_func_1789705436(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1b_func_484429254(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1b_func_448002092(_activatnvar_confusing_int_3);
}

void _activation_check_proc_1b_func_252712771(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] += _activatnvar_confusing_chararray_5[0x9];

}

void _activation_check_proc_1b_func_419801294(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

	/* inline */ _activation_check_proc_1b_func_80750205(_activatnvar_confusing_chararray_e, _activatnvar_name_digest);
}

void _activation_check_proc_1b_func_287822133(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1211911955(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_a |= _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_1b_func_1200844211(char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1b_func_972624190()
{
	
}

void _activation_check_proc_1b_func_1452746770(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_d = _activatnvar_code.mData[0x5];

}

void _activation_check_proc_1b_func_1586299903()
{
	
}

void _activation_check_proc_1b_func_3499787(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_8++;

	/* inline */ _activation_check_proc_1b_func_546795501(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1b_func_1076247029(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1438717262(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_1076247029(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_1b_func_739098276(char& _activatnvar_feat, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_b, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	/* inline */ _activation_check_proc_1b_func_912892784(_activatnvar_confusing_char_b, _activatnvar_feat, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_1b_func_1404026608(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1b_func_1826585439(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_8.mData[0xe] = _activatnvar_confusing_LLUUID_7.mData[0x8];

}

void _activation_check_proc_1b_func_883425234(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_1b_func_1428134817(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("e44301e1-feef-3547-6df2-54a0438afe1a");

	/* inline */ _activation_check_proc_1b_func_717443654(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_1b_func_1235712216(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_1b_func_902873085(_activatnvar_confusing_LLUUID_a);
	_activation_check_proc_1b_func_1569579966(_activatnvar_confusing_U8_5, _activatnvar_confusing_U8_b, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_1b_func_1569579966(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_5 ^= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_1b_func_499231394(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_3 &= _activatnvar_confusing_int_2;

}

void _activation_check_proc_1b_func_148360461(bool& _activatnvar_confusing_bool_7, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x3] != _activatnvar_feat) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1b_func_926634604(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_LLUUID_a.mData[0x3];

}

void _activation_check_proc_1b_func_481038957(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_0 += 0x3;

	_activatnvar_confusing_chararray_7[0xa] ^= _activatnvar_confusing_LLUUID_8.mData[0xb];

}

void _activation_check_proc_1b_func_1261175872()
{
	
}

void _activation_check_proc_1b_func_1630781996(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_1b_func_1558541806(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1b_func_1290840722(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1b_func_784969914(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_0, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_1b_func_1290840722(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_0, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1b_func_51253685(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_a;

	/* inline */ _activation_check_proc_1b_func_712755424(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1b_func_422001993(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] *= _activatnvar_section2.mData[0xd];

}

void _activation_check_proc_1b_func_1861544962(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1b_func_787619842(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_d[0xe] += _activatnvar_secret.mData[0xe];

	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1b_func_1527439164(_activatnvar_confusing_U8_a, _activatnvar_confusing_U8_2, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1b_func_835889146(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_475877774()
{
	
}

void _activation_check_proc_1b_func_898556617(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_e <<= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_1b_func_1083786351(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_925168873(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_1b_func_105287112(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_d, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_6.mData[0xd];

	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1b_func_1963621532(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_9.mData[0xa] >>= _activatnvar_code.mData[0x0];

}

void _activation_check_proc_1b_func_579164972(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_2[0x7] >>= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_1b_func_1267926422(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_8 = _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_1b_func_2102885899(int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = 0x3;

	/* inline */ _activation_check_proc_1b_func_2138453599(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1b_func_1114292034(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 35; _activatnvar_strbuf_0[0] ^= 27; _activatnvar_strbuf_0[1] = 63; _activatnvar_strbuf_0[1] ^= 93; _activatnvar_strbuf_0[2] = 93; _activatnvar_strbuf_0[2] ^= 62; _activatnvar_strbuf_0[3] = 51; _activatnvar_strbuf_0[3] ^= 6; _activatnvar_strbuf_0[4] = 66; _activatnvar_strbuf_0[4] ^= 118; _activatnvar_strbuf_0[5] = 121; _activatnvar_strbuf_0[5] ^= 77; _activatnvar_strbuf_0[6] = 18; _activatnvar_strbuf_0[6] ^= 32; _activatnvar_strbuf_0[7] = 81; _activatnvar_strbuf_0[7] ^= 100; _activatnvar_strbuf_0[8] = 5; _activatnvar_strbuf_0[8] ^= 40; _activatnvar_strbuf_0[9] = 65; _activatnvar_strbuf_0[9] ^= 113; _activatnvar_strbuf_0[10] = 91; _activatnvar_strbuf_0[10] ^= 106; _activatnvar_strbuf_0[11] = 30; _activatnvar_strbuf_0[11] ^= 40; _activatnvar_strbuf_0[12] = 53; _activatnvar_strbuf_0[12] ^= 5; _activatnvar_strbuf_0[13] = 1; _activatnvar_strbuf_0[13] ^= 44; _activatnvar_strbuf_0[14] = 89; _activatnvar_strbuf_0[14] ^= 105; _activatnvar_strbuf_0[15] = 94; _activatnvar_strbuf_0[15] ^= 110; _activatnvar_strbuf_0[16] = 127; _activatnvar_strbuf_0[16] ^= 71; _activatnvar_strbuf_0[17] = 19; _activatnvar_strbuf_0[17] ^= 33; _activatnvar_strbuf_0[18] = 107; _activatnvar_strbuf_0[18] ^= 70; _activatnvar_strbuf_0[19] = 54; _activatnvar_strbuf_0[19] ^= 5; _activatnvar_strbuf_0[20] = 81; _activatnvar_strbuf_0[20] ^= 99; _activatnvar_strbuf_0[21] = 74; _activatnvar_strbuf_0[21] ^= 122; _activatnvar_strbuf_0[22] = 60; _activatnvar_strbuf_0[22] ^= 14; _activatnvar_strbuf_0[23] = 11; _activatnvar_strbuf_0[23] ^= 38; _activatnvar_strbuf_0[24] = 24; _activatnvar_strbuf_0[24] ^= 123; _activatnvar_strbuf_0[25] = 59; _activatnvar_strbuf_0[25] ^= 3; _activatnvar_strbuf_0[26] = 51; _activatnvar_strbuf_0[26] ^= 3; _activatnvar_strbuf_0[27] = 65; _activatnvar_strbuf_0[27] ^= 115; _activatnvar_strbuf_0[28] = 78; _activatnvar_strbuf_0[28] ^= 126; _activatnvar_strbuf_0[29] = 62; _activatnvar_strbuf_0[29] ^= 12; _activatnvar_strbuf_0[30] = 40; _activatnvar_strbuf_0[30] ^= 17; _activatnvar_strbuf_0[31] = 36; _activatnvar_strbuf_0[31] ^= 20; _activatnvar_strbuf_0[32] = 94; _activatnvar_strbuf_0[32] ^= 110; _activatnvar_strbuf_0[33] = 31; _activatnvar_strbuf_0[33] ^= 39; _activatnvar_strbuf_0[34] = 85; _activatnvar_strbuf_0[34] ^= 101; _activatnvar_strbuf_0[35] = 100; _activatnvar_strbuf_0[35] ^= 86; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1b_func_1846238896(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_1b_func_1362175680(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1b_func_1360964106(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_1b_func_801226895(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_e ^= _activatnvar_confusing_chararray_0[0x8];

}

void _activation_check_proc_1b_func_323195953(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_130745997(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_1b_func_1055401572(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("79575f87-92e0-11da-7bcc-5fce96e9206f");

	/* inline */ _activation_check_proc_1b_func_1053607650(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_1b_func_2057271083()
{
	
}

void _activation_check_proc_1b_func_868893642(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_5)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_5 = _activatnvar_confusing_char_a;

}

void _activation_check_proc_1b_func_1354358925(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_9[0x0] >>= _activatnvar_confusing_LLUUID_a.mData[0x8];

}

void _activation_check_proc_1b_func_1755303069(int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_2;

	_activation_check_proc_1b_func_868893642(_activatnvar_confusing_bool_4, _activatnvar_confusing_char_a, _activatnvar_confusing_char_5);
	_activation_check_proc_1b_func_1202693757(_activatnvar_lace, _activatnvar_fscked, _activatnvar_generic_iterator);
	_activation_check_proc_1b_func_1354358925(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_1b_func_1725682217(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_1b_func_923932990(_activatnvar_confusing_int_2);
}

void _activation_check_proc_1b_func_923932990(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_1b_func_1202693757(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1428012946(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_1b_func_644967649(bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_1b_func_1581369790(_activatnvar_generic_bool_0);
}

void _activation_check_proc_1b_func_471175130(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1167245247(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_5;

	/* inline */ _activation_check_proc_1b_func_1931885258(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_f);
	/* inline */ _activation_check_proc_1b_func_104090817(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_1b_func_2030956757(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1b_func_1830183793(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x7] &= _activatnvar_confusing_chararray_0[0x5];

}

void _activation_check_proc_1b_func_1288223986(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_8;

	_activation_check_proc_1b_func_1830183793(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_1b_func_518016160(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1b_func_1162735320(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1b_func_1855962537(LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_1b_func_738409352(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c *= 0x7;

}

void _activation_check_proc_1b_func_1207398904(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1b_func_1763468063(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_d, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_1b_func_1207398904(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_1b_func_2074850970(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1b_func_529678205(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1b_func_1637193644(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_582446673(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_e &= 0x4;

}

void _activation_check_proc_1b_func_2059531896(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_0 |= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_1b_func_919089853(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] += _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_1b_func_1941617318(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_U8_8++;

	_activation_check_proc_1b_func_1888001587(_activatnvar_confusing_char_9, _activatnvar_confusing_char_e);
}

void _activation_check_proc_1b_func_1888001587(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_char_9;

}

void _activation_check_proc_1b_func_1187552139(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_1b_func_1963469225(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_1b_func_1257744719(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	
}

void _activation_check_proc_1b_func_1339498247(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_6)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xd] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_1b_func_1262726000(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1127158030()
{
	
}

void _activation_check_proc_1b_func_1976099941(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_1b_func_641760437(int& _activatnvar_confusing_int_0, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1b_func_396722421(_activatnvar_confusing_int_0);
	_activation_check_proc_1b_func_1961605864(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_1b_func_1961605864(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_1b_func_1337481183(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_c++;

	/* inline */ _activation_check_proc_1b_func_2145520292(_activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_1b_func_1009735907(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_989828667(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_chararray_3[0x9];

	_activation_check_proc_1b_func_747388765(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1b_func_747388765(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("c8c4251e-8e65-9564-83f8-1a8359d23863");

}

void _activation_check_proc_1b_func_436881700(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x1] != 0x5) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1b_func_1416494700(unsigned char* _activatnvar_confusing_chararray_5, DWORD& _activatnvar_gvi_flags, unsigned char* _activatnvar_confusing_chararray_4, BOOL& _activatnvar_success, char& _activatnvar_confusing_char_b, DWORD& _activatnvar_serial, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	_activation_check_proc_1b_func_1042502400(_activatnvar_confusing_char_b, _activatnvar_confusing_chararray_5);
	_activation_check_proc_1b_func_1406028160(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_1b_func_1406028160(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x5] >>= _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_1b_func_1042502400(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_b += _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_1b_func_1500628541(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1b_func_207862273(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1b_func_2016157748(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1b_func_3175697(int& _activatnvar_confusing_int_4, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_2016157748(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_1);
	/* inline */ _activation_check_proc_1b_func_44665121(_activatnvar_confusing_int_4);
}

void _activation_check_proc_1b_func_1000483491(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_c)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xf] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1b_func_1202388674(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_U8_f += 0x6;

	/* inline */ _activation_check_proc_1b_func_213409818(_activatnvar_confusing_int_5);
	_activation_check_proc_1b_func_1000483491(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_1b_func_1782523907(LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_1b_func_1227849451(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xd] != _activatnvar_t1) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_1b_func_1775163487(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_chararray_d[0x4];

}

void _activation_check_proc_1b_func_1438043751(bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_6[0xc] <<= _activatnvar_confusing_chararray_b[0x4];

	
	_activation_check_proc_1b_func_1775163487(_activatnvar_confusing_chararray_d, _activatnvar_confusing_char_d);
	/* inline */ _activation_check_proc_1b_func_353791860(_activatnvar_doaccount, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_1b_func_405578469(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_117973260(_activatnvar_confusing_char_c, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_1b_func_117973260(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_char_c;

}

void _activation_check_proc_1b_func_1099576186(int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_d;

	_activation_check_proc_1b_func_2001227984();
	_activation_check_proc_1b_func_1640357759(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1b_func_2001227984()
{
	
}

void _activation_check_proc_1b_func_1640357759(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 <<= 0x0;

}

void _activation_check_proc_1b_func_1431147331(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_lace;

}

void _activation_check_proc_1b_func_939401402(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1b_func_231948306(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_U8_d += _activatnvar_confusing_U8_b;

	/* inline */ _activation_check_proc_1b_func_1277940205(_activatnvar_confusing_bool_b, _activatnvar_confusing_chararray_0, _activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_f);
	_activation_check_proc_1b_func_1927420216(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_1b_func_939401402(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_1b_func_2043368652(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_1b_func_1927420216(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] *= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_1b_func_504575640(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_1b_func_1025928104()
{
	
}

void _activation_check_proc_1b_func_1810409047(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xc] = _activatnvar_confusing_chararray_7[0xd];

	/* inline */ _activation_check_proc_1b_func_2082951648(_activatnvar_confusing_int_6, _activatnvar_confusing_int_2);
	_activation_check_proc_1b_func_1025928104();
}

void _activation_check_proc_1b_func_549210511(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_2 ^= _activatnvar_confusing_chararray_e[0x7];

	/* inline */ _activation_check_proc_1b_func_1048137071(_activatnvar_confusing_U8_0, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_1b_func_1348649482(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_5, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_6[0x4] <<= _activatnvar_confusing_LLUUID_5.mData[0x4];

	/* inline */ _activation_check_proc_1b_func_26928507(_activatnvar_generic_bool_0, _activatnvar_confusing_char_5);
}

void _activation_check_proc_1b_func_508665264(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 >>= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_1b_func_1907446604(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_c >>= _activatnvar_confusing_char_1;

	_activation_check_proc_1b_func_508665264(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_1b_func_2082668310(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_1b_func_1318652965(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1235415848()
{
	
}

void _activation_check_proc_1b_func_2121943469(unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	
	/* inline */ _activation_check_proc_1b_func_1834090103(_activatnvar_confusing_int_e);
	_activation_check_proc_1b_func_2068627622(_activatnvar_mac_digest, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1b_func_2068627622(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x5] |= _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_1b_func_629656457(int& _activatnvar_confusing_int_d, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_chararray_7[0xe];

	/* inline */ _activation_check_proc_1b_func_1466083530(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1b_func_1449858401(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_section2;

}

void _activation_check_proc_1b_func_1114185940(unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_int_1++;

	/* inline */ _activation_check_proc_1b_func_1540088880(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1b_func_1086135916(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_b[0x5] *= _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_1b_func_1922241204(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	/* inline */ _activation_check_proc_1b_func_1199100588();
}

void _activation_check_proc_1b_func_1402606858(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_d[0x8] &= _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_1b_func_1373960538(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("e3816b3c-07f6-552a-da97-9e31e2c1a302");

}

void _activation_check_proc_1b_func_2098131791(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_combined_id.mData[0x4];

}

void _activation_check_proc_1b_func_1636629943(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_secret;

}

void _activation_check_proc_1b_func_1625502525(int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_d += _activatnvar_confusing_int_8;

	/* inline */ _activation_check_proc_1b_func_531917737(_activatnvar_confusing_int_5);
	_activation_check_proc_1b_func_538881345(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_1636629943(_activatnvar_secret, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1b_func_538881345(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1076369186(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_7[0x9] += _activatnvar_confusing_chararray_5[0xf];

}

void _activation_check_proc_1b_func_740016590(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_combined_id;

}

void _activation_check_proc_1b_func_1467812211(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_4)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_a += _activatnvar_confusing_U8_4;

}

void _activation_check_proc_1b_func_1213182042(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_3 += _activatnvar_confusing_U8_b;

}

void _activation_check_proc_1b_func_253108701(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] <<= _activatnvar_confusing_chararray_2[0xc];

}

void _activation_check_proc_1b_func_1926755661(bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_1b_func_253108701(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_1b_func_385195774(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_so ^= _activatnvar_section2;
}

void _activation_check_proc_1b_func_991229044(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_904918378(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1819971536(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_1b_func_1538210142(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_1b_func_2018802386(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_1b_func_1153235456(_activatnvar_generic_bool_0);
}

void _activation_check_proc_1b_func_513249240(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1b_func_546990367(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_1b_func_153618488();
}

void _activation_check_proc_1b_func_1842671799(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1b_func_1115760596(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("942ac4f8-d95b-954e-ad70-e25a81033db7");

}

void _activation_check_proc_1b_func_1894046963(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1b_func_359126473(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_1b_func_1007474600(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_0 ^= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_1b_func_548820701(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("a485dadf-fbfc-d87b-6626-e646b63300cd");

}

void _activation_check_proc_1b_func_1449125044(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_1b_func_122991586(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1b_func_387018023(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1b_func_24362942(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	
	_activation_check_proc_1b_func_387018023(_activatnvar_pos, _activatnvar_so, _activatnvar_t0);
	/* inline */ _activation_check_proc_1b_func_531516125(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_1b_func_2141722756(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_f.mData[0x1] ^= _activatnvar_confusing_LLUUID_7.mData[0x8];

}

void _activation_check_proc_1b_func_1622453165(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_b[0xf] <<= _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_1b_func_415646060(LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_1622453165(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1b_func_1312652456()
{
	
}

void _activation_check_proc_1b_func_1918609697(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_LLUUID_3.mData[0x9];

	/* inline */ _activation_check_proc_1b_func_1426213790(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_1b_func_2035922847(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_1b_func_1647815592(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 <<= 0xe;

}

void _activation_check_proc_1b_func_1003521170(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_1.mData[0x3] <<= _activatnvar_confusing_chararray_7[0xb];

}

void _activation_check_proc_1b_func_2146728779(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x1] &= _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_1b_func_1452537509(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_1b_func_846405317(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_lace;

	_activation_check_proc_1b_func_629613551(_activatnvar_confusing_LLUUID_f);
	_activation_check_proc_1b_func_1452537509(_activatnvar_confusing_bool_9, _activatnvar_generic_bool_1);
}

void _activation_check_proc_1b_func_629613551(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("990968f3-3f31-8597-6d27-0cb47c0124eb");

}

void _activation_check_proc_1b_func_1288531018(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_273556450(LLUUID& _activatnvar_combined_id, bool& _activatnvar_generic_bool_0, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
	_activation_check_proc_1b_func_362100866(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_1b_func_495643819(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_b);
	_activation_check_proc_1b_func_1743528580(_activatnvar_pos);
}

void _activation_check_proc_1b_func_1743528580(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1b_func_495643819(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1b_func_362100866(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_1b_func_827123455(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xa] != 0x2) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_1b_func_1797222935(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x0] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1b_func_1244372866(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_1b_func_1697982804(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_1b_func_1323978431(_activatnvar_t0);
}

void _activation_check_proc_1b_func_1323978431(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1b_func_1438573682(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_LLUUID_4.mData[0x7];

}

void _activation_check_proc_1b_func_1986820180(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xb] += _activatnvar_confusing_LLUUID_b.mData[0xe];

}

void _activation_check_proc_1b_func_1071866936(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] |= _activatnvar_confusing_chararray_0[0x3];

	_activation_check_proc_1b_func_660795498(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1b_func_660795498(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x4] == 0x1) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1b_func_1444774055()
{
	
}

void _activation_check_proc_1b_func_1357643822(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_b[0x8];

}

void _activation_check_proc_1b_func_485898151(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_2017749703(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x4] >>= _activatnvar_confusing_LLUUID_d.mData[0xa];

}

void _activation_check_proc_1b_func_1766947583(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 += 0x3;

}

void _activation_check_proc_1b_func_674722146(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_3.mData[0x2] |= _activatnvar_confusing_LLUUID_e.mData[0x1];

	_activatnvar_confusing_LLUUID_7 = LLUUID("dcb51304-2a40-8e8d-40d2-58b1cda8f024");

}

void _activation_check_proc_1b_func_1412226435(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1093672194(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_1b_func_399239852(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1b_func_1786351596(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] <<= _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_1b_func_1532771942(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1b_func_1413334282(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d |= 0x9;

}

void _activation_check_proc_1b_func_1645374315(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_e)
{
	
	_activation_check_proc_1b_func_1274045829(_activatnvar_mac_digest, _activatnvar_confusing_chararray_e);
	_activation_check_proc_1b_func_1053443412(_activatnvar_confusing_int_c, _activatnvar_confusing_int_e);
}

void _activation_check_proc_1b_func_1053443412(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_c += 0x5;

	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_1b_func_1274045829(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xa] <<= _activatnvar_mac_digest[0x3];

}

void _activation_check_proc_1b_func_177447311()
{
	
}

void _activation_check_proc_1b_func_1191775479(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1b_func_365885523(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_chararray_c[0x3];

	/* inline */ _activation_check_proc_1b_func_2018244889(_activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_1b_func_1495888655(_activatnvar_confusing_U8_8);
	/* inline */ _activation_check_proc_1b_func_1074019342(_activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1b_func_406085232(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x5] &= _activatnvar_lace.mData[0xe];

}

void _activation_check_proc_1b_func_1670464101(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 *= 0x2;

}

void _activation_check_proc_1b_func_473611803(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_1b_func_233474793(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_0;

	_activation_check_proc_1b_func_1496558296(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_c);
	_activation_check_proc_1b_func_819904471(_activatnvar_confusing_int_2);
	_activation_check_proc_1b_func_1670464101(_activatnvar_confusing_U8_4);
	_activation_check_proc_1b_func_473611803(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_1b_func_819904471(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1b_func_1496558296(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_1b_func_1824716767(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_5 &= _activatnvar_confusing_char_9;

}

void _activation_check_proc_1b_func_1181809351(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_1b_func_156740443(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_2;

	_activation_check_proc_1b_func_1172623962(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_1b_func_1172623962(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c &= _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_1b_func_68813211(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 &= 3;
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_1b_func_278648606(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_1b_func_1818378334(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_9 <<= _activatnvar_confusing_int_5;

}

void _activation_check_proc_1b_func_1206102620(int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_so, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_9)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_1b_func_278648606(_activatnvar_combined_id, _activatnvar_t0);
	_activation_check_proc_1b_func_1685045366(_activatnvar_t0);
	_activation_check_proc_1b_func_68813211(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
	/* inline */ _activation_check_proc_1b_func_1843839682(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_4);
	_activation_check_proc_1b_func_1818378334(_activatnvar_confusing_int_9, _activatnvar_confusing_int_5);
}

void _activation_check_proc_1b_func_1685045366(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1b_func_849428300(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_9[0x4] &= _activatnvar_name_digest[0x5];

}

void _activation_check_proc_1b_func_10791197(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_5 <<= 0xb;

	/* inline */ _activation_check_proc_1b_func_16408133(_activatnvar_confusing_int_1, _activatnvar_confusing_int_d);
}

void _activation_check_proc_1b_func_1241850773(int& _activatnvar_confusing_int_0, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_8[0x5] += _activatnvar_confusing_chararray_7[0xe];

	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_1b_func_1205651429(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_f[0x6] += _activatnvar_confusing_LLUUID_c.mData[0xe];

}

void _activation_check_proc_1b_func_1170127953(LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_1b_func_1445830206(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_4;

	_activatnvar_confusing_bool_c &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_1b_func_1312132088(LLUUID& _activatnvar_combined_id, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_1b_func_866332037(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_1b_func_1445830206(_activatnvar_confusing_bool_c, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_4, _activatnvar_generic_bool_1);
}

void _activation_check_proc_1b_func_1834092931(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_102950837(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_c[0x3] = _activatnvar_secret.mData[0x6];

}

void _activation_check_proc_1b_func_299247500(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1b_func_2073651424(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1b_func_1867775101(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1b_func_1233096947(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_4.mData[0xf];

}

void _activation_check_proc_1b_func_1561855238(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_1b_func_2104205150(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_2[0xe] ^= _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_1b_func_427400593(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_7;

	_activation_check_proc_1b_func_2104205150(_activatnvar_confusing_chararray_2, _activatnvar_fscked);
	_activation_check_proc_1b_func_219764577(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_219764577(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_478183042(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_1064109703(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1b_func_1064109703(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] |= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_1b_func_97330074(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_1b_func_1050247012(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_secret.mData[0x5];

}

void _activation_check_proc_1b_func_1463444701(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xe] *= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_1b_func_1677015464(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1b_func_1358180815(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_1b_func_1135401345(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_4)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_4 ^= _activatnvar_confusing_char_a;

	/* inline */ _activation_check_proc_1b_func_1228847503(_activatnvar_section2, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1b_func_1289808424()
{
	
}

void _activation_check_proc_1b_func_2003490340(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_1b_func_492081844(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_1b_func_1272429821(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x9] = _activatnvar_confusing_chararray_9[0x1];

	_activation_check_proc_1b_func_492081844(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_773609547(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_code;

}

void _activation_check_proc_1b_func_918681072(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("4013e836-e200-125b-9afe-23ee315918d7");

}

void _activation_check_proc_1b_func_748266089(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] = _activatnvar_fscked.mData[0xb];

}

void _activation_check_proc_1b_func_1146893719(LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= 0x5;

	_activation_check_proc_1b_func_748266089(_activatnvar_fscked, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_1b_func_537024441(_activatnvar_confusing_U8_a, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_1b_func_925223102(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("786e765f-f3f0-a4e1-8277-6d30799abe03");

}

void _activation_check_proc_1b_func_876740799(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_1b_func_1873947874(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1143174943(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xd] = _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_1b_func_1319006201(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_d ^= _activatnvar_confusing_char_3;

}

void _activation_check_proc_1b_func_2053955620(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1b_func_1381152971(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_918510893(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_1b_func_1069163147(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_6.mData[0x3];

}

void _activation_check_proc_1b_func_1185765133(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1b_func_434335257(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_1b_func_1194277978(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_8[0x6] ^= _activatnvar_confusing_chararray_f[0x7];

	_activation_check_proc_1b_func_434335257(_activatnvar_confusing_U8_0);
}

void _activation_check_proc_1b_func_1225877328(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_1476266650(_activatnvar_confusing_char_2);
	/* inline */ _activation_check_proc_1b_func_1072221191(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_1476266650(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_1b_func_253347934(LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x8] |= _activatnvar_lace.mData[0x2];

	_activatnvar_confusing_int_6 += 0x8;

}

void _activation_check_proc_1b_func_1635766291(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_6;

	_activation_check_proc_1b_func_253347934(_activatnvar_lace, _activatnvar_confusing_int_6, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1b_func_194877892(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1b_func_918034297(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xd] += _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_1b_func_1329871749(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1b_func_232612197(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1b_func_1132739586(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_1b_func_684095438(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_3 *= 0xf;

}

void _activation_check_proc_1b_func_248975322()
{
	
}

void _activation_check_proc_1b_func_718567397(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_U8_4;

	_activation_check_proc_1b_func_248975322();
}

void _activation_check_proc_1b_func_163456268(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_0.mData[0xd] += _activatnvar_code.mData[0xc];

}

void _activation_check_proc_1b_func_1740383874(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_1b_func_1170554302(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_char_b;

}

void _activation_check_proc_1b_func_1592459956(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_1b_func_557944634(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_chararray_d[0xa] += _activatnvar_confusing_LLUUID_d.mData[0x7];

	/* inline */ _activation_check_proc_1b_func_1992778426(_activatnvar_confusing_char_9, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_1b_func_1362922544(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_1b_func_738359498(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x6] |= _activatnvar_confusing_LLUUID_9.mData[0xd];

}

void _activation_check_proc_1b_func_2143954815(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1b_func_1565015362(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_1b_func_1583694438(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("a94c4e2a-778c-03b9-0c61-efc1889fd470");

}

void _activation_check_proc_1b_func_1180545306(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x4] |= _activatnvar_secret.mData[0x3];

}

void _activation_check_proc_1b_func_772812393(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1b_func_307950333(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1b_func_2144787812(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_1b_func_1351163508(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_U8_4 ^= _activatnvar_confusing_char_7;

}

void _activation_check_proc_1b_func_1729110367(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_b |= 0x5;

}

void _activation_check_proc_1b_func_1689411220(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1b_func_633165478(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("84396264-f5b1-5878-4f68-415336b6256c");

}

void _activation_check_proc_1b_func_1535880816(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_char_3 *= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_1b_func_2055875404(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_2 = true;

	_activation_check_proc_1b_func_633165478(_activatnvar_confusing_LLUUID_2);
	_activation_check_proc_1b_func_1535880816(_activatnvar_confusing_char_3, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_1b_func_1189383723(U8& _activatnvar_confusing_U8_4)
{
	
	/* inline */ _activation_check_proc_1b_func_1971251019(_activatnvar_confusing_U8_4);
}

void _activation_check_proc_1b_func_2109308528(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1b_func_1670223732(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_1b_func_321063448(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1b_func_321063448(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1b_func_1430238689(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_1b_func_239285631(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_1b_func_723662792(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_1b_func_333178109(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 *= 0x0;

}

void _activation_check_proc_1b_func_1433205410(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] >>= _activatnvar_code.mData[0xe];

}

void _activation_check_proc_1b_func_469834523(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_chararray_d[0xa] += _activatnvar_confusing_chararray_b[0xc];

	_activation_check_proc_1b_func_487257292(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_1b_func_2123040667(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1b_func_487257292(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xb] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_1b_func_1356526057(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1b_func_250202760(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("3d5cb0a4-1b11-7bad-c790-ea5fd46dd9c2");

}

void _activation_check_proc_1b_func_1272010746(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_4 ^= _activatnvar_confusing_char_d;

}

void _activation_check_proc_1b_func_1041267675(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1b_func_1764522756(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 *= 0x0;

}

void _activation_check_proc_1b_func_1857064764(bool& _activatnvar_confusing_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_1b_func_2061699424(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_1b_func_2061699424(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_909651814(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_1b_func_2105906852(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 <<= _activatnvar_confusing_chararray_0[0xb];

	_activation_check_proc_1b_func_909651814(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_1b_func_156292075(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1b_func_236223368(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_7)
{
	
	/* inline */ _activation_check_proc_1b_func_114657571(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_1b_func_440491664(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_1b_func_1778557197(_activatnvar_confusing_LLUUID_b, _activatnvar_combined_id);
	_activation_check_proc_1b_func_1007852576(_activatnvar_confusing_LLUUID_8, _activatnvar_fscked);
	_activation_check_proc_1b_func_635526788(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_1b_func_1778557197(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_combined_id;

}

void _activation_check_proc_1b_func_1007852576(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] += _activatnvar_fscked.mData[0xe];

}

void _activation_check_proc_1b_func_440491664(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] = _activatnvar_confusing_LLUUID_f.mData[0x6];

}

void _activation_check_proc_1b_func_635526788(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 += 0x1;

}

void _activation_check_proc_1b_func_1185340638(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d = _activatnvar_confusing_int_d;

}

void _activation_check_proc_1b_func_1788859479(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_1b_func_1997337175(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x3] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_1b_func_1788859479(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_1031856147(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] = _activatnvar_confusing_LLUUID_c.mData[0x4];

}

void _activation_check_proc_1b_func_17016978(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_1b_func_1031856147(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1b_func_784116667(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_3[0x5] >>= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_1b_func_237884068(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] *= _activatnvar_confusing_LLUUID_5.mData[0xb];

}

void _activation_check_proc_1b_func_2076228661(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1b_func_1209587214(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_237884068(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1b_func_1506965282(int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_6, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_int_6 |= _activatnvar_confusing_int_8;

	_activation_check_proc_1b_func_511828642(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_5);
}

void _activation_check_proc_1b_func_511828642(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_char_5;

}

void _activation_check_proc_1b_func_1107483463(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_379009208(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("59dff115-ba59-edcb-3b86-a29779ceb75a");

}

void _activation_check_proc_1b_func_1406077564(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x3] ^= _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_1b_func_1622654592(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1b_func_1514393125(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x3] <<= _activatnvar_fscked.mData[0xf];

}

void _activation_check_proc_1b_func_1012157913(LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_code;

	/* inline */ _activation_check_proc_1b_func_1655863423(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_int_5);
}

void _activation_check_proc_1b_func_162351756(bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x6] == _activatnvar_confusing_char_0) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1b_func_744144309(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("33143a7e-eba3-559b-f061-5d021c21df53");

	_activation_check_proc_1b_func_1108554684(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1b_func_1108554684(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_6[0x3] <<= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_1b_func_1840951900(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1837999046(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] *= _activatnvar_confusing_chararray_c[0xa];

}

void _activation_check_proc_1b_func_760169278(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_1 = _activatnvar_secret.mData[0xd];

	_activation_check_proc_1b_func_1837999046(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_1b_func_895356789(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_3.mData[0x1];

	/* inline */ _activation_check_proc_1b_func_1106721551(_activatnvar_confusing_U8_0, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_1b_func_327383016(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_1b_func_1762258955(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_2 = 0x5;

	/* inline */ _activation_check_proc_1b_func_883272936();
	_activation_check_proc_1b_func_175628001(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1b_func_175628001(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1b_func_1311552514(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1b_func_1073797098(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_1b_func_1311552514(_activatnvar_pos, _activatnvar_so, _activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_1b_func_947289759(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] |= _activatnvar_name_digest[0x5];

}

void _activation_check_proc_1b_func_1509962473(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_2[0xb] |= _activatnvar_confusing_LLUUID_4.mData[0xc];

}

void _activation_check_proc_1b_func_199200684(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_chararray_6[0x3];

}

void _activation_check_proc_1b_func_247800251(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_1b_func_1034570193(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_6++;

	_activation_check_proc_1b_func_199200684(_activatnvar_confusing_chararray_6, _activatnvar_confusing_char_3);
	/* inline */ _activation_check_proc_1b_func_1728448566(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_1b_func_646254602(_activatnvar_t0);
	_activation_check_proc_1b_func_1509962473(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_1b_func_247800251(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_1b_func_935628315(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_1b_func_518088621(int& _activatnvar_confusing_int_1, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_b)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	_activatnvar_confusing_int_1 = _activatnvar_confusing_int_b;

	_activation_check_proc_1b_func_935628315(_activatnvar_confusing_bool_b, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1b_func_1979614753(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_1b_func_972931809(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_4 ^= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_1b_func_1216918179(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_secret;

}

void _activation_check_proc_1b_func_1757663790(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_so;

}

void _activation_check_proc_1b_func_680568733(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("37b458d2-dc7b-0d55-c135-ee752a1b1ba7");

}

void _activation_check_proc_1b_func_1658603738(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_chararray_3[0x0];

}

void _activation_check_proc_1b_func_623217230(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_so, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_0;

	_activation_check_proc_1b_func_680568733(_activatnvar_confusing_LLUUID_5);
	_activation_check_proc_1b_func_1216918179(_activatnvar_secret, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1b_func_1658603738(_activatnvar_confusing_U8_a, _activatnvar_confusing_chararray_3);
	_activation_check_proc_1b_func_1757663790(_activatnvar_confusing_LLUUID_2, _activatnvar_so);
}

void _activation_check_proc_1b_func_1748976398(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1b_func_1188319335(int& _activatnvar_confusing_int_b, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_int_b++;

	_activation_check_proc_1b_func_1748976398(_activatnvar_confusing_bool_d, _activatnvar_doaccount);
}

void _activation_check_proc_1b_func_86866158(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1b_func_691657336(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_5)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x7] != _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_1b_func_225762936(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1b_func_1705117222(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_doaccount);
	_activation_check_proc_1b_func_86866158(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_1b_func_1410853330(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1b_func_693904539(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

	/* inline */ _activation_check_proc_1b_func_1469911618(_activatnvar_t1, _activatnvar_confusing_U8_e);
	_activation_check_proc_1b_func_1410853330(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1b_func_1216753022(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

	/* inline */ _activation_check_proc_1b_func_369273328();
	_activation_check_proc_1b_func_1151316957(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_1b_func_1496275225(_activatnvar_confusing_chararray_4, _activatnvar_section2);
}

void _activation_check_proc_1b_func_1496275225(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_4[0x6] ^= _activatnvar_section2.mData[0xb];

}

void _activation_check_proc_1b_func_1151316957(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_d[0x6] ^= _activatnvar_confusing_LLUUID_5.mData[0xd];

}

void _activation_check_proc_1b_func_1863750496(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 *= _activatnvar_confusing_char_4;

}

void _activation_check_proc_1b_func_401079394(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_1863750496(_activatnvar_confusing_char_4, _activatnvar_confusing_char_0);
}

void _activation_check_proc_1b_func_1018542812(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

	/* inline */ _activation_check_proc_1b_func_30728071(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_1b_func_937178395(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1b_func_1201545247(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_secret;

}

void _activation_check_proc_1b_func_362151242(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x9] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_1b_func_62243185(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 *= 0xc;

}

void _activation_check_proc_1b_func_311069023(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
	_activation_check_proc_1b_func_62243185(_activatnvar_confusing_int_9);
}

void _activation_check_proc_1b_func_879565376(LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] |= _activatnvar_confusing_LLUUID_5.mData[0x1];

	_activation_check_proc_1b_func_1148003769(_activatnvar_section2, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_1b_func_266548901(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_1b_func_688832703(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_390238653(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_1b_func_1237505692(_activatnvar_confusing_char_2);
}

void _activation_check_proc_1b_func_1237505692(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 <<= 0x2;

}

void _activation_check_proc_1b_func_390238653(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1148003769(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x6] &= _activatnvar_section2.mData[0xf];

}

void _activation_check_proc_1b_func_2075335887(LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_2, char* _activatnvar_strbuf_0, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_1b_func_1316423385(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_1b_func_1492213218(_activatnvar_confusing_char_2, _activatnvar_confusing_bool_a, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_1b_func_1007930839(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1b_func_2036718341(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_1b_func_1175318218(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x5] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_1b_func_1518635343(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_e.mData[0x5] += _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_1b_func_2086215954(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_1b_func_1888931748(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_9;

	_activation_check_proc_1b_func_1518635343(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1b_func_2086215954(_activatnvar_t1);
}

void _activation_check_proc_1b_func_656847652(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1b_func_221229463(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1b_func_1984254782(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_5;

	_activation_check_proc_1b_func_1310279875(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_1b_func_907048126(_activatnvar_section2, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_1b_func_1416214788(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1b_func_1310279875(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1b_func_546126138(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x6] *= _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_1b_func_1293839600(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_b = _activatnvar_confusing_char_7;

}

void _activation_check_proc_1b_func_1344904325(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x6] |= _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_1b_func_804208209(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_1b_func_830363921(char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x3] == _activatnvar_feat) _activatnvar_confusing_bool_a = _activatnvar_generic_bool_0;

}

void _activation_check_proc_1b_func_167885084(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("a50d5e50-9214-b614-83f8-50bc711469f3");

}

void _activation_check_proc_1b_func_239923502(bool& _activatnvar_generic_bool_0, char& _activatnvar_feat, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_t1;

	_activation_check_proc_1b_func_167885084(_activatnvar_confusing_LLUUID_e);
	_activation_check_proc_1b_func_830363921(_activatnvar_feat, _activatnvar_generic_bool_0, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_1b_func_643365289(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_8 <<= _activatnvar_confusing_char_9;

}

void _activation_check_proc_1b_func_1492928767(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_char_2;

	_activation_check_proc_1b_func_643365289(_activatnvar_confusing_char_8, _activatnvar_confusing_bool_2, _activatnvar_confusing_char_9);
	/* inline */ _activation_check_proc_1b_func_1391289270(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1b_func_1118685830(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_2.mData[0x7] += _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_1b_func_627193780()
{
	
}

void _activation_check_proc_1b_func_373339070(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_1b_func_2015778642(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_1b_func_2134831883(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1b_func_53388844(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_1b_func_867631910(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1455640471(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_845992010(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_7[0x9] &= _activatnvar_confusing_LLUUID_e.mData[0x8];

	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_1b_func_1619222840(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_1b_func_1413898955(LLUUID& _activatnvar_so, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_1b_func_1619222840(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_239215160(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1b_func_280464631(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_1b_func_1876354597(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t1 &= 0xff;
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_1b_func_696377628(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1781924780(unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_1b_func_2048121454(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_1b_func_1051336776(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_2048121454(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_1b_func_1905909823(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_1b_func_84204601(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_combined_id.mData[0x0];

}

void _activation_check_proc_1b_func_1296508189(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_LLUUID_4.mData[0x1];

	_activation_check_proc_1b_func_1204861426(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_1b_func_1204861426(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1b_func_1980125347(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("952e1ece-60c6-8622-179c-19ce6e51dd8d");

	_activation_check_proc_1b_func_895780730(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_1b_func_895780730(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1b_func_874003128(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_1[0xc] *= _activatnvar_confusing_LLUUID_0.mData[0xe];

}

void _activation_check_proc_1b_func_1224303343(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xf] = _activatnvar_confusing_LLUUID_3.mData[0x4];

}

void _activation_check_proc_1b_func_1012666992(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1861481485(bool& _activatnvar_confusing_bool_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_4;

	_activation_check_proc_1b_func_1012666992(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_1721946457(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_chararray_2[0xd];

	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1b_func_1958660406(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = 0xa;

}

void _activation_check_proc_1b_func_700647882(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_8 <<= 0xf;

}

void _activation_check_proc_1b_func_1991923564(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_5, char* _activatnvar_strbuf_0, int& _activatnvar_confusing_int_f)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
	_activation_check_proc_1b_func_431750537(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_d);
	/* inline */ _activation_check_proc_1b_func_474870485(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1b_func_431750537(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1b_func_495491343(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_8[0xd] = _activatnvar_confusing_chararray_f[0xa];

	/* inline */ _activation_check_proc_1b_func_1730203928(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1b_func_74761077(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_1b_func_1533970023(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1b_func_955488001(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_so;

	_activatnvar_confusing_int_6 = 0xc;

}

void _activation_check_proc_1b_func_65255299(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_849159518(char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_LLUUID_a.mData[0xe] += _activatnvar_confusing_chararray_1[0x6];

	_activation_check_proc_1b_func_919204988(_activatnvar_confusing_LLUUID_d);
	_activation_check_proc_1b_func_318000095(_activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_feat, _activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_919204988(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("da756333-fd64-1cfa-ac33-e503e8632c0e");

}

void _activation_check_proc_1b_func_318000095(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1b_func_1787330449(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_7)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_9 >>= 0xb;

	_activatnvar_confusing_int_7 = _activatnvar_confusing_int_d;

}

void _activation_check_proc_1b_func_826185387(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_c |= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_1b_func_1363872759(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_f = true;

	_activation_check_proc_1b_func_826185387(_activatnvar_confusing_U8_b, _activatnvar_confusing_char_c, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_1b_func_286678760(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1b_func_456623013(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_4[0xf] <<= _activatnvar_so.mData[0xd];

}

void _activation_check_proc_1b_func_1975797171(LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1b_func_55649171(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_combined_id.mData[0x4];

}

void _activation_check_proc_1b_func_1164718152(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x7] = _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_1b_func_1693374219(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("92739d49-17ac-eea6-337e-d92677876a3f");

	/* inline */ _activation_check_proc_1b_func_1098631162(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1b_func_1744459266(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x8] != 0x0) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1b_func_290320355(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] |= _activatnvar_confusing_LLUUID_b.mData[0x4];

}

void _activation_check_proc_1b_func_1108771299(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xc] *= _activatnvar_confusing_chararray_a[0x9];

}

void _activation_check_proc_1b_func_324860666(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_9 >>= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_1b_func_1390231929(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_1b_func_484582311(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1028186576(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1b_func_1573195635(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_1b_func_165491139(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_1b_func_420908201(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1b_func_2043770783(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_9[0xa] >>= _activatnvar_confusing_LLUUID_e.mData[0xc];

}

void _activation_check_proc_1b_func_133579912(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] &= _activatnvar_name_digest[0x3];

}

void _activation_check_proc_1b_func_698903344(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1b_func_1804753286(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_d.mData[0x0];

	_activation_check_proc_1b_func_698903344(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_1b_func_797347181(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_1b_func_822383489(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1b_func_1379905568(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xf] = _activatnvar_confusing_LLUUID_f.mData[0x4];

	_activation_check_proc_1b_func_983802343(_activatnvar_confusing_int_9, _activatnvar_confusing_int_0);
}

void _activation_check_proc_1b_func_983802343(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_9 ^= _activatnvar_confusing_int_0;

}

void _activation_check_proc_1b_func_418220024(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1b_func_671026867(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 += _activatnvar_confusing_char_3;

}

void _activation_check_proc_1b_func_2059786503(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1b_func_4809050(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_470393994(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] *= _activatnvar_confusing_LLUUID_7.mData[0x1];

}

void _activation_check_proc_1b_func_2127456922(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_10356228()
{
	
}

void _activation_check_proc_1b_func_1936047923(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1717473056(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_1b_func_1450239274(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d &= _activatnvar_t1;

}

void _activation_check_proc_1b_func_686100125(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1b_func_234712783(int& _activatnvar_confusing_int_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_376143353(_activatnvar_confusing_int_9);
}

void _activation_check_proc_1b_func_376143353(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 >>= 0x6;

}

void _activation_check_proc_1b_func_2069635344()
{
	
}

void _activation_check_proc_1b_func_1751638586(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x5] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_1b_func_1204532297(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1b_func_1063721926(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1b_func_1216557887(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_e.mData[0x1] &= _activatnvar_confusing_LLUUID_0.mData[0x4];

	_activation_check_proc_1b_func_1063721926(_activatnvar_t0);
}

void _activation_check_proc_1b_func_642134823(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_1b_func_2076460301(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("1506f782-a585-fde0-4b0e-cf7d1052bff1");

}

void _activation_check_proc_1b_func_1074673617()
{
	
}

void _activation_check_proc_1b_func_306883675(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_2, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	/* inline */ _activation_check_proc_1b_func_1784060492(_activatnvar_confusing_int_b);
	_activation_check_proc_1b_func_1169375800(_activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1b_func_1169375800(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_1b_func_1217165191(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_37497865(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_37497865(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1208814793(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1b_func_987983036(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("c41aebc4-8ec4-0bf0-edbe-e6ce97559d51");

}

void _activation_check_proc_1b_func_994753002(int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_1, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_chararray_2[0x5];

	/* inline */ _activation_check_proc_1b_func_166175922(_activatnvar_confusing_int_5, _activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_1b_func_782123661(_activatnvar_confusing_U8_3, _activatnvar_confusing_bool_8);
	_activation_check_proc_1b_func_987983036(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1b_func_2049497055(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_1b_func_1725676059(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1b_func_143251017(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
	/* inline */ _activation_check_proc_1b_func_1134730764(_activatnvar_smd5, _activatnvar_ser_digest);
}

void _activation_check_proc_1b_func_2056634958(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1b_func_34183231(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_34183231(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1690259911(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_a, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	/* inline */ _activation_check_proc_1b_func_1460341967(_activatnvar_confusing_U8_a, _activatnvar_feat);
}

void _activation_check_proc_1b_func_964879623(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_1b_func_87826848(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1b_func_535531028(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_2[0x6] >>= _activatnvar_fscked.mData[0x8];

}

void _activation_check_proc_1b_func_243144499(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 |= 0x0;

}

void _activation_check_proc_1b_func_851671632(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_463441710(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1636556261(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1b_func_1588421752(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= 0x7;

}

void _activation_check_proc_1b_func_241621948(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_7[0xe] |= _activatnvar_confusing_chararray_b[0x6];

}

void _activation_check_proc_1b_func_1012282242(unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_e, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_1b_func_1651052567(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_241621948(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_1b_func_1443278121(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1b_func_278459139(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1b_func_1651052567(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1b_func_1710696538(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	/* inline */ _activation_check_proc_1b_func_1035789320(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_1b_func_825886843(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_1b_func_1278388259(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_doaccount;

}

void _activation_check_proc_1b_func_578473980(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_1[0x0] |= _activatnvar_confusing_LLUUID_6.mData[0xb];

}

void _activation_check_proc_1b_func_503167842(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_c &= _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_1b_func_640277283(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_f.mData[0x1] <<= _activatnvar_section2.mData[0x3];

	/* inline */ _activation_check_proc_1b_func_1253565213(_activatnvar_code, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_generic_iterator);
	_activation_check_proc_1b_func_1796622574(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1b_func_1796622574(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1b_func_802260211(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_2064119844(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_388505136(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x2] <<= _activatnvar_confusing_chararray_7[0x6];

}

void _activation_check_proc_1b_func_1657893349(char& _activatnvar_feat, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1b_func_249101452(char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_e;

	_activation_check_proc_1b_func_1657893349(_activatnvar_feat, _activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_1b_func_1487115351(unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_doaccount, LLUUID& _activatnvar_section1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_1b_func_116672216(_activatnvar_confusing_chararray_4, _activatnvar_section1);
}

void _activation_check_proc_1b_func_116672216(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_4[0x9] <<= _activatnvar_section1.mData[0x1];

}

void _activation_check_proc_1b_func_266122515()
{
	
}

void _activation_check_proc_1b_func_1568718346(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xf] != 0xc) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1b_func_1781758140(bool& _activatnvar_confusing_bool_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_266122515();
	_activation_check_proc_1b_func_1568718346(_activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1b_func_686102163(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 ^= _activatnvar_confusing_int_5;

}

void _activation_check_proc_1b_func_1729999781(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] <<= _activatnvar_confusing_chararray_c[0x1];

	_activation_check_proc_1b_func_1260605132(_activatnvar_confusing_chararray_1, _activatnvar_ser_digest);
}

void _activation_check_proc_1b_func_1260605132(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_1[0xf] += _activatnvar_ser_digest[0x9];

}

void _activation_check_proc_1b_func_2135388107(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1b_func_412995278(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_pos, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

	_activation_check_proc_1b_func_53248740(_activatnvar_confusing_U8_d, _activatnvar_pos);
}

void _activation_check_proc_1b_func_53248740(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_pos)
{
	_activatnvar_confusing_U8_d ^= _activatnvar_pos;

}

void _activation_check_proc_1b_func_801174526(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1975239615(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1b_func_1296231737(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

	/* inline */ _activation_check_proc_1b_func_1659874448();
}

void _activation_check_proc_1b_func_1075582314(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_1b_func_75943001(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_char_d;

}

void _activation_check_proc_1b_func_611104318(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_1b_func_207697349(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_char_0++;

	_activation_check_proc_1b_func_1075582314(_activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_1b_func_611104318(_activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_1b_func_1238492159(_activatnvar_confusing_U8_c);
	/* inline */ _activation_check_proc_1b_func_377077289();
	_activation_check_proc_1b_func_75943001(_activatnvar_confusing_char_d, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_1b_func_1972701960(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_6 += 0xd;

	/* inline */ _activation_check_proc_1b_func_1332580529(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1b_func_2109073963(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_f[0xd];

	_activation_check_proc_1b_func_989579679(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1b_func_989579679(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_chararray_9[0xc];

}

void _activation_check_proc_1b_func_384609647(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1b_func_1296860128(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1604946835(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_1b_func_2108623951(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_1450400670(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_2[0xc] *= _activatnvar_section1.mData[0x9];

	/* inline */ _activation_check_proc_1b_func_1413013205(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_2108623951(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_565527460(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_iterator++;
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1b_func_929421126(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_f *= _activatnvar_confusing_int_4;

}

void _activation_check_proc_1b_func_1580968958(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x1] = _activatnvar_confusing_chararray_6[0xa];

}

void _activation_check_proc_1b_func_1425186868(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x1] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_1b_func_210858073(_activatnvar_generic_iterator);
	_activation_check_proc_1b_func_1653908488(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_1b_func_1653908488(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_210858073(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1b_func_1993099241(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_e.mData[0x5] |= _activatnvar_section2.mData[0x8];

}

void _activation_check_proc_1b_func_814139067(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_chararray_f[0xd];

	/* inline */ _activation_check_proc_1b_func_1474954855(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_1b_func_964342625(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_880414794(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1b_func_1094460499(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_char_f *= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_1b_func_966243256(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xd] &= _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_1b_func_931839091(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1249375610(char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_1b_func_809103711(_activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_doaccount);
}

void _activation_check_proc_1b_func_2139782928(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x4] += _activatnvar_confusing_LLUUID_6.mData[0xc];

}

void _activation_check_proc_1b_func_2086582045(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1b_func_343385205(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_chararray_2[0x0] <<= _activatnvar_confusing_LLUUID_f.mData[0x1];

	_activation_check_proc_1b_func_2086582045(_activatnvar_confusing_int_c);
	_activation_check_proc_1b_func_932969367(_activatnvar_generic_iterator);
}

void _activation_check_proc_1b_func_932969367(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1244348503(bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_1 &= 0xe;

}

void _activation_check_proc_1b_func_803019642(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x6] &= _activatnvar_lace.mData[0x6];

}

void _activation_check_proc_1b_func_1077336979(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_a |= _activatnvar_so.mData[0x3];

}

void _activation_check_proc_1b_func_470316446(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_1b_func_1485907086(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_6[0xe] = _activatnvar_confusing_chararray_4[0x5];

	/* inline */ _activation_check_proc_1b_func_1117601956(_activatnvar_doaccount, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_1b_func_1680376311(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_1b_func_1920647882(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 |= 0x3;

}

void _activation_check_proc_1b_func_2096269137(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xc] >>= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_1b_func_1267833920(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_1b_func_2096269137(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_1);
	_activation_check_proc_1b_func_583699406(_activatnvar_confusing_char_d);
}

void _activation_check_proc_1b_func_583699406(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_1b_func_1613230547()
{
	
}

void _activation_check_proc_1b_func_2016095361(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 <<= _activatnvar_confusing_int_7;

}

void _activation_check_proc_1b_func_1992461167(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 <<= _activatnvar_confusing_char_4;

}

void _activation_check_proc_1b_func_1849737188(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_1b_func_49508785(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_7, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t1, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 *= _activatnvar_t1;

	_activation_check_proc_1b_func_1992461167(_activatnvar_confusing_char_4, _activatnvar_confusing_U8_4);
	/* inline */ _activation_check_proc_1b_func_298935849(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_1b_func_436200278(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
	_activation_check_proc_1b_func_2016095361(_activatnvar_confusing_int_7);
	_activation_check_proc_1b_func_1849737188(_activatnvar_confusing_U8_2);
	/* inline */ _activation_check_proc_1b_func_1797380639(_activatnvar_confusing_char_6, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1b_func_1047970056(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xb] ^= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_1b_func_1518973373(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_705946109(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("31c47b2a-2863-f693-e7f8-e26661dba0a3");

	_activation_check_proc_1b_func_1032043883(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_1b_func_1173511001(_activatnvar_confusing_char_b, _activatnvar_confusing_char_2);
	/* inline */ _activation_check_proc_1b_func_851507026(_activatnvar_confusing_U8_e, _activatnvar_section1);
}

void _activation_check_proc_1b_func_1032043883(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_1b_func_1173511001(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_char_2;

}

void _activation_check_proc_1b_func_808007676(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x5] |= _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_1b_func_2034261560(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x2] |= _activatnvar_mac_digest[0x3];

}

void _activation_check_proc_1b_func_649618674(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_d &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1b_func_109411695(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x7] &= _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_1b_func_671178494(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= 0xb;

	_activation_check_proc_1b_func_882328211(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_1b_func_882328211(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x1] += _activatnvar_confusing_chararray_3[0x1];

}

void _activation_check_proc_1b_func_565574109(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1342389397(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x3] = _activatnvar_confusing_chararray_e[0x9];

}

void _activation_check_proc_1b_func_525402575(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 *= _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_1b_func_958189682()
{
	
}

void _activation_check_proc_1b_func_1851875116(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_2)
{
	
	_activation_check_proc_1b_func_958189682();
	/* inline */ _activation_check_proc_1b_func_11427718(_activatnvar_section1, _activatnvar_confusing_chararray_2);
	/* inline */ _activation_check_proc_1b_func_197333751(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_1b_func_1899797950(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_1229210925(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] &= _activatnvar_lace.mData[0x0];

}

void _activation_check_proc_1b_func_1252852684(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_1229210925(_activatnvar_lace, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1b_func_1359750477(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_c;

	_activation_check_proc_1b_func_1015455409(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1b_func_1015455409(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1b_func_442682863(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_combined_id;

	/* inline */ _activation_check_proc_1b_func_124770253(_activatnvar_confusing_int_7);
}

void _activation_check_proc_1b_func_1486333692(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_e)
{
	
	/* inline */ _activation_check_proc_1b_func_137895270(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_1b_func_988500880(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1b_func_1187441497(int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_int_a &= 0xff;

	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_2 <<= _activatnvar_confusing_char_e;

}

void _activation_check_proc_1b_func_1512746014(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x8] >>= _activatnvar_confusing_LLUUID_a.mData[0xc];

}

void _activation_check_proc_1b_func_121603332(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_1b_func_777262360(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_1b_func_1280138275(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1b_func_443761437(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_7[0x8];

	_activation_check_proc_1b_func_1337402859(_activatnvar_section2, _activatnvar_confusing_char_6);
}

void _activation_check_proc_1b_func_1337402859(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_section2.mData[0x4];

}

void _activation_check_proc_1b_func_752259910(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_1b_func_1537220574(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("eca6fb6b-69fe-a9d2-5729-3c0fce0f6670");

}

void _activation_check_proc_1b_func_1057524298(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_lace;

}

void _activation_check_proc_1b_func_41166663(bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1b_func_1162252823(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_chararray_7[0x2];

}

void _activation_check_proc_1b_func_1833981523(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

	/* inline */ _activation_check_proc_1b_func_1930962116(_activatnvar_confusing_U8_9, _activatnvar_confusing_bool_6);
	_activation_check_proc_1b_func_93450307(_activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_1b_func_1162252823(_activatnvar_confusing_chararray_7, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_1b_func_93450307(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_d.mData[0x0];

}

void _activation_check_proc_1b_func_73053135(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1b_func_1230808728(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_1b_func_2018714094(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_1b_func_1230808728(_activatnvar_so, _activatnvar_t1, _activatnvar_pos);
}

void _activation_check_proc_1b_func_229347626(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] *= _activatnvar_section1.mData[0xc];

	/* inline */ _activation_check_proc_1b_func_1664525470(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_1b_func_2037462160(int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_e[0x7] &= _activatnvar_confusing_chararray_3[0xc];

	/* inline */ _activation_check_proc_1b_func_526981290(_activatnvar_confusing_int_4);
	_activation_check_proc_1b_func_1375111415(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1b_func_1375111415(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x4] |= _activatnvar_confusing_LLUUID_3.mData[0x8];

}

void _activation_check_proc_1b_func_28862531(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_f;

	/* inline */ _activation_check_proc_1b_func_887756190(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_1b_func_129395132(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] += _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_1b_func_21948173(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_1b_func_1298363605(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1b_func_1268481525(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_LLUUID_f.mData[0x4];

	/* inline */ _activation_check_proc_1b_func_1355762685(_activatnvar_confusing_chararray_2, _activatnvar_lace);
}

void _activation_check_proc_1b_func_1319470632(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_6 = _activatnvar_doaccount;

}

void _activation_check_proc_1b_func_697875989(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("0cdd6102-5401-ff95-e96c-960ddef58f37");

}

void _activation_check_proc_1b_func_909362050(int& _activatnvar_confusing_int_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1b_func_910412413(_activatnvar_confusing_int_4);
}

void _activation_check_proc_1b_func_2051679150(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x5] != _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_a;

	/* inline */ _activation_check_proc_1b_func_1642761076(_activatnvar_t0);
}

void _activation_check_proc_1b_func_1921976618(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

	_activatnvar_confusing_chararray_f[0x0] ^= _activatnvar_name_digest[0xd];

}

void _activation_check_proc_1b_func_1979513612(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("5e8b7a98-d09c-2630-6b03-fe3d5db3dd12");

}

void _activation_check_proc_1b_func_2095476640(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xa] == 0x6) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1b_func_1465427417(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1b_func_1062291153(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_b);
	_activation_check_proc_1b_func_2095476640(_activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_1b_func_1074680965(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_1b_func_1514580405(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1b_func_1074680965(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 += 0x7;

}

void _activation_check_proc_1b_func_306953130(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1b_func_106745970(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_1b_func_799018340(_activatnvar_confusing_int_2);
}

void _activation_check_proc_1b_func_1739483831(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] += _activatnvar_confusing_chararray_7[0x0];

}

void _activation_check_proc_1b_func_458768443(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_1b_func_1449914427(int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_1b_func_606389109();
	_activation_check_proc_1b_func_1739483831(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_1b_func_1631376928(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_1b_func_2111416958();
	_activation_check_proc_1b_func_458768443(_activatnvar_confusing_int_4);
}

void _activation_check_proc_1b_func_1118696195(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1b_func_720337301(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_1b_func_1700746060(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_2 <<= _activatnvar_confusing_chararray_2[0xe];

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_554029776(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_3, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_1b_func_1312347199(_activatnvar_confusing_int_0);
	_activation_check_proc_1b_func_637028229(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_1b_func_1958246080(_activatnvar_confusing_char_3, _activatnvar_confusing_char_9);
}

void _activation_check_proc_1b_func_637028229(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1b_func_1312347199(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_1b_func_1039087663(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_strbuf_0[0] = 11; _activatnvar_strbuf_0[0] ^= 61; _activatnvar_strbuf_0[1] = 37; _activatnvar_strbuf_0[1] ^= 21; _activatnvar_strbuf_0[2] = 53; _activatnvar_strbuf_0[2] ^= 1; _activatnvar_strbuf_0[3] = 21; _activatnvar_strbuf_0[3] ^= 36; _activatnvar_strbuf_0[4] = 105; _activatnvar_strbuf_0[4] ^= 90; _activatnvar_strbuf_0[5] = 98; _activatnvar_strbuf_0[5] ^= 1; _activatnvar_strbuf_0[6] = 21; _activatnvar_strbuf_0[6] ^= 37; _activatnvar_strbuf_0[7] = 44; _activatnvar_strbuf_0[7] ^= 30; _activatnvar_strbuf_0[8] = 113; _activatnvar_strbuf_0[8] ^= 92; _activatnvar_strbuf_0[9] = 62; _activatnvar_strbuf_0[9] ^= 14; _activatnvar_strbuf_0[10] = 60; _activatnvar_strbuf_0[10] ^= 14; _activatnvar_strbuf_0[11] = 1; _activatnvar_strbuf_0[11] ^= 53; _activatnvar_strbuf_0[12] = 120; _activatnvar_strbuf_0[12] ^= 78; _activatnvar_strbuf_0[13] = 44; _activatnvar_strbuf_0[13] ^= 1; _activatnvar_strbuf_0[14] = 81; _activatnvar_strbuf_0[14] ^= 97; _activatnvar_strbuf_0[15] = 22; _activatnvar_strbuf_0[15] ^= 38; _activatnvar_strbuf_0[16] = 48; _activatnvar_strbuf_0[16] ^= 3; _activatnvar_strbuf_0[17] = 46; _activatnvar_strbuf_0[17] ^= 30; _activatnvar_strbuf_0[18] = 69; _activatnvar_strbuf_0[18] ^= 104; _activatnvar_strbuf_0[19] = 102; _activatnvar_strbuf_0[19] ^= 84; _activatnvar_strbuf_0[20] = 82; _activatnvar_strbuf_0[20] ^= 99; _activatnvar_strbuf_0[21] = 108; _activatnvar_strbuf_0[21] ^= 92; _activatnvar_strbuf_0[22] = 8; _activatnvar_strbuf_0[22] ^= 49; _activatnvar_strbuf_0[23] = 43; _activatnvar_strbuf_0[23] ^= 6; _activatnvar_strbuf_0[24] = 107; _activatnvar_strbuf_0[24] ^= 83; _activatnvar_strbuf_0[25] = 105; _activatnvar_strbuf_0[25] ^= 81; _activatnvar_strbuf_0[26] = 55; _activatnvar_strbuf_0[26] ^= 2; _activatnvar_strbuf_0[27] = 4; _activatnvar_strbuf_0[27] ^= 53; _activatnvar_strbuf_0[28] = 8; _activatnvar_strbuf_0[28] ^= 60; _activatnvar_strbuf_0[29] = 64; _activatnvar_strbuf_0[29] ^= 121; _activatnvar_strbuf_0[30] = 28; _activatnvar_strbuf_0[30] ^= 44; _activatnvar_strbuf_0[31] = 125; _activatnvar_strbuf_0[31] ^= 28; _activatnvar_strbuf_0[32] = 32; _activatnvar_strbuf_0[32] ^= 67; _activatnvar_strbuf_0[33] = 8; _activatnvar_strbuf_0[33] ^= 48; _activatnvar_strbuf_0[34] = 100; _activatnvar_strbuf_0[34] ^= 1; _activatnvar_strbuf_0[35] = 24; _activatnvar_strbuf_0[35] ^= 43; _activatnvar_strbuf_0[36] = 0;
	_activation_check_proc_1b_func_701411645(_activatnvar_strbuf_0, _activatnvar_section2);
}

void _activation_check_proc_1b_func_701411645(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1b_func_983190798(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xa] != _activatnvar_t1) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1b_func_1778567439(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_1b_func_1514438771(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("aa2d4d8a-e8a9-8c83-45c2-9fd7570af3bd");

	_activation_check_proc_1b_func_8685739(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1b_func_8685739(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_6[0xe] += _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_1b_func_986404643(unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_generic_bool_1;

	_activation_check_proc_1b_func_1131979633(_activatnvar_confusing_chararray_8, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_1b_func_1131979633(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 *= _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_1b_func_1765957004(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_e &= _activatnvar_confusing_int_5;

}

void _activation_check_proc_1b_func_1422632683(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1b_func_1665574005(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= 0xe;

}

void _activation_check_proc_1b_func_432494559(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1b_func_516221330(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_1b_func_516221330(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1b_func_548553785(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x7] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_1b_func_2052656695(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xe] ^= _activatnvar_section2.mData[0x3];

}

void _activation_check_proc_1b_func_726514429(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1b_func_1560540437(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_1b_func_1070389689(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_pos, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_5[0x6] ^= _activatnvar_code.mData[0x3];

	/* inline */ _activation_check_proc_1b_func_1782891488(_activatnvar_pos, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1b_func_2050773883(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_1b_func_29704147(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_f >>= _activatnvar_confusing_char_d;

}

void _activation_check_proc_1b_func_1802839441(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1b_func_199560150(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1b_func_99710644(U8& _activatnvar_pos, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_1b_func_2125904406(_activatnvar_confusing_U8_8, _activatnvar_doaccount);
}

void _activation_check_proc_1b_func_2125904406(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_U8_8 <<= 0xa;

}

void _activation_check_proc_1b_func_657268071(LLUUID& _activatnvar_fscked, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_chararray_e[0xd];

	/* inline */ _activation_check_proc_1b_func_1209992336(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_1b_func_809068549(_activatnvar_confusing_LLUUID_9, _activatnvar_fscked);
	_activation_check_proc_1b_func_178874956(_activatnvar_confusing_char_b, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_1b_func_717976740(_activatnvar_confusing_char_b, _activatnvar_confusing_char_7);
}

void _activation_check_proc_1b_func_178874956(char& _activatnvar_confusing_char_b, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_b += 0x3;

}

void _activation_check_proc_1b_func_809068549(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_9.mData[0xf] &= _activatnvar_fscked.mData[0xd];

}

void _activation_check_proc_1b_func_1787474464(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1b_func_538958224(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= _activatnvar_confusing_int_5;

}

void _activation_check_proc_1b_func_1329352033(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1b_func_1015742720(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_1b_func_275398156(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x7] == 0x8) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_1b_func_206884780(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("3c1adfc0-c5d7-8efd-5557-03979704be44");

	/* inline */ _activation_check_proc_1b_func_624254414(_activatnvar_confusing_char_4, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_8);
	_activation_check_proc_1b_func_1922068441(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_b);
	_activation_check_proc_1b_func_275398156(_activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_1b_func_1085199846(_activatnvar_doaccount, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_1b_func_1403642397(_activatnvar_confusing_char_9);
}

void _activation_check_proc_1b_func_1922068441(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xa] != 0xb) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_1b_func_1246502513(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_code;

}

void _activation_check_proc_1b_func_1351790760(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_U8_c ^= _activatnvar_confusing_char_8;

}

void _activation_check_proc_1b_func_207514701(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
