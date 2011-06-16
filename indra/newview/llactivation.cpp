// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions login

void _activation_check_proc_login_func_1010701252(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_2.mData[0x9] ^= _activatnvar_confusing_chararray_c[0x5];

	_activation_check_proc_login_func_1523466924(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_login_func_1523466924(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_login_func_400662242(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x9] &= _activatnvar_confusing_chararray_a[0xe];

	/* inline */ _activation_check_proc_login_func_219909766(_activatnvar_confusing_U8_4);
	/* inline */ _activation_check_proc_login_func_202684803(_activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_login_func_453051562(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_login_func_982276004(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x3] >>= _activatnvar_secret.mData[0x5];

}

void _activation_check_proc_login_func_667055101(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1614930006(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_login_func_1856242618(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_login_func_754047767(int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_int_0 ^= 0x4;

	/* inline */ _activation_check_proc_login_func_1304063868(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_login_func_101494306(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("c8ca8a4b-b4d7-3faf-0f90-4ce8cd8cae50");

}

void _activation_check_proc_login_func_1210340391(bool& _activatnvar_generic_bool_2, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_generic_bool_2) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_f;

	_activation_check_proc_login_func_101494306(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_login_func_1511705039(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] <<= _activatnvar_confusing_chararray_c[0x4];

}

void _activation_check_proc_login_func_315935141(DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_login_func_2052464550(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_2.mData[0x8] &= _activatnvar_confusing_LLUUID_6.mData[0xc];

}

void _activation_check_proc_login_func_1523880576(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("3d94dca2-ba80-1d5e-04f9-82b4f1bc075d");

}

void _activation_check_proc_login_func_1565622099(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_char_a;

}

void _activation_check_proc_login_func_288901502(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_lace.mData[0xd];

}

void _activation_check_proc_login_func_1336101211(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_generic_bool_2)
{
	if(_activatnvar_generic_bool_0) _activatnvar_generic_bool_2 = true;
	_activation_check_proc_login_func_147090368(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_login_func_1164974401(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_147090368(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xc] |= _activatnvar_confusing_LLUUID_5.mData[0x1];

}

void _activation_check_proc_login_func_1164974401(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_709714198(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_4[0xc] <<= _activatnvar_confusing_LLUUID_8.mData[0xc];

}

void _activation_check_proc_login_func_637885258(char& _activatnvar_confusing_char_d, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_4)
{
	
	_activation_check_proc_login_func_709714198(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_login_func_1237765757();
	/* inline */ _activation_check_proc_login_func_658964613(_activatnvar_confusing_bool_3, _activatnvar_confusing_char_d, _activatnvar_feat);
}

void _activation_check_proc_login_func_1088999876(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_login_func_1868485600(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1043051964(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_login_func_703939320(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_generic_bool_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_1951677517(_activatnvar_generic_bool_2, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_login_func_1998593614(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1720908175(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_so.mData[0xc];

}

void _activation_check_proc_login_func_1629575151(char& _activatnvar_confusing_char_8, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

	/* inline */ _activation_check_proc_login_func_964603645(_activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_login_func_1248922180(_activatnvar_confusing_int_1);
}

void _activation_check_proc_login_func_244425010(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("a106a4ba-aed9-4aa6-a593-abb64711c720");

	_activation_check_proc_login_func_517413452();
	/* inline */ _activation_check_proc_login_func_1130715139(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_login_func_517413452()
{
	
}

void _activation_check_proc_login_func_1334861745(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_login_func_1512458946(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_c[0x8] ^= _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_login_func_353797435(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] &= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_login_func_232194270(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("a2c7c3ee-3606-2bb4-1a9f-7dc0311e622d");

}

void _activation_check_proc_login_func_1973233003(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_login_func_1874609873(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_login_func_1878264997(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_login_func_1553329643(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xf] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_f;

	_activatnvar_confusing_LLUUID_b.mData[0xd] &= _activatnvar_so.mData[0x3];

}

void _activation_check_proc_login_func_1142939519(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_login_func_1199514692(LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_login_func_1525731290(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_login_func_1489278135(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_login_func_1110491508(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_5[0xe] &= _activatnvar_confusing_LLUUID_2.mData[0x7];

}

void _activation_check_proc_login_func_1229662013(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_3)
{
	
	/* inline */ _activation_check_proc_login_func_1071468691(_activatnvar_confusing_char_3, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_login_func_596297161(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_section2;

	_activatnvar_confusing_LLUUID_2.mData[0xd] ^= _activatnvar_confusing_LLUUID_1.mData[0xc];

}

void _activation_check_proc_login_func_997662726(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_login_func_1213857967(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1213857967(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1072977330()
{
	
}

void _activation_check_proc_login_func_1263673035(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_0 &= _activatnvar_confusing_LLUUID_8.mData[0x9];

	if(_activatnvar_confusing_LLUUID_f.mData[0x8] != _activatnvar_confusing_char_e) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_login_func_1736908244(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_login_func_1359352602(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_login_func_1736908244(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_login_func_1263673035(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_d, _activatnvar_confusing_char_e, _activatnvar_confusing_U8_0, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_login_func_1108669942(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_login_func_1404566339(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e |= 0xc;

	_activation_check_proc_login_func_1108669942(_activatnvar_confusing_U8_9, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_login_func_1602429825(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_login_func_2005921126(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_login_func_1402838401(_activatnvar_strbuf_0, _activatnvar_secret);
}

void _activation_check_proc_login_func_1317593065(char& _activatnvar_confusing_char_2)
{
	
	/* inline */ _activation_check_proc_login_func_219185230(_activatnvar_confusing_char_2);
}

void _activation_check_proc_login_func_2117925313(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1900282813(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_c[0xd] &= _activatnvar_confusing_LLUUID_d.mData[0x7];

}

void _activation_check_proc_login_func_1913670718(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
	_activation_check_proc_login_func_1900282813(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_login_func_244888218(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xf] == 0xe) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_login_func_1235049585(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_login_func_243104893(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
	/* inline */ _activation_check_proc_login_func_33342945(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_login_func_1216118288(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_0[0x2] = _activatnvar_confusing_LLUUID_6.mData[0xe];

}

void _activation_check_proc_login_func_1365792724(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_so, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_chararray_5[0xb] += _activatnvar_lace.mData[0x4];

	_activation_check_proc_login_func_232551604(_activatnvar_confusing_bool_c, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_8);
	_activation_check_proc_login_func_718571534(_activatnvar_so, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_login_func_232551604(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x3] != 0xf) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_login_func_718571534(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_so;

}

void _activation_check_proc_login_func_886244397(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] += _activatnvar_confusing_LLUUID_7.mData[0xa];

}

void _activation_check_proc_login_func_2032600448(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_login_func_180300828(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_a[0x6] <<= _activatnvar_confusing_LLUUID_8.mData[0x7];

}

void _activation_check_proc_login_func_1994310152(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0x7;

	_activation_check_proc_login_func_1719336809(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_login_func_1719336809(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_login_func_352067633(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_login_func_2070431640(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_3 = 0xd;

}

void _activation_check_proc_login_func_1307008613(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_section1;

}

void _activation_check_proc_login_func_754127822(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_3++;

	_activation_check_proc_login_func_1307008613(_activatnvar_confusing_LLUUID_1, _activatnvar_section1);
}

void _activation_check_proc_login_func_779083675(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1913395100(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_login_func_817069396(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] >>= _activatnvar_confusing_LLUUID_6.mData[0x0];

}

void _activation_check_proc_login_func_165448220(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_5[0x8] <<= _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_login_func_1594363825(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_0 += _activatnvar_confusing_char_f;

	_activation_check_proc_login_func_582408594(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_login_func_582408594(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("c989bf42-97c5-0c88-8010-71b1963ca3c4");

}

void _activation_check_proc_login_func_1184494707(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_login_func_2099957838(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_7 += _activatnvar_confusing_char_5;

}

void _activation_check_proc_login_func_458075282(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1394628049(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_a *= _activatnvar_confusing_int_7;

	/* inline */ _activation_check_proc_login_func_2035527525(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_4);
	_activation_check_proc_login_func_888128050(_activatnvar_confusing_bool_d, _activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_login_func_888128050(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xc] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_login_func_618515666(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_login_func_791226858(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
	_activation_check_proc_login_func_618515666(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_login_func_661567124(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_5[0xc] |= _activatnvar_section1.mData[0x5];

}

void _activation_check_proc_login_func_819801714(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_e.mData[0xc] <<= _activatnvar_confusing_LLUUID_c.mData[0xc];

	/* inline */ _activation_check_proc_login_func_1748278100(_activatnvar_confusing_char_f);
}

void _activation_check_proc_login_func_1944726077(int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_login_func_691083314(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_691083314(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_2056531232(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_login_func_1688278353(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] ^= _activatnvar_confusing_chararray_f[0x5];

}

void _activation_check_proc_login_func_1753843456(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_login_func_2122688917(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_login_func_1211714159(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_doaccount;

}

void _activation_check_proc_login_func_1654372436(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_login_func_849950802(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_4 &= 0xf;

	_activation_check_proc_login_func_1654372436(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_login_func_709172235(_activatnvar_confusing_U8_1, _activatnvar_confusing_char_3);
	_activation_check_proc_login_func_1211714159(_activatnvar_doaccount, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_login_func_1853349100(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_login_func_1168145886(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0x7;

}

void _activation_check_proc_login_func_20104137(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_202813732(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_74739352(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_d++;

	_activatnvar_confusing_LLUUID_a = LLUUID("cb8fd712-1972-d7a4-7dc4-086be56a4d66");

}

void _activation_check_proc_login_func_1864978936(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_login_func_742488308(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_login_func_1591058910(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_login_func_717085947(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_login_func_324087235(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_login_func_810899612(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_login_func_810899612(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] == 0x6) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_login_func_621773483(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_0[0xd] <<= _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_login_func_1847394945(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
	/* inline */ _activation_check_proc_login_func_2032604833(_activatnvar_confusing_chararray_a, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_login_func_1063273095(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_login_func_466514366(_activatnvar_confusing_bool_8, _activatnvar_confusing_char_f, _activatnvar_confusing_U8_c);
	_activation_check_proc_login_func_1638231568(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_login_func_466514366(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_f += _activatnvar_confusing_U8_c;

}

void _activation_check_proc_login_func_1638231568(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_760600752(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_login_func_745145552(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x5] != 0x9) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_login_func_1775304993(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x0] = _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_login_func_994226766(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_int_a &= 0xff;

	/* inline */ _activation_check_proc_login_func_1223257916(_activatnvar_confusing_int_6);
	_activation_check_proc_login_func_1775304993(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_login_func_249092958(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1499467512(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_chararray_4[0x2];

	_activatnvar_confusing_chararray_5[0xb] ^= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_login_func_57771145(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_login_func_1499467512(_activatnvar_confusing_chararray_5, _activatnvar_confusing_char_8, _activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_login_func_123355071(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_1.mData[0x9] <<= _activatnvar_lace.mData[0x1];

}

void _activation_check_proc_login_func_757899379(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_2[0xd] = _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_login_func_381310260(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_login_func_397425080(_activatnvar_confusing_U8_f, _activatnvar_doaccount);
}

void _activation_check_proc_login_func_1463730639(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
	/* inline */ _activation_check_proc_login_func_880105228(_activatnvar_confusing_LLUUID_7, _activatnvar_section2);
}

void _activation_check_proc_login_func_1229809657(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] &= _activatnvar_confusing_LLUUID_1.mData[0x9];

}

void _activation_check_proc_login_func_325045039(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_2)
{
	if(_activatnvar_generic_bool_0) _activatnvar_generic_bool_2 = true;
}

void _activation_check_proc_login_func_2110431799(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_chararray_f[0x5];

}

void _activation_check_proc_login_func_543051421(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_9 &= _activatnvar_confusing_int_3;

}

void _activation_check_proc_login_func_1706058175(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_b += 0x1;

}

void _activation_check_proc_login_func_1971962403(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xc] *= _activatnvar_confusing_chararray_a[0x2];

}

void _activation_check_proc_login_func_143860578(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_1;

	_activation_check_proc_login_func_1971962403(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_login_func_163150467(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_d[0x5] ^= _activatnvar_confusing_LLUUID_6.mData[0x0];

}

void _activation_check_proc_login_func_290678056(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1911944991(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_2 *= _activatnvar_confusing_int_c;

}

void _activation_check_proc_login_func_879191973(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_login_func_802726471(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_U8_9 >>= _activatnvar_confusing_char_2;

	_activation_check_proc_login_func_879191973(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_login_func_764303593(U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_b = _activatnvar_fscked.mData[0xf];

	_activation_check_proc_login_func_390086823(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_390086823(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_login_func_64300551(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_341233358(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_9[0xf] = _activatnvar_secret.mData[0xc];

}

void _activation_check_proc_login_func_2126502102(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_4 <<= _activatnvar_confusing_char_6;

}

void _activation_check_proc_login_func_659397758(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_char_4;

}

void _activation_check_proc_login_func_1967105666(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_login_func_1915956192(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_e;

	
	
	/* inline */ _activation_check_proc_login_func_1917379558(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_login_func_722319660(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("86021e0d-32e6-f5fe-84cc-fcd2fe92b94c");

}

void _activation_check_proc_login_func_1931779904(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1015374593(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_login_func_134308658(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("16c643b1-c51f-d2f8-d864-12b6ea65bf71");

	/* inline */ _activation_check_proc_login_func_1697811038(_activatnvar_t0);
	/* inline */ _activation_check_proc_login_func_1963579563(_activatnvar_t0);
	/* inline */ _activation_check_proc_login_func_1197853338(_activatnvar_t0);
}

void _activation_check_proc_login_func_194373489(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a ^= 0xc;

}

void _activation_check_proc_login_func_1622364432(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_6;

	_activation_check_proc_login_func_386728679(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_3);
	_activation_check_proc_login_func_194373489(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_login_func_386728679(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x8] &= _activatnvar_confusing_LLUUID_1.mData[0x8];

}

void _activation_check_proc_login_func_614549087(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_login_func_10245905(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1648925710(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_d[0x0] <<= _activatnvar_confusing_LLUUID_9.mData[0x1];

	/* inline */ _activation_check_proc_login_func_1378942128(_activatnvar_secret, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_login_func_2112862439(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d ^= 0xc;

}

void _activation_check_proc_login_func_448737629(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1373945295(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_login_func_737736812(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x4] += _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_login_func_1998234680(U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
	_activation_check_proc_login_func_737736812(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_7);
	_activation_check_proc_login_func_34050462();
	_activation_check_proc_login_func_1047730080(_activatnvar_pos);
	/* inline */ _activation_check_proc_login_func_1305283841(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_login_func_1047730080(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_login_func_34050462()
{
	
}

void _activation_check_proc_login_func_750093506(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 |= 0xa;

}

void _activation_check_proc_login_func_1827075463(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_login_func_885293007(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_login_func_1277474615(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	
	/* inline */ _activation_check_proc_login_func_918211736(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_login_func_1323693330(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_a[0xe] ^= _activatnvar_mac_digest[0xd];

}

void _activation_check_proc_login_func_1761727347(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_1;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_391524120(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_LLUUID_9.mData[0x2] = _activatnvar_confusing_LLUUID_b.mData[0x2];

	/* inline */ _activation_check_proc_login_func_1370205322(_activatnvar_confusing_int_1);
	_activation_check_proc_login_func_1761727347(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_1, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_login_func_1950354720(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_login_func_197536786(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xb] = _activatnvar_confusing_chararray_7[0x6];

}

void _activation_check_proc_login_func_1248254104(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_login_func_931972567(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_doaccount;

}

void _activation_check_proc_login_func_764334976(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_login_func_931972567(_activatnvar_doaccount, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_login_func_1027498169(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_a)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xd] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_7 = false;

	_activation_check_proc_login_func_663198203(_activatnvar_confusing_int_0, _activatnvar_confusing_int_d);
}

void _activation_check_proc_login_func_663198203(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d ^= _activatnvar_confusing_int_0;

}

void _activation_check_proc_login_func_1991331755(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_d.mData[0x2] = _activatnvar_confusing_LLUUID_e.mData[0x5];

}

void _activation_check_proc_login_func_1726367229(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_login_func_1767504336(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_496804775(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_login_func_706557957(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] <<= _activatnvar_confusing_LLUUID_4.mData[0xb];

	_activation_check_proc_login_func_496804775(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_login_func_1060936433(_activatnvar_secret, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_login_func_1484245329(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_LLUUID_2.mData[0xe];

}

void _activation_check_proc_login_func_2039492014()
{
	
}

void _activation_check_proc_login_func_633726145(U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_U8_c;

	_activatnvar_confusing_int_5++;

	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_1;

	_activatnvar_confusing_U8_5 >>= 0xc;

}

void _activation_check_proc_login_func_1148300417(char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_8;

	_activation_check_proc_login_func_2039492014();
	/* inline */ _activation_check_proc_login_func_1872077979(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_2);
	_activation_check_proc_login_func_633726145(_activatnvar_confusing_U8_c, _activatnvar_confusing_U8_5, _activatnvar_confusing_bool_1, _activatnvar_confusing_char_f, _activatnvar_confusing_bool_c, _activatnvar_confusing_int_5);
}

void _activation_check_proc_login_func_1914767934()
{
	
}

void _activation_check_proc_login_func_529777652(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x2] *= _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_login_func_741343087(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1195014029(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_login_func_1481878809(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_7 = LLUUID("ac1a7f78-6426-97e5-b79e-dc307cddfc42");

}

void _activation_check_proc_login_func_2130610619(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= 0x8;

}

void _activation_check_proc_login_func_121428900(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_9[0x9] <<= _activatnvar_confusing_chararray_5[0x0];

}

void _activation_check_proc_login_func_1978323325()
{
	
}

void _activation_check_proc_login_func_2127771963(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_e[0x5] >>= _activatnvar_confusing_LLUUID_a.mData[0x2];

}

void _activation_check_proc_login_func_60976911(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_chararray_9[0xb] ^= _activatnvar_confusing_LLUUID_d.mData[0x6];

	_activatnvar_confusing_int_a <<= _activatnvar_confusing_int_f;

}

void _activation_check_proc_login_func_325633081(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 = 0x2;

}

void _activation_check_proc_login_func_93450149(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_c <<= 0x9;

}

void _activation_check_proc_login_func_905616477(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_t0, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_chararray_3[0x4];

	/* inline */ _activation_check_proc_login_func_1199276865(_activatnvar_t0);
}

void _activation_check_proc_login_func_1297610337(U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_U8_a++;

	/* inline */ _activation_check_proc_login_func_487149389(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_login_func_1739883911();
}

void _activation_check_proc_login_func_1907896792(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xe] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_1 = false;

	/* inline */ _activation_check_proc_login_func_992389679(_activatnvar_confusing_int_1);
	_activation_check_proc_login_func_1759070745(_activatnvar_confusing_U8_c, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_login_func_1759070745(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_c.mData[0xd];

}

void _activation_check_proc_login_func_1724258286(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_login_func_1645582358(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_login_func_1929414490(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] = _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_login_func_1411804087(unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_2, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) _activatnvar_generic_bool_2 = true;
	/* inline */ _activation_check_proc_login_func_1956665147(_activatnvar_generic_iterator);
	_activation_check_proc_login_func_1929414490(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_login_func_96832163(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x2] ^= _activatnvar_confusing_chararray_f[0x1];

	_activation_check_proc_login_func_1472158766(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_login_func_1472158766(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_login_func_1743859203()
{
	
}

void _activation_check_proc_login_func_1478974038(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x6] &= _activatnvar_confusing_chararray_9[0x2];

}

void _activation_check_proc_login_func_1053763400(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] += _activatnvar_confusing_chararray_8[0x1];

	/* inline */ _activation_check_proc_login_func_807218040(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_login_func_1550980864(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_LLUUID_9.mData[0x9];

}

void _activation_check_proc_login_func_950518865(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x7] |= _activatnvar_confusing_LLUUID_c.mData[0x9];

}

void _activation_check_proc_login_func_1213626784(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xa] &= _activatnvar_confusing_LLUUID_5.mData[0xa];

	/* inline */ _activation_check_proc_login_func_1181896202(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_login_func_388478735(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_login_func_1201891824(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_login_func_1829491194(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
	/* inline */ _activation_check_proc_login_func_437316727(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_0);
	_activation_check_proc_login_func_1201891824(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_login_func_853405176(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_login_func_767191675(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x6] != 0xa) _activatnvar_confusing_bool_5 = false;

	/* inline */ _activation_check_proc_login_func_267047679(_activatnvar_confusing_int_b);
	_activation_check_proc_login_func_853405176(_activatnvar_confusing_char_5, _activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_login_func_1253239564(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_558241990(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_1151778410(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_login_func_184047361(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_9);
	/* inline */ _activation_check_proc_login_func_69728278(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_login_func_1322593902(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_login_func_317721063(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1032956784(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_chararray_0[0xa];

	/* inline */ _activation_check_proc_login_func_1294716307(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_7);
	_activation_check_proc_login_func_317721063(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1421075350(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_22000309(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("a39598f9-3bb9-2d1b-aede-b29180604a3d");

	_activation_check_proc_login_func_1421075350(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1248169918(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_login_func_124525895(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f <<= 0x6;

}

void _activation_check_proc_login_func_1016678594(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_login_func_124525895(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_login_func_1466001523(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("690f3a35-5ce4-d3a9-e0ad-196365f84635");

}

void _activation_check_proc_login_func_328537986(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x0] ^= _activatnvar_confusing_LLUUID_b.mData[0xd];

}

void _activation_check_proc_login_func_2122537355(bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_generic_bool_2, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_generic_bool_2) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_5;

	/* inline */ _activation_check_proc_login_func_667855948(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_login_func_1648057611(_activatnvar_confusing_char_4, _activatnvar_generic_bool_1);
}

void _activation_check_proc_login_func_193842197(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] |= _activatnvar_confusing_LLUUID_d.mData[0x5];

}

void _activation_check_proc_login_func_1146027970(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_login_func_425954208(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xe] = _activatnvar_confusing_LLUUID_e.mData[0xc];

}

void _activation_check_proc_login_func_1643518394()
{
	
}

void _activation_check_proc_login_func_825045559(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 <<= _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_login_func_1994606422(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_9 <<= _activatnvar_confusing_chararray_2[0x4];

}

void _activation_check_proc_login_func_505375804(U8& _activatnvar_pos, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_3.mData[0xd];

	/* inline */ _activation_check_proc_login_func_445692182(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_login_func_1489668954(_activatnvar_confusing_char_2, _activatnvar_confusing_int_b);
	_activation_check_proc_login_func_1104480004(_activatnvar_pos);
}

void _activation_check_proc_login_func_1104480004(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_login_func_1489668954(char& _activatnvar_confusing_char_2, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_char_2++;

	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_login_func_1249501882(LLUUID& _activatnvar_so, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_8 = _activatnvar_so.mData[0x2];

	/* inline */ _activation_check_proc_login_func_481218614(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_login_func_1735084560(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_login_func_203816735(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_char_c <<= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_login_func_916272229(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1234351136(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_login_func_655313194(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_login_func_227729581(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_login_func_608214809(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_2)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_2 = _activatnvar_confusing_U8_2;

}

void _activation_check_proc_login_func_104177469(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] += _activatnvar_confusing_chararray_d[0x8];

}

void _activation_check_proc_login_func_499471743(U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_2, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_t0 &= 7;
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_8;

	_activation_check_proc_login_func_104177469(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_d);
	_activation_check_proc_login_func_608214809(_activatnvar_confusing_char_2, _activatnvar_confusing_bool_4, _activatnvar_confusing_U8_2);
	_activation_check_proc_login_func_227729581(_activatnvar_t0);
}

void _activation_check_proc_login_func_1700989214(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x5] ^= _activatnvar_name_digest[0xd];

}

void _activation_check_proc_login_func_1949219166(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_login_func_1238782016(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_login_func_976448270(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= 0x1;

}

void _activation_check_proc_login_func_1606203360(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] += _activatnvar_section2.mData[0x7];

}

void _activation_check_proc_login_func_2094079605(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("abb21579-ff1e-2ad1-a280-24fa7289312c");

}

void _activation_check_proc_login_func_43173697()
{
	
}

void _activation_check_proc_login_func_1432811952()
{
	
}

void _activation_check_proc_login_func_236314372(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("a0f0fe4d-fd05-5e8a-1a0e-e2c8c9ab82ed");

}

void _activation_check_proc_login_func_524687492(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_login_func_1917988862(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_login_func_527189826(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] ^= _activatnvar_confusing_LLUUID_1.mData[0x3];

}

void _activation_check_proc_login_func_610616058(bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_f >>= 0x9;

}

void _activation_check_proc_login_func_1858011297(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_login_func_1657619705(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_9;

	_activation_check_proc_login_func_1858011297(_activatnvar_confusing_int_9);
	_activation_check_proc_login_func_654974656(_activatnvar_confusing_U8_0, _activatnvar_confusing_char_6);
}

void _activation_check_proc_login_func_654974656(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_char_6;

}

void _activation_check_proc_login_func_870313640(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_b *= 0x0;

	_activation_check_proc_login_func_552833454(_activatnvar_confusing_char_b, _activatnvar_confusing_char_6, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_login_func_552833454(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_char_6 <<= _activatnvar_confusing_char_b;

}

void _activation_check_proc_login_func_872044801(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xf] ^= _activatnvar_confusing_chararray_3[0x5];

}

void _activation_check_proc_login_func_1396613300(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_LLUUID_d.mData[0x8];

}

void _activation_check_proc_login_func_123082309(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_e.mData[0x6];

}

void _activation_check_proc_login_func_61980694(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_3.mData[0x9] += _activatnvar_confusing_LLUUID_0.mData[0x6];

	_activation_check_proc_login_func_1357481998(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_login_func_1357481998(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x8] &= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_login_func_662103496(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_1[0x7] >>= _activatnvar_name_digest[0xe];

}

void _activation_check_proc_login_func_754745099(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("8dd0b032-379a-547f-e68d-98f6ddde9a78");

}

void _activation_check_proc_login_func_1984360516(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_chararray_4[0xc] <<= _activatnvar_combined_id.mData[0x0];

	_activation_check_proc_login_func_892574098(_activatnvar_confusing_int_e);
}

void _activation_check_proc_login_func_892574098(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_login_func_1972504452(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] &= _activatnvar_lace.mData[0x0];

	/* inline */ _activation_check_proc_login_func_549477985(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_login_func_1093821162(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_login_func_1868900184(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_login_func_1681189317(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_971916050(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_login_func_848360456(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator = 0;
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_184086737(U8& _activatnvar_confusing_U8_2, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

	/* inline */ _activation_check_proc_login_func_1913780488(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_login_func_209910573(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_0)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_0 <<= 0x9;

}

void _activation_check_proc_login_func_1387373503(char& _activatnvar_confusing_char_0, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_6.mData[0xf];

	_activation_check_proc_login_func_209910573(_activatnvar_doaccount, _activatnvar_confusing_char_0);
}

void _activation_check_proc_login_func_453706027(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] ^= _activatnvar_section2.mData[0x8];

}

void _activation_check_proc_login_func_947109770(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_char_4 |= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_login_func_217543396(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_login_func_2089963919(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_login_func_654375277(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_char_4;

}

void _activation_check_proc_login_func_1379958130(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_login_func_827330616(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_600956309(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 >>= _activatnvar_confusing_chararray_0[0x4];

	/* inline */ _activation_check_proc_login_func_925768648(_activatnvar_generic_iterator);
	_activation_check_proc_login_func_1954358043(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_login_func_1838824545(_activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_login_func_1954358043(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_c.mData[0x7] <<= _activatnvar_confusing_chararray_0[0xd];

}

void _activation_check_proc_login_func_362879991(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_e[0x6] |= _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_login_func_369122181(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c += 0xe;

}

void _activation_check_proc_login_func_1569141081(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	
	_activation_check_proc_login_func_362879991(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_login_func_369122181(_activatnvar_confusing_U8_c);
	/* inline */ _activation_check_proc_login_func_587509804(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_login_func_419942578(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

	/* inline */ _activation_check_proc_login_func_1421436325(_activatnvar_confusing_char_d, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_login_func_1869823089(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_login_func_1642505458(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_U8_a;

}

void _activation_check_proc_login_func_1515158580(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_525979806(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_a *= _activatnvar_confusing_U8_7;

	/* inline */ _activation_check_proc_login_func_590146091(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_login_func_1681288079(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_login_func_313332524(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("282189c6-d392-afd8-d44a-0c36bbad5947");

}

void _activation_check_proc_login_func_1760893262(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_444942732(int& _activatnvar_confusing_int_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_int_4++;

	_activation_check_proc_login_func_1186074128(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_login_func_1802057586(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
	_activation_check_proc_login_func_509121746(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_509121746(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1802057586(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1186074128(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("dbcf1493-ab35-2237-1a24-517a1f1e3e85");

}

void _activation_check_proc_login_func_504487432(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_8[0x2] |= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_login_func_780504632(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0x0;

}

void _activation_check_proc_login_func_690570152(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_chararray_e[0xe] = _activatnvar_section2.mData[0xc];

	_activation_check_proc_login_func_711281315(_activatnvar_confusing_char_c, _activatnvar_confusing_U8_b, _activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_login_func_1884110392(_activatnvar_confusing_char_d);
}

void _activation_check_proc_login_func_711281315(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_b <<= _activatnvar_confusing_char_c;

	_activatnvar_confusing_LLUUID_b = LLUUID("b679b94f-2925-5fa7-6532-a69826739ec6");

}

void _activation_check_proc_login_func_1016061118(char& _activatnvar_confusing_char_d, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_9 &= _activatnvar_confusing_char_d;

}

void _activation_check_proc_login_func_1942776487(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_c.mData[0xc] ^= _activatnvar_confusing_LLUUID_9.mData[0xc];

}

void _activation_check_proc_login_func_1168886799(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] *= _activatnvar_confusing_chararray_4[0xb];

	_activation_check_proc_login_func_1942776487(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_login_func_1141606386(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_login_func_235239168(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_login_func_800043195(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_chararray_4[0xa];

}

void _activation_check_proc_login_func_1827708767(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x4] == _activatnvar_t1) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_login_func_342005988(_activatnvar_confusing_chararray_d, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_login_func_1797434132(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	
	/* inline */ _activation_check_proc_login_func_1190119497(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_login_func_555571736(_activatnvar_confusing_int_8);
}

void _activation_check_proc_login_func_1150559584(unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, LLMD5& _activatnvar_smd5)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_7;

	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_login_func_782412402(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_a)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_522289487(_activatnvar_confusing_chararray_8, _activatnvar_confusing_char_a);
}

void _activation_check_proc_login_func_1161648705(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_884139637(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_93426881(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_login_func_828449002(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("4f8b6329-10bc-2e36-d5fc-47f52e615d60");

	_activatnvar_confusing_int_1 &= 0xff;

	/* inline */ _activation_check_proc_login_func_1453930025(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_login_func_324192503(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_login_func_672982620(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_f.mData[0x7] &= _activatnvar_mac_digest[0x6];

	_activation_check_proc_login_func_1792039375(_activatnvar_lace, _activatnvar_fscked);
	_activation_check_proc_login_func_324192503(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_login_func_1792039375(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[7] = _activatnvar_fscked.mData[7];
}

void _activation_check_proc_login_func_1826920266(LLMD5*& _activatnvar_mmd5, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
}

void _activation_check_proc_login_func_126915506(LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
}

void _activation_check_proc_login_func_1167185018(LLMD5*& _activatnvar_mmd5, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_2)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_2;

	_activation_check_proc_login_func_126915506(_activatnvar_mmd5);
	_activation_check_proc_login_func_1826920266(_activatnvar_mmd5, _activatnvar_mac_digest);
}

void _activation_check_proc_login_func_1484147633(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e = _activatnvar_confusing_int_e;

}

void _activation_check_proc_login_func_472010628(char& _activatnvar_confusing_char_4, U8& _activatnvar_t1)
{
	_activatnvar_confusing_char_4 |= _activatnvar_t1;

}

void _activation_check_proc_login_func_1122842212(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x7] <<= _activatnvar_confusing_LLUUID_5.mData[0xe];

}

void _activation_check_proc_login_func_1441741420(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] += _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_login_func_719371430(LLUUID& _activatnvar_so, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_8, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_e = true;

	/* inline */ _activation_check_proc_login_func_3833054(_activatnvar_pos, _activatnvar_t0, _activatnvar_confusing_char_8, _activatnvar_so);
	_activation_check_proc_login_func_1441741420(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_9);
	_activation_check_proc_login_func_1122842212(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_login_func_133668067(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_e;

	_activation_check_proc_login_func_1169236437(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_7);
	_activation_check_proc_login_func_1384273236(_activatnvar_pos, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_login_func_1341783307(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_login_func_1169236437(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 ^= _activatnvar_confusing_chararray_4[0x2];

}

void _activation_check_proc_login_func_1384273236(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_login_func_485930860(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_2.mData[0xc];

}

void _activation_check_proc_login_func_539150407(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_login_func_1597966386(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_combined_id;

}

void _activation_check_proc_login_func_1207139901(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a >>= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_login_func_1895424612(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_login_func_1650213736(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_1 ^= _activatnvar_confusing_chararray_b[0x9];

}

void _activation_check_proc_login_func_2118752564(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_login_func_1395973285(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_login_func_215358236(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x2] &= _activatnvar_code.mData[0x1];

}

void _activation_check_proc_login_func_98994612(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x3] |= _activatnvar_confusing_LLUUID_3.mData[0x0];

}

void _activation_check_proc_login_func_1333186682(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_login_func_1390787987(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_login_func_275712834(_activatnvar_confusing_U8_0, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_login_func_1333186682(_activatnvar_confusing_int_7);
}

void _activation_check_proc_login_func_275712834(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_9.mData[0xa];

}

void _activation_check_proc_login_func_148795262(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1144021656(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_b.mData[0x0] = _activatnvar_confusing_chararray_9[0x7];

}

void _activation_check_proc_login_func_714196336(std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
}

void _activation_check_proc_login_func_506427863(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("b5cfe67f-aed5-e812-ab0f-2ad762120d66");

}

void _activation_check_proc_login_func_1976031280(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1724117875(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] = _activatnvar_confusing_chararray_0[0xf];

	_activation_check_proc_login_func_506427863(_activatnvar_confusing_LLUUID_7);
	_activation_check_proc_login_func_1976031280(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
}

void _activation_check_proc_login_func_892514833(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0x5;

}

void _activation_check_proc_login_func_644214363(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] *= _activatnvar_confusing_chararray_e[0xb];

}

void _activation_check_proc_login_func_1241549715(bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x6] *= _activatnvar_confusing_chararray_9[0xc];

	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_login_func_1798250414(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_login_func_1110783875(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_login_func_744441860(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_LLUUID_0.mData[0x5];

	_activation_check_proc_login_func_577078491(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_login_func_1110783875(_activatnvar_confusing_int_8);
	_activation_check_proc_login_func_915759408(_activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_int_7, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_login_func_915759408(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_int_7 &= 0xff;

	
	if(_activatnvar_confusing_LLUUID_d.mData[0x2] == _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_login_func_577078491(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xd] = _activatnvar_confusing_LLUUID_8.mData[0x3];

}

void _activation_check_proc_login_func_78074619(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x8] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_8 = false;

	/* inline */ _activation_check_proc_login_func_584222936(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_login_func_1450447402(bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_d = _activatnvar_doaccount;

	/* inline */ _activation_check_proc_login_func_1432520492(_activatnvar_confusing_chararray_a, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_login_func_333150176(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("5bbb45a8-c28c-72e5-0c6f-82e5ad91fe53");

}

void _activation_check_proc_login_func_1033731384(int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x6] == 0x7) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_a;

	_activation_check_proc_login_func_1328641478(_activatnvar_confusing_int_1);
}

void _activation_check_proc_login_func_1328641478(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= 0x5;

}

void _activation_check_proc_login_func_790794381(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_950852339(int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_852016459(_activatnvar_confusing_int_4);
}

void _activation_check_proc_login_func_1236479167(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_login_func_323933048(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 48; _activatnvar_strbuf_0[0] ^= 113; _activatnvar_strbuf_0[1] = 95; _activatnvar_strbuf_0[1] ^= 60; _activatnvar_strbuf_0[2] = 34; _activatnvar_strbuf_0[2] ^= 86; _activatnvar_strbuf_0[3] = 49; _activatnvar_strbuf_0[3] ^= 88; _activatnvar_strbuf_0[4] = 31; _activatnvar_strbuf_0[4] ^= 105; _activatnvar_strbuf_0[5] = 126; _activatnvar_strbuf_0[5] ^= 31; _activatnvar_strbuf_0[6] = 115; _activatnvar_strbuf_0[6] ^= 7; _activatnvar_strbuf_0[7] = 127; _activatnvar_strbuf_0[7] ^= 22; _activatnvar_strbuf_0[8] = 100; _activatnvar_strbuf_0[8] ^= 11; _activatnvar_strbuf_0[9] = 52; _activatnvar_strbuf_0[9] ^= 90; _activatnvar_strbuf_0[10] = 56; _activatnvar_strbuf_0[10] ^= 123; _activatnvar_strbuf_0[11] = 108; _activatnvar_strbuf_0[11] ^= 3; _activatnvar_strbuf_0[12] = 2; _activatnvar_strbuf_0[12] ^= 102; _activatnvar_strbuf_0[13] = 22; _activatnvar_strbuf_0[13] ^= 115; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_login_func_666373262(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_login_func_799060755(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_5[0xa] += _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_login_func_379896085(U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_so)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xe] == 0xc) _activatnvar_confusing_bool_4 = false;

	_activation_check_proc_login_func_799060755(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_login_func_539413523(_activatnvar_pos, _activatnvar_so, _activatnvar_t1);
}

void _activation_check_proc_login_func_573865749(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_a |= _activatnvar_confusing_LLUUID_2.mData[0x7];

}

void _activation_check_proc_login_func_426842335(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_2)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_2;

}

void _activation_check_proc_login_func_592596340(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] = _activatnvar_secret.mData[0x8];

	_activation_check_proc_login_func_1583147185(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_login_func_1583147185(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_6[0x8] <<= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_login_func_1642324207(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_U8_7 >>= _activatnvar_confusing_chararray_7[0x7];

	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_login_func_1658119288(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_LLUUID_7.mData[0x8];

}

void _activation_check_proc_login_func_606286136(int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_int_b &= 0xff;

	_activation_check_proc_login_func_1658119288(_activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_login_func_1923804447(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_3)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x4] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_login_func_763841558(U8& _activatnvar_pos, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_pos |= 8;
	_activatnvar_confusing_LLUUID_3.mData[0xd] += _activatnvar_lace.mData[0xf];

}

void _activation_check_proc_login_func_1233639788(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

	_activation_check_proc_login_func_1593909075(_activatnvar_confusing_LLUUID_1, _activatnvar_combined_id);
}

void _activation_check_proc_login_func_1593909075(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_combined_id;

}

void _activation_check_proc_login_func_1093965463(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_login_func_246933160(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xe] == 0xc) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_login_func_709762271(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x1] += _activatnvar_code.mData[0x9];

}

void _activation_check_proc_login_func_1770675367(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_421270752(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_login_func_763822266(bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_379533883(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_login_func_1193429997(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x2] ^= _activatnvar_confusing_chararray_1[0x4];

}

void _activation_check_proc_login_func_401708282(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_login_func_1299201943(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_303024255(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a ^= 0xa;

}

void _activation_check_proc_login_func_1603143243(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
	_activation_check_proc_login_func_1123793970(_activatnvar_confusing_bool_f, _activatnvar_confusing_char_f);
}

void _activation_check_proc_login_func_1123793970(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_f += 0xf;

}

void _activation_check_proc_login_func_1691449815(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_section1;

}

void _activation_check_proc_login_func_661608260(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= _activatnvar_confusing_int_3;

}

void _activation_check_proc_login_func_178113919(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 >>= 0xf;

}

void _activation_check_proc_login_func_84508060(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_t0;

}

void _activation_check_proc_login_func_1360783361(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_chararray_f[0xb] = _activatnvar_confusing_LLUUID_f.mData[0xe];

	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_login_func_1847696905(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x5] &= _activatnvar_confusing_LLUUID_c.mData[0xf];

}

void _activation_check_proc_login_func_637770685()
{
	
}

void _activation_check_proc_login_func_1378578314(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_4.mData[0xc];

}

void _activation_check_proc_login_func_1345990719(int& _activatnvar_confusing_int_b, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_2)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_login_func_450979947(_activatnvar_generic_bool_0, _activatnvar_generic_bool_2);
}

void _activation_check_proc_login_func_1095366727(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_login_func_581543028(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_login_func_2147254113(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 += 0xc;

}

void _activation_check_proc_login_func_768543580(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_7[0x8] = _activatnvar_confusing_chararray_9[0xd];

	_activation_check_proc_login_func_2147254113(_activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_login_func_1050028447();
}

void _activation_check_proc_login_func_1191988996(int& _activatnvar_confusing_int_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_6 &= _activatnvar_generic_iterator;

}

void _activation_check_proc_login_func_104386272(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 += _activatnvar_confusing_char_f;

}

void _activation_check_proc_login_func_852543632(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_login_func_1262870580(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_5)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_5 = 0x3;

}

void _activation_check_proc_login_func_1821234707(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_d[0x9] |= _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_login_func_39930318(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_login_func_838808960(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_2 *= _activatnvar_confusing_int_e;

}

void _activation_check_proc_login_func_908820369(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1002850514(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_login_func_838808960(_activatnvar_confusing_int_2, _activatnvar_confusing_int_e);
	_activation_check_proc_login_func_435298430(_activatnvar_generic_iterator);
	_activation_check_proc_login_func_908820369(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_login_func_1287165368(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_login_func_435298430(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_445280860(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x4] <<= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_login_func_1334318035(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xc] ^= _activatnvar_confusing_LLUUID_c.mData[0x1];

}

void _activation_check_proc_login_func_1180075272(unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_int_c &= 0x1;

	_activation_check_proc_login_func_514580975(_activatnvar_confusing_int_4, _activatnvar_confusing_int_1);
	_activation_check_proc_login_func_1334318035(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_login_func_1266790939(_activatnvar_confusing_U8_3, _activatnvar_confusing_int_4, _activatnvar_confusing_U8_0);
	_activation_check_proc_login_func_445280860(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_login_func_1266790939(U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_U8_3;

	_activatnvar_confusing_int_4 *= _activatnvar_confusing_int_4;

}

void _activation_check_proc_login_func_514580975(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 <<= _activatnvar_confusing_int_4;

}

void _activation_check_proc_login_func_113038566(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_a <<= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_login_func_403108502(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_login_func_765885889(_activatnvar_confusing_bool_8, _activatnvar_generic_bool_0);
}

void _activation_check_proc_login_func_790440992(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_login_func_430093848(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_7;

	_activation_check_proc_login_func_790440992(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_login_func_2046742764(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_login_func_1009154720(bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_login_func_1991725358(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = 0x3;

}

void _activation_check_proc_login_func_1326642000(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_login_func_528083958(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d *= _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_login_func_1618431388(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_combined_id;

	_activation_check_proc_login_func_489761224(_activatnvar_t0);
}

void _activation_check_proc_login_func_489761224(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_login_func_829715211(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_login_func_1688772475(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_login_func_679683634(bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_login_func_1688772475(_activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_login_func_1887134689(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_3 <<= 0x2;

}

void _activation_check_proc_login_func_2084865635(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_1[0x0] |= _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_login_func_180616577(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b += 0x7;

}

void _activation_check_proc_login_func_662908281(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] >>= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_login_func_1779258958(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_d.mData[0xe] &= _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_login_func_164539894(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_login_func_810153480(bool& _activatnvar_generic_bool_2, char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_generic_bool_2) _activatnvar_confusing_char_e <<= _activatnvar_confusing_char_f;

}

void _activation_check_proc_login_func_1583461555(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_login_func_319000957(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_c &= _activatnvar_generic_bool_0;

	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_LLUUID_b.mData[0x0];

}

void _activation_check_proc_login_func_32325480()
{
	
}

void _activation_check_proc_login_func_1465839204(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x1] |= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_login_func_539179281(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_a.mData[0x0] <<= _activatnvar_confusing_LLUUID_0.mData[0xb];

	/* inline */ _activation_check_proc_login_func_238365358();
	_activation_check_proc_login_func_1465839204(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_login_func_58520562(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_login_func_1638593854(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_2)
{
	if(  _activatnvar_generic_bool_2) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_login_func_620257409(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_login_func_1129695688(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_login_func_470887519(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_login_func_320597055(char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_strbuf_0[0] = 127; _activatnvar_strbuf_0[0] ^= 78; _activatnvar_strbuf_0[1] = 61; _activatnvar_strbuf_0[1] ^= 13; _activatnvar_strbuf_0[2] = 42; _activatnvar_strbuf_0[2] ^= 25; _activatnvar_strbuf_0[3] = 10; _activatnvar_strbuf_0[3] ^= 62; _activatnvar_strbuf_0[4] = 34; _activatnvar_strbuf_0[4] ^= 64; _activatnvar_strbuf_0[5] = 45; _activatnvar_strbuf_0[5] ^= 75; _activatnvar_strbuf_0[6] = 74; _activatnvar_strbuf_0[6] ^= 44; _activatnvar_strbuf_0[7] = 33; _activatnvar_strbuf_0[7] ^= 23; _activatnvar_strbuf_0[8] = 104; _activatnvar_strbuf_0[8] ^= 69; _activatnvar_strbuf_0[9] = 21; _activatnvar_strbuf_0[9] ^= 119; _activatnvar_strbuf_0[10] = 106; _activatnvar_strbuf_0[10] ^= 93; _activatnvar_strbuf_0[11] = 43; _activatnvar_strbuf_0[11] ^= 31; _activatnvar_strbuf_0[12] = 9; _activatnvar_strbuf_0[12] ^= 57; _activatnvar_strbuf_0[13] = 61; _activatnvar_strbuf_0[13] ^= 16; _activatnvar_strbuf_0[14] = 102; _activatnvar_strbuf_0[14] ^= 86; _activatnvar_strbuf_0[15] = 77; _activatnvar_strbuf_0[15] ^= 43; _activatnvar_strbuf_0[16] = 62; _activatnvar_strbuf_0[16] ^= 92; _activatnvar_strbuf_0[17] = 102; _activatnvar_strbuf_0[17] ^= 2; _activatnvar_strbuf_0[18] = 34; _activatnvar_strbuf_0[18] ^= 15; _activatnvar_strbuf_0[19] = 27; _activatnvar_strbuf_0[19] ^= 42; _activatnvar_strbuf_0[20] = 87; _activatnvar_strbuf_0[20] ^= 52; _activatnvar_strbuf_0[21] = 114; _activatnvar_strbuf_0[21] ^= 16; _activatnvar_strbuf_0[22] = 77; _activatnvar_strbuf_0[22] ^= 43; _activatnvar_strbuf_0[23] = 27; _activatnvar_strbuf_0[23] ^= 54; _activatnvar_strbuf_0[24] = 80; _activatnvar_strbuf_0[24] ^= 100; _activatnvar_strbuf_0[25] = 86; _activatnvar_strbuf_0[25] ^= 96; _activatnvar_strbuf_0[26] = 49; _activatnvar_strbuf_0[26] ^= 4; _activatnvar_strbuf_0[27] = 103; _activatnvar_strbuf_0[27] ^= 4; _activatnvar_strbuf_0[28] = 38; _activatnvar_strbuf_0[28] ^= 22; _activatnvar_strbuf_0[29] = 47; _activatnvar_strbuf_0[29] ^= 30; _activatnvar_strbuf_0[30] = 57; _activatnvar_strbuf_0[30] ^= 93; _activatnvar_strbuf_0[31] = 35; _activatnvar_strbuf_0[31] ^= 17; _activatnvar_strbuf_0[32] = 16; _activatnvar_strbuf_0[32] ^= 33; _activatnvar_strbuf_0[33] = 78; _activatnvar_strbuf_0[33] ^= 44; _activatnvar_strbuf_0[34] = 73; _activatnvar_strbuf_0[34] ^= 45; _activatnvar_strbuf_0[35] = 66; _activatnvar_strbuf_0[35] ^= 119; _activatnvar_strbuf_0[36] = 0;
	_activation_check_proc_login_func_1129695688(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_2);
	_activation_check_proc_login_func_470887519(_activatnvar_confusing_bool_4, _activatnvar_generic_bool_1);
}

void _activation_check_proc_login_func_1606913012(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_char_a >>= _activatnvar_confusing_U8_3;

	/* inline */ _activation_check_proc_login_func_1067046758(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_login_func_1764935281(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("b4755208-7a72-d80f-a822-1b765cfda165");

	/* inline */ _activation_check_proc_login_func_649955653(_activatnvar_confusing_int_c);
}

void _activation_check_proc_login_func_2129259720(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_login_func_1679806709(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_login_func_343201846(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_login_func_1767559164(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_login_func_1914286952(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] = _activatnvar_confusing_LLUUID_e.mData[0xe];

}

void _activation_check_proc_login_func_1197710520(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 >>= _activatnvar_t0;
	/* inline */ _activation_check_proc_login_func_1737725744(_activatnvar_t1);
}

void _activation_check_proc_login_func_566894988(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_9 ^= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_login_func_749018970(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_login_func_493534638(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_login_func_369012675(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d <<= 0xb;

}

void _activation_check_proc_login_func_1955655129(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_6 += _activatnvar_confusing_chararray_0[0xe];

}

void _activation_check_proc_login_func_1748993321(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_133224396(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x6] &= _activatnvar_confusing_chararray_7[0x2];

}

void _activation_check_proc_login_func_1515155525(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_login_func_1975668485(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_login_func_1873149012(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] *= _activatnvar_section1.mData[0xd];

}

void _activation_check_proc_login_func_710743488(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_4;

	_activation_check_proc_login_func_1873149012(_activatnvar_confusing_LLUUID_1, _activatnvar_section1);
}

void _activation_check_proc_login_func_1627389464(char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_c &= _activatnvar_confusing_char_a;

}

void _activation_check_proc_login_func_485866147(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_login_func_1417260069(int& _activatnvar_confusing_int_e, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_combined_id.mData[0x2];

	_activation_check_proc_login_func_1923635018(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_login_func_2146871994(_activatnvar_t0, _activatnvar_so, _activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_c);
	_activation_check_proc_login_func_258858123(_activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_login_func_1622721569(_activatnvar_pos);
	/* inline */ _activation_check_proc_login_func_1423070419(_activatnvar_ser_digest, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_login_func_1622721569(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_login_func_258858123(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_login_func_1923635018(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0xc;

}

void _activation_check_proc_login_func_34499417(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_470800393(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_confusing_LLUUID_4.mData[0xc];

	/* inline */ _activation_check_proc_login_func_2088116942(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_login_func_973186684(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_f);
	_activation_check_proc_login_func_34499417(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_login_func_973186684(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xa] ^= _activatnvar_confusing_LLUUID_3.mData[0x0];

}

void _activation_check_proc_login_func_1624248803(LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_1540169056(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_login_func_1377623119(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret, _activatnvar_confusing_int_1);
}

void _activation_check_proc_login_func_1994462770(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("90778134-734f-8177-2d1f-34ae1bbb389f");

}

void _activation_check_proc_login_func_337974535(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_9[0x7] |= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_login_func_1260864440(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("fd0d512a-b121-a915-db91-be5b9d2de3e3");

	_activation_check_proc_login_func_337974535(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_login_func_2028115298(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] = _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_login_func_1478070798(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("df6aa22f-a5d1-575a-b909-5c0ff3b3c922");

}

void _activation_check_proc_login_func_784382020(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_a[0xf] <<= _activatnvar_secret.mData[0x4];

}

void _activation_check_proc_login_func_1752402350(bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("811089a8-2f67-b7a2-c58e-8f8e8683aa90");

	/* inline */ _activation_check_proc_login_func_1326930829(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_b);
	_activation_check_proc_login_func_784382020(_activatnvar_confusing_chararray_a, _activatnvar_secret);
	_activation_check_proc_login_func_2028115298(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_f);
	_activation_check_proc_login_func_1478070798(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_login_func_877095202(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_login_func_280789209(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x7] = _activatnvar_confusing_LLUUID_d.mData[0x0];

}

void _activation_check_proc_login_func_183600742(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_login_func_382157281(char& _activatnvar_confusing_char_e, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] *= _activatnvar_confusing_chararray_8[0xb];

	/* inline */ _activation_check_proc_login_func_1379282536(_activatnvar_confusing_U8_9, _activatnvar_confusing_char_e);
	/* inline */ _activation_check_proc_login_func_1856904451(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_923762775(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_fscked;

}

void _activation_check_proc_login_func_117681511(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xf] |= _activatnvar_confusing_chararray_e[0x9];

}

void _activation_check_proc_login_func_1276588659(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_0 <<= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_login_func_1410682478(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_t0, unsigned char* _activatnvar_name_digest, U8& _activatnvar_pos, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_login_func_418806727(_activatnvar_confusing_LLUUID_a, _activatnvar_name_digest);
	/* inline */ _activation_check_proc_login_func_2138681223(_activatnvar_confusing_U8_8, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_login_func_1276588659(_activatnvar_confusing_char_0, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_login_func_418806727(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] |= _activatnvar_name_digest[0x8];

}

void _activation_check_proc_login_func_1711780814(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] >>= _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_login_func_17768786(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
	_activation_check_proc_login_func_1711780814(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_login_func_1642973825(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_748537192(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x7] == 0xa) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_login_func_1190467731(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_generic_bool_0;

	_activation_check_proc_login_func_748537192(_activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_login_func_761340203(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_login_func_720221848(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_login_func_468872310(int& _activatnvar_confusing_int_1, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_login_func_164222097(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_4[0x5] ^= _activatnvar_section2.mData[0x8];

}

void _activation_check_proc_login_func_1673809014(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_login_func_261396134(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_login_func_1714708237(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_2143556965(unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_d[0x1] |= _activatnvar_confusing_chararray_2[0x4];

	_activation_check_proc_login_func_1714708237(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_965639525(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_login_func_775879059(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_login_func_1033829904(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_0);
	_activation_check_proc_login_func_630195626(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_630195626(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1033829904(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_7[0x2] = _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_login_func_1750714554(bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xd] *= _activatnvar_confusing_chararray_4[0x3];

	/* inline */ _activation_check_proc_login_func_109882809(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_login_func_1731964528(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_262177161(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_login_func_969302568(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_1 += _activatnvar_confusing_chararray_d[0x7];

}

void _activation_check_proc_login_func_1057350422(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

	_activation_check_proc_login_func_969302568(_activatnvar_confusing_char_1, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_login_func_291767495(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] *= _activatnvar_confusing_chararray_3[0x7];

}

void _activation_check_proc_login_func_119659027(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_2[0x6] <<= _activatnvar_confusing_LLUUID_1.mData[0x6];

}

void _activation_check_proc_login_func_781460056()
{
	
}

void _activation_check_proc_login_func_694073621(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_74878034(int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xa] &= _activatnvar_confusing_chararray_b[0x1];

	_activation_check_proc_login_func_694073621(_activatnvar_generic_iterator);
	_activation_check_proc_login_func_508051900(_activatnvar_confusing_int_4, _activatnvar_confusing_int_c);
}

void _activation_check_proc_login_func_508051900(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_4 >>= _activatnvar_confusing_int_c;

}

void _activation_check_proc_login_func_1249499955()
{
	
}

void _activation_check_proc_login_func_696528580(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_chararray_6[0x6];

}

void _activation_check_proc_login_func_517560118(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 38; _activatnvar_strbuf_0[0] ^= 31; _activatnvar_strbuf_0[1] = 74; _activatnvar_strbuf_0[1] ^= 122; _activatnvar_strbuf_0[2] = 125; _activatnvar_strbuf_0[2] ^= 78; _activatnvar_strbuf_0[3] = 4; _activatnvar_strbuf_0[3] ^= 48; _activatnvar_strbuf_0[4] = 6; _activatnvar_strbuf_0[4] ^= 100; _activatnvar_strbuf_0[5] = 37; _activatnvar_strbuf_0[5] ^= 65; _activatnvar_strbuf_0[6] = 78; _activatnvar_strbuf_0[6] ^= 123; _activatnvar_strbuf_0[7] = 17; _activatnvar_strbuf_0[7] ^= 38; _activatnvar_strbuf_0[8] = 61; _activatnvar_strbuf_0[8] ^= 16; _activatnvar_strbuf_0[9] = 34; _activatnvar_strbuf_0[9] ^= 64; _activatnvar_strbuf_0[10] = 35; _activatnvar_strbuf_0[10] ^= 20; _activatnvar_strbuf_0[11] = 22; _activatnvar_strbuf_0[11] ^= 114; _activatnvar_strbuf_0[12] = 121; _activatnvar_strbuf_0[12] ^= 65; _activatnvar_strbuf_0[13] = 74; _activatnvar_strbuf_0[13] ^= 103; _activatnvar_strbuf_0[14] = 104; _activatnvar_strbuf_0[14] ^= 92; _activatnvar_strbuf_0[15] = 24; _activatnvar_strbuf_0[15] ^= 123; _activatnvar_strbuf_0[16] = 102; _activatnvar_strbuf_0[16] ^= 4; _activatnvar_strbuf_0[17] = 50; _activatnvar_strbuf_0[17] ^= 80; _activatnvar_strbuf_0[18] = 11; _activatnvar_strbuf_0[18] ^= 38; _activatnvar_strbuf_0[19] = 92; _activatnvar_strbuf_0[19] ^= 100; _activatnvar_strbuf_0[20] = 1; _activatnvar_strbuf_0[20] ^= 100; _activatnvar_strbuf_0[21] = 23; _activatnvar_strbuf_0[21] ^= 117; _activatnvar_strbuf_0[22] = 32; _activatnvar_strbuf_0[22] ^= 70; _activatnvar_strbuf_0[23] = 19; _activatnvar_strbuf_0[23] ^= 62; _activatnvar_strbuf_0[24] = 49; _activatnvar_strbuf_0[24] ^= 5; _activatnvar_strbuf_0[25] = 24; _activatnvar_strbuf_0[25] ^= 46; _activatnvar_strbuf_0[26] = 105; _activatnvar_strbuf_0[26] ^= 92; _activatnvar_strbuf_0[27] = 127; _activatnvar_strbuf_0[27] ^= 28; _activatnvar_strbuf_0[28] = 19; _activatnvar_strbuf_0[28] ^= 35; _activatnvar_strbuf_0[29] = 62; _activatnvar_strbuf_0[29] ^= 13; _activatnvar_strbuf_0[30] = 73; _activatnvar_strbuf_0[30] ^= 42; _activatnvar_strbuf_0[31] = 71; _activatnvar_strbuf_0[31] ^= 117; _activatnvar_strbuf_0[32] = 36; _activatnvar_strbuf_0[32] ^= 21; _activatnvar_strbuf_0[33] = 81; _activatnvar_strbuf_0[33] ^= 48; _activatnvar_strbuf_0[34] = 35; _activatnvar_strbuf_0[34] ^= 71; _activatnvar_strbuf_0[35] = 5; _activatnvar_strbuf_0[35] ^= 48; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_login_func_330962212(char& _activatnvar_confusing_char_0, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_0 += 0xf;

}

void _activation_check_proc_login_func_1490573567(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1589314906(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1139295841(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x9] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_login_func_1829881293(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x2] != 0x4) _activatnvar_confusing_bool_2 = true;

	_activation_check_proc_login_func_1943078892(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
	_activation_check_proc_login_func_692530782();
	/* inline */ _activation_check_proc_login_func_2058434961(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_login_func_692530782()
{
	
}

void _activation_check_proc_login_func_1943078892(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1459589486(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_LLUUID_1.mData[0xa];

	/* inline */ _activation_check_proc_login_func_1209733392(_activatnvar_generic_bool_1, _activatnvar_confusing_char_4, _activatnvar_confusing_char_6);
}

void _activation_check_proc_login_func_1796921265(U8& _activatnvar_confusing_U8_b, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_b <<= _activatnvar_pos;

}

void _activation_check_proc_login_func_652864160(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_pos, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] >>= _activatnvar_secret.mData[0x4];

	/* inline */ _activation_check_proc_login_func_251882565(_activatnvar_confusing_char_4, _activatnvar_fscked);
	_activation_check_proc_login_func_1796921265(_activatnvar_confusing_U8_b, _activatnvar_pos, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_login_func_343636164(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_7[0xf] *= _activatnvar_so.mData[0x3];

}

void _activation_check_proc_login_func_515989890(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_login_func_594881490(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_login_func_984597320(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 *= _activatnvar_confusing_int_0;

	
}

void _activation_check_proc_login_func_1220735577(char& _activatnvar_confusing_char_2, int& _activatnvar_confusing_int_5, char& _activatnvar_confusing_char_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_2 &= 0xd;

	_activation_check_proc_login_func_1206409543(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_login_func_554025210(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_login_func_1086828585(_activatnvar_confusing_int_5);
}

void _activation_check_proc_login_func_1206409543(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_663964631(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_9 *= 0xc;

}

void _activation_check_proc_login_func_1625365450(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x3] *= _activatnvar_confusing_chararray_e[0x0];

}

void _activation_check_proc_login_func_1114064511(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_login_func_586154884(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1052673064(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1570241802(int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_2;

	/* inline */ _activation_check_proc_login_func_215032012(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_login_func_1417486914(_activatnvar_confusing_int_9);
	_activation_check_proc_login_func_1348841318(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1348841318(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1320158478(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_fscked.mData[0x7];

}

void _activation_check_proc_login_func_48220673(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("dc989d82-3334-f21c-0255-3493af9668ed");

}

void _activation_check_proc_login_func_4671136(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_login_func_1573774582(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("c49bb0a4-208f-443b-ea5d-8e7765f1038f");

}

void _activation_check_proc_login_func_1110280520(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x3] != 0xd) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_login_func_1933443488(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t1, LLUUID& _activatnvar_so, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	/* inline */ _activation_check_proc_login_func_838873400(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_login_func_1110280520(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_login_func_1709029779()
{
	
}

void _activation_check_proc_login_func_1774204988(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_b >>= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_login_func_145002710(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xc;

}

void _activation_check_proc_login_func_38982816(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xf] <<= _activatnvar_confusing_chararray_4[0x3];

}

void _activation_check_proc_login_func_1821125415(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

	/* inline */ _activation_check_proc_login_func_22825795(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_login_func_1945662129(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_login_func_1662376857(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_4)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_4 |= _activatnvar_confusing_U8_5;

	/* inline */ _activation_check_proc_login_func_672032833(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_login_func_1844639368(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_e.mData[0xd];

}

void _activation_check_proc_login_func_2104772241(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_login_func_1188264142(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_generic_bool_2, char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_8;

	/* inline */ _activation_check_proc_login_func_1071880308(_activatnvar_confusing_char_1, _activatnvar_generic_bool_2, _activatnvar_confusing_char_c);
	/* inline */ _activation_check_proc_login_func_300315086(_activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_login_func_1591141390(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_char_d;

}

void _activation_check_proc_login_func_1199490391(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_login_func_1629362202(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_29192429(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_3[0x6] += _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_login_func_1713586626(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xd] ^= _activatnvar_confusing_LLUUID_9.mData[0x6];

}

void _activation_check_proc_login_func_1051782889(U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_a)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_login_func_1655705517(_activatnvar_confusing_char_a, _activatnvar_confusing_bool_b, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_login_func_1464441773(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_267967273(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_LLUUID_9.mData[0xa];

}

void _activation_check_proc_login_func_2093784148(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_c.mData[0x5];

}

void _activation_check_proc_login_func_1987843478(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("c63331cf-f1f7-a9b7-db38-ab85d4beec04");

}

void _activation_check_proc_login_func_1927951434(bool& _activatnvar_generic_bool_2, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_2;

}

void _activation_check_proc_login_func_173624971(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

	/* inline */ _activation_check_proc_login_func_965923628(_activatnvar_confusing_bool_b);
	_activation_check_proc_login_func_1768068097(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_login_func_1768068097(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_login_func_1146537463(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 += _activatnvar_confusing_chararray_c[0x4];

}

void _activation_check_proc_login_func_1098032815(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_d.mData[0x2] >>= _activatnvar_confusing_LLUUID_9.mData[0x8];

}

void _activation_check_proc_login_func_550123820(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_login_func_236029085(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_login_func_318742997(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_login_func_1358786804(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_login_func_2109344700(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_login_func_394652914(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_779552055()
{
	
}

void _activation_check_proc_login_func_2042745741(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_login_func_23357907(_activatnvar_confusing_int_f);
}

void _activation_check_proc_login_func_23357907(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_login_func_1636441970(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_login_func_955015768(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_combined_id;

	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_login_func_1137332996(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_login_func_798872421(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_b, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x8] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_b = true;

	/* inline */ _activation_check_proc_login_func_1592564610(_activatnvar_confusing_U8_4, _activatnvar_confusing_U8_7, _activatnvar_generic_bool_1);
}

void _activation_check_proc_login_func_503812244(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_9 += _activatnvar_confusing_U8_0;

}

void _activation_check_proc_login_func_2006004275(bool& _activatnvar_generic_bool_2, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_generic_bool_2) _activatnvar_confusing_U8_b &= _activatnvar_confusing_char_b;

}

void _activation_check_proc_login_func_1502251417(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_secret;

}

void _activation_check_proc_login_func_663768923(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] ^= _activatnvar_section2.mData[0xb];

}

void _activation_check_proc_login_func_1285686447(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xb] += _activatnvar_confusing_chararray_1[0xc];

	/* inline */ _activation_check_proc_login_func_1593780582(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_login_func_1679135979(_activatnvar_confusing_char_b, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_login_func_1755389490(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_login_func_206505041(_activatnvar_t0);
}

void _activation_check_proc_login_func_725762693(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_login_func_547805865(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_2 *= _activatnvar_confusing_chararray_a[0x3];

}

void _activation_check_proc_login_func_434965427(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_login_func_1076148007(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_d)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_d ^= 0x3;

}

void _activation_check_proc_login_func_1351815389(bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
	/* inline */ _activation_check_proc_login_func_217043659(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_b);
	_activation_check_proc_login_func_1076148007(_activatnvar_confusing_bool_9, _activatnvar_confusing_char_d);
}

void _activation_check_proc_login_func_2082416930(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_e |= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_login_func_1350421944(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a += _activatnvar_confusing_chararray_0[0xb];

}

void _activation_check_proc_login_func_923004371(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_1[0xc] &= _activatnvar_section2.mData[0x7];

}

void _activation_check_proc_login_func_1456446002(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_9.mData[0xf] = _activatnvar_fscked.mData[0xe];

	_activation_check_proc_login_func_923004371(_activatnvar_confusing_chararray_1, _activatnvar_section2);
	/* inline */ _activation_check_proc_login_func_2057398299(_activatnvar_confusing_chararray_5, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_login_func_1185660749(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_login_func_2065813776(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_login_func_606112148(bool& _activatnvar_generic_bool_2)
{
	_activatnvar_generic_bool_2 = true;
}

void _activation_check_proc_login_func_1677612312(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("7bb611a2-089e-c115-2cc5-e775f4b3ab7d");

	/* inline */ _activation_check_proc_login_func_637367353(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_login_func_1955170481(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_login_func_2019975148(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_827783396(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_login_func_766417937(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x7] ^= _activatnvar_confusing_chararray_b[0x8];

}

void _activation_check_proc_login_func_1586127698(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x5] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_login_func_2139131357(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_login_func_930602633(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xd] |= _activatnvar_confusing_chararray_b[0xa];

}

void _activation_check_proc_login_func_5254488(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_432692423(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_login_func_100678717(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_login_func_546260034(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 &= 3;
	_activation_check_proc_login_func_100678717(_activatnvar_confusing_U8_f);
	_activation_check_proc_login_func_432692423(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_login_func_552640825(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("03d75b95-f744-be5c-e4f9-11d9bd567e4b");

	_activation_check_proc_login_func_1100314394(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_login_func_1100314394(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_login_func_2019193139(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_6.mData[0xc];

	/* inline */ _activation_check_proc_login_func_512829865(_activatnvar_confusing_U8_c, _activatnvar_confusing_U8_b);
	_activation_check_proc_login_func_1153327780(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1153327780(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1228215920(char& _activatnvar_feat, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_login_func_1056718985(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_5 += _activatnvar_confusing_char_c;

	/* inline */ _activation_check_proc_login_func_642094338(_activatnvar_confusing_char_8, _activatnvar_confusing_bool_2, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_login_func_843407793(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_login_func_290487760(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_login_func_1918973872(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("1a5923b2-7eb0-660c-3f2a-510dd55b211e");

}

void _activation_check_proc_login_func_1572374585(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1324210262(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_login_func_1572374585(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1328514809(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_4.mData[0xa] *= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_login_func_1422670765(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_2062658098(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] <<= _activatnvar_confusing_LLUUID_0.mData[0x1];

	/* inline */ _activation_check_proc_login_func_1806750725(_activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_char_c);
	_activation_check_proc_login_func_607668213(_activatnvar_confusing_LLUUID_2);
	_activation_check_proc_login_func_1842061448(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_login_func_1842061448(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_login_func_607668213(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("e75f6d58-abb0-001f-bc59-859cb0294e5e");

}

void _activation_check_proc_login_func_1114436976(char& _activatnvar_confusing_char_8, U8& _activatnvar_t0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xf] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_7 = false;

	/* inline */ _activation_check_proc_login_func_1241913101(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_login_func_1944692408(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_login_func_2071180244(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1887435171(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x4] == _activatnvar_pos) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_login_func_137364437(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, U8& _activatnvar_pos, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_login_func_321008512(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_login_func_1887435171(_activatnvar_pos, _activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_login_func_537500744(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_login_func_1193632063(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_login_func_875325361(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] &= _activatnvar_ser_digest[0x6];

}

void _activation_check_proc_login_func_709088213(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_login_func_1020644752(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_U8_6 = _activatnvar_section1.mData[0xd];

	_activation_check_proc_login_func_1193632063(_activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_login_func_709088213(_activatnvar_confusing_U8_e, _activatnvar_confusing_U8_f);
	/* inline */ _activation_check_proc_login_func_567303320(_activatnvar_t0);
	/* inline */ _activation_check_proc_login_func_1513116578(_activatnvar_so, _activatnvar_t0);
	_activation_check_proc_login_func_875325361(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_login_func_1205094890(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_login_func_452662779(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 <<= 0x3;

}

void _activation_check_proc_login_func_1771187475(int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_7 = false;

	_activation_check_proc_login_func_452662779(_activatnvar_confusing_int_2);
}

void _activation_check_proc_login_func_1409998633(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("3075aa63-f99a-9835-c875-903b1ef26c71");

}

void _activation_check_proc_login_func_982684230(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_e.mData[0x3];

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_226191440(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_9.mData[0x7] += _activatnvar_confusing_chararray_3[0x5];

	/* inline */ _activation_check_proc_login_func_1405892246(_activatnvar_confusing_U8_0);
	/* inline */ _activation_check_proc_login_func_1822692147(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_login_func_617187749(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x0] <<= _activatnvar_confusing_LLUUID_0.mData[0x3];

}

void _activation_check_proc_login_func_138473446(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_login_func_281806637(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_f >>= _activatnvar_confusing_char_9;

}

void _activation_check_proc_login_func_1014758799(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1125368508(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x5] != _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_login_func_1192183327(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] &= _activatnvar_name_digest[0x3];

}

void _activation_check_proc_login_func_1066825853(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x3] <<= _activatnvar_confusing_chararray_2[0xb];

}

void _activation_check_proc_login_func_658154589(U8& _activatnvar_t0, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_login_func_1192183327(_activatnvar_confusing_LLUUID_7, _activatnvar_name_digest);
	/* inline */ _activation_check_proc_login_func_1155024921(_activatnvar_confusing_int_0);
	_activation_check_proc_login_func_1066825853(_activatnvar_confusing_chararray_2, _activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_login_func_821388009(_activatnvar_confusing_char_5, _activatnvar_confusing_bool_c, _activatnvar_confusing_char_7);
}

void _activation_check_proc_login_func_1483214926(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	_activatnvar_confusing_LLUUID_b.mData[0xb] += _activatnvar_confusing_LLUUID_c.mData[0x2];

	/* inline */ _activation_check_proc_login_func_761171265(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_login_func_181177784(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_login_func_181177784(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_login_func_328235881(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_section2;

}

void _activation_check_proc_login_func_2115066339(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_4 <<= 0x3;

	_activation_check_proc_login_func_328235881(_activatnvar_section2, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_login_func_465737793(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1878863772(bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_f)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_8 *= 0x4;

	_activation_check_proc_login_func_660577759(_activatnvar_confusing_int_f, _activatnvar_confusing_int_7);
}

void _activation_check_proc_login_func_660577759(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_f *= _activatnvar_confusing_int_7;

}

void _activation_check_proc_login_func_1378469294(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1314336704(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_3 += _activatnvar_confusing_int_d;

}

void _activation_check_proc_login_func_123466141(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_login_func_442994837(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_3, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_login_func_1314336704(_activatnvar_confusing_int_3, _activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_login_func_969197414(_activatnvar_confusing_int_d);
	_activation_check_proc_login_func_123466141(_activatnvar_confusing_int_e);
	_activation_check_proc_login_func_1378469294(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_login_func_179364680(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_login_func_2078709961(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] |= _activatnvar_confusing_chararray_d[0x3];

}

void _activation_check_proc_login_func_887029633(int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_login_func_179364680(_activatnvar_confusing_int_b);
	_activation_check_proc_login_func_2078709961(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_login_func_331446454(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x2] = _activatnvar_confusing_LLUUID_0.mData[0x6];

}

void _activation_check_proc_login_func_1324620093(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_303853551(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_login_func_2063712248(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_login_func_532581063(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("e97499da-02fb-4436-011e-c5a2b1bdc706");

	_activation_check_proc_login_func_2063712248(_activatnvar_t0);
}

void _activation_check_proc_login_func_160558934(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b ^= 0x3;

}

void _activation_check_proc_login_func_372016397(int& _activatnvar_confusing_int_b, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_chararray_e[0x1];

	_activation_check_proc_login_func_160558934(_activatnvar_confusing_int_b);
}

void _activation_check_proc_login_func_579785460(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xc] |= _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_login_func_60664508(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_login_func_443244759(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_login_func_971517668(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_8, _activatnvar_confusing_U8_c, _activatnvar_confusing_U8_7);
	_activation_check_proc_login_func_60664508(_activatnvar_confusing_U8_c);
}

void _activation_check_proc_login_func_971517668(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 ^= _activatnvar_confusing_U8_c;

	_activatnvar_confusing_chararray_8[0x8] <<= _activatnvar_confusing_chararray_b[0x0];

}

void _activation_check_proc_login_func_256604038(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_login_func_1273395725(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_0)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_login_func_256604038(_activatnvar_confusing_int_0);
}

void _activation_check_proc_login_func_381944705(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1389292667(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_login_func_99762669(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_login_func_1389292667(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_835309013(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_8.mData[0xc] |= _activatnvar_confusing_LLUUID_e.mData[0x0];

}

void _activation_check_proc_login_func_1177280819(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_login_func_1547327435(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_char_7;

	_activation_check_proc_login_func_1177280819(_activatnvar_confusing_U8_7, _activatnvar_combined_id);
}

void _activation_check_proc_login_func_1194709916(int& _activatnvar_confusing_int_5, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_login_func_404758446(_activatnvar_confusing_U8_5, _activatnvar_confusing_char_c);
}

void _activation_check_proc_login_func_1406306201(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_login_func_1918003729(bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_login_func_44761781(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_login_func_1918003729(_activatnvar_generic_bool_1, _activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_feat);
}

void _activation_check_proc_login_func_1201879320(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_U8_5;

	_activation_check_proc_login_func_156777418(_activatnvar_confusing_char_7, _activatnvar_confusing_char_2);
}

void _activation_check_proc_login_func_156777418(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_char_7;

}

void _activation_check_proc_login_func_1474531502(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_3 *= _activatnvar_confusing_char_d;

}

void _activation_check_proc_login_func_261281809(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("ebc839f0-03f6-0f08-c20e-2dd2dfd049d5");

}

void _activation_check_proc_login_func_1786061203(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_login_func_1287709747(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x5] <<= _activatnvar_so.mData[0xb];

}

void _activation_check_proc_login_func_1852149614(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_login_func_1885789122(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1645752732(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1383338748(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_5.mData[0x8];

	/* inline */ _activation_check_proc_login_func_152152542(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_login_func_324133089(U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_login_func_1026504258(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_129458631(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("ddff8c10-3ed3-bda6-bfa5-331a40a57a1c");

}

void _activation_check_proc_login_func_743511698(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_7 &= 0xa;

	_activation_check_proc_login_func_129458631(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_login_func_1702398597(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_9, U8& _activatnvar_pos)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_9 |= _activatnvar_pos;

}

void _activation_check_proc_login_func_478506384(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_login_func_1980297698(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_login_func_1980297698(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_5[0xe] >>= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_login_func_1139861583(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_login_func_1468615696(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_login_func_221375321(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_4)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_4 = 0x0;

	
}

void _activation_check_proc_login_func_1411694818(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_LLUUID_a.mData[0xa];

	_activation_check_proc_login_func_221375321(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_login_func_1792401169(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("9c956e42-5a40-3b2e-5924-14741641d898");

}

void _activation_check_proc_login_func_1012714300(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_9[0x5] >>= _activatnvar_confusing_chararray_1[0x8];

}

void _activation_check_proc_login_func_1537298710(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1960829948(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_login_func_355982264(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_login_func_355982264(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_691709386(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_char_1++;

	/* inline */ _activation_check_proc_login_func_1872312203(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_login_func_1895161598(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x3] ^= _activatnvar_confusing_LLUUID_2.mData[0x8];

}

void _activation_check_proc_login_func_450378492(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_login_func_1089440713(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_169979907(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_6[0xd];

}

void _activation_check_proc_login_func_213276027()
{
	
}

void _activation_check_proc_login_func_1735928051(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_login_func_700801593(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_d)
{
	
	/* inline */ _activation_check_proc_login_func_43193872(_activatnvar_confusing_U8_d, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_login_func_1374558023(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_login_func_1499614725(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_login_func_175795286(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("65858c6f-7dae-d5cd-3b07-1b156bcb0403");

	_activation_check_proc_login_func_1499614725(_activatnvar_confusing_int_4);
}

void _activation_check_proc_login_func_1966617160(bool& _activatnvar_generic_bool_2, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) _activatnvar_generic_bool_2 = true;
}

void _activation_check_proc_login_func_212343015(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_23966347(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_login_func_2052900720(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_login_func_1626952558(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_int_a >>= _activatnvar_confusing_int_d;

	/* inline */ _activation_check_proc_login_func_1346584793(_activatnvar_confusing_char_5);
}

void _activation_check_proc_login_func_1846842358(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_login_func_605307581(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_d.mData[0xe] = _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_login_func_1368271423(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("9739d121-8c61-9958-851b-28b9917394d6");

	/* inline */ _activation_check_proc_login_func_1734912147(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_login_func_1556698378(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xb] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_3 = true;

	/* inline */ _activation_check_proc_login_func_1061022955(_activatnvar_confusing_U8_7, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_login_func_434372547(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_login_func_1173578765(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_login_func_1570095525(_activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_bool_1);
	_activation_check_proc_login_func_434372547(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_login_func_1570095525(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_login_func_1484724856(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_login_func_1457621424();
}

void _activation_check_proc_login_func_1403586919(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_login_func_1096913415(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x0] <<= _activatnvar_confusing_chararray_e[0xf];

}

void _activation_check_proc_login_func_678326180()
{
	
}

void _activation_check_proc_login_func_2108333205(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("f6ace8bc-0709-df78-06e4-bf34bca32e3c");

}

void _activation_check_proc_login_func_898186799()
{
	
}

void _activation_check_proc_login_func_349910796(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_login_func_866436805(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 ^= _activatnvar_confusing_chararray_5[0x2];

}

void _activation_check_proc_login_func_620565407(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_login_func_1605742668(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x3] += _activatnvar_fscked.mData[0xf];

}

void _activation_check_proc_login_func_1899534967(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_5.mData[0x6] += _activatnvar_confusing_chararray_c[0xf];

	_activation_check_proc_login_func_551841176(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_login_func_551841176(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xb] += _activatnvar_confusing_LLUUID_6.mData[0x9];

}

void _activation_check_proc_login_func_1595524747(unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_b[0xc] = _activatnvar_confusing_chararray_4[0xb];

	/* inline */ _activation_check_proc_login_func_1206749677(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_login_func_1540697453(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("fff2efb6-8b59-f0cf-7aa3-196aa0444b68");

}

void _activation_check_proc_login_func_1625491431(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_9[0xe] ^= _activatnvar_confusing_LLUUID_0.mData[0xf];

}

void _activation_check_proc_login_func_1490841595(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 >>= 0xa;

	_activation_check_proc_login_func_2010449704(_activatnvar_confusing_char_0);
}

void _activation_check_proc_login_func_2010449704(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_login_func_2040739041(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_login_func_312459753(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_login_func_1138421225(U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_1 = _activatnvar_confusing_int_0;

	/* inline */ _activation_check_proc_login_func_751957384(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_login_func_735715041(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xe] == _activatnvar_feat) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_login_func_1478917515(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_t1)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x8] == _activatnvar_t1) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_login_func_129127458(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_d)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xd] == _activatnvar_confusing_char_d) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_login_func_1047522657(int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_int_b &= 0xff;

	_activation_check_proc_login_func_648111092(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_f);
	_activation_check_proc_login_func_129127458(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_char_d);
}

void _activation_check_proc_login_func_648111092(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x4] = _activatnvar_confusing_chararray_6[0xb];

}

void _activation_check_proc_login_func_1194409911(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1245146051(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d += 0x3;

}

void _activation_check_proc_login_func_16639795(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_9.mData[0x5];

	_activation_check_proc_login_func_1245146051(_activatnvar_confusing_U8_d);
	_activation_check_proc_login_func_1194409911(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1425776864(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_combined_id)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x3] != 0x1) _activatnvar_confusing_bool_b = true;

	_activation_check_proc_login_func_732411470(_activatnvar_generic_iterator);
	_activation_check_proc_login_func_1993423098(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1993423098(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_732411470(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1853296424(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_login_func_1020458243(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_5)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_2 ^= _activatnvar_confusing_U8_5;

	_activation_check_proc_login_func_1853296424(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_login_func_74868589(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section1, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

	/* inline */ _activation_check_proc_login_func_685411067(_activatnvar_confusing_LLUUID_5, _activatnvar_section1);
	/* inline */ _activation_check_proc_login_func_575405540(_activatnvar_so, _activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_login_func_1498046446(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	/* inline */ _activation_check_proc_login_func_1113127429();
	_activation_check_proc_login_func_236562392(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_login_func_236562392(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_login_func_1174892296(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_643680169(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_login_func_2023616795(LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_212141009(_activatnvar_confusing_bool_8, _activatnvar_confusing_char_d);
	_activation_check_proc_login_func_138309292(_activatnvar_confusing_int_f);
}

void _activation_check_proc_login_func_138309292(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f = 0x7;

}

void _activation_check_proc_login_func_957496834(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_login_func_1876129283(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_4.mData[0x5] = _activatnvar_ser_digest[0x8];

}

void _activation_check_proc_login_func_440289518(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_477730092(LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_f = true;

	_activation_check_proc_login_func_440289518(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_login_func_1519756018(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] += _activatnvar_secret.mData[0x1];

}

void _activation_check_proc_login_func_31879613(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
	/* inline */ _activation_check_proc_login_func_1662169283(_activatnvar_pos);
	_activation_check_proc_login_func_552750324(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_login_func_552750324(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_login_func_1393904581(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x1] *= _activatnvar_confusing_LLUUID_4.mData[0xe];

}

void _activation_check_proc_login_func_985685849(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_doaccount;

}

void _activation_check_proc_login_func_1961520506(bool& _activatnvar_generic_bool_2, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) _activatnvar_generic_bool_2 = true;
	/* inline */ _activation_check_proc_login_func_636927773(_activatnvar_confusing_U8_5, _activatnvar_confusing_char_7);
	_activation_check_proc_login_func_1106648088(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_login_func_1106648088(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_login_func_311453813(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x6] |= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_login_func_2044005455(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_login_func_1086591832(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_login_func_878174377(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_3[0xd] *= _activatnvar_confusing_LLUUID_3.mData[0xb];

	_activatnvar_confusing_LLUUID_5.mData[0x1] &= _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_login_func_170955747(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_login_func_1495055321(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xb] == _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_login_func_1409132840(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_section2;

}

void _activation_check_proc_login_func_1358469021(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xa] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_login_func_2017952465(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("32e26a34-75d3-9f4d-292f-2117741c868c");

	_activation_check_proc_login_func_1358469021(_activatnvar_confusing_bool_1, _activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_login_func_2105422937(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_e[0x8] ^= _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_login_func_908781707(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xa;

}

void _activation_check_proc_login_func_325797681(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_4 = false;

	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1951988004(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] <<= _activatnvar_confusing_chararray_5[0x3];

	_activation_check_proc_login_func_2143017440(_activatnvar_fscked, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_login_func_325797681(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_confusing_bool_4, _activatnvar_generic_iterator, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_login_func_2143017440(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x7] = _activatnvar_fscked.mData[0x5];

}

void _activation_check_proc_login_func_1567698371(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_login_func_2092510089(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] <<= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_login_func_460575416(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_login_func_1335106306()
{
	
}

void _activation_check_proc_login_func_297386584(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_5 |= _activatnvar_section1.mData[0x4];

	_activation_check_proc_login_func_1335106306();
	_activation_check_proc_login_func_871360400(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_6);
}

void _activation_check_proc_login_func_871360400(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_LLUUID_7.mData[0x8];

}

void _activation_check_proc_login_func_170220864()
{
	
}

void _activation_check_proc_login_func_1832214957(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("c7b729cc-208c-e95c-6cd4-387505e21234");

}

void _activation_check_proc_login_func_983128971(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xb] != 0x9) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_login_func_1869094001(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_6)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x7] == _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_login_func_379978760(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1108858182(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_login_func_1239062268(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_login_func_1923423383(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xb] = _activatnvar_confusing_chararray_5[0x7];

}

void _activation_check_proc_login_func_1898076010(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_d.mData[0xa];

}

void _activation_check_proc_login_func_757170674(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_login_func_551647938(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_login_func_5969004(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_login_func_5969004(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("e129871b-6e87-419c-29a4-b062ec36f894");

}

void _activation_check_proc_login_func_1917786798(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("f2c673d9-b38b-046b-b431-5d4c5f510b14");

}

void _activation_check_proc_login_func_478981211(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x3] += _activatnvar_confusing_chararray_1[0x8];

	_activation_check_proc_login_func_1917786798(_activatnvar_confusing_LLUUID_7);
	_activation_check_proc_login_func_1888787335(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_login_func_1888787335(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1075503218(int& _activatnvar_confusing_int_d, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_d++;

	_activation_check_proc_login_func_353847547(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_login_func_475829479(_activatnvar_t0);
	/* inline */ _activation_check_proc_login_func_873506880(_activatnvar_t0);
}

void _activation_check_proc_login_func_353847547(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_login_func_475829479(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_login_func_85882401(LLMD5*& _activatnvar_nmd5, std::string& _activatnvar_fullname)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_login_func_1779963816(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_login_func_1830544124(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_char_c;

}

void _activation_check_proc_login_func_1732395381(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0x3;

}

void _activation_check_proc_login_func_1123966043(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_login_func_743961178(U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("c06fd406-2fa1-7b13-4804-89809a9db2d9");

	_activation_check_proc_login_func_739507091(_activatnvar_confusing_int_b, _activatnvar_confusing_int_9);
	_activation_check_proc_login_func_148874628(_activatnvar_confusing_bool_0, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_login_func_739507091(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 <<= _activatnvar_confusing_int_b;

}

void _activation_check_proc_login_func_148874628(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_f <<= 0xd;

}

void _activation_check_proc_login_func_1287160614(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_doaccount;

}

void _activation_check_proc_login_func_2030387973(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1943134281(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_login_func_1302054865(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_login_func_138286569(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_698356359(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_login_func_2043489558(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_login_func_1913668847(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_c = _activatnvar_confusing_char_3;

}

void _activation_check_proc_login_func_1333246119(DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_gvi_flags = 0;
}

void _activation_check_proc_login_func_990836924()
{
	
}

void _activation_check_proc_login_func_2046612495(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_9[0x7] = _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_login_func_1099024203(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1631668980(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_login_func_2009054952(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_b >>= _activatnvar_confusing_int_1;

	_activation_check_proc_login_func_1631668980(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_login_func_1368356115(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_login_func_1603613678(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_login_func_511893716(char& _activatnvar_confusing_char_4, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_2, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_U8_9;

	_activation_check_proc_login_func_1368356115(_activatnvar_confusing_int_2);
	_activation_check_proc_login_func_1603613678(_activatnvar_confusing_int_7);
}

void _activation_check_proc_login_func_1929101624(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_chararray_9[0x4];

	_activation_check_proc_login_func_1126717519(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1126717519(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_733388042(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_login_func_540836638(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_c &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_login_func_276050502(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_login_func_689899939(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1585679840(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("02ab5f23-0f7e-1cff-3b41-b87cdba6aa83");

}

void _activation_check_proc_login_func_510939287(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_2.mData[0xc];

	_activatnvar_confusing_LLUUID_6.mData[0x9] <<= _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_login_func_666959960(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x2] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_login_func_1425311984(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_login_func_2030195513(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_7 += _activatnvar_confusing_char_f;

	_activation_check_proc_login_func_595660860(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_login_func_595660860(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_272692513(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_combined_id;

}

void _activation_check_proc_login_func_1439305638(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_secret;

}

void _activation_check_proc_login_func_731032448(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_secret)
{
	
	_activation_check_proc_login_func_1439305638(_activatnvar_secret, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_login_func_272692513(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_login_func_2089512874(int& _activatnvar_confusing_int_5, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
	/* inline */ _activation_check_proc_login_func_457460817(_activatnvar_confusing_int_5);
}

void _activation_check_proc_login_func_2141580512(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("ff3e1174-efd9-4724-b8ab-60809fa0ca6b");

}

void _activation_check_proc_login_func_1097920390(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_6 ^= _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_login_func_1858585434(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_chararray_4[0x3] *= _activatnvar_confusing_LLUUID_6.mData[0xd];

	/* inline */ _activation_check_proc_login_func_1389418763(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_1537157049(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_LLUUID_6.mData[0xe];

}

void _activation_check_proc_login_func_40363519(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_login_func_355419337(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x8] *= _activatnvar_secret.mData[0xd];

}

void _activation_check_proc_login_func_322060412(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_pos, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_b = _activatnvar_t0;

	/* inline */ _activation_check_proc_login_func_351813216(_activatnvar_pos);
	/* inline */ _activation_check_proc_login_func_1157275698(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_login_func_501281321(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_login_func_1098587256(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x0] = _activatnvar_confusing_LLUUID_4.mData[0x4];

}

void _activation_check_proc_login_func_980768186(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_login_func_401780669(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_9[0x4] *= _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_login_func_214955124()
{
	
}

void _activation_check_proc_login_func_1321676869(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] <<= _activatnvar_confusing_LLUUID_e.mData[0x6];

	_activation_check_proc_login_func_770242220(_activatnvar_confusing_U8_d);
}

void _activation_check_proc_login_func_770242220(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_login_func_627849463(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_644710289(U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_3 ^= _activatnvar_confusing_U8_1;

	/* inline */ _activation_check_proc_login_func_637713950(_activatnvar_confusing_int_6);
}

void _activation_check_proc_login_func_1233758(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x2] != 0xd) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_login_func_78144836(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x3] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_login_func_1687438366(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_login_func_842868697(_activatnvar_so, _activatnvar_section2);
	/* inline */ _activation_check_proc_login_func_2058488491(_activatnvar_confusing_char_e, _activatnvar_confusing_char_6);
	_activation_check_proc_login_func_78144836(_activatnvar_confusing_char_8, _activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_login_func_807845097(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_1.mData[0x8];

}

void _activation_check_proc_login_func_1781965087(unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xc] += _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_login_func_1424909036(bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_3)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_b = false;

	_activation_check_proc_login_func_1781965087(_activatnvar_confusing_chararray_5);
	/* inline */ _activation_check_proc_login_func_1628332811(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_login_func_396291569(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_login_func_888439204(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("f2c39164-169e-e299-d8f0-6adfae449a77");

}

void _activation_check_proc_login_func_623015086(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_login_func_126192482(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_280482433(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x6] |= _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_login_func_1104067151(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1779739706(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 *= 0x9;

	/* inline */ _activation_check_proc_login_func_1155812796(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_2006812237(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_login_func_2055979277(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_login_func_405364765(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1088509019(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_login_func_1451217907(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_login_func_1753943958(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_login_func_181227464(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_generic_bool_2, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_3 |= _activatnvar_confusing_U8_d;

	/* inline */ _activation_check_proc_login_func_193494730(_activatnvar_generic_bool_2, _activatnvar_confusing_U8_b, _activatnvar_confusing_U8_8);
	_activation_check_proc_login_func_1753943958(_activatnvar_t0);
}

void _activation_check_proc_login_func_1897065335(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_549860340(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_LLUUID_4.mData[0xc] |= _activatnvar_combined_id.mData[0x2];

	/* inline */ _activation_check_proc_login_func_1577839292(_activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_login_func_1350383465(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_f &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_login_func_1200327011(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_c);
}

void _activation_check_proc_login_func_1330169413(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_confusing_int_d *= _activatnvar_confusing_int_e;

	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_login_func_1184878919(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xb] |= _activatnvar_so.mData[0xd];

	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_9.mData[0xc];

}

void _activation_check_proc_login_func_259013338(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_so, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_5, U8& _activatnvar_pos)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_LLUUID_3.mData[0xd];

	_activation_check_proc_login_func_1330169413(_activatnvar_confusing_int_e, _activatnvar_confusing_int_d, _activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_login_func_1184878919(_activatnvar_so, _activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_login_func_1571127635(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_login_func_901825018(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_389171142(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x1] == 0x5) _activatnvar_confusing_bool_2 = true;

	_activation_check_proc_login_func_50117522(_activatnvar_generic_iterator);
	_activation_check_proc_login_func_901825018(_activatnvar_lace, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_50117522(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1827940845(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_combined_id;

}

void _activation_check_proc_login_func_1690613535(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_login_func_346913126(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_combined_id.mData[0xb];

}

void _activation_check_proc_login_func_315779307(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_0 &= _activatnvar_section1.mData[0x1];

}

void _activation_check_proc_login_func_370807703(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_LLUUID_4.mData[0x4] |= _activatnvar_confusing_LLUUID_a.mData[0x9];

	/* inline */ _activation_check_proc_login_func_497774329(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_login_func_1228660772(_activatnvar_confusing_int_f);
}

void _activation_check_proc_login_func_1566011806(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_240964855(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_1 = false;

	_activation_check_proc_login_func_1566011806(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_702737994(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1722275586(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("1e365541-48b0-fe04-9ef2-73bbf6335c77");

}

void _activation_check_proc_login_func_2058357321(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_596655609(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_login_func_1997149543(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_pos)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_8 >>= _activatnvar_pos;

	/* inline */ _activation_check_proc_login_func_541896574(_activatnvar_pos);
	_activation_check_proc_login_func_596655609(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_login_func_531486986(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c += 0x8;

}

void _activation_check_proc_login_func_1183366357(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_4.mData[0xc];

}

void _activation_check_proc_login_func_1471327806(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_login_func_1009995035(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_generic_bool_2, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = _activatnvar_generic_bool_2;

}

void _activation_check_proc_login_func_1443804579(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_login_func_118857069(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xb] &= _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_login_func_1066161443(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_7.mData[0xf];

}

void _activation_check_proc_login_func_815301676(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_login_func_1066161443(_activatnvar_confusing_U8_4, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_login_func_582289279(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_430948872(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_login_func_343175303(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_2.mData[0x2] &= _activatnvar_confusing_LLUUID_4.mData[0x7];

}

void _activation_check_proc_login_func_1001056788(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_9 += _activatnvar_pos;

	_activation_check_proc_login_func_430948872(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_c);
	_activation_check_proc_login_func_343175303(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_login_func_92126292(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_5 = _activatnvar_generic_bool_1;

}

void _activation_check_proc_login_func_1013709250(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] += _activatnvar_confusing_LLUUID_5.mData[0x4];

	_activation_check_proc_login_func_896009725(_activatnvar_confusing_char_d, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_login_func_896009725(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 *= _activatnvar_confusing_char_d;

}

void _activation_check_proc_login_func_415958524(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_843444204(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("5fa05912-1544-62c3-023b-6f2557b68336");

	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_login_func_415958524(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_lace);
	/* inline */ _activation_check_proc_login_func_201955693(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_login_func_1322604190(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 += 0x3;

}

void _activation_check_proc_login_func_489370909(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xd] *= _activatnvar_name_digest[0x6];

}

void _activation_check_proc_login_func_2036353761(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_login_func_402182889(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 124; _activatnvar_strbuf_0[0] ^= 73; _activatnvar_strbuf_0[1] = 101; _activatnvar_strbuf_0[1] ^= 81; _activatnvar_strbuf_0[2] = 103; _activatnvar_strbuf_0[2] ^= 87; _activatnvar_strbuf_0[3] = 105; _activatnvar_strbuf_0[3] ^= 91; _activatnvar_strbuf_0[4] = 81; _activatnvar_strbuf_0[4] ^= 98; _activatnvar_strbuf_0[5] = 74; _activatnvar_strbuf_0[5] ^= 122; _activatnvar_strbuf_0[6] = 124; _activatnvar_strbuf_0[6] ^= 68; _activatnvar_strbuf_0[7] = 118; _activatnvar_strbuf_0[7] ^= 70; _activatnvar_strbuf_0[8] = 2; _activatnvar_strbuf_0[8] ^= 47; _activatnvar_strbuf_0[9] = 21; _activatnvar_strbuf_0[9] ^= 37; _activatnvar_strbuf_0[10] = 23; _activatnvar_strbuf_0[10] ^= 39; _activatnvar_strbuf_0[11] = 123; _activatnvar_strbuf_0[11] ^= 67; _activatnvar_strbuf_0[12] = 73; _activatnvar_strbuf_0[12] ^= 120; _activatnvar_strbuf_0[13] = 19; _activatnvar_strbuf_0[13] ^= 62; _activatnvar_strbuf_0[14] = 62; _activatnvar_strbuf_0[14] ^= 14; _activatnvar_strbuf_0[15] = 91; _activatnvar_strbuf_0[15] ^= 105; _activatnvar_strbuf_0[16] = 14; _activatnvar_strbuf_0[16] ^= 62; _activatnvar_strbuf_0[17] = 39; _activatnvar_strbuf_0[17] ^= 31; _activatnvar_strbuf_0[18] = 37; _activatnvar_strbuf_0[18] ^= 8; _activatnvar_strbuf_0[19] = 78; _activatnvar_strbuf_0[19] ^= 126; _activatnvar_strbuf_0[20] = 71; _activatnvar_strbuf_0[20] ^= 35; _activatnvar_strbuf_0[21] = 81; _activatnvar_strbuf_0[21] ^= 97; _activatnvar_strbuf_0[22] = 120; _activatnvar_strbuf_0[22] ^= 27; _activatnvar_strbuf_0[23] = 54; _activatnvar_strbuf_0[23] ^= 27; _activatnvar_strbuf_0[24] = 122; _activatnvar_strbuf_0[24] ^= 74; _activatnvar_strbuf_0[25] = 8; _activatnvar_strbuf_0[25] ^= 58; _activatnvar_strbuf_0[26] = 35; _activatnvar_strbuf_0[26] ^= 23; _activatnvar_strbuf_0[27] = 4; _activatnvar_strbuf_0[27] ^= 103; _activatnvar_strbuf_0[28] = 99; _activatnvar_strbuf_0[28] ^= 91; _activatnvar_strbuf_0[29] = 122; _activatnvar_strbuf_0[29] ^= 66; _activatnvar_strbuf_0[30] = 9; _activatnvar_strbuf_0[30] ^= 59; _activatnvar_strbuf_0[31] = 44; _activatnvar_strbuf_0[31] ^= 25; _activatnvar_strbuf_0[32] = 15; _activatnvar_strbuf_0[32] ^= 55; _activatnvar_strbuf_0[33] = 20; _activatnvar_strbuf_0[33] ^= 37; _activatnvar_strbuf_0[34] = 31; _activatnvar_strbuf_0[34] ^= 42; _activatnvar_strbuf_0[35] = 73; _activatnvar_strbuf_0[35] ^= 120; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_login_func_1316431692(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_1920325878(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_2[0xc] = _activatnvar_confusing_LLUUID_e.mData[0x9];

	_activation_check_proc_login_func_403521748(_activatnvar_confusing_LLUUID_f, _activatnvar_section1);
	_activation_check_proc_login_func_1732902764(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_login_func_1732902764(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= 0xa;

}

void _activation_check_proc_login_func_403521748(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_f.mData[0xe] = _activatnvar_section1.mData[0xf];

}

void _activation_check_proc_login_func_1832130648(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xd] = _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_login_func_375345779(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] >>= _activatnvar_confusing_LLUUID_e.mData[0x5];

}

void _activation_check_proc_login_func_1869569208(char& _activatnvar_confusing_char_0, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_f ^= _activatnvar_confusing_char_0;

}

void _activation_check_proc_login_func_1363545967()
{
	
}

void _activation_check_proc_login_func_1649268640(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_82646757(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_4.mData[0x0] *= _activatnvar_confusing_LLUUID_a.mData[0x7];

}

void _activation_check_proc_login_func_1181043837(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_5.mData[0x3];

}

void _activation_check_proc_login_func_1299437685(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_login_func_971762323(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_login_func_1714259829(int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_a, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	
	_activation_check_proc_login_func_1561154625(_activatnvar_confusing_char_a, _activatnvar_confusing_U8_4, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_login_func_534294106(_activatnvar_lace, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_login_func_971762323(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_login_func_293794493(_activatnvar_confusing_int_a);
}

void _activation_check_proc_login_func_1561154625(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_4 = _activatnvar_confusing_char_a;

}

void _activation_check_proc_login_func_2002899078(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_login_func_1794531210(U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] >>= _activatnvar_confusing_chararray_d[0x3];

	/* inline */ _activation_check_proc_login_func_1571339630(_activatnvar_confusing_U8_9, _activatnvar_confusing_bool_7, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_login_func_1199788616(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_login_func_187939143(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_login_func_1407493134(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_8)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
	/* inline */ _activation_check_proc_login_func_936658515(_activatnvar_combined_id, _activatnvar_name_digest);
	/* inline */ _activation_check_proc_login_func_1808810195(_activatnvar_confusing_chararray_b, _activatnvar_confusing_char_8);
}

void _activation_check_proc_login_func_1629955684(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_3.mData[0xc];

	/* inline */ _activation_check_proc_login_func_2086009204(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_login_func_356797991(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x1] >>= _activatnvar_fscked.mData[0xe];

}

void _activation_check_proc_login_func_1927145445(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_int_c >>= _activatnvar_confusing_int_6;

	_activation_check_proc_login_func_356797991(_activatnvar_fscked, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_login_func_252779630(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f = _activatnvar_confusing_int_0;

}

void _activation_check_proc_login_func_439209391(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_6[0xe] &= _activatnvar_lace.mData[0xb];

	_activatnvar_confusing_LLUUID_e.mData[0xd] += _activatnvar_name_digest[0xa];

}

void _activation_check_proc_login_func_1662193189(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_login_func_1622398993(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_login_func_2066163260(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_3;

	_activatnvar_confusing_LLUUID_9.mData[0x7] ^= _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_login_func_1345588715(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_7[0x2] &= _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_login_func_617869634(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_login_func_1345588715(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_login_func_1771729627(_activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_0, _activatnvar_confusing_char_9);
	/* inline */ _activation_check_proc_login_func_220445196();
}

void _activation_check_proc_login_func_1995348752(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_login_func_1105883942(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_login_func_1931261393(int& _activatnvar_confusing_int_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_8++;

	_activation_check_proc_login_func_145579326(_activatnvar_generic_iterator);
}

void _activation_check_proc_login_func_145579326(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_login_func_503424424(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("7e9f4222-42d7-37a5-1d2e-cd9346961cdb");

}

void _activation_check_proc_login_func_1220890584()
{
	
}

void _activation_check_proc_login_func_849312596(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_login_func_727467371(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_so;

}

void _activation_check_proc_login_func_1660325793(char& _activatnvar_confusing_char_9)
{
	
	/* inline */ _activation_check_proc_login_func_517496558(_activatnvar_confusing_char_9);
}

void _activation_check_proc_login_func_820954485(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_d &= _activatnvar_combined_id.mData[0x6];

}

void _activation_check_proc_login_func_487636794(int& _activatnvar_confusing_int_0)
{
	
	/* inline */ _activation_check_proc_login_func_1963676927(_activatnvar_confusing_int_0);
}

void _activation_check_proc_login_func_2040171581(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_login_func_2068905700(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_f[0x9] ^= _activatnvar_confusing_chararray_4[0xe];

	/* inline */ _activation_check_proc_login_func_1204589362(_activatnvar_generic_iterator);
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
