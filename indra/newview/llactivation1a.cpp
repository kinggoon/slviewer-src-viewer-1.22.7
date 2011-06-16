// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation1a.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 1a

void _activation_check_proc_1a_func_271123613(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_1a_func_1057708520(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_1a_func_1704331771(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xe] += _activatnvar_lace.mData[0xd];

	/* inline */ _activation_check_proc_1a_func_1781745627(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_1);
	_activation_check_proc_1a_func_271123613(_activatnvar_confusing_char_2);
	_activation_check_proc_1a_func_1057708520(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1a_func_1266196332(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_chararray_f[0x5];

	_activation_check_proc_1a_func_495588631(_activatnvar_generic_iterator);
	_activation_check_proc_1a_func_1849702661(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_1a_func_495588631(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1849702661(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_808217928(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x7] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_1a_func_480792810(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_e += _activatnvar_t0;

}

void _activation_check_proc_1a_func_25021208(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1a_func_1267874608(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1a_func_441243188(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xc] *= _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_1a_func_814004251(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_1a_func_1040674770(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1580857856(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_a;

	/* inline */ _activation_check_proc_1a_func_2038209486(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_a);
	_activation_check_proc_1a_func_1040674770(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1a_func_1188608293(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_chararray_d[0x2];

}

void _activation_check_proc_1a_func_1493477376(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1a_func_980555933(U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_c *= 0x3;

	_activation_check_proc_1a_func_783083664(_activatnvar_confusing_chararray_f, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_1a_func_783083664(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_1a_func_278150520(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_1a_func_936401046(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_1a_func_1345705870(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	
	_activation_check_proc_1a_func_936401046(_activatnvar_confusing_U8_8);
	_activation_check_proc_1a_func_278150520(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1a_func_1818172305(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_3[0x3] ^= _activatnvar_confusing_LLUUID_2.mData[0x8];

}

void _activation_check_proc_1a_func_1638672375(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1614452629(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x4] == 0x0) _activatnvar_confusing_bool_f = false;

	_activatnvar_confusing_LLUUID_5.mData[0xd] <<= _activatnvar_confusing_LLUUID_f.mData[0xb];

	_activation_check_proc_1a_func_1638672375(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
	_activation_check_proc_1a_func_287223037(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_351978139(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_1a_func_113605913(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
}

void _activation_check_proc_1a_func_287223037(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_957621933(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] = _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_1a_func_1758725421(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_1a_func_498876318(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_1a_func_514633407(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("a8c4b7b9-d799-6ee2-1f2d-eab739f8bb39");

}

void _activation_check_proc_1a_func_452930315(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1a_func_1108363253(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

	
	_activation_check_proc_1a_func_1120562983(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1a_func_1120562983(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("21a9af94-3d57-5d0a-c25b-2c55c2eb0137");

}

void _activation_check_proc_1a_func_2082029350()
{
	
}

void _activation_check_proc_1a_func_1804151283(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1795085977(U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_1a_func_1719451977(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x7] &= _activatnvar_confusing_LLUUID_3.mData[0x3];

	_activatnvar_confusing_LLUUID_2.mData[0x7] *= _activatnvar_ser_digest[0x1];

	_activation_check_proc_1a_func_1018271178(_activatnvar_confusing_char_0, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_1a_func_1018271178(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_0 ^= _activatnvar_confusing_chararray_e[0x5];

}

void _activation_check_proc_1a_func_767350662(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] = _activatnvar_confusing_LLUUID_0.mData[0xf];

}

void _activation_check_proc_1a_func_830130034(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_1a_func_1019568274(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_190919329(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1a_func_1463455472()
{
	
}

void _activation_check_proc_1a_func_429083360(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_char_a++;

	_activatnvar_confusing_U8_6 = _activatnvar_so.mData[0x4];

}

void _activation_check_proc_1a_func_615238541(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1a_func_1798570577(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_c[0xa] *= _activatnvar_confusing_LLUUID_4.mData[0x5];

}

void _activation_check_proc_1a_func_1039783921(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_LLUUID_1.mData[0xa];

}

void _activation_check_proc_1a_func_249615300(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("223d1b38-fe51-9c52-237a-6971e0617103");

	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_char_a ^= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_1a_func_2014216773(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1393069999(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] |= _activatnvar_mac_digest[0xb];

}

void _activation_check_proc_1a_func_752441343(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1774528349(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_b.mData[0xd] += _activatnvar_confusing_LLUUID_7.mData[0x7];

	_activation_check_proc_1a_func_752441343(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_1a_func_1932184552(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_7459320(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
	_activation_check_proc_1a_func_543426523(_activatnvar_combined_id, _activatnvar_pos);
	/* inline */ _activation_check_proc_1a_func_1833593857(_activatnvar_pos);
}

void _activation_check_proc_1a_func_543426523(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_1a_func_1133720963(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_1a_func_976297861(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1a_func_1329615070(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] = _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_1a_func_1986821239(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xa] >>= _activatnvar_confusing_LLUUID_7.mData[0x9];

}

void _activation_check_proc_1a_func_920884737(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_1a_func_1986821239(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1a_func_710350276(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_1a_func_236469885(U8& _activatnvar_t0, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x7] <<= _activatnvar_name_digest[0x3];

	_activation_check_proc_1a_func_710350276(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_1a_func_242766929(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x6] != 0x4) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_1a_func_1906210661(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_char_5++;

	_activation_check_proc_1a_func_242766929(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1a_func_501446354(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_2[0x3] = _activatnvar_confusing_LLUUID_e.mData[0x0];

}

void _activation_check_proc_1a_func_1731003306(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1a_func_364628531(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_5[0x5] &= _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_1a_func_1783277332(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x4] &= _activatnvar_confusing_LLUUID_8.mData[0x8];

}

void _activation_check_proc_1a_func_634428288(U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

	/* inline */ _activation_check_proc_1a_func_308931703(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_1a_func_1289263917(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_3++;

	/* inline */ _activation_check_proc_1a_func_2102843767(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_1a_func_691098134(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1a_func_1435457717(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_1a_func_480646745(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1a_func_1177220499(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_9 >>= _activatnvar_confusing_char_7;

}

void _activation_check_proc_1a_func_1575065949(int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1a_func_1781482408(_activatnvar_confusing_int_b);
	_activation_check_proc_1a_func_1177220499(_activatnvar_confusing_char_9, _activatnvar_confusing_char_7, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_1a_func_1781482408(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_1a_func_221765277(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	
	_activatnvar_confusing_chararray_e[0x5] = _activatnvar_section2.mData[0x9];

}

void _activation_check_proc_1a_func_227846629(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_e.mData[0xc];

}

void _activation_check_proc_1a_func_1281555924(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_chararray_e[0xb];

}

void _activation_check_proc_1a_func_1403077653(bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1a_func_364801214(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1a_func_150867189(unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_9[0x8] += _activatnvar_confusing_chararray_7[0xb];

	_activation_check_proc_1a_func_364801214(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1a_func_2026107962(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_1a_func_282061153(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_1a_func_1628793159(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1a_func_282061153(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1a_func_1115955699()
{
	
}

void _activation_check_proc_1a_func_1885358763(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_8 ^= _activatnvar_confusing_chararray_e[0x0];

	_activation_check_proc_1a_func_1115955699();
}

void _activation_check_proc_1a_func_878443617(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activation_check_proc_1a_func_311560664(_activatnvar_confusing_int_5);
}

void _activation_check_proc_1a_func_311560664(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 = 0x5;

}

void _activation_check_proc_1a_func_938577887(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_1a_func_187406051(_activatnvar_confusing_chararray_5, _activatnvar_lace);
}

void _activation_check_proc_1a_func_1361797057(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_7, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1a_func_1031995204();
	_activation_check_proc_1a_func_1123365188(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_1a_func_1455691898(_activatnvar_confusing_char_7, _activatnvar_confusing_U8_e, _activatnvar_generic_bool_1);
}

void _activation_check_proc_1a_func_1123365188(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_1a_func_1022985351(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_1a_func_1337301769(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_b[0xd] >>= _activatnvar_confusing_chararray_d[0xb];

	
}

void _activation_check_proc_1a_func_1110576080(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x1] = _activatnvar_ser_digest[0x2];

}

void _activation_check_proc_1a_func_1516846196(char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1a_func_2138258790(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 *= 0x7;

}

void _activation_check_proc_1a_func_2138852137(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_7 &= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_1a_func_383328683(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1a_func_791224388(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1058226374(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_6[0x3] <<= _activatnvar_combined_id.mData[0x2];

	_activation_check_proc_1a_func_204387508(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_1a_func_204387508(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_1a_func_797759191(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_1a_func_1445589956(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1096750236(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_0.mData[0x4] |= _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_1a_func_92763442(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_1a_func_169989096(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_1a_func_531498469(_activatnvar_confusing_LLUUID_7, _activatnvar_t0, _activatnvar_confusing_bool_1);
	_activation_check_proc_1a_func_1964448444(_activatnvar_confusing_int_0);
}

void _activation_check_proc_1a_func_531498469(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xe] != _activatnvar_t0) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_1a_func_1964448444(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1a_func_1181707951(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1a_func_1087577642(char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1a_func_314045830(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1a_func_227759937(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_1a_func_1926324135(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("6e377509-56de-b100-1443-626a610239aa");

}

void _activation_check_proc_1a_func_2130091981(DWORD& _activatnvar_serial, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
}

void _activation_check_proc_1a_func_792618751(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1a_func_1884693019(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_1a_func_472210838(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_3, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] *= _activatnvar_confusing_LLUUID_0.mData[0xc];

	/* inline */ _activation_check_proc_1a_func_1078203665(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_1a_func_605647983(_activatnvar_t0);
	_activation_check_proc_1a_func_1884693019(_activatnvar_confusing_int_3);
}

void _activation_check_proc_1a_func_1695046250(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("8381b601-60af-156f-7c21-eb9ff346ad35");

	_activation_check_proc_1a_func_1303906252(_activatnvar_code, _activatnvar_confusing_char_c);
	_activation_check_proc_1a_func_89042577(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_1a_func_89042577(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_d.mData[0x5] ^= _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_1a_func_1303906252(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_code.mData[0x0];

}

void _activation_check_proc_1a_func_1536033709(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1a_func_1648926520(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1a_func_1648926520(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1a_func_1864688312(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1a_func_1962803571(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1a_func_31700588(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1a_func_1477292858(int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 *= _activatnvar_confusing_int_8;

	_activation_check_proc_1a_func_1658449565(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_5);
	_activation_check_proc_1a_func_31700588(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1a_func_1658449565(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1a_func_1073361776()
{
	
}

void _activation_check_proc_1a_func_514311897(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x4] = _activatnvar_mac_digest[0x6];

	/* inline */ _activation_check_proc_1a_func_746307205(_activatnvar_confusing_char_c, _activatnvar_confusing_bool_f, _activatnvar_confusing_char_d);
}

void _activation_check_proc_1a_func_1204473367(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_chararray_3[0xb];

	/* inline */ _activation_check_proc_1a_func_2109763065(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1a_func_1196068126(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_1a_func_169967314(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1a_func_673144271(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_0.mData[0x9] <<= _activatnvar_ser_digest[0xb];

}

void _activation_check_proc_1a_func_792495254(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_1a_func_2020108509()
{
	
}

void _activation_check_proc_1a_func_226747536(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_8 |= _activatnvar_code.mData[0x9];

}

void _activation_check_proc_1a_func_230525539(LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("a2e38422-3b22-8124-a359-775c103aa3ac");

	/* inline */ _activation_check_proc_1a_func_482058213(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_289357095(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1a_func_424156234(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_1a_func_352162370(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_b;

	_activation_check_proc_1a_func_424156234(_activatnvar_confusing_char_2);
	_activation_check_proc_1a_func_1375108222(_activatnvar_confusing_char_8, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_1a_func_1375108222(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_U8_f;

}

void _activation_check_proc_1a_func_1029896105(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1a_func_1756156456(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_2036162521(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f |= 0xa;

}

void _activation_check_proc_1a_func_77266507(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 = 0xb;

	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_1a_func_600642585(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1a_func_1875636076(LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_1a_func_410127395(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
}

void _activation_check_proc_1a_func_598724984(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] &= _activatnvar_confusing_chararray_0[0x6];

}

void _activation_check_proc_1a_func_1913693482(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_a ^= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_1a_func_1837834741(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_char_f;

}

void _activation_check_proc_1a_func_107825475(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x8] != 0xd) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_1a_func_1866087545(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_1a_func_369337938(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_b.mData[0x8];

	/* inline */ _activation_check_proc_1a_func_761351960(_activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_doaccount, _activatnvar_lace);
}

void _activation_check_proc_1a_func_1185776466(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_2)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x0] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_1a_func_671391467(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x5] &= _activatnvar_confusing_chararray_0[0x2];

}

void _activation_check_proc_1a_func_672220796(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1a_func_13683071(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_1++;

	/* inline */ _activation_check_proc_1a_func_954165797(_activatnvar_confusing_int_6, _activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_1a_func_602969789(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_1a_func_1902116325(U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_3, char& _activatnvar_feat)
{
	_activatnvar_confusing_U8_8 ^= _activatnvar_feat;

	/* inline */ _activation_check_proc_1a_func_111754009(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_1a_func_342388298(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_U8_8;

}

void _activation_check_proc_1a_func_1560896519(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1997524371(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] ^= _activatnvar_confusing_LLUUID_8.mData[0x5];

	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1a_func_1064172909(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x8] == _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1a_func_505382252(bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	/* inline */ _activation_check_proc_1a_func_35191110(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_U8_c, _activatnvar_confusing_bool_a, _activatnvar_doaccount);
}

void _activation_check_proc_1a_func_1907846352(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1a_func_422064654(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= 0x3;

	/* inline */ _activation_check_proc_1a_func_1967812022();
	_activation_check_proc_1a_func_1221716084(_activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_1a_func_643202127(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1a_func_1221716084(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] = _activatnvar_confusing_LLUUID_a.mData[0x3];

}

void _activation_check_proc_1a_func_1225297693(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1393856082(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_1a_func_1225297693(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_284736763(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	
	/* inline */ _activation_check_proc_1a_func_408926409(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1a_func_84995916(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

	/* inline */ _activation_check_proc_1a_func_1207630090(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_1a_func_1826424423(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_c);
	_activation_check_proc_1a_func_1705489960(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code);
}

void _activation_check_proc_1a_func_1705489960(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_253110059(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1a_func_1176425549(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_1176425549(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_727293531(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1a_func_1962156306(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1a_func_19006966(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_char_b++;

	/* inline */ _activation_check_proc_1a_func_4416636(_activatnvar_confusing_char_5, _activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_0, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_1a_func_1111060747(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_d &= _activatnvar_doaccount;

}

void _activation_check_proc_1a_func_789543234(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1a_func_2068306059(_activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1a_func_2068306059(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x5] != 0x2) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_1a_func_1254336302(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_1a_func_1244450012(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_fscked.mData[0xb];

}

void _activation_check_proc_1a_func_48514746(unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_3[0x0] += _activatnvar_confusing_chararray_0[0x6];

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1402214453(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_1a_func_230071455(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_1a_func_760391337(_activatnvar_confusing_LLUUID_6, _activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_confusing_U8_1);
	_activation_check_proc_1a_func_1062898893(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_1a_func_48514746(_activatnvar_confusing_chararray_0, _activatnvar_generic_iterator, _activatnvar_confusing_chararray_3, _activatnvar_lace, _activatnvar_section2);
	_activation_check_proc_1a_func_1452307123(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_1a_func_1452307123(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_e[0x0] <<= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_1a_func_1062898893(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("cfaf9b8c-2a48-131d-38a6-c672e53200a3");

}

void _activation_check_proc_1a_func_1418686927(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_5)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_5 &= 0xe;

}

void _activation_check_proc_1a_func_2127815562(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_a <<= _activatnvar_confusing_int_5;

	/* inline */ _activation_check_proc_1a_func_759253320(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1a_func_1544163258(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_8, char* _activatnvar_strbuf_0)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_8;

	_activatnvar_strbuf_0[0] = 98; _activatnvar_strbuf_0[0] ^= 35; _activatnvar_strbuf_0[1] = 33; _activatnvar_strbuf_0[1] ^= 66; _activatnvar_strbuf_0[2] = 39; _activatnvar_strbuf_0[2] ^= 83; _activatnvar_strbuf_0[3] = 7; _activatnvar_strbuf_0[3] ^= 110; _activatnvar_strbuf_0[4] = 75; _activatnvar_strbuf_0[4] ^= 61; _activatnvar_strbuf_0[5] = 84; _activatnvar_strbuf_0[5] ^= 53; _activatnvar_strbuf_0[6] = 103; _activatnvar_strbuf_0[6] ^= 19; _activatnvar_strbuf_0[7] = 67; _activatnvar_strbuf_0[7] ^= 42; _activatnvar_strbuf_0[8] = 34; _activatnvar_strbuf_0[8] ^= 77; _activatnvar_strbuf_0[9] = 75; _activatnvar_strbuf_0[9] ^= 37; _activatnvar_strbuf_0[10] = 100; _activatnvar_strbuf_0[10] ^= 39; _activatnvar_strbuf_0[11] = 44; _activatnvar_strbuf_0[11] ^= 67; _activatnvar_strbuf_0[12] = 102; _activatnvar_strbuf_0[12] ^= 2; _activatnvar_strbuf_0[13] = 117; _activatnvar_strbuf_0[13] ^= 16; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_1a_func_1724605883(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_1a_func_2043869198(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_1a_func_1257127366(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_d.mData[0x5];

}

void _activation_check_proc_1a_func_360998972(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1a_func_522728353(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_so, U8& _activatnvar_pos, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] *= _activatnvar_section2.mData[0xd];

	_activation_check_proc_1a_func_29750213(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_1a_func_29750213(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1a_func_1313063114(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_1a_func_867392274(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_2144332408(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_1a_func_1417973031(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1608597605(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xd] *= _activatnvar_lace.mData[0xb];

	_activation_check_proc_1a_func_1693988706(_activatnvar_confusing_char_4);
}

void _activation_check_proc_1a_func_1693988706(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_1a_func_1649607676(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1a_func_644937210(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 >>= _activatnvar_confusing_int_6;

}

void _activation_check_proc_1a_func_2116714600(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_char_2 *= 0x7;

}

void _activation_check_proc_1a_func_643411253(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xb] >>= _activatnvar_mac_digest[0x3];

	_activation_check_proc_1a_func_2116714600(_activatnvar_confusing_char_2, _activatnvar_confusing_bool_d);
	_activation_check_proc_1a_func_706068089(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_1a_func_706068089(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x2] == 0x1) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1a_func_1974466296(char& _activatnvar_confusing_char_d, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_d >>= _activatnvar_t0;

}

void _activation_check_proc_1a_func_1092880178(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_1a_func_1535329353(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1a_func_409929257(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1625193765(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1a_func_1255240550(_activatnvar_confusing_int_7);
	_activation_check_proc_1a_func_1964737234(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1a_func_1964737234(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] <<= _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_1a_func_777867894(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1047557127(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1a_func_189946676(unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_a, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_1[0x9];

	/* inline */ _activation_check_proc_1a_func_782172035(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1a_func_696174919(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1a_func_841688585(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1a_func_452251507(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x7] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1a_func_1931195241(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x9] >>= _activatnvar_confusing_chararray_1[0x4];

}

void _activation_check_proc_1a_func_687567123(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_1a_func_737967978(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1a_func_1094151155(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_282465508(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_1a_func_376122528(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xc] += _activatnvar_ser_digest[0xc];

	_activation_check_proc_1a_func_786859625(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_786859625(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_52513322(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_6;

	/* inline */ _activation_check_proc_1a_func_696170492(_activatnvar_confusing_char_e);
}

void _activation_check_proc_1a_func_969334517(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1a_func_1004420966(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f <<= _activatnvar_t0;

}

void _activation_check_proc_1a_func_1653579443(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_14530318(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_f, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_t0, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_6.mData[0x3];

	_activation_check_proc_1a_func_1653579443(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_2108863091(_activatnvar_confusing_int_d, _activatnvar_confusing_bool_c);
	_activation_check_proc_1a_func_1004420966(_activatnvar_t0, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_1a_func_1945820853(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_a.mData[0x8] >>= _activatnvar_confusing_LLUUID_2.mData[0xd];

}

void _activation_check_proc_1a_func_1391738354(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_1a_func_628765716(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_so.mData[0x4];

}

void _activation_check_proc_1a_func_1053708948(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= _activatnvar_generic_iterator;

}

void _activation_check_proc_1a_func_1706574607(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_1a_func_1001546616(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	/* inline */ _activation_check_proc_1a_func_312069599(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_719117770()
{
	
}

void _activation_check_proc_1a_func_1269012158(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("34853345-2f9f-37c7-8f31-51c4295b2999");

	_activation_check_proc_1a_func_618094473(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1a_func_618094473(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1a_func_2023408003(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_574902839(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_114760787(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_d = false;

	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_lace;

	_activation_check_proc_1a_func_574902839(_activatnvar_code, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_79460974(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_969795224(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xf] += _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_1a_func_508745568(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1a_func_1092071194(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1a_func_263592622(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_1a_func_1844520754(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1a_func_200087071(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] = _activatnvar_confusing_LLUUID_c.mData[0x4];

	_activation_check_proc_1a_func_1844520754(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1a_func_933490996(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_1 *= _activatnvar_confusing_char_a;

	/* inline */ _activation_check_proc_1a_func_697350698(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_1304742355(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_1a_func_1853031663(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1a_func_1853031663(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("01baf6d0-d9cd-f7e9-abb5-1e5501a2ccf0");

}

void _activation_check_proc_1a_func_359364343(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1a_func_1022631595(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_5[0xc] |= _activatnvar_confusing_LLUUID_8.mData[0x7];

}

void _activation_check_proc_1a_func_1950021686(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("b4214eae-f0a1-af1a-bb8d-4051532734b4");

	_activation_check_proc_1a_func_1614225923(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_1a_func_1614225923(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x3] <<= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_1a_func_567045475()
{
	
}

void _activation_check_proc_1a_func_1494720439(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1a_func_1176803811(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("d6354d6c-81ac-e955-b23b-1b61203c2782");

}

void _activation_check_proc_1a_func_945656156(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1985308164(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_2065587545(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	
	/* inline */ _activation_check_proc_1a_func_1989250530(_activatnvar_pos, _activatnvar_so, _activatnvar_t1);
}

void _activation_check_proc_1a_func_1120361193(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_c[0xa] <<= _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_1a_func_1270505924(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1427075836(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

	_activation_check_proc_1a_func_1270505924(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_2017389934(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 *= 0xf;

}

void _activation_check_proc_1a_func_145987385(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_1a_func_773611390(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_7)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_7 ^= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_1a_func_147356288(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 ^= _activatnvar_confusing_char_3;

}

void _activation_check_proc_1a_func_74730620(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("d94c18bf-853f-cc52-e5db-5ad1bb35dd75");

}

void _activation_check_proc_1a_func_1542403601(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1a_func_1309735306(unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_3, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_c[0x6] ^= _activatnvar_confusing_chararray_a[0x5];

	_activation_check_proc_1a_func_1542403601(_activatnvar_t0);
	/* inline */ _activation_check_proc_1a_func_234191406(_activatnvar_t0);
	/* inline */ _activation_check_proc_1a_func_1598665836(_activatnvar_confusing_int_3, _activatnvar_confusing_int_2);
}

void _activation_check_proc_1a_func_472977146()
{
	
}

void _activation_check_proc_1a_func_546144589(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b <<= 0x1;

	_activation_check_proc_1a_func_472977146();
}

void _activation_check_proc_1a_func_331309879(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_char_5;

}

void _activation_check_proc_1a_func_802940520(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x0] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_1a_func_1135053801(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_a.mData[0x0] ^= _activatnvar_confusing_chararray_0[0xb];

}

void _activation_check_proc_1a_func_1300239886(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_b[0x9] &= _activatnvar_lace.mData[0x7];

	/* inline */ _activation_check_proc_1a_func_1895745938(_activatnvar_confusing_char_f, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_1a_func_1503475871(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_0 ^= _activatnvar_confusing_char_b;

}

void _activation_check_proc_1a_func_725625375(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1a_func_862817897(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_1a_func_2143349122(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1a_func_2143349122(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x5] >>= _activatnvar_confusing_chararray_c[0x4];

}

void _activation_check_proc_1a_func_862817897(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_1a_func_1642306783(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1a_func_1933629609(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x8] &= _activatnvar_confusing_LLUUID_8.mData[0x1];

}

void _activation_check_proc_1a_func_1744425240(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("1cf2608b-7682-0117-56fd-f0dd6ee9a0d1");

	_activation_check_proc_1a_func_443876881(_activatnvar_confusing_char_e, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1a_func_443876881(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_9.mData[0xf];

}

void _activation_check_proc_1a_func_494643812(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xf] |= _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_1a_func_346323927(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1a_func_29334873(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1a_func_506384754(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_char_5++;

	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_1a_func_2064549415()
{
	
}

void _activation_check_proc_1a_func_1386600285(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("c1b445dc-9829-72b3-a50d-f34a52a22a93");

}

void _activation_check_proc_1a_func_1772132559(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_1a_func_401423018(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_1a_func_1386600285(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1a_func_401423018(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_1a_func_518546980(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_so ^= _activatnvar_section2;
}

void _activation_check_proc_1a_func_859845401(LLUUID& _activatnvar_so, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] += _activatnvar_lace.mData[0x3];

	_activation_check_proc_1a_func_518546980(_activatnvar_so, _activatnvar_section2);
}

void _activation_check_proc_1a_func_640660689()
{
	
}

void _activation_check_proc_1a_func_4406288(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_section2.mData[0x8];

}

void _activation_check_proc_1a_func_313254750(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1a_func_519360081(_activatnvar_confusing_chararray_5, _activatnvar_confusing_char_c);
	_activation_check_proc_1a_func_4406288(_activatnvar_section2, _activatnvar_confusing_char_7);
}

void _activation_check_proc_1a_func_1829524522(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("0ee6f443-1c95-1176-a12f-7ac69d014408");

}

void _activation_check_proc_1a_func_221577396(U8& _activatnvar_confusing_U8_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1a_func_1829524522(_activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_1a_func_856947541(_activatnvar_confusing_int_7, _activatnvar_combined_id, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_1a_func_1716585191(LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x9] <<= _activatnvar_lace.mData[0xa];

	/* inline */ _activation_check_proc_1a_func_1134210962(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_1a_func_2097749708(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_1a_func_254747594(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_1a_func_1070067635(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x7] != _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1a_func_642175406(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x8] += _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_1a_func_2070140838(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1197208033(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c *= 0xa;

}

void _activation_check_proc_1a_func_887369284(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x3] == 0x9) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_1a_func_601157090(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= _activatnvar_generic_iterator;

}

void _activation_check_proc_1a_func_700721298(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_e[0xe] |= _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_1a_func_1954731907(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
}

void _activation_check_proc_1a_func_2018667104(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xd] >>= _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_1a_func_1667329568(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1a_func_1044187600(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_section1)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_3 += _activatnvar_confusing_U8_0;

	_activatnvar_confusing_chararray_8[0xf] <<= _activatnvar_confusing_LLUUID_6.mData[0x5];

	_activatnvar_confusing_LLUUID_c ^= _activatnvar_section1;

}

void _activation_check_proc_1a_func_445149012(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 24; _activatnvar_strbuf_0[0] ^= 41; _activatnvar_strbuf_0[1] = 62; _activatnvar_strbuf_0[1] ^= 14; _activatnvar_strbuf_0[2] = 59; _activatnvar_strbuf_0[2] ^= 8; _activatnvar_strbuf_0[3] = 48; _activatnvar_strbuf_0[3] ^= 4; _activatnvar_strbuf_0[4] = 8; _activatnvar_strbuf_0[4] ^= 106; _activatnvar_strbuf_0[5] = 25; _activatnvar_strbuf_0[5] ^= 127; _activatnvar_strbuf_0[6] = 107; _activatnvar_strbuf_0[6] ^= 13; _activatnvar_strbuf_0[7] = 68; _activatnvar_strbuf_0[7] ^= 114; _activatnvar_strbuf_0[8] = 116; _activatnvar_strbuf_0[8] ^= 89; _activatnvar_strbuf_0[9] = 33; _activatnvar_strbuf_0[9] ^= 67; _activatnvar_strbuf_0[10] = 125; _activatnvar_strbuf_0[10] ^= 74; _activatnvar_strbuf_0[11] = 29; _activatnvar_strbuf_0[11] ^= 41; _activatnvar_strbuf_0[12] = 40; _activatnvar_strbuf_0[12] ^= 24; _activatnvar_strbuf_0[13] = 73; _activatnvar_strbuf_0[13] ^= 100; _activatnvar_strbuf_0[14] = 104; _activatnvar_strbuf_0[14] ^= 88; _activatnvar_strbuf_0[15] = 103; _activatnvar_strbuf_0[15] ^= 1; _activatnvar_strbuf_0[16] = 82; _activatnvar_strbuf_0[16] ^= 48; _activatnvar_strbuf_0[17] = 111; _activatnvar_strbuf_0[17] ^= 11; _activatnvar_strbuf_0[18] = 122; _activatnvar_strbuf_0[18] ^= 87; _activatnvar_strbuf_0[19] = 76; _activatnvar_strbuf_0[19] ^= 125; _activatnvar_strbuf_0[20] = 71; _activatnvar_strbuf_0[20] ^= 36; _activatnvar_strbuf_0[21] = 41; _activatnvar_strbuf_0[21] ^= 75; _activatnvar_strbuf_0[22] = 112; _activatnvar_strbuf_0[22] ^= 22; _activatnvar_strbuf_0[23] = 97; _activatnvar_strbuf_0[23] ^= 76; _activatnvar_strbuf_0[24] = 48; _activatnvar_strbuf_0[24] ^= 4; _activatnvar_strbuf_0[25] = 64; _activatnvar_strbuf_0[25] ^= 118; _activatnvar_strbuf_0[26] = 123; _activatnvar_strbuf_0[26] ^= 78; _activatnvar_strbuf_0[27] = 78; _activatnvar_strbuf_0[27] ^= 45; _activatnvar_strbuf_0[28] = 12; _activatnvar_strbuf_0[28] ^= 60; _activatnvar_strbuf_0[29] = 110; _activatnvar_strbuf_0[29] ^= 95; _activatnvar_strbuf_0[30] = 113; _activatnvar_strbuf_0[30] ^= 21; _activatnvar_strbuf_0[31] = 28; _activatnvar_strbuf_0[31] ^= 46; _activatnvar_strbuf_0[32] = 9; _activatnvar_strbuf_0[32] ^= 56; _activatnvar_strbuf_0[33] = 107; _activatnvar_strbuf_0[33] ^= 9; _activatnvar_strbuf_0[34] = 88; _activatnvar_strbuf_0[34] ^= 60; _activatnvar_strbuf_0[35] = 104; _activatnvar_strbuf_0[35] ^= 93; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1a_func_456625509(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] += _activatnvar_ser_digest[0xd];

}

void _activation_check_proc_1a_func_525324016(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1011870547(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 >>= 0xb;

	_activation_check_proc_1a_func_776379840(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1a_func_776379840(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_1a_func_724889983(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_c.mData[0x3] >>= _activatnvar_confusing_chararray_6[0xc];

}

void _activation_check_proc_1a_func_1138796049(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_1a_func_1681913212();
	_activation_check_proc_1a_func_724889983(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_1a_func_1681913212()
{
	
}

void _activation_check_proc_1a_func_1821538438(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1969524417(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_1a_func_1370094647(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1577175612(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_579584576(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

	/* inline */ _activation_check_proc_1a_func_419793488(_activatnvar_t0);
	_activation_check_proc_1a_func_761396008(_activatnvar_t0);
}

void _activation_check_proc_1a_func_761396008(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1a_func_835900728(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_1a_func_105202382(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_5)
{
	
	_activation_check_proc_1a_func_835900728(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1a_func_368925151(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] <<= _activatnvar_section2.mData[0x6];

}

void _activation_check_proc_1a_func_1689650185(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1a_func_2142198542(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f |= 0x1;

}

void _activation_check_proc_1a_func_90050823(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xc] == _activatnvar_feat) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_e;

	/* inline */ _activation_check_proc_1a_func_1115342988(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_1a_func_1726697968(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1a_func_1981306122(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_1a_func_1130339648(int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_8;

	_activation_check_proc_1a_func_811566228(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	_activation_check_proc_1a_func_1945147029(_activatnvar_confusing_int_4);
}

void _activation_check_proc_1a_func_1945147029(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_1a_func_811566228(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1a_func_1832200278(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_1.mData[0xc];

}

void _activation_check_proc_1a_func_15037983(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_a |= _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_1a_func_2021174059(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 |= 0x2;

}

void _activation_check_proc_1a_func_646071324(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_b[0xe] ^= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_1a_func_1053871679(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_0[0x9] += _activatnvar_section2.mData[0x2];

}

void _activation_check_proc_1a_func_1050315118()
{
	
}

void _activation_check_proc_1a_func_233590779(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_1a_func_466346737(U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activation_check_proc_1a_func_233590779(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_1a_func_1720534178(char& _activatnvar_confusing_char_f, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_4 = false;

	if(_activatnvar_confusing_LLUUID_b.mData[0xc] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_1a_func_597567192(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_8 <<= _activatnvar_confusing_int_c;

}

void _activation_check_proc_1a_func_1973907915()
{
	
}

void _activation_check_proc_1a_func_1320412752(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

	_activation_check_proc_1a_func_1973907915();
}

void _activation_check_proc_1a_func_932979491(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x0] &= _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_1a_func_1576534243(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_2[0x7] <<= _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_1a_func_1463157483(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("cc0d1a87-f221-f72f-c93e-7a09dc5ef661");

}

void _activation_check_proc_1a_func_1080612491(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1a_func_1950324215(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_1a_func_928618376(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_section2.mData[0xa];

}

void _activation_check_proc_1a_func_606900454(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_949423459(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d >>= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_1a_func_1216445530(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_8.mData[0x1] *= _activatnvar_fscked.mData[0x7];

}

void _activation_check_proc_1a_func_501728400(bool& _activatnvar_confusing_bool_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_2;

	/* inline */ _activation_check_proc_1a_func_1906876041(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_1a_func_501638104();
	_activation_check_proc_1a_func_1225655575(_activatnvar_confusing_char_b, _activatnvar_confusing_bool_f, _activatnvar_confusing_char_f);
	_activation_check_proc_1a_func_719772767(_activatnvar_combined_id, _activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_1225655575(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_f = _activatnvar_confusing_char_b;

}

void _activation_check_proc_1a_func_719772767(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1521249720(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_d;

	/* inline */ _activation_check_proc_1a_func_903766177(_activatnvar_confusing_int_f);
	_activation_check_proc_1a_func_310685190(_activatnvar_confusing_bool_8, _activatnvar_confusing_char_3, _activatnvar_confusing_char_f);
}

void _activation_check_proc_1a_func_310685190(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_3 <<= _activatnvar_confusing_char_f;

}

void _activation_check_proc_1a_func_2122694327(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] += _activatnvar_ser_digest[0xd];

}

void _activation_check_proc_1a_func_308158776(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("17fd5741-260c-1aa6-3cfd-54ec45272828");

}

void _activation_check_proc_1a_func_620765823(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_1a_func_708281589(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_int_4++;

	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_1a_func_774809983(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_t0, int& _activatnvar_confusing_int_4)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
	_activation_check_proc_1a_func_708281589(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_int_4, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1a_func_1219353306(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = _activatnvar_confusing_int_c;

}

void _activation_check_proc_1a_func_1171927809(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1a_func_517230153(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_b.mData[0x3];

}

void _activation_check_proc_1a_func_930403402(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("b9fadece-183f-8e42-df1d-9d783b22f435");

}

void _activation_check_proc_1a_func_1889759656(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1a_func_74711815(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("2df8427e-2edc-f2f4-3fd4-2877243e294c");

}

void _activation_check_proc_1a_func_968290355(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
	_activatnvar_confusing_LLUUID_d.mData[0xb] &= _activatnvar_confusing_LLUUID_a.mData[0x7];

}

void _activation_check_proc_1a_func_350336042(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1a_func_1037355209(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
	_activatnvar_strbuf_0[0] = 46; _activatnvar_strbuf_0[0] ^= 24; _activatnvar_strbuf_0[1] = 79; _activatnvar_strbuf_0[1] ^= 127; _activatnvar_strbuf_0[2] = 85; _activatnvar_strbuf_0[2] ^= 97; _activatnvar_strbuf_0[3] = 60; _activatnvar_strbuf_0[3] ^= 13; _activatnvar_strbuf_0[4] = 102; _activatnvar_strbuf_0[4] ^= 85; _activatnvar_strbuf_0[5] = 59; _activatnvar_strbuf_0[5] ^= 88; _activatnvar_strbuf_0[6] = 123; _activatnvar_strbuf_0[6] ^= 75; _activatnvar_strbuf_0[7] = 56; _activatnvar_strbuf_0[7] ^= 10; _activatnvar_strbuf_0[8] = 120; _activatnvar_strbuf_0[8] ^= 85; _activatnvar_strbuf_0[9] = 114; _activatnvar_strbuf_0[9] ^= 66; _activatnvar_strbuf_0[10] = 21; _activatnvar_strbuf_0[10] ^= 39; _activatnvar_strbuf_0[11] = 26; _activatnvar_strbuf_0[11] ^= 46; _activatnvar_strbuf_0[12] = 29; _activatnvar_strbuf_0[12] ^= 43; _activatnvar_strbuf_0[13] = 30; _activatnvar_strbuf_0[13] ^= 51; _activatnvar_strbuf_0[14] = 13; _activatnvar_strbuf_0[14] ^= 61; _activatnvar_strbuf_0[15] = 84; _activatnvar_strbuf_0[15] ^= 100; _activatnvar_strbuf_0[16] = 88; _activatnvar_strbuf_0[16] ^= 107; _activatnvar_strbuf_0[17] = 10; _activatnvar_strbuf_0[17] ^= 58; _activatnvar_strbuf_0[18] = 32; _activatnvar_strbuf_0[18] ^= 13; _activatnvar_strbuf_0[19] = 74; _activatnvar_strbuf_0[19] ^= 120; _activatnvar_strbuf_0[20] = 97; _activatnvar_strbuf_0[20] ^= 80; _activatnvar_strbuf_0[21] = 42; _activatnvar_strbuf_0[21] ^= 26; _activatnvar_strbuf_0[22] = 98; _activatnvar_strbuf_0[22] ^= 91; _activatnvar_strbuf_0[23] = 58; _activatnvar_strbuf_0[23] ^= 23; _activatnvar_strbuf_0[24] = 79; _activatnvar_strbuf_0[24] ^= 119; _activatnvar_strbuf_0[25] = 49; _activatnvar_strbuf_0[25] ^= 9; _activatnvar_strbuf_0[26] = 96; _activatnvar_strbuf_0[26] ^= 85; _activatnvar_strbuf_0[27] = 100; _activatnvar_strbuf_0[27] ^= 85; _activatnvar_strbuf_0[28] = 8; _activatnvar_strbuf_0[28] ^= 60; _activatnvar_strbuf_0[29] = 17; _activatnvar_strbuf_0[29] ^= 40; _activatnvar_strbuf_0[30] = 54; _activatnvar_strbuf_0[30] ^= 6; _activatnvar_strbuf_0[31] = 38; _activatnvar_strbuf_0[31] ^= 71; _activatnvar_strbuf_0[32] = 122; _activatnvar_strbuf_0[32] ^= 25; _activatnvar_strbuf_0[33] = 68; _activatnvar_strbuf_0[33] ^= 124; _activatnvar_strbuf_0[34] = 30; _activatnvar_strbuf_0[34] ^= 123; _activatnvar_strbuf_0[35] = 7; _activatnvar_strbuf_0[35] ^= 52; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1a_func_1512341577(LLUUID& _activatnvar_so, U8& _activatnvar_t1, int& _activatnvar_confusing_int_f, U8& _activatnvar_pos)
{
	_activatnvar_confusing_int_f >>= 0xa;

	/* inline */ _activation_check_proc_1a_func_1180796623(_activatnvar_pos, _activatnvar_t1, _activatnvar_so);
}

void _activation_check_proc_1a_func_1808568571(int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= _activatnvar_confusing_int_8;

	/* inline */ _activation_check_proc_1a_func_669453707(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_1a_func_1783119542(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_1a_func_1054899062(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_d)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xa] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_1a_func_503167660(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 |= _activatnvar_so.mData[0x8];

}

void _activation_check_proc_1a_func_1106411087(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_363804673(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_3 += _activatnvar_confusing_chararray_2[0x0];

}

void _activation_check_proc_1a_func_1949751490(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x9] = _activatnvar_section2.mData[0x2];

}

void _activation_check_proc_1a_func_302744807(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_c[0x3] += _activatnvar_combined_id.mData[0x4];

}

void _activation_check_proc_1a_func_33150376(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_3)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_5 &= _activatnvar_confusing_char_3;

}

void _activation_check_proc_1a_func_595593034(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("f45efac7-30e0-da0a-1b47-0590593c09ef");

	/* inline */ _activation_check_proc_1a_func_1561745120(_activatnvar_confusing_bool_d, _activatnvar_confusing_char_a, _activatnvar_confusing_char_6);
}

void _activation_check_proc_1a_func_1946677935(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_chararray_f[0x9];

}

void _activation_check_proc_1a_func_1037333006(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 |= 0x0;

}

void _activation_check_proc_1a_func_303470019(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_chararray_5[0x3] <<= _activatnvar_confusing_LLUUID_5.mData[0x8];

	_activation_check_proc_1a_func_1037333006(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1a_func_507616169(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_b[0xe] += _activatnvar_section1.mData[0x8];

}

void _activation_check_proc_1a_func_1936839846(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x1] = _activatnvar_confusing_LLUUID_4.mData[0xb];

}

void _activation_check_proc_1a_func_1639654492(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 += 0x1;

}

void _activation_check_proc_1a_func_1191825479(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_secret;

}

void _activation_check_proc_1a_func_650282347(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_c = 0x7;

}

void _activation_check_proc_1a_func_1123950583()
{
	
}

void _activation_check_proc_1a_func_93557672(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_884612654(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_1a_func_698251259(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("f39fa78d-1b63-36d8-e3e8-83adf3a5890e");

}

void _activation_check_proc_1a_func_787025786(int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_int_f *= 0x4;

	_activation_check_proc_1a_func_698251259(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1a_func_1517021827(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x2] *= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_1a_func_1299468222(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 |= _activatnvar_generic_iterator;

}

void _activation_check_proc_1a_func_791773224()
{
	
}

void _activation_check_proc_1a_func_1589999090(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0x7;

}

void _activation_check_proc_1a_func_169985364(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] &= _activatnvar_confusing_LLUUID_8.mData[0xd];

	/* inline */ _activation_check_proc_1a_func_1193214574(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_1a_func_1375511108(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1a_func_929293864(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_1415283690(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_section1;

}

void _activation_check_proc_1a_func_2086840216(int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_int_7 ^= _activatnvar_confusing_int_1;

	/* inline */ _activation_check_proc_1a_func_1311570350(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1a_func_146099014(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

	_activation_check_proc_1a_func_760040405(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1a_func_760040405(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("96c874ba-14da-528a-a8fe-3643247e8ef1");

}

void _activation_check_proc_1a_func_651522840(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_f.mData[0x5] += _activatnvar_confusing_chararray_e[0xa];

}

void _activation_check_proc_1a_func_372484677(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] <<= _activatnvar_confusing_chararray_6[0x9];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1859465140(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_pos)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_pos;

	/* inline */ _activation_check_proc_1a_func_371324935(_activatnvar_confusing_bool_c, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_1a_func_1577690057(_activatnvar_confusing_char_1, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_1a_func_1982382175(_activatnvar_so, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_1a_func_2087036857()
{
	
}

void _activation_check_proc_1a_func_1466310356(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_b <<= _activatnvar_confusing_char_f;

	_activation_check_proc_1a_func_264753142(_activatnvar_confusing_char_1);
}

void _activation_check_proc_1a_func_264753142(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_1a_func_1867602284(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x6] <<= _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_1a_func_1170588374(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_chararray_7[0x7];

	/* inline */ _activation_check_proc_1a_func_1145865753(_activatnvar_confusing_chararray_f, _activatnvar_confusing_U8_c);
	_activation_check_proc_1a_func_1867602284(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1a_func_842337060(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1a_func_649519864(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_1a_func_94133770(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1a_func_649519864(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_94133770(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1a_func_696043062(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_combined_id;

}

void _activation_check_proc_1a_func_1349012188(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_1a_func_480885372(unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_t0, bool& _activatnvar_generic_bool_1, U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_1a_func_696043062(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_1a_func_1349012188(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_1a_func_88382918(_activatnvar_confusing_chararray_3);
	/* inline */ _activation_check_proc_1a_func_977815505(_activatnvar_so, _activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_1a_func_1921535403(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1434494580(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_2 |= _activatnvar_confusing_char_9;

}

void _activation_check_proc_1a_func_1787014201()
{
	
}

void _activation_check_proc_1a_func_276352754(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_7)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_t0 &= 7;
	_activation_check_proc_1a_func_1787014201();
	/* inline */ _activation_check_proc_1a_func_2019952298(_activatnvar_confusing_U8_e, _activatnvar_confusing_char_7);
}

void _activation_check_proc_1a_func_31220135(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_pos)
{
	_activatnvar_t0 &= 3;
	/* inline */ _activation_check_proc_1a_func_1680135021(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
	_activation_check_proc_1a_func_1512996642(_activatnvar_confusing_LLUUID_2);
	_activation_check_proc_1a_func_1665614731(_activatnvar_t1, _activatnvar_t0);
	/* inline */ _activation_check_proc_1a_func_1723575336(_activatnvar_t1);
}

void _activation_check_proc_1a_func_1665614731(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_1a_func_1512996642(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("fc1cc1d6-0a98-4a95-955a-c5572a6c264c");

}

void _activation_check_proc_1a_func_795100959(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_1a_func_1393979647(unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xa] &= _activatnvar_confusing_chararray_6[0x6];

}

void _activation_check_proc_1a_func_256493541(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xa] &= _activatnvar_confusing_LLUUID_6.mData[0x5];

	_activation_check_proc_1a_func_1417446477(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
	_activation_check_proc_1a_func_1779703480(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1a_func_1779703480(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("cb7e9b9c-ffdc-7968-e714-a2cff60066cb");

}

void _activation_check_proc_1a_func_1417446477(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1a_func_1258024221(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1a_func_983906429(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] += _activatnvar_confusing_chararray_8[0x0];

}

void _activation_check_proc_1a_func_234206192(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_8 *= _activatnvar_confusing_char_1;

}

void _activation_check_proc_1a_func_1240812175(LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_1a_func_656744675(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_2, LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_char_e += _activatnvar_confusing_char_d;

	/* inline */ _activation_check_proc_1a_func_182508537(_activatnvar_confusing_int_2);
	_activation_check_proc_1a_func_1240812175(_activatnvar_nmd5, _activatnvar_name_digest);
}

void _activation_check_proc_1a_func_1501632448(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_1a_func_1112056874(_activatnvar_confusing_bool_9, _activatnvar_confusing_char_8, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1a_func_1112056874(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x0] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_1a_func_289547395(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_1a_func_505999572(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_a *= _activatnvar_confusing_char_4;

}

void _activation_check_proc_1a_func_1631919127(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_LLUUID_d.mData[0x3];

}

void _activation_check_proc_1a_func_1315888903(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_1a_func_1417300497(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 ^= 0xd;

}

void _activation_check_proc_1a_func_618652905(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x9] *= _activatnvar_confusing_LLUUID_7.mData[0xd];

}

void _activation_check_proc_1a_func_1319566112(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_a &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1a_func_1766835294(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("f46597f8-d623-1838-7ada-cbd08b1f2851");

}

void _activation_check_proc_1a_func_939151949(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 73; _activatnvar_strbuf_0[0] ^= 124; _activatnvar_strbuf_0[1] = 51; _activatnvar_strbuf_0[1] ^= 7; _activatnvar_strbuf_0[2] = 64; _activatnvar_strbuf_0[2] ^= 112; _activatnvar_strbuf_0[3] = 9; _activatnvar_strbuf_0[3] ^= 59; _activatnvar_strbuf_0[4] = 61; _activatnvar_strbuf_0[4] ^= 14; _activatnvar_strbuf_0[5] = 82; _activatnvar_strbuf_0[5] ^= 98; _activatnvar_strbuf_0[6] = 53; _activatnvar_strbuf_0[6] ^= 13; _activatnvar_strbuf_0[7] = 104; _activatnvar_strbuf_0[7] ^= 88; _activatnvar_strbuf_0[8] = 20; _activatnvar_strbuf_0[8] ^= 57; _activatnvar_strbuf_0[9] = 69; _activatnvar_strbuf_0[9] ^= 117; _activatnvar_strbuf_0[10] = 109; _activatnvar_strbuf_0[10] ^= 93; _activatnvar_strbuf_0[11] = 15; _activatnvar_strbuf_0[11] ^= 55; _activatnvar_strbuf_0[12] = 118; _activatnvar_strbuf_0[12] ^= 71; _activatnvar_strbuf_0[13] = 42; _activatnvar_strbuf_0[13] ^= 7; _activatnvar_strbuf_0[14] = 57; _activatnvar_strbuf_0[14] ^= 9; _activatnvar_strbuf_0[15] = 8; _activatnvar_strbuf_0[15] ^= 58; _activatnvar_strbuf_0[16] = 73; _activatnvar_strbuf_0[16] ^= 121; _activatnvar_strbuf_0[17] = 102; _activatnvar_strbuf_0[17] ^= 94; _activatnvar_strbuf_0[18] = 72; _activatnvar_strbuf_0[18] ^= 101; _activatnvar_strbuf_0[19] = 72; _activatnvar_strbuf_0[19] ^= 120; _activatnvar_strbuf_0[20] = 109; _activatnvar_strbuf_0[20] ^= 9; _activatnvar_strbuf_0[21] = 43; _activatnvar_strbuf_0[21] ^= 27; _activatnvar_strbuf_0[22] = 125; _activatnvar_strbuf_0[22] ^= 30; _activatnvar_strbuf_0[23] = 0; _activatnvar_strbuf_0[23] ^= 45; _activatnvar_strbuf_0[24] = 2; _activatnvar_strbuf_0[24] ^= 50; _activatnvar_strbuf_0[25] = 118; _activatnvar_strbuf_0[25] ^= 68; _activatnvar_strbuf_0[26] = 50; _activatnvar_strbuf_0[26] ^= 6; _activatnvar_strbuf_0[27] = 71; _activatnvar_strbuf_0[27] ^= 36; _activatnvar_strbuf_0[28] = 2; _activatnvar_strbuf_0[28] ^= 58; _activatnvar_strbuf_0[29] = 23; _activatnvar_strbuf_0[29] ^= 47; _activatnvar_strbuf_0[30] = 29; _activatnvar_strbuf_0[30] ^= 47; _activatnvar_strbuf_0[31] = 96; _activatnvar_strbuf_0[31] ^= 85; _activatnvar_strbuf_0[32] = 0; _activatnvar_strbuf_0[32] ^= 56; _activatnvar_strbuf_0[33] = 65; _activatnvar_strbuf_0[33] ^= 112; _activatnvar_strbuf_0[34] = 36; _activatnvar_strbuf_0[34] ^= 17; _activatnvar_strbuf_0[35] = 46; _activatnvar_strbuf_0[35] ^= 31; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1a_func_93565869(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1a_func_1775555866(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1a_func_131736354(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_1a_func_550888738(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_7 ^= _activatnvar_confusing_chararray_3[0x3];

	_activation_check_proc_1a_func_1775555866(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_d);
	_activation_check_proc_1a_func_131736354(_activatnvar_confusing_int_9);
	_activation_check_proc_1a_func_93565869(_activatnvar_confusing_int_7);
}

void _activation_check_proc_1a_func_1112041034(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_581017347(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

	/* inline */ _activation_check_proc_1a_func_1148388248(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_2016305554(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_1a_func_1309195162(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_section1;

}

void _activation_check_proc_1a_func_1025359721(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_8, LLMD5*& _activatnvar_mmd5, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_8 *= _activatnvar_confusing_char_9;

	_activation_check_proc_1a_func_1309195162(_activatnvar_section1, _activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_1a_func_1761166830(_activatnvar_mac_digest, _activatnvar_mmd5);
	/* inline */ _activation_check_proc_1a_func_729198205(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_6, _activatnvar_confusing_char_b);
}

void _activation_check_proc_1a_func_708013518(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_LLUUID_1.mData[0x1] <<= _activatnvar_confusing_LLUUID_8.mData[0x5];

	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1a_func_1402862092(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1a_func_1424960473(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_1a_func_1822534141(_activatnvar_confusing_LLUUID_c);
	_activation_check_proc_1a_func_1402862092(_activatnvar_t0);
}

void _activation_check_proc_1a_func_439308122(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_8457559(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_1a_func_1005156708(int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x3] >>= _activatnvar_confusing_chararray_c[0x5];

	_activation_check_proc_1a_func_8457559(_activatnvar_confusing_int_9);
}

void _activation_check_proc_1a_func_463991236(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 *= _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_1a_func_158430962(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

	/* inline */ _activation_check_proc_1a_func_1821759231();
}

void _activation_check_proc_1a_func_1239288058(unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_chararray_0[0xe];

	_activation_check_proc_1a_func_1422133207(_activatnvar_confusing_bool_7, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1a_func_1422133207(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1a_func_674816265(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1323717020(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1a_func_811838475(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_1a_func_2110515561(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[4];
	_activation_check_proc_1a_func_514543073(_activatnvar_pos);
}

void _activation_check_proc_1a_func_514543073(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1a_func_512308431(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_1a_func_1923110095(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1926993436(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_1a_func_1759178653(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x5] == 0x6) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_1a_func_2026659375(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_2 >>= 0x8;

}

void _activation_check_proc_1a_func_337143583(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1a_func_1623730172(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_1a_func_670824062(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] ^= _activatnvar_confusing_chararray_1[0x1];

}

void _activation_check_proc_1a_func_902635004(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1a_func_1862553803(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b *= 0x5;

}

void _activation_check_proc_1a_func_1467300425(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_1a_func_2054010658(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_864245334(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_1a_func_687277113(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x1] |= _activatnvar_section2.mData[0x6];

}

void _activation_check_proc_1a_func_993284287(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_2;

	_activation_check_proc_1a_func_687277113(_activatnvar_section2, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1a_func_1010811818(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1a_func_425549557(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1a_func_1973503349(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_8 *= 0x0;

	_activation_check_proc_1a_func_425549557(_activatnvar_t0);
	_activation_check_proc_1a_func_1010811818(_activatnvar_t0);
	/* inline */ _activation_check_proc_1a_func_331361816(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1a_func_1367183923(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_lace;

}

void _activation_check_proc_1a_func_949365225(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
	/* inline */ _activation_check_proc_1a_func_1910814688(_activatnvar_pos);
	_activation_check_proc_1a_func_1367183923(_activatnvar_lace, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1a_func_1024578093(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_482871691(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_6;

	_activation_check_proc_1a_func_1024578093(_activatnvar_generic_iterator);
	_activation_check_proc_1a_func_1443861157(_activatnvar_confusing_char_b);
}

void _activation_check_proc_1a_func_1443861157(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_1a_func_1363684142(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_1a_func_599446757(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_3 >>= _activatnvar_confusing_U8_4;

	_activation_check_proc_1a_func_560775315(_activatnvar_section1, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_1a_func_1363684142(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1a_func_560775315(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] = _activatnvar_section1.mData[0x1];

}

void _activation_check_proc_1a_func_1830598662(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] <<= _activatnvar_confusing_LLUUID_7.mData[0xd];

}

void _activation_check_proc_1a_func_728212402(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a += _activatnvar_generic_iterator;

}

void _activation_check_proc_1a_func_1855907349(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("c32b1351-9dcb-b9a6-31ad-f443a2694a8e");

}

void _activation_check_proc_1a_func_635701955(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_0 >>= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_1a_func_1084783759(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_0;

	_activation_check_proc_1a_func_635701955(_activatnvar_confusing_char_0, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_1a_func_1002057483(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_1209557845(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_1a_func_808441654(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x3] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1a_func_819974494(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1a_func_1917385214(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
	_activation_check_proc_1a_func_808441654(_activatnvar_confusing_bool_3, _activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1a_func_1623059601()
{
	
}

void _activation_check_proc_1a_func_349093149(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_c = true;

	_activation_check_proc_1a_func_1623059601();
}

void _activation_check_proc_1a_func_1435089534(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	
	_activation_check_proc_1a_func_1910545108(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1a_func_1910545108(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_1a_func_430653489(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_U8_9 <<= _activatnvar_confusing_char_3;

}

void _activation_check_proc_1a_func_978700098(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("d2c41384-f356-151d-b1c4-8b188108f25c");

}

void _activation_check_proc_1a_func_698285806(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_char_e;

}

void _activation_check_proc_1a_func_717552349(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1a_func_1526799828(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_1a_func_1009720859(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_1a_func_475642969(char& _activatnvar_confusing_char_e, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xa] != _activatnvar_confusing_char_e) _activatnvar_confusing_bool_4 = false;

	_activation_check_proc_1a_func_1009720859(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_1a_func_827969255(U8& _activatnvar_t0)
{
	
	/* inline */ _activation_check_proc_1a_func_1468745667(_activatnvar_t0);
}

void _activation_check_proc_1a_func_1701035083(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x4] ^= _activatnvar_name_digest[0x9];

}

void _activation_check_proc_1a_func_1797372499(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_3 ^= _activatnvar_confusing_U8_5;

	_activation_check_proc_1a_func_1701035083(_activatnvar_name_digest, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1a_func_1351191586(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1a_func_200840213(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_1a_func_1984156710(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("fac21e10-c48a-2dd4-f945-381fcd1500db");

}

void _activation_check_proc_1a_func_1869271088(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_LLUUID_e.mData[0x6] *= _activatnvar_confusing_LLUUID_6.mData[0x3];

	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_1a_func_1281486407(U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_0, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_4 <<= _activatnvar_feat;

	/* inline */ _activation_check_proc_1a_func_356568901(_activatnvar_confusing_int_0);
}

void _activation_check_proc_1a_func_550448883(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] *= _activatnvar_confusing_LLUUID_f.mData[0x6];

}

void _activation_check_proc_1a_func_1915250531(int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount, U8& _activatnvar_t1, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_t1;

	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1a_func_776527815(_activatnvar_confusing_bool_a, _activatnvar_confusing_char_2, _activatnvar_pos);
	/* inline */ _activation_check_proc_1a_func_1106250324(_activatnvar_feat, _activatnvar_doaccount, _activatnvar_lace, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_1948674603(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_833252836()
{
	
}

void _activation_check_proc_1a_func_720378189(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_5[0x2] += _activatnvar_confusing_LLUUID_7.mData[0x3];

	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1a_func_1282877178(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_LLUUID_4.mData[0x2];

}

void _activation_check_proc_1a_func_1448498277(int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activatnvar_confusing_chararray_6[0xe] |= _activatnvar_confusing_chararray_9[0xa];

	/* inline */ _activation_check_proc_1a_func_2024618853(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1a_func_1759026887(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 <<= _activatnvar_confusing_chararray_e[0x6];

}

void _activation_check_proc_1a_func_938526733(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_chararray_0[0x8];

	/* inline */ _activation_check_proc_1a_func_525095096(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id);
}

void _activation_check_proc_1a_func_1343603321(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_877313219(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1a_func_1701023649(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1a_func_1615526819(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_f)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x6] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_1a_func_367118841(_activatnvar_confusing_U8_f, _activatnvar_secret);
}

void _activation_check_proc_1a_func_367118841(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_f &= _activatnvar_secret.mData[0x1];

}

void _activation_check_proc_1a_func_492925382(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1a_func_404001256(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1944465956(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section2, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_1a_func_404001256(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
	/* inline */ _activation_check_proc_1a_func_1439997554(_activatnvar_lace, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_1a_func_1669219688(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_1a_func_142602394(_activatnvar_confusing_char_5, _activatnvar_confusing_bool_7, _activatnvar_pos);
	_activation_check_proc_1a_func_371181624(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_1a_func_1870132698(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_371181624(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0x6;

}

void _activation_check_proc_1a_func_1153852982(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1a_func_1370359866(int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_char_0 >>= _activatnvar_confusing_char_a;

	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_b *= _activatnvar_confusing_char_f;

	/* inline */ _activation_check_proc_1a_func_369859505(_activatnvar_confusing_int_d, _activatnvar_confusing_int_2);
	_activation_check_proc_1a_func_105646279(_activatnvar_confusing_LLUUID_6);
	_activation_check_proc_1a_func_2127135902(_activatnvar_confusing_U8_2);
	/* inline */ _activation_check_proc_1a_func_967629664(_activatnvar_confusing_chararray_7, _activatnvar_confusing_char_3);
}

void _activation_check_proc_1a_func_105646279(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("7514c111-d9fa-574a-89ca-e4e6e16a5d19");

}

void _activation_check_proc_1a_func_2127135902(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_1a_func_598742331(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1301647780(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_char_a++;

	_activation_check_proc_1a_func_576985194(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_0, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_1a_func_576985194(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1a_func_263079998(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f ^= _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_1a_func_81520361(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x1] |= _activatnvar_confusing_LLUUID_7.mData[0x9];

}

void _activation_check_proc_1a_func_2027325678(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_5, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xe] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_1a_func_1702031707(_activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_1a_func_432824779(_activatnvar_confusing_int_5);
}

void _activation_check_proc_1a_func_1702031707(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1a_func_903767008(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1a_func_820789483(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_so;

}

void _activation_check_proc_1a_func_30636419(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_8)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_6 = _activatnvar_confusing_U8_8;

	_activation_check_proc_1a_func_1756832904(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_1a_func_1756832904(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] *= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_1a_func_376619202(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1a_func_1843499513(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_f[0xb] = _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_1a_func_1705030316(unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1a_func_1843499513(_activatnvar_confusing_chararray_f, _activatnvar_mac_digest);
}

void _activation_check_proc_1a_func_1890879177(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1a_func_1851329427(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_796973264(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_5;

	/* inline */ _activation_check_proc_1a_func_1916902431(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_1a_func_1427444597(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_9;

	_activatnvar_confusing_char_f |= 0x4;

}

void _activation_check_proc_1a_func_723610821(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] = _activatnvar_mac_digest[0x1];

	/* inline */ _activation_check_proc_1a_func_1519950178(_activatnvar_confusing_LLUUID_9, _activatnvar_fscked);
	_activation_check_proc_1a_func_176555061(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_1a_func_49611067();
	/* inline */ _activation_check_proc_1a_func_1274551744(_activatnvar_confusing_char_f, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_1a_func_176555061(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1a_func_1411997029(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_1a_func_1534119767(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_199093266(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1a_func_1323381608(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_1a_func_1175770718(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_3, bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_int_3++;

	/* inline */ _activation_check_proc_1a_func_589792713(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_1468271188(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	_activation_check_proc_1a_func_1212791839(_activatnvar_confusing_char_9, _activatnvar_feat, _activatnvar_generic_bool_1, _activatnvar_generic_iterator, _activatnvar_lace);
	_activation_check_proc_1a_func_541560451(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_1a_func_1212791839(char& _activatnvar_confusing_char_9, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_9++;

	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1a_func_541560451(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_1a_func_1883201541(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1178239368(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_d[0xc] &= _activatnvar_confusing_LLUUID_1.mData[0xd];

	_activation_check_proc_1a_func_1883201541(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_507926615(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_1a_func_1681342038(char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

	/* inline */ _activation_check_proc_1a_func_1360461783(_activatnvar_confusing_char_5);
}

void _activation_check_proc_1a_func_1058605177(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1883818250(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] &= _activatnvar_confusing_chararray_e[0x3];

	_activation_check_proc_1a_func_1058605177(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_1649496598(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1a_func_1661042294(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_9)
{
	
	_activation_check_proc_1a_func_1580430177(_activatnvar_confusing_U8_2, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1a_func_1580430177(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_2 ^= 0xf;

}

void _activation_check_proc_1a_func_1514956063(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_chararray_2[0xc];

	/* inline */ _activation_check_proc_1a_func_1874259348(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_1a_func_1407999026(_activatnvar_confusing_chararray_a, _activatnvar_generic_bool_0, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_1a_func_1265168613(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1a_func_1772759855(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1a_func_108175595(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("663ca95d-c701-4c32-d07c-e7bc0c337858");

	/* inline */ _activation_check_proc_1a_func_2076310265(_activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1a_func_974429068(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_d[0x6] = _activatnvar_so.mData[0x5];

}

void _activation_check_proc_1a_func_1927011403(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_e = false;

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1936325343(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("2adfe104-7ebc-e6bf-7bb5-b81cad7f2045");

}

void _activation_check_proc_1a_func_166116340(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_so;

}

void _activation_check_proc_1a_func_933092373(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_1a_func_2083183903(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_1a_func_376567032(_activatnvar_t0);
}

void _activation_check_proc_1a_func_376567032(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1a_func_1787341726(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("23d164fa-98af-6b98-8364-f20e2713e7fb");

}

void _activation_check_proc_1a_func_1768690074(bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1a_func_18719038(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("9464af19-5c59-2f4a-34e3-4881c218e623");

}

void _activation_check_proc_1a_func_1732321849(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1a_func_1766325517(int& _activatnvar_confusing_int_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1a_func_1257619207(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_458083803(int& _activatnvar_confusing_int_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_e += _activatnvar_generic_iterator;

}

void _activation_check_proc_1a_func_2050367798(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1a_func_1156930614(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1a_func_1054946332(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1a_func_539844417(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_8[0x7] &= _activatnvar_confusing_LLUUID_9.mData[0x9];

	_activation_check_proc_1a_func_1887471742(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_1887471742(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_2086797606(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1a_func_655853676(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1a_func_1250733824(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_1a_func_970658368(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a *= _activatnvar_confusing_int_8;

	_activation_check_proc_1a_func_155137441(_activatnvar_confusing_LLUUID_a);
	_activation_check_proc_1a_func_1484077012(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_7);
	_activation_check_proc_1a_func_1392902046();
}

void _activation_check_proc_1a_func_1484077012(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_e[0x8] >>= _activatnvar_confusing_chararray_7[0xa];

}

void _activation_check_proc_1a_func_1392902046()
{
	
}

void _activation_check_proc_1a_func_155137441(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("e388970f-8db3-4886-2637-128928dd4648");

}

void _activation_check_proc_1a_func_1522470952(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_645332894(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_f[0x6] <<= _activatnvar_fscked.mData[0x2];

	/* inline */ _activation_check_proc_1a_func_791963852(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_1a_func_1522470952(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_1121668704(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1a_func_1969955688(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1572425692(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_8.mData[0x9];

}

void _activation_check_proc_1a_func_844711022(bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest, U8& _activatnvar_confusing_U8_7, int& _activatnvar_confusing_int_d, U8& _activatnvar_t0, int& _activatnvar_confusing_int_c, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_int_c++;

	/* inline */ _activation_check_proc_1a_func_1685322430(_activatnvar_confusing_int_d, _activatnvar_t0, _activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_int_9);
	/* inline */ _activation_check_proc_1a_func_1185105586(_activatnvar_name_digest, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_1a_func_1781138021(_activatnvar_feat, _activatnvar_confusing_bool_1, _activatnvar_confusing_U8_7);
	_activation_check_proc_1a_func_296728544(_activatnvar_generic_bool_0);
}

void _activation_check_proc_1a_func_296728544(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1a_func_3646280(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_U8_b;

	_activatnvar_confusing_char_a |= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_1a_func_1554403090(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_128761307(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1248013593(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_section1;

}

void _activation_check_proc_1a_func_1937206392(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_6.mData[0x0] *= _activatnvar_section2.mData[0x2];

	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_chararray_f[0x9];

}

void _activation_check_proc_1a_func_1866972443(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("e1c4b740-4629-e667-5ebc-88ad43c235ed");

}

void _activation_check_proc_1a_func_1028834331(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_chararray_2[0x8];

	/* inline */ _activation_check_proc_1a_func_1133388311(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1a_func_392185892(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_1a_func_150139494(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d ^= _activatnvar_confusing_chararray_c[0xc];

}

void _activation_check_proc_1a_func_1356772432(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] <<= _activatnvar_confusing_chararray_9[0xc];

}

void _activation_check_proc_1a_func_1052039456(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
	_activatnvar_t0 >>= 4;
	_activation_check_proc_1a_func_1356772432(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_9);
	_activation_check_proc_1a_func_114192601();
}

void _activation_check_proc_1a_func_114192601()
{
	
}

void _activation_check_proc_1a_func_1598078854(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_1a_func_895304958(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1923836791(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x3] == 0x0) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1a_func_964014731(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1a_func_108603013(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b |= _activatnvar_confusing_int_e;

}

void _activation_check_proc_1a_func_2084264956(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] ^= _activatnvar_confusing_LLUUID_0.mData[0x8];

}

void _activation_check_proc_1a_func_1422005529(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_2)
{
	
	_activation_check_proc_1a_func_701433459(_activatnvar_confusing_U8_2, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1a_func_701433459(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_1a_func_1144573701(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_d &= 0x7;

}

void _activation_check_proc_1a_func_1627572848(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_5)
{
	
	_activation_check_proc_1a_func_723866496(_activatnvar_confusing_U8_0);
	_activation_check_proc_1a_func_1707698895(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_5, _activatnvar_confusing_char_9, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_1707698895(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_9, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x0] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_5 = false;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_723866496(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_1a_func_534190761(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_1a_func_1516323421(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_973241639(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_1a_func_1294494076(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_1a_func_483464562(int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_t1, U8& _activatnvar_t0, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_1a_func_1294494076(_activatnvar_so, _activatnvar_t0, _activatnvar_t1);
	/* inline */ _activation_check_proc_1a_func_1003424682(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_e, _activatnvar_confusing_bool_5);
	_activation_check_proc_1a_func_973241639(_activatnvar_confusing_int_4);
}

void _activation_check_proc_1a_func_1537183566(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_1a_func_1152629869(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_1a_func_82027099(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xb] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_7 = _activatnvar_doaccount;

}

void _activation_check_proc_1a_func_1269301145(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_5.mData[0x0] = _activatnvar_confusing_LLUUID_4.mData[0xb];

}

void _activation_check_proc_1a_func_1053071759(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_int_5 *= _activatnvar_confusing_int_2;

	/* inline */ _activation_check_proc_1a_func_405907870(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_1a_func_1495377428(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_f += _activatnvar_confusing_U8_e;

}

void _activation_check_proc_1a_func_1906183278(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_0[0x9] ^= _activatnvar_secret.mData[0x8];

}

void _activation_check_proc_1a_func_440278753(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1a_func_456049667(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x3] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_1a_func_440278753(_activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_bool_1);
}

void _activation_check_proc_1a_func_2063763518(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] += _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_1a_func_710003915(char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_a, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_int_a++;

	/* inline */ _activation_check_proc_1a_func_2081827210(_activatnvar_confusing_char_d, _activatnvar_doaccount);
}

void _activation_check_proc_1a_func_1152065408()
{
	
}

void _activation_check_proc_1a_func_907895253(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_pos)
{
	_activatnvar_confusing_U8_5 += _activatnvar_pos;

}

void _activation_check_proc_1a_func_74322842(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xc] >>= _activatnvar_confusing_chararray_2[0x3];

}

void _activation_check_proc_1a_func_1303630316(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_chararray_a[0x9];

}

void _activation_check_proc_1a_func_516176733(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_1a_func_457185802(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("103bfd5e-3cb1-732c-4fea-ecdf827c4568");

}

void _activation_check_proc_1a_func_1833717740(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1a_func_1816865108(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1785662945(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1a_func_820314787(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x4] *= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_1a_func_1725605039(U8& _activatnvar_pos, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_t0, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activatnvar_confusing_int_a <<= _activatnvar_confusing_int_e;

	_activation_check_proc_1a_func_343178626(_activatnvar_t0, _activatnvar_pos, _activatnvar_so);
	/* inline */ _activation_check_proc_1a_func_1942168279(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1a_func_343178626(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1a_func_1225725232(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xa] != _activatnvar_confusing_char_e) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_1a_func_171943786(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_558366612(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_1a_func_171943786(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
	_activation_check_proc_1a_func_882606943(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_882606943(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_541902578(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_1a_func_1504861792(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c += _activatnvar_confusing_chararray_d[0x9];

}

void _activation_check_proc_1a_func_750163279(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
	/* inline */ _activation_check_proc_1a_func_1927793563(_activatnvar_t0);
}

void _activation_check_proc_1a_func_1415266942()
{
	
}

void _activation_check_proc_1a_func_684554917(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_b *= _activatnvar_confusing_U8_b;

	_activation_check_proc_1a_func_901434104(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_a);
	_activation_check_proc_1a_func_876873458(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_901434104(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_5[0xe] &= _activatnvar_confusing_chararray_a[0x2];

}

void _activation_check_proc_1a_func_876873458(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_920308965(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_1a_func_1014935963(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_LLUUID_d.mData[0x3];

}

void _activation_check_proc_1a_func_375919820(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1a_func_601034850(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_b.mData[0xf] += _activatnvar_confusing_chararray_f[0x9];

	_activation_check_proc_1a_func_1250061615(_activatnvar_confusing_int_7);
}

void _activation_check_proc_1a_func_1250061615(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1a_func_1702293281(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_3[0x4] >>= _activatnvar_confusing_chararray_4[0xa];

}

void _activation_check_proc_1a_func_1088684691(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_e >>= _activatnvar_confusing_char_9;

}

void _activation_check_proc_1a_func_1138394845(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_chararray_a[0x9] *= _activatnvar_confusing_LLUUID_2.mData[0xc];

	_activation_check_proc_1a_func_1088684691(_activatnvar_confusing_char_e, _activatnvar_confusing_char_9);
}

void _activation_check_proc_1a_func_636457361(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1693308181()
{
	
}

void _activation_check_proc_1a_func_155243762(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1a_func_1490073727(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_4 <<= _activatnvar_confusing_char_8;

}

void _activation_check_proc_1a_func_595751802(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1a_func_1888488135(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_776901898(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_958586566(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1a_func_776901898(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_1118561166(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_b, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_1a_func_226010081(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1a_func_1497769727(char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_5 >>= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_1a_func_1643092010(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_2054668470(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] += _activatnvar_confusing_chararray_7[0x0];

}

void _activation_check_proc_1a_func_118696072(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_1a_func_310109361(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xf] = _activatnvar_confusing_chararray_9[0x7];

}

void _activation_check_proc_1a_func_1125923981(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("cf6f6a40-ec29-7bf7-4d61-fea60fb2366d");

	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_1a_func_1269024008(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_1a_func_2138785284(U8& _activatnvar_pos, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_fscked;

	/* inline */ _activation_check_proc_1a_func_892053733(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1a_func_1073832696(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_787249886(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1399061097(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1a_func_789728164(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_1a_func_1391580919(bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1a_func_777997753(int& _activatnvar_confusing_int_c, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xd] ^= _activatnvar_confusing_chararray_7[0xd];

	/* inline */ _activation_check_proc_1a_func_1895544367(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_1a_func_1025952131(_activatnvar_pos);
}

void _activation_check_proc_1a_func_1228991656(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x6] == _activatnvar_confusing_U8_f) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_1a_func_1052586410()
{
	
}

void _activation_check_proc_1a_func_1324148097(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_1a_func_644687178(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] ^= _activatnvar_confusing_chararray_5[0xa];

}

void _activation_check_proc_1a_func_1202532376(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xf] <<= _activatnvar_mac_digest[0x6];

}

void _activation_check_proc_1a_func_1011688016(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d += _activatnvar_confusing_U8_5;

}

void _activation_check_proc_1a_func_2107602681(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_lace;

}

void _activation_check_proc_1a_func_1286158178(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_8.mData[0x6];

}

void _activation_check_proc_1a_func_1053232130(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] = _activatnvar_confusing_LLUUID_7.mData[0xa];

}

void _activation_check_proc_1a_func_35557459(U8& _activatnvar_t0, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_int_f <<= 0xe;

	_activation_check_proc_1a_func_1286158178(_activatnvar_confusing_char_a, _activatnvar_confusing_LLUUID_8, _activatnvar_t0);
	_activation_check_proc_1a_func_1053232130(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_1a_func_1907458456(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xe] = _activatnvar_mac_digest[0x7];

}

void _activation_check_proc_1a_func_1099922504(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
	_activatnvar_confusing_int_c |= _activatnvar_confusing_int_d;

	/* inline */ _activation_check_proc_1a_func_190446025(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_f);
	_activation_check_proc_1a_func_1473462154(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1a_func_1473462154(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1a_func_1883386627(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_pos, char& _activatnvar_confusing_char_9, U8& _activatnvar_t0)
{
	_activatnvar_pos |= 8;
	/* inline */ _activation_check_proc_1a_func_1012951715(_activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_1a_func_1079337049(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_1a_func_1859454973(_activatnvar_confusing_char_9);
}

void _activation_check_proc_1a_func_392921706(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1a_func_303933583(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_1a_func_20702602(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_0)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_e += _activatnvar_confusing_U8_0;

}

void _activation_check_proc_1a_func_327658345(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_LLUUID_7.mData[0xd];

	_activation_check_proc_1a_func_20702602(_activatnvar_confusing_U8_e, _activatnvar_confusing_bool_5, _activatnvar_confusing_U8_0);
	/* inline */ _activation_check_proc_1a_func_49387157(_activatnvar_t0);
}

void _activation_check_proc_1a_func_609408884(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1a_func_164855066(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_b ^= _activatnvar_confusing_int_7;

}

void _activation_check_proc_1a_func_802405606(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_U8_f ^= _activatnvar_confusing_char_f;

	_activation_check_proc_1a_func_163489173(_activatnvar_confusing_bool_2, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1a_func_163489173(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1a_func_1973014182(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] = _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_1a_func_725211187(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_1a_func_358210883(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x3] >>= _activatnvar_lace.mData[0x1];

}

void _activation_check_proc_1a_func_853703754(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1a_func_1346844740(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

	_activation_check_proc_1a_func_1666442520(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_b, _activatnvar_section2);
}

void _activation_check_proc_1a_func_1666442520(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_b[0xb] = _activatnvar_confusing_chararray_b[0x5];

	_activatnvar_confusing_LLUUID_a ^= _activatnvar_section2;

}

void _activation_check_proc_1a_func_1776893641(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x0] |= _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_1a_func_2059711966(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 &= 0xc;

}

void _activation_check_proc_1a_func_1462898664(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a += _activatnvar_confusing_char_6;

}

void _activation_check_proc_1a_func_875851210(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1505560525(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_1a_func_236640000(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_e;

	/* inline */ _activation_check_proc_1a_func_1364704783(_activatnvar_confusing_char_6, _activatnvar_confusing_bool_1, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_1a_func_1704833998()
{
	
}

void _activation_check_proc_1a_func_1305669714(unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1a_func_126946965(_activatnvar_confusing_chararray_f, _activatnvar_confusing_U8_d);
	/* inline */ _activation_check_proc_1a_func_1370001341(_activatnvar_section1, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_1a_func_126946965(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d += _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_1a_func_1984892143(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] *= _activatnvar_confusing_LLUUID_4.mData[0xd];

}

void _activation_check_proc_1a_func_1692355756(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1a_func_1983989740(char& _activatnvar_confusing_char_8, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_1 += _activatnvar_confusing_char_8;

	_activation_check_proc_1a_func_1692355756(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1a_func_1793152745(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_1a_func_311743082(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_2050381277(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b += _activatnvar_confusing_int_a;

	_activatnvar_confusing_int_d *= 0xf;

}

void _activation_check_proc_1a_func_628089462(bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_4 <<= _activatnvar_confusing_U8_e;

	/* inline */ _activation_check_proc_1a_func_362811848(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1a_func_2139649707(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_1a_func_1305414345(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_1a_func_1261672361(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 *= 0x1;

}

void _activation_check_proc_1a_func_722548089(bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1a_func_802969177(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_1a_func_2102640338(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_c >>= _activatnvar_confusing_char_6;

}

void _activation_check_proc_1a_func_1511158826(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_1a_func_851406273(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1a_func_1254259028(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_1a_func_835972481(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_1a_func_317487836(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_so, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_pos, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_chararray_3[0x8];

	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_1a_func_224928658(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
	_activation_check_proc_1a_func_835972481(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_1a_func_224928658(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1a_func_1427303996(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_1a_func_777778478(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x9] &= _activatnvar_confusing_chararray_d[0xe];

	_activatnvar_confusing_LLUUID_a.mData[0xb] += _activatnvar_so.mData[0x7];

}

void _activation_check_proc_1a_func_28536542(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
	_activation_check_proc_1a_func_891456459(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_U8_6, _activatnvar_confusing_bool_d);
	/* inline */ _activation_check_proc_1a_func_204642251(_activatnvar_confusing_bool_e, _activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_1a_func_737211613(_activatnvar_t0);
	_activation_check_proc_1a_func_1094389876(_activatnvar_t0);
	_activation_check_proc_1a_func_777778478(_activatnvar_so, _activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_1a_func_737211613(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1a_func_891456459(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x4] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1a_func_1094389876(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1a_func_281000501(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_931182883(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

	_activation_check_proc_1a_func_1857376013(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_1a_func_1857376013(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_1a_func_348259071(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_1a_func_193024985(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_3, std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
	/* inline */ _activation_check_proc_1a_func_1464875046(_activatnvar_confusing_chararray_3, _activatnvar_lace);
}

void _activation_check_proc_1a_func_1746531816(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_f[0x9] >>= _activatnvar_confusing_LLUUID_9.mData[0x2];

}

void _activation_check_proc_1a_func_893888943(U8& _activatnvar_confusing_U8_c)
{
	
	_activation_check_proc_1a_func_1693143454(_activatnvar_confusing_U8_c);
}

void _activation_check_proc_1a_func_1693143454(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_1a_func_408779116(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] = _activatnvar_confusing_LLUUID_0.mData[0x8];

}

void _activation_check_proc_1a_func_1093872286(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x3] = _activatnvar_confusing_LLUUID_e.mData[0xa];

}

void _activation_check_proc_1a_func_1311406534(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_1a_func_256964779(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_d, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_confusing_char_9 = 0xa;

	/* inline */ _activation_check_proc_1a_func_1985853314(_activatnvar_confusing_int_d);
	_activation_check_proc_1a_func_1311406534(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
}

void _activation_check_proc_1a_func_594040954(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1a_func_938286604(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1a_func_1297240999(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] += _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_1a_func_15528248(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_8)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_2 <<= _activatnvar_confusing_char_f;

	_activation_check_proc_1a_func_1297240999(_activatnvar_confusing_LLUUID_1, _activatnvar_fscked);
	_activation_check_proc_1a_func_938286604(_activatnvar_confusing_int_8);
	_activation_check_proc_1a_func_1377439113(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1a_func_1377439113(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] += _activatnvar_confusing_chararray_7[0xe];

}

void _activation_check_proc_1a_func_1670651533(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_390405749(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_0)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xe] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_0 = true;

	/* inline */ _activation_check_proc_1a_func_1648048605(_activatnvar_fscked, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_code);
}

void _activation_check_proc_1a_func_431665635(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1952883139(LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("6db043b2-039f-2c76-80ed-3f96ebf0ced0");

	/* inline */ _activation_check_proc_1a_func_1496752119(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_8);
	_activation_check_proc_1a_func_920679294(_activatnvar_confusing_char_f);
	_activation_check_proc_1a_func_431665635(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_920679294(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_1a_func_961950962(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1a_func_6968495(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_967054237(unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_f[0x4] &= _activatnvar_confusing_chararray_4[0xb];

	/* inline */ _activation_check_proc_1a_func_553148179(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_a);
	_activation_check_proc_1a_func_961950962(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_7);
	_activation_check_proc_1a_func_6968495(_activatnvar_generic_iterator);
	_activation_check_proc_1a_func_26335546(_activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_26335546(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_127032139(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1a_func_393907235(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_509011345(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_1a_func_1624151052(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1a_func_1106654096(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1a_func_817435432(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_432371250(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 += _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_1a_func_202361513(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_e;

	_activation_check_proc_1a_func_1748984654(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_feat);
}

void _activation_check_proc_1a_func_1748984654(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1a_func_1275229187(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_1a_func_1651652783(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1390376853(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xb] += _activatnvar_confusing_chararray_8[0x9];

}

void _activation_check_proc_1a_func_115168689(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("cec523f5-5f8e-269f-1062-14da4c046a8a");

}

void _activation_check_proc_1a_func_1164786394(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_6[0xa] |= _activatnvar_confusing_chararray_7[0xb];

}

void _activation_check_proc_1a_func_2143035514(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xb] == 0x0) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_1a_func_317394684(int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_7 = 0xc;

	/* inline */ _activation_check_proc_1a_func_118626968(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_0);
	_activation_check_proc_1a_func_1349743514(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1a_func_1349743514(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 = 0x6;

}

void _activation_check_proc_1a_func_818804776(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_1a_func_296727601(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_3.mData[0xc] = _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_1a_func_1782146094(char& _activatnvar_confusing_char_b, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_confusing_char_b++;

	_activation_check_proc_1a_func_296727601(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_1a_func_818804776(_activatnvar_combined_id, _activatnvar_so, _activatnvar_pos, _activatnvar_t1);
}

void _activation_check_proc_1a_func_442969092(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1a_func_1889106756(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_U8_0 += _activatnvar_confusing_chararray_f[0x9];

	if(_activatnvar_confusing_LLUUID_c.mData[0x6] != 0xd) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_1a_func_668934717(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xd] &= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_1a_func_1553718253(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_0[0x4] &= _activatnvar_confusing_LLUUID_c.mData[0x2];

}

void _activation_check_proc_1a_func_1067858970(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_6[0x0] *= _activatnvar_confusing_chararray_9[0x3];

	_activation_check_proc_1a_func_1553718253(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_1a_func_14479381(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_2074173081(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_a.mData[0xa];

}

void _activation_check_proc_1a_func_430612562()
{
	
}

void _activation_check_proc_1a_func_417472488(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_f <<= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_1a_func_1089094349(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_U8_3;

}

void _activation_check_proc_1a_func_83251116(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_1a_func_994217001(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_0 >>= _activatnvar_confusing_char_a;

}

void _activation_check_proc_1a_func_1908047676(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c >>= 0xd;

}

void _activation_check_proc_1a_func_1984320190(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_1a_func_161022709(int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1a_func_187351237(_activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_1a_func_2137656180(_activatnvar_confusing_bool_3, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_8);
	_activation_check_proc_1a_func_1908047676(_activatnvar_confusing_int_c);
	_activation_check_proc_1a_func_1489964520(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_d);
	_activation_check_proc_1a_func_1984320190(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_6);
}

void _activation_check_proc_1a_func_1489964520(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] = _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_1a_func_1251827673(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, int& _activatnvar_confusing_int_3)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
	/* inline */ _activation_check_proc_1a_func_339012389(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_1a_func_225486397(_activatnvar_pos);
	/* inline */ _activation_check_proc_1a_func_1069764413(_activatnvar_pos);
}

void _activation_check_proc_1a_func_1187857732(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1008971481(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_c[0x7] = _activatnvar_fscked.mData[0x7];

	_activation_check_proc_1a_func_1187857732(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
}

void _activation_check_proc_1a_func_1699340413(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x3] ^= _activatnvar_confusing_chararray_7[0xb];

}

void _activation_check_proc_1a_func_1837223370(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_0;

	/* inline */ _activation_check_proc_1a_func_1753856010(_activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_1a_func_471517847(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_1a_func_396823694(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	/* inline */ _activation_check_proc_1a_func_628208592(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_322872195(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_9)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_9 |= _activatnvar_confusing_U8_b;

	/* inline */ _activation_check_proc_1a_func_2125051233(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_8, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_1a_func_853528784(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_1a_func_873649981(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1a_func_412595527(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_f;

	_activation_check_proc_1a_func_853528784(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1a_func_2075483190(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_8, _activatnvar_confusing_char_3);
	_activation_check_proc_1a_func_873649981(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_1a_func_1062791417(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("7076ffd4-a2f1-e47b-725a-14c6aebcc318");

}

void _activation_check_proc_1a_func_1381353622(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1a_func_323208631(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_1a_func_1622147583(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1a_func_1027512885(_activatnvar_combined_id, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_1a_func_1170067918(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xc] != _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1a_func_1141981111(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_b ^= _activatnvar_confusing_int_c;

}

void _activation_check_proc_1a_func_1413213499(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_1a_func_1284412242(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_729471(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b >>= 0x8;

}

void _activation_check_proc_1a_func_632299350(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_1[0xf] += _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_1a_func_1475528196(unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 += 0x9;

	_activation_check_proc_1a_func_729471(_activatnvar_confusing_int_b);
	_activation_check_proc_1a_func_632299350(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1a_func_106981096(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_5.mData[0x2] = _activatnvar_so.mData[0xc];

}

void _activation_check_proc_1a_func_460371361(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_LLUUID_e.mData[0x7] *= _activatnvar_confusing_chararray_d[0x7];

	_activation_check_proc_1a_func_1064266988(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_1a_func_1064266988(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1a_func_475298474(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xf] ^= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_1a_func_454485114(LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_a)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	/* inline */ _activation_check_proc_1a_func_554875007(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_char_a);
}

void _activation_check_proc_1a_func_612343581(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1a_func_682376254(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_4 <<= _activatnvar_confusing_U8_9;

	_activation_check_proc_1a_func_523188047(_activatnvar_confusing_U8_b, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_1a_func_523188047(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_chararray_e[0xf];

}

void _activation_check_proc_1a_func_1105365865(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("88d84259-fb84-a96c-2fef-400de4217214");

}

void _activation_check_proc_1a_func_1688967501(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_4.mData[0xd];

}

void _activation_check_proc_1a_func_1228576623(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xe] += _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_1a_func_1011321381(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("b52188a2-384c-d558-c508-0334001ee407");

	/* inline */ _activation_check_proc_1a_func_1099219527(_activatnvar_t1, _activatnvar_t0);
}

void _activation_check_proc_1a_func_338111823(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] += _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_1a_func_395205121(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1a_func_1175033022(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_chararray_5[0x7];

}

void _activation_check_proc_1a_func_1317720618(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] += _activatnvar_confusing_chararray_2[0x7];

}

void _activation_check_proc_1a_func_1336828768(unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

	/* inline */ _activation_check_proc_1a_func_671875446(_activatnvar_confusing_bool_4, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_1a_func_615354415(_activatnvar_confusing_chararray_a, _activatnvar_confusing_char_e);
	_activation_check_proc_1a_func_1217260885(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_8);
	_activation_check_proc_1a_func_205737321(_activatnvar_confusing_int_7);
}

void _activation_check_proc_1a_func_1217260885(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xa] += _activatnvar_confusing_chararray_d[0xa];

}

void _activation_check_proc_1a_func_205737321(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_1a_func_2130619451()
{
	
}

void _activation_check_proc_1a_func_59657139(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f >>= _activatnvar_confusing_int_7;

}

void _activation_check_proc_1a_func_1274881573(char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_LLUUID_d.mData[0x7];

	_activation_check_proc_1a_func_2130619451();
	_activation_check_proc_1a_func_59657139(_activatnvar_confusing_int_7, _activatnvar_confusing_int_f);
	_activation_check_proc_1a_func_1183109064(_activatnvar_confusing_chararray_4, _activatnvar_confusing_char_5);
}

void _activation_check_proc_1a_func_1183109064(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_chararray_4[0xd];

}

void _activation_check_proc_1a_func_758151869(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_1a_func_1997009179(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1a_func_1848156250(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 *= _activatnvar_t0;

}

void _activation_check_proc_1a_func_1285037586(int& _activatnvar_confusing_int_4, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_1a_func_705042454(_activatnvar_confusing_int_4);
}

void _activation_check_proc_1a_func_9640169(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1a_func_263489914(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	/* inline */ _activation_check_proc_1a_func_1934115593(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_1a_func_1124296324(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_1a_func_2133338128(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_1;

	_activation_check_proc_1a_func_1124296324(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1a_func_1367470978(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_1958983630(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_1a_func_985039137(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_3[0x5] = _activatnvar_confusing_LLUUID_a.mData[0xa];

}

void _activation_check_proc_1a_func_1827421834(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_912241283(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_1a_func_1276672091(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_LLUUID_7.mData[0xc];

	/* inline */ _activation_check_proc_1a_func_1188180046(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_1, _activatnvar_doaccount);
}

void _activation_check_proc_1a_func_477038612(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_6 *= _activatnvar_confusing_int_2;

}

void _activation_check_proc_1a_func_1401004619(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_chararray_a[0xc];

}

void _activation_check_proc_1a_func_2022674555(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_1a_func_356688793(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1a_func_134072012(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_f, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_int_a++;

	/* inline */ _activation_check_proc_1a_func_1473820454(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_b);
	_activation_check_proc_1a_func_356688793(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1a_func_1165168427(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_1a_func_137336828(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 *= _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_1a_func_1346317692(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_1a_func_1766316385(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_1a_func_2137734553(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_8;

	/* inline */ _activation_check_proc_1a_func_631299640(_activatnvar_confusing_U8_8, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1a_func_754940867(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1a_func_865459054(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_2[0xa] |= _activatnvar_so.mData[0xa];

	_activation_check_proc_1a_func_458060310(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1a_func_458060310(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xc] ^= _activatnvar_confusing_LLUUID_a.mData[0xa];

}

void _activation_check_proc_1a_func_1188748491(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1a_func_1206185623(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("14c82db8-e1d1-909c-4e91-c286038d7696");

	/* inline */ _activation_check_proc_1a_func_2138027157(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_1a_func_1849101419(_activatnvar_t0, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_1a_func_1849101419(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_t0;

}

void _activation_check_proc_1a_func_1870210051(unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xf] = _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_1a_func_1229908890(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_1a_func_619434812(bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_1a_func_1229908890(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_6);
	_activation_check_proc_1a_func_1870210051(_activatnvar_confusing_chararray_c);
}

void _activation_check_proc_1a_func_735215407(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_1a_func_677392213(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
	_activation_check_proc_1a_func_1776642119(_activatnvar_t0);
	_activation_check_proc_1a_func_735215407(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1a_func_1776642119(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1a_func_994169810(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_LLUUID_9.mData[0x1];

	_activation_check_proc_1a_func_757714741(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_1a_func_757714741(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_b.mData[0xe];

}

void _activation_check_proc_1a_func_1413967284(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1a_func_680729477(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_8.mData[0x1];

}

void _activation_check_proc_1a_func_1637877336(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_e[0xf] >>= _activatnvar_confusing_chararray_4[0xb];

}

void _activation_check_proc_1a_func_246315966(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_e.mData[0x9];

}

void _activation_check_proc_1a_func_1222585468(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 |= 0x0;

}

void _activation_check_proc_1a_func_321093185(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
	_activation_check_proc_1a_func_2018522041(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_1a_func_2018522041(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x1] |= _activatnvar_confusing_LLUUID_4.mData[0x5];

}

void _activation_check_proc_1a_func_1778225890(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] |= _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_1a_func_2091199207(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_2.mData[0xe];

}

void _activation_check_proc_1a_func_1182549551(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_d = _activatnvar_pos;

}

void _activation_check_proc_1a_func_1540037947(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x7] += _activatnvar_so.mData[0xb];

}

void _activation_check_proc_1a_func_871808227(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_d.mData[0xe] ^= _activatnvar_confusing_LLUUID_5.mData[0x8];

}

void _activation_check_proc_1a_func_711621432(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1a_func_1127508638(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_1a_func_711621432(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_1a_func_1426671334(_activatnvar_confusing_int_a);
	_activation_check_proc_1a_func_871808227(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1a_func_2061310225(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_LLUUID_9.mData[0x2];

	/* inline */ _activation_check_proc_1a_func_1457639565(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1a_func_3971767(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_d[0x8] <<= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_1a_func_666646541(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_220650741(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1a_func_666646541(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_2065523694(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_1a_func_660253076(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_1a_func_38647021(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_209791841(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] >>= _activatnvar_confusing_chararray_4[0xd];

	_activation_check_proc_1a_func_1749522399(_activatnvar_confusing_char_a);
}

void _activation_check_proc_1a_func_1749522399(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_1a_func_810123996(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_e |= 0xc;

	_activation_check_proc_1a_func_1760137240(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id);
}

void _activation_check_proc_1a_func_1760137240(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1a_func_122085327(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1a_func_712387377(_activatnvar_generic_iterator);
}

void _activation_check_proc_1a_func_1837015982(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1a_func_175743563(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_9[0xb] &= _activatnvar_confusing_LLUUID_3.mData[0xa];

}

void _activation_check_proc_1a_func_225637198(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_1a_func_776719005(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x5] += _activatnvar_confusing_LLUUID_2.mData[0x5];

}

void _activation_check_proc_1a_func_1881560950(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_5;

	/* inline */ _activation_check_proc_1a_func_1825380931(_activatnvar_confusing_int_e);
}

void _activation_check_proc_1a_func_984822540(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1a_func_470306672(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_1a_func_1638196210(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_b)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x4] != _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_4 = _activatnvar_doaccount;

	/* inline */ _activation_check_proc_1a_func_203796523(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_1a_func_1499456668(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 &= _activatnvar_code.mData[0xc];

	/* inline */ _activation_check_proc_1a_func_384609030(_activatnvar_confusing_char_1, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_1a_func_211219435(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_1a_func_371110170(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("08240e36-71e9-441e-34cd-3f72f960259a");

}

void _activation_check_proc_1a_func_1075451503(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_d *= _activatnvar_confusing_int_f;

}

void _activation_check_proc_1a_func_1450188783(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_1a_func_1891889993(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_1a_func_536372158(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_1a_func_2055694330(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] |= _activatnvar_confusing_chararray_e[0xf];

	_activation_check_proc_1a_func_536372158(_activatnvar_confusing_U8_5);
	_activation_check_proc_1a_func_1891889993(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1a_func_1788575718(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1a_func_1333160848(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_6[0x3] *= _activatnvar_confusing_chararray_8[0x2];

}

void _activation_check_proc_1a_func_1986585954(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_1a_func_212400938(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_1a_func_537174475(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] >>= _activatnvar_confusing_chararray_b[0x8];

}

void _activation_check_proc_1a_func_1390805179(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_1a_func_1648186263(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_1212949606(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1a_func_625813812(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
