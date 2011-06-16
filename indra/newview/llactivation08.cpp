// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation08.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 08

void _activation_check_proc_08_func_1128065311(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_1639492508(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_113929860(_activatnvar_combined_id, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_08_func_113929860(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1888928287(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_08_func_700855402(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_08_func_2052295392(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[7] = _activatnvar_fscked.mData[7];
}

void _activation_check_proc_08_func_1175378816(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_a;

	_activatnvar_confusing_U8_a >>= 0xf;

	/* inline */ _activation_check_proc_08_func_1849175405(_activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_08_func_2052295392(_activatnvar_lace, _activatnvar_fscked);
	/* inline */ _activation_check_proc_08_func_396881485(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_08_func_1307021743(bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_08_func_1023922722(bool& _activatnvar_confusing_bool_d)
{
	
	_activation_check_proc_08_func_1307021743(_activatnvar_confusing_bool_d);
}

void _activation_check_proc_08_func_1008403997(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_4)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xf] != _activatnvar_confusing_char_4) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_08_func_2129024199(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_4 >>= _activatnvar_confusing_U8_7;

	_activation_check_proc_08_func_1008403997(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_char_4);
}

void _activation_check_proc_08_func_708972705(int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x6] = _activatnvar_name_digest[0xf];

	_activation_check_proc_08_func_1735920972(_activatnvar_confusing_int_b);
}

void _activation_check_proc_08_func_1735920972(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_08_func_302439526(bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_08_func_1174204118(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_a[0x5] ^= _activatnvar_confusing_LLUUID_0.mData[0xe];

}

void _activation_check_proc_08_func_635700746(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xe] += _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_08_func_800965575(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xd] <<= _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_08_func_282351803(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_08_func_1936185711(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_7, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] |= _activatnvar_confusing_LLUUID_1.mData[0xe];

	/* inline */ _activation_check_proc_08_func_476370705(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_08_func_888985049(_activatnvar_confusing_int_6);
	_activation_check_proc_08_func_1565722647(_activatnvar_confusing_char_7, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_08_func_1565722647(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_char_7 >>= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_08_func_1862232595(bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_08_func_430460571(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_598042757(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0x5;

}

void _activation_check_proc_08_func_2005493540(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("bd639d4c-bbbf-f87e-3425-285993623619");

}

void _activation_check_proc_08_func_1785525118(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_3 <<= _activatnvar_confusing_chararray_e[0xf];

}

void _activation_check_proc_08_func_830308300(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_9 <<= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_08_func_410848623()
{
	
}

void _activation_check_proc_08_func_372818835(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x1] != 0x3) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_08_func_878869749(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_372818835(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_08_func_1204511958(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_62916451(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_chararray_a[0xc];

	_activation_check_proc_08_func_1204511958(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1416268595(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_pos &= 7;
	_activatnvar_confusing_U8_b += _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_08_func_1510579381(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_chararray_4[0xd];

}

void _activation_check_proc_08_func_667581902(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_1 = _activatnvar_fscked.mData[0xd];

}

void _activation_check_proc_08_func_1621595087(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_58910155(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_424575068(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_08_func_419769049(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_5.mData[0x4] ^= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_08_func_227703471(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x7] += _activatnvar_combined_id.mData[0xc];

}

void _activation_check_proc_08_func_441903316(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_687980281(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_08_func_595809813(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("bdef8ea0-4c96-ca87-b263-985c7f7b3f35");

}

void _activation_check_proc_08_func_381715041(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("f7a6e343-4ed7-ce1b-f6ef-1b369e70c44d");

}

void _activation_check_proc_08_func_176756495(bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_08_func_1668162027(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_08_func_1657305135(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_8 = false;

	/* inline */ _activation_check_proc_08_func_471469712(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_08_func_1382555814(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_08_func_2128345630(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_b, U8& _activatnvar_pos, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_f &= 0xff;

	_activation_check_proc_08_func_1382555814(_activatnvar_combined_id, _activatnvar_pos);
	/* inline */ _activation_check_proc_08_func_398002737(_activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_3);
	_activation_check_proc_08_func_712967258(_activatnvar_confusing_char_b, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_08_func_712967258(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_b += 0xe;

}

void _activation_check_proc_08_func_1815330363(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_chararray_8[0x7] |= _activatnvar_confusing_LLUUID_2.mData[0x8];

	_activation_check_proc_08_func_1917640332(_activatnvar_confusing_int_4);
}

void _activation_check_proc_08_func_1917640332(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_08_func_1604025003(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = 0x2;

}

void _activation_check_proc_08_func_2032470171()
{
	
}

void _activation_check_proc_08_func_1519224204(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_9[0x0] <<= _activatnvar_confusing_chararray_7[0x5];

}

void _activation_check_proc_08_func_513157376(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1321175751(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_105451071(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_5 ^= _activatnvar_confusing_chararray_7[0x7];

}

void _activation_check_proc_08_func_1381826714(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x2] <<= _activatnvar_confusing_chararray_5[0x0];

	_activation_check_proc_08_func_105451071(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_7);
	_activation_check_proc_08_func_1009126413(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_08_func_1883544378(_activatnvar_section2, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_2, _activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_08_func_1009126413(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_956553986(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1191980800(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_doaccount;

}

void _activation_check_proc_08_func_612309628(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_lace;

}

void _activation_check_proc_08_func_1649172922(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_LLUUID_7.mData[0x9];

}

void _activation_check_proc_08_func_614914486(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1677398006(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_e)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x5] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_08_func_61888784(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_08_func_1104410011(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xd] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_08_func_2027280140(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_4)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x2] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_7 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_08_func_321677323(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 ^= _activatnvar_confusing_char_8;

}

void _activation_check_proc_08_func_504009598(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_7, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xd] += _activatnvar_confusing_LLUUID_8.mData[0xd];

	_activation_check_proc_08_func_2027280140(_activatnvar_confusing_bool_7, _activatnvar_generic_bool_0, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_U8_4);
	_activation_check_proc_08_func_321677323(_activatnvar_confusing_char_8, _activatnvar_confusing_char_7);
}

void _activation_check_proc_08_func_1766918832(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1967655680(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_656012084(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1542639175(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_LLUUID_7.mData[0xd];

}

void _activation_check_proc_08_func_1103858624(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_6[0x4] |= _activatnvar_confusing_chararray_3[0xf];

	/* inline */ _activation_check_proc_08_func_711299371(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_8, _activatnvar_confusing_U8_d);
	_activation_check_proc_08_func_1542639175(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_08_func_1397447874(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_08_func_1272565888(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_08_func_1240099377(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_08_func_480137749(_activatnvar_t0);
	_activation_check_proc_08_func_1047880739(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_4);
	_activation_check_proc_08_func_669469597(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_08_func_480137749(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_08_func_1047880739(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x6] += _activatnvar_confusing_LLUUID_7.mData[0x1];

}

void _activation_check_proc_08_func_669469597(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x7] *= _activatnvar_confusing_chararray_1[0xe];

}

void _activation_check_proc_08_func_881306144(bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_name_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_818695228(_activatnvar_confusing_LLUUID_f);
	_activation_check_proc_08_func_389552648(_activatnvar_confusing_chararray_9, _activatnvar_ser_digest);
	_activation_check_proc_08_func_1304744864(_activatnvar_doaccount, _activatnvar_confusing_bool_e);
	_activation_check_proc_08_func_524484925(_activatnvar_confusing_LLUUID_7, _activatnvar_name_digest);
	_activation_check_proc_08_func_187560743(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_08_func_1304744864(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_doaccount;

}

void _activation_check_proc_08_func_818695228(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("9bcc2191-a2c3-396c-c602-bf4f727e9158");

}

void _activation_check_proc_08_func_187560743(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x9] ^= _activatnvar_confusing_LLUUID_1.mData[0x3];

}

void _activation_check_proc_08_func_389552648(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_9[0xb] &= _activatnvar_ser_digest[0x7];

}

void _activation_check_proc_08_func_524484925(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] ^= _activatnvar_name_digest[0x3];

}

void _activation_check_proc_08_func_265325982(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xc] &= _activatnvar_confusing_chararray_7[0xc];

	_activatnvar_t0 &= 7;
}

void _activation_check_proc_08_func_641704336(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_08_func_2068482056(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_08_func_1972200347(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1628761459()
{
	
}

void _activation_check_proc_08_func_52893360(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_08_func_1033556915(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_b[0xf] |= _activatnvar_confusing_chararray_7[0x0];

	_activation_check_proc_08_func_1641113163(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_08_func_1641113163(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] &= _activatnvar_confusing_LLUUID_9.mData[0x2];

}

void _activation_check_proc_08_func_2125062286(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_8.mData[0xb] += _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_08_func_1227257717(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_5.mData[0x7] *= _activatnvar_code.mData[0x6];

	_activation_check_proc_08_func_2125062286(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_08_func_1852587807(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_391556075(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] >>= _activatnvar_lace.mData[0xb];

	_activation_check_proc_08_func_1852587807(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id);
}

void _activation_check_proc_08_func_686223212(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_08_func_631250767(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_08_func_886335632(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_4;

	_activation_check_proc_08_func_686223212(_activatnvar_confusing_int_a);
	_activation_check_proc_08_func_631250767(_activatnvar_confusing_int_f);
}

void _activation_check_proc_08_func_228804905(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] &= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_08_func_898515849(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_08_func_905329581()
{
	
}

void _activation_check_proc_08_func_1093143226(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_08_func_905329581();
}

void _activation_check_proc_08_func_823095512(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_08_func_604689883(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_08_func_1251092975(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 >>= _activatnvar_confusing_int_2;

}

void _activation_check_proc_08_func_1418589556(int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_1021462669(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_08_func_666074534(_activatnvar_confusing_int_7, _activatnvar_confusing_int_2);
}

void _activation_check_proc_08_func_673378911(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_08_func_1788865017(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_08_func_607139042(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d *= _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_08_func_1641580617(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_08_func_1350455813(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_08_func_1350455813(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] >>= _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_08_func_2052626622(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x0] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_08_func_270186078(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("df2973e1-bda9-b739-4b15-41e242f3ceff");

}

void _activation_check_proc_08_func_1132849824(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x5] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_08_func_1994228456(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_3, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_a.mData[0xf];

	_activation_check_proc_08_func_58881571(_activatnvar_t0);
	_activation_check_proc_08_func_893785256(_activatnvar_so, _activatnvar_t1, _activatnvar_pos);
}

void _activation_check_proc_08_func_893785256(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_08_func_58881571(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_08_func_701164822(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_08_func_267527364(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_08_func_73244921(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_780449223(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] &= _activatnvar_confusing_chararray_7[0x1];

	_activation_check_proc_08_func_1075124726(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_08_func_1507883099(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_08_func_1075124726(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_0[0xc] = _activatnvar_confusing_LLUUID_2.mData[0x5];

}

void _activation_check_proc_08_func_1445756495(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

	_activation_check_proc_08_func_967930830(_activatnvar_so, _activatnvar_t0);
	_activation_check_proc_08_func_1647449134(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_08_func_1647449134(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_08_func_967930830(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_08_func_1177448365(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_2 = 0x8;

}

void _activation_check_proc_08_func_1379791488(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_f.mData[0x9];

}

void _activation_check_proc_08_func_1698940478(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_08_func_650277643(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x4] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_08_func_1884048808(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_08_func_762464114(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_chararray_6[0xa];

}

void _activation_check_proc_08_func_994701987(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_08_func_603896612(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_08_func_1655053804(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("3451afbd-b814-3a6f-1b8b-87399cd0062d");

}

void _activation_check_proc_08_func_547284535(LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_08_func_693365411(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_08_func_693365411(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_08_func_1860972845(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_1.mData[0xc] |= _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_08_func_1640705817()
{
	
}

void _activation_check_proc_08_func_2057489094(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_08_func_348844674(unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xa] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_08_func_1640705817();
	/* inline */ _activation_check_proc_08_func_298614593(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_08_func_2057489094(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_1);
	_activation_check_proc_08_func_1715363850(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_08_func_1715363850(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_8[0xb];

}

void _activation_check_proc_08_func_2107690382(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] <<= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_08_func_1352734157(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xa] |= _activatnvar_confusing_chararray_a[0xc];

}

void _activation_check_proc_08_func_1776156091(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_08_func_1168876300(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_LLUUID_c.mData[0xa] ^= _activatnvar_confusing_chararray_5[0xa];

}

void _activation_check_proc_08_func_1207721664(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_08_func_687132445(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_08_func_1556650641(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_a = true;

	_activation_check_proc_08_func_1448575014(_activatnvar_section1, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_08_func_1448575014(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] >>= _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_08_func_608306789(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_08_func_1287615239(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] *= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_08_func_2128856975(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0x4;

}

void _activation_check_proc_08_func_271520000(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_08_func_1230832476(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_08_func_1386127558(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("beeac414-eba3-37c5-b20e-0292d4d414cf");

}

void _activation_check_proc_08_func_606286573(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_08_func_396376266(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_08_func_588295732(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_LLUUID_7.mData[0x7];

	_activation_check_proc_08_func_542564940(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
	_activation_check_proc_08_func_461521118(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_542564940(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_461521118(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_2111243693(int& _activatnvar_confusing_int_c, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

	/* inline */ _activation_check_proc_08_func_1270096679(_activatnvar_confusing_int_c);
}

void _activation_check_proc_08_func_1662935323(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_08_func_1474942664(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_08_func_1474942664(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_08_func_1206148218(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 += 0x0;

	_activation_check_proc_08_func_253027586(_activatnvar_confusing_bool_6, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_confusing_bool_f, _activatnvar_fscked);
}

void _activation_check_proc_08_func_253027586(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_08_func_348547541(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_f = _activatnvar_doaccount;

}

void _activation_check_proc_08_func_2117750875(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("432de055-22cf-7082-e81d-5c71fb61c9ce");

}

void _activation_check_proc_08_func_423195463(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_08_func_1548969193(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("2e06ac3d-d2dd-f11a-5de5-7ee0e4b3a98a");

}

void _activation_check_proc_08_func_1057023081(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_08_func_1981805685(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_08_func_176234943(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xd] = _activatnvar_confusing_LLUUID_4.mData[0x8];

	_activatnvar_confusing_LLUUID_e = LLUUID("0ae3e9ac-9c14-d5f7-fd56-3a6597cd89eb");

}

void _activation_check_proc_08_func_164858998(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_9[0xb];

}

void _activation_check_proc_08_func_448874493(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b ^= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_08_func_157564164(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_chararray_1[0x8];

}

void _activation_check_proc_08_func_1240149428(unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_section2, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_1916644109(_activatnvar_generic_iterator, _activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_f);
	_activation_check_proc_08_func_535125972(_activatnvar_confusing_bool_8, _activatnvar_generic_bool_1);
}

void _activation_check_proc_08_func_535125972(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_08_func_1916644109(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_b[0x4] *= _activatnvar_confusing_chararray_f[0x2];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_761600059(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_name_digest, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
	/* inline */ _activation_check_proc_08_func_244358204(_activatnvar_confusing_bool_7, _activatnvar_confusing_U8_7, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_08_func_487466166(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_08_func_19257205(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_535556601(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_e;

	_activation_check_proc_08_func_19257205(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1495383147(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_08_func_369343835(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_08_func_1651238807(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_08_func_1495383147(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_08_func_369343835(_activatnvar_confusing_int_1);
}

void _activation_check_proc_08_func_1727930582(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_6;

	_activation_check_proc_08_func_186860369(_activatnvar_confusing_U8_7, _activatnvar_confusing_char_e);
}

void _activation_check_proc_08_func_186860369(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_08_func_1622404052(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	
	/* inline */ _activation_check_proc_08_func_582929579(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_08_func_1216184423(_activatnvar_fscked, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_08_func_785276278(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_d[0xb] <<= _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_08_func_607975503(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_5[0x7] <<= _activatnvar_section1.mData[0x2];

}

void _activation_check_proc_08_func_64360393(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_08_func_179110974(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_combined_id;

}

void _activation_check_proc_08_func_508373285(unsigned char* _activatnvar_confusing_chararray_5, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_strbuf_0[0] = 54; _activatnvar_strbuf_0[0] ^= 15; _activatnvar_strbuf_0[1] = 76; _activatnvar_strbuf_0[1] ^= 124; _activatnvar_strbuf_0[2] = 48; _activatnvar_strbuf_0[2] ^= 3; _activatnvar_strbuf_0[3] = 115; _activatnvar_strbuf_0[3] ^= 71; _activatnvar_strbuf_0[4] = 23; _activatnvar_strbuf_0[4] ^= 117; _activatnvar_strbuf_0[5] = 9; _activatnvar_strbuf_0[5] ^= 109; _activatnvar_strbuf_0[6] = 42; _activatnvar_strbuf_0[6] ^= 31; _activatnvar_strbuf_0[7] = 125; _activatnvar_strbuf_0[7] ^= 74; _activatnvar_strbuf_0[8] = 104; _activatnvar_strbuf_0[8] ^= 69; _activatnvar_strbuf_0[9] = 20; _activatnvar_strbuf_0[9] ^= 118; _activatnvar_strbuf_0[10] = 34; _activatnvar_strbuf_0[10] ^= 21; _activatnvar_strbuf_0[11] = 40; _activatnvar_strbuf_0[11] ^= 76; _activatnvar_strbuf_0[12] = 78; _activatnvar_strbuf_0[12] ^= 118; _activatnvar_strbuf_0[13] = 91; _activatnvar_strbuf_0[13] ^= 118; _activatnvar_strbuf_0[14] = 5; _activatnvar_strbuf_0[14] ^= 49; _activatnvar_strbuf_0[15] = 101; _activatnvar_strbuf_0[15] ^= 6; _activatnvar_strbuf_0[16] = 48; _activatnvar_strbuf_0[16] ^= 82; _activatnvar_strbuf_0[17] = 117; _activatnvar_strbuf_0[17] ^= 23; _activatnvar_strbuf_0[18] = 59; _activatnvar_strbuf_0[18] ^= 22; _activatnvar_strbuf_0[19] = 2; _activatnvar_strbuf_0[19] ^= 58; _activatnvar_strbuf_0[20] = 54; _activatnvar_strbuf_0[20] ^= 83; _activatnvar_strbuf_0[21] = 121; _activatnvar_strbuf_0[21] ^= 27; _activatnvar_strbuf_0[22] = 119; _activatnvar_strbuf_0[22] ^= 17; _activatnvar_strbuf_0[23] = 52; _activatnvar_strbuf_0[23] ^= 25; _activatnvar_strbuf_0[24] = 108; _activatnvar_strbuf_0[24] ^= 88; _activatnvar_strbuf_0[25] = 125; _activatnvar_strbuf_0[25] ^= 75; _activatnvar_strbuf_0[26] = 65; _activatnvar_strbuf_0[26] ^= 116; _activatnvar_strbuf_0[27] = 46; _activatnvar_strbuf_0[27] ^= 77; _activatnvar_strbuf_0[28] = 10; _activatnvar_strbuf_0[28] ^= 58; _activatnvar_strbuf_0[29] = 99; _activatnvar_strbuf_0[29] ^= 80; _activatnvar_strbuf_0[30] = 85; _activatnvar_strbuf_0[30] ^= 54; _activatnvar_strbuf_0[31] = 60; _activatnvar_strbuf_0[31] ^= 14; _activatnvar_strbuf_0[32] = 67; _activatnvar_strbuf_0[32] ^= 114; _activatnvar_strbuf_0[33] = 4; _activatnvar_strbuf_0[33] ^= 101; _activatnvar_strbuf_0[34] = 114; _activatnvar_strbuf_0[34] ^= 22; _activatnvar_strbuf_0[35] = 72; _activatnvar_strbuf_0[35] ^= 125; _activatnvar_strbuf_0[36] = 0;
	_activation_check_proc_08_func_607975503(_activatnvar_confusing_chararray_5, _activatnvar_section1);
	_activation_check_proc_08_func_64360393(_activatnvar_strbuf_0, _activatnvar_section1);
	_activation_check_proc_08_func_179110974(_activatnvar_confusing_LLUUID_6, _activatnvar_combined_id);
}

void _activation_check_proc_08_func_1106508122(int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("4df8c1fb-9bed-1255-fa07-92a6afa426c9");

	/* inline */ _activation_check_proc_08_func_689956003(_activatnvar_confusing_int_f);
}

void _activation_check_proc_08_func_1543966662(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_chararray_f[0x8];

}

void _activation_check_proc_08_func_149830771(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_2 <<= _activatnvar_confusing_char_b;

}

void _activation_check_proc_08_func_1245928695(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 = 0x9;

}

void _activation_check_proc_08_func_1128080678(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("ed0a4b36-fd8e-9d14-9708-ea74ec47d559");

	_activation_check_proc_08_func_1271511123(_activatnvar_confusing_LLUUID_4, _activatnvar_secret);
}

void _activation_check_proc_08_func_1271511123(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] >>= _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_08_func_1071588922(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_08_func_1982721561(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_08_func_2101133935(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xc] &= _activatnvar_confusing_chararray_2[0x3];

}

void _activation_check_proc_08_func_4808532()
{
	
}

void _activation_check_proc_08_func_1330660693(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_b;

	_activation_check_proc_08_func_4808532();
}

void _activation_check_proc_08_func_1038981103(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_f++;

	_activation_check_proc_08_func_2057905422(_activatnvar_confusing_U8_c, _activatnvar_confusing_bool_1, _activatnvar_confusing_char_7);
	_activation_check_proc_08_func_1926225749(_activatnvar_so, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_08_func_714798835(_activatnvar_t0);
	_activation_check_proc_08_func_122474513(_activatnvar_t0);
	_activation_check_proc_08_func_1060069071(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_2);
	_activation_check_proc_08_func_765901698(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
	_activation_check_proc_08_func_1704190249(_activatnvar_so, _activatnvar_t0);
	/* inline */ _activation_check_proc_08_func_134310748(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_08_func_765901698(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_08_func_1704190249(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_08_func_1060069071(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x0] != 0x8) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_08_func_122474513(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_08_func_714798835(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_08_func_1926225749(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] += _activatnvar_so.mData[0x6];

}

void _activation_check_proc_08_func_2057905422(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_7 >>= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_08_func_667865014(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x5] = _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_08_func_531233140(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("b43416cf-a752-91fd-c709-24fd8132d812");

}

void _activation_check_proc_08_func_1847044975(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("5ca4ddf5-86b4-2282-1c9d-ff49c9da4fc8");

	/* inline */ _activation_check_proc_08_func_1849293035(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1563141945(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 >>= 0x9;

}

void _activation_check_proc_08_func_702959146(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_6 >>= _activatnvar_confusing_chararray_5[0x1];

}

void _activation_check_proc_08_func_1150153595(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_363472772();
	_activation_check_proc_08_func_1563141945(_activatnvar_confusing_int_6);
	_activation_check_proc_08_func_702959146(_activatnvar_confusing_U8_6, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_08_func_270610709(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 >>= _activatnvar_confusing_char_6;

}

void _activation_check_proc_08_func_683433130(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_08_func_552130185(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_code.mData[0xd];

}

void _activation_check_proc_08_func_590178757(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_b[0x2] >>= _activatnvar_confusing_LLUUID_b.mData[0xd];

	_activation_check_proc_08_func_552130185(_activatnvar_confusing_U8_4, _activatnvar_code);
	/* inline */ _activation_check_proc_08_func_1457640262(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
}

void _activation_check_proc_08_func_1029928696(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_chararray_3[0xe];

}

void _activation_check_proc_08_func_463227026(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1355175356(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_9 ^= _activatnvar_confusing_int_8;

}

void _activation_check_proc_08_func_217883759(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_08_func_268814334();
}

void _activation_check_proc_08_func_1074944671(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 |= 0x1;

	/* inline */ _activation_check_proc_08_func_151726853(_activatnvar_fscked, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_08_func_239903056(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_08_func_239903056(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x8] += _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_08_func_1373941607(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("a9f62fa6-f521-08ee-9a31-6fc7b3234c53");

}

void _activation_check_proc_08_func_873460950(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_d += _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_08_func_217340572(LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_8;

	_activation_check_proc_08_func_365967605(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_08_func_873460950(_activatnvar_confusing_char_d, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_08_func_365967605(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_697665632(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_08_func_1926386314(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_a, bool& _activatnvar_generic_bool_1)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x4] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_4 = false;

	_activation_check_proc_08_func_1149220280(_activatnvar_confusing_chararray_7, _activatnvar_confusing_char_a);
	_activation_check_proc_08_func_697665632(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_08_func_1149220280(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a |= _activatnvar_confusing_chararray_7[0x2];

}

void _activation_check_proc_08_func_1843136319(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_08_func_201267332(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_08_func_422385620(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_08_func_407491936(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x9] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_08_func_814435009(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xe] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_0 = true;

	_activation_check_proc_08_func_407491936(_activatnvar_confusing_bool_5, _activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_08_func_574723686(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_08_func_1026786076(DWORD& _activatnvar_serial, DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_serial = 0;
	_activation_check_proc_08_func_835931475(_activatnvar_gvi_flags);
}

void _activation_check_proc_08_func_835931475(DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_gvi_flags = 0;
}

void _activation_check_proc_08_func_1003597930(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_a *= _activatnvar_confusing_int_c;

}

void _activation_check_proc_08_func_1965185952(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("08962c31-10a6-22b7-7085-26822f94b419");

}

void _activation_check_proc_08_func_2099339278(int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] |= _activatnvar_confusing_LLUUID_2.mData[0x5];

	/* inline */ _activation_check_proc_08_func_968347189(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_08_func_124877168(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_08_func_1777601351(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_133482649(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] ^= _activatnvar_lace.mData[0x9];

}

void _activation_check_proc_08_func_536449570(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_chararray_9[0x3];

}

void _activation_check_proc_08_func_2072248007(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_1566973705(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_08_func_1088307478(_activatnvar_lace, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1707247304(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("bf7f66ef-cd1d-a03e-f4d9-bf7ade0d230c");

}

void _activation_check_proc_08_func_139077267(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_b.mData[0x0];

	_activation_check_proc_08_func_1707247304(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_08_func_2042266488()
{
	
}

void _activation_check_proc_08_func_1198234141(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_08_func_314968963(_activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_08_func_87587991(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_08_func_314968963(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_LLUUID_c.mData[0x1];

}

void _activation_check_proc_08_func_87587991(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_135078721(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_08_func_1831162129(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_2++;

	/* inline */ _activation_check_proc_08_func_738800183(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_8, _activatnvar_confusing_char_5);
}

void _activation_check_proc_08_func_880863077(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_b += _activatnvar_confusing_chararray_e[0xe];

	_activation_check_proc_08_func_2116088589(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_08_func_2057369493(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_2116088589(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_2057369493(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_793960169(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_08_func_1956143445(bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_d[0x2] >>= _activatnvar_confusing_chararray_9[0x2];

	_activation_check_proc_08_func_793960169(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_08_func_993073074(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_chararray_4[0x3];

}

void _activation_check_proc_08_func_134104265(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
	/* inline */ _activation_check_proc_08_func_1434250886(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_08_func_384842735(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] ^= _activatnvar_confusing_chararray_e[0x8];

	_activation_check_proc_08_func_1270712448(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_08_func_1270712448(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_8.mData[0xc] <<= _activatnvar_confusing_LLUUID_0.mData[0x0];

}

void _activation_check_proc_08_func_2090188675(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xf] |= _activatnvar_confusing_chararray_9[0x7];

}

void _activation_check_proc_08_func_1499163186(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_92497807(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_f[0xc] &= _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_08_func_1596392622(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_d = _activatnvar_confusing_char_6;

	/* inline */ _activation_check_proc_08_func_697457310(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_08_func_667619969(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_08_func_100539766(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_775533091(_activatnvar_confusing_int_7);
}

void _activation_check_proc_08_func_775533091(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 = 0x0;

}

void _activation_check_proc_08_func_2059895703(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_6[0x3] ^= _activatnvar_confusing_chararray_e[0x6];

}

void _activation_check_proc_08_func_445150399(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x8] &= _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_08_func_628409504(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_320596770(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_08_func_626943320()
{
	
}

void _activation_check_proc_08_func_463867934(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1611380826(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x0] += _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_08_func_592128707(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_08_func_2096364547(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_chararray_1[0x4];

}

void _activation_check_proc_08_func_1362191996(U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_t0, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] <<= _activatnvar_confusing_chararray_5[0x4];

	_activation_check_proc_08_func_1611380826(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_6);
	_activation_check_proc_08_func_592128707(_activatnvar_confusing_int_3);
	_activation_check_proc_08_func_2096364547(_activatnvar_confusing_char_6, _activatnvar_confusing_chararray_1);
	_activation_check_proc_08_func_1232065253(_activatnvar_confusing_U8_4);
	/* inline */ _activation_check_proc_08_func_2098508461(_activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_e, _activatnvar_t0, _activatnvar_t1, _activatnvar_so);
}

void _activation_check_proc_08_func_1232065253(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_08_func_2066916035(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_2[0x8] += _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_08_func_161229500(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x1] ^= _activatnvar_lace.mData[0x6];

}

void _activation_check_proc_08_func_1602527271(U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_4 <<= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_08_func_338765114(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_08_func_109966723(_activatnvar_confusing_U8_1);
	_activation_check_proc_08_func_172437312(_activatnvar_confusing_bool_b, _activatnvar_confusing_U8_5, _activatnvar_confusing_char_c);
	_activation_check_proc_08_func_1302892042(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_08_func_1302892042(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_5[0x2] *= _activatnvar_confusing_LLUUID_4.mData[0xb];

}

void _activation_check_proc_08_func_172437312(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_c)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_c |= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_08_func_211741815(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_08_func_1731316651(char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_char_6 &= 0x9;

	_activation_check_proc_08_func_211741815(_activatnvar_confusing_int_a);
}

void _activation_check_proc_08_func_1781316444(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 ^= _activatnvar_confusing_int_a;

}

void _activation_check_proc_08_func_1239181286(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_b.mData[0x0] >>= _activatnvar_code.mData[0xe];

	_activation_check_proc_08_func_1781316444(_activatnvar_confusing_int_a, _activatnvar_confusing_int_0);
}

void _activation_check_proc_08_func_358697408(bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_08_func_389791540(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_08_func_275624578(_activatnvar_code, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_08_func_909132596(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_08_func_389791540(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] = _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_08_func_1207043618(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_08_func_568029916(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_9[0xb] <<= _activatnvar_confusing_LLUUID_7.mData[0xd];

}

void _activation_check_proc_08_func_251947033(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_chararray_e[0xa] <<= _activatnvar_confusing_LLUUID_4.mData[0x1];

	_activation_check_proc_08_func_239490316(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_08_func_1272322270(_activatnvar_confusing_char_5, _activatnvar_confusing_char_3);
	_activation_check_proc_08_func_420241922(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_08_func_420241922(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_08_func_239490316(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_273875502(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_08_func_1920120282(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_08_func_508297718(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_08_func_1132297498(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_f[0x1] ^= _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_08_func_1102574337(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xe] == _activatnvar_confusing_char_d) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_08_func_594883476(LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_7;

	_activation_check_proc_08_func_624799058(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_08_func_624799058(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_246998889(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_08_func_329256791(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 += 0xc;

	_activation_check_proc_08_func_1879951085(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_d);
	_activation_check_proc_08_func_246998889(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_08_func_1879951085(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_08_func_936631785(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_section2;

}

void _activation_check_proc_08_func_397142021(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_08_func_13163470(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f <<= _activatnvar_confusing_int_5;

}

void _activation_check_proc_08_func_1371628952(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_325679725(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] *= _activatnvar_confusing_chararray_1[0x2];

}

void _activation_check_proc_08_func_865897473(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_08_func_1044471347(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 ^= _activatnvar_t1;

}

void _activation_check_proc_08_func_831207761()
{
	
}

void _activation_check_proc_08_func_966114074(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_08_func_1238458232(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_08_func_784570985(U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_08_func_1238458232(_activatnvar_confusing_U8_4);
	_activation_check_proc_08_func_966114074(_activatnvar_confusing_int_0);
}

void _activation_check_proc_08_func_309976529(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_3 |= _activatnvar_confusing_chararray_e[0x6];

}

void _activation_check_proc_08_func_13637777(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_08_func_285804988(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_08_func_1675606101(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_08_func_640146519(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= _activatnvar_confusing_LLUUID_b.mData[0x3];

}

void _activation_check_proc_08_func_2103417252(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_08_func_570505763(int& _activatnvar_confusing_int_e, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	/* inline */ _activation_check_proc_08_func_1932300683(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_2103417252(_activatnvar_confusing_int_e);
}

void _activation_check_proc_08_func_1199087703(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
	_activatnvar_confusing_chararray_5[0xe] ^= _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_08_func_1258023802(char* _activatnvar_strbuf_0, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_08_func_109549499(_activatnvar_strbuf_0);
}

void _activation_check_proc_08_func_564579696(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_41680445(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_08_func_1694577472(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_08_func_1175516350(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x7] = _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_08_func_1472232101(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_2[0x2] = _activatnvar_ser_digest[0xf];

	_activation_check_proc_08_func_200038678(_activatnvar_t0);
	_activation_check_proc_08_func_1175516350(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_1);
	_activation_check_proc_08_func_1694577472(_activatnvar_t0);
}

void _activation_check_proc_08_func_200038678(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_315546010()
{
	
}

void _activation_check_proc_08_func_34437729(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_08_func_1071159654(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_08_func_1376606567(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_e[0x7] <<= _activatnvar_confusing_LLUUID_c.mData[0x9];

}

void _activation_check_proc_08_func_540259586(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_08_func_901270158(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_08_func_1754301119(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_8[0x4] += _activatnvar_confusing_LLUUID_e.mData[0xc];

}

void _activation_check_proc_08_func_792128005(char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_4 += _activatnvar_confusing_char_8;

}

void _activation_check_proc_08_func_1151479639(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x5] += _activatnvar_confusing_LLUUID_5.mData[0x6];

}

void _activation_check_proc_08_func_1461278836(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_8, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_4)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_08_func_1151479639(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_7);
	_activation_check_proc_08_func_356077088(_activatnvar_t0);
	_activation_check_proc_08_func_792128005(_activatnvar_confusing_char_4, _activatnvar_confusing_char_8);
}

void _activation_check_proc_08_func_356077088(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_08_func_184669311(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_08_func_395054825(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_08_func_2013475812(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_08_func_307593651(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xd] *= _activatnvar_confusing_LLUUID_4.mData[0x3];

}

void _activation_check_proc_08_func_1871495811(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_08_func_1347667897(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_08_func_1459740143(char& _activatnvar_confusing_char_2, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
	_activation_check_proc_08_func_1207305906(_activatnvar_confusing_char_2);
}

void _activation_check_proc_08_func_1207305906(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_08_func_243478722(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] &= _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_08_func_1014035055(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_08_func_419212564()
{
	
}

void _activation_check_proc_08_func_423177443(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

	/* inline */ _activation_check_proc_08_func_1525282163(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_08_func_2102291033(_activatnvar_code, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_08_func_1079299459(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_08_func_348207302(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_08_func_419212564();
	/* inline */ _activation_check_proc_08_func_279217739(_activatnvar_confusing_bool_2, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_08_func_64739926(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xd] *= _activatnvar_confusing_LLUUID_e.mData[0x2];

}

void _activation_check_proc_08_func_2094797752(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_08_func_1253841569(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_08_func_2094797752(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_08_func_1088890322(_activatnvar_confusing_int_3);
	_activation_check_proc_08_func_64739926(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_08_func_40691579(unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xb] &= _activatnvar_confusing_chararray_9[0x6];

}

void _activation_check_proc_08_func_2142300313(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x7] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_08_func_987578784(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_08_func_2119028552(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("a1b65e51-39f5-a428-7b4e-4e27f4d8ca1d");

}

void _activation_check_proc_08_func_518598132(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_2, int& _activatnvar_confusing_int_8)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_2 >>= _activatnvar_confusing_char_a;

	_activation_check_proc_08_func_2119028552(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_08_func_99216160(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_08_func_105809588(_activatnvar_confusing_int_d);
}

void _activation_check_proc_08_func_99216160(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_08_func_693949140(LLUUID& _activatnvar_section2, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_chararray_9[0xd] ^= _activatnvar_section2.mData[0xd];

	_activation_check_proc_08_func_1854983348(_activatnvar_confusing_bool_a, _activatnvar_generic_bool_0, _activatnvar_confusing_bool_4);
	_activation_check_proc_08_func_886914835(_activatnvar_confusing_int_a);
	_activation_check_proc_08_func_1595238212(_activatnvar_confusing_char_6, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_08_func_1854983348(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_4 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_08_func_1595238212(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_char_6;

}

void _activation_check_proc_08_func_886914835(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_08_func_1905167036(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_1078947214(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_08_func_1553152087(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_181658364(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_int_4++;

	_activatnvar_confusing_LLUUID_3.mData[0x9] ^= _activatnvar_confusing_chararray_1[0xb];

	_activation_check_proc_08_func_1553152087(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_08_func_854549046(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_08_func_1611447993(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_section1;

}

void _activation_check_proc_08_func_345775695(int& _activatnvar_confusing_int_c, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_f ^= _activatnvar_confusing_U8_c;

	_activation_check_proc_08_func_1230998511(_activatnvar_confusing_int_c);
}

void _activation_check_proc_08_func_1230998511(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_08_func_186757382(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_08_func_300397960()
{
	
}

void _activation_check_proc_08_func_1343923249(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_f |= _activatnvar_confusing_int_5;

}

void _activation_check_proc_08_func_635222033(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_08_func_497900298(_activatnvar_confusing_U8_7, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_08_func_547451892(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_251549255(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1162472606(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_e, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_08_func_242083216(_activatnvar_doaccount, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_08_func_242083216(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_08_func_1725133164(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_mac_digest, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_generic_iterator = 12;
	_activation_check_proc_08_func_1251896652(_activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_08_func_833157758(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_code);
	/* inline */ _activation_check_proc_08_func_406442248(_activatnvar_mac_digest, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_08_func_1591952037(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_08_func_900137387(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_08_func_579372718(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_f);
	_activation_check_proc_08_func_1279265173(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_337305904(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_08_func_1279265173(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_579372718(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_08_func_1591952037(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_08_func_337305904(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1251896652(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xe] &= _activatnvar_confusing_LLUUID_e.mData[0x0];

}

void _activation_check_proc_08_func_1527763998(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_a;

	/* inline */ _activation_check_proc_08_func_977053016(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_08_func_1669581045(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_08_func_863299561(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_f |= _activatnvar_fscked.mData[0xc];

	_activation_check_proc_08_func_1233848626(_activatnvar_confusing_U8_c, _activatnvar_confusing_char_c, _activatnvar_confusing_bool_d);
	_activation_check_proc_08_func_134732406(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_08_func_1932266254(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_08_func_1233848626(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_c = _activatnvar_confusing_char_c;

}

void _activation_check_proc_08_func_1932266254(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_08_func_134732406(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x9] = _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_08_func_616100872(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_2 <<= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_08_func_547918793(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_b;

	_activatnvar_confusing_char_5++;

	_activation_check_proc_08_func_616100872(_activatnvar_confusing_U8_2, _activatnvar_confusing_U8_0, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_08_func_106771293(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_08_func_1462110681(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x5] += _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_08_func_1779970556(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_char_0;

}

void _activation_check_proc_08_func_77829705(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c += _activatnvar_t1;

}

void _activation_check_proc_08_func_914554972(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_2146508614(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_08_func_658935250(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1200791328(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_08_func_851420132(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_chararray_1[0x1];

}

void _activation_check_proc_08_func_521163601(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_3 |= 0x5;

	_activation_check_proc_08_func_851420132(_activatnvar_confusing_chararray_1, _activatnvar_confusing_U8_1);
	/* inline */ _activation_check_proc_08_func_1992615115(_activatnvar_confusing_U8_6, _activatnvar_confusing_bool_8, _activatnvar_confusing_char_6);
}

void _activation_check_proc_08_func_2092207422()
{
	
}

void _activation_check_proc_08_func_919446397(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_08_func_1204146131(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_5, _activatnvar_t0);
	/* inline */ _activation_check_proc_08_func_2066891546(_activatnvar_confusing_bool_d, _activatnvar_confusing_U8_4, _activatnvar_confusing_char_e);
}

void _activation_check_proc_08_func_1269298136(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_08_func_340180191(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xd] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_08_func_100832757(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_combined_id.mData[0xe];

}

void _activation_check_proc_08_func_1318409506(char& _activatnvar_confusing_char_a, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_a <<= 0xe;

}

void _activation_check_proc_08_func_16840193(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_f.mData[0xd] ^= _activatnvar_confusing_chararray_8[0x2];

}

void _activation_check_proc_08_func_552746610(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_08_func_1552287295(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_495706494(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_b.mData[0x8] += _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_08_func_229844492(int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_a = true;

	/* inline */ _activation_check_proc_08_func_1749537309(_activatnvar_confusing_int_4);
}

void _activation_check_proc_08_func_2001393153(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x7] >>= _activatnvar_confusing_chararray_e[0x4];

}

void _activation_check_proc_08_func_1402142028(unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("8d7b4462-5986-a350-0e61-4fa3e1d04f09");

	_activation_check_proc_08_func_2001393153(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_08_func_769798892(_activatnvar_confusing_int_6);
}

void _activation_check_proc_08_func_384877155(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_08_func_2091190944(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_3 *= _activatnvar_confusing_int_1;

}

void _activation_check_proc_08_func_657099312(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_08_func_1402347917(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

	/* inline */ _activation_check_proc_08_func_513079491(_activatnvar_confusing_LLUUID_5, _activatnvar_code);
}

void _activation_check_proc_08_func_260627866(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("7425fa0e-5787-9ad9-6084-2b04254c8371");

}

void _activation_check_proc_08_func_1180562150(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_08_func_872186844(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_0[0xa] += _activatnvar_confusing_chararray_f[0xf];

	_activation_check_proc_08_func_148401530(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_08_func_165302947(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_08_func_634512104(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_08_func_148401530(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_08_func_1529351260(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_8 |= _activatnvar_confusing_U8_9;

	/* inline */ _activation_check_proc_08_func_160844393(_activatnvar_confusing_U8_c, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_08_func_2133241842(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_6[0x8];

	_activation_check_proc_08_func_407649473(_activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_08_func_2052186026(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_08_func_407649473(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("7cb54092-b58a-dd4e-aceb-3faecafe96fa");

}

void _activation_check_proc_08_func_1674632083(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_5 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_08_func_545623162(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x4] >>= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_08_func_2078001809(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xe] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_f;

	/* inline */ _activation_check_proc_08_func_1984320026(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_08_func_1531046705(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xe] |= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_08_func_464063707(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_08_func_1612318216(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_08_func_464063707(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_08_func_901759413(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_LLUUID_1.mData[0xc];

	/* inline */ _activation_check_proc_08_func_787442436();
}

void _activation_check_proc_08_func_607257270(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_709732860(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_607257270(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_08_func_1668229044(_activatnvar_confusing_int_e);
}

void _activation_check_proc_08_func_2079801777(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_08_func_1050840801(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_08_func_1813323937(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xf] != _activatnvar_confusing_char_4) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_08_func_1870543250(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_chararray_a[0x5];

}

void _activation_check_proc_08_func_1867381683(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x3] += _activatnvar_confusing_LLUUID_9.mData[0x6];

}

void _activation_check_proc_08_func_27959309(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("6de73190-bd7e-a99e-ce5f-922ef6afafaa");

	_activation_check_proc_08_func_251526297(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_08_func_251526297(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("cb8801e6-bcbc-190f-42e6-192e8ad9ff38");

}

void _activation_check_proc_08_func_958865136(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_277860879(_activatnvar_confusing_char_7, _activatnvar_confusing_bool_c, _activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_d);
	/* inline */ _activation_check_proc_08_func_1121676957(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_7, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
}

void _activation_check_proc_08_func_277860879(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_generic_iterator++;
	if(_activatnvar_confusing_LLUUID_8.mData[0x2] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_08_func_47091655(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x3] <<= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_08_func_1969569440(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xe] |= _activatnvar_confusing_chararray_b[0x3];

}

void _activation_check_proc_08_func_378796223(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_LLUUID_7.mData[0xb];

	_activation_check_proc_08_func_64593030(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_08_func_481335935(_activatnvar_confusing_chararray_4, _activatnvar_confusing_char_5);
}

void _activation_check_proc_08_func_64593030(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_08_func_237787403(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_08_func_920877554(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_08_func_1784989191(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_1899809974(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_08_func_1645681228(_activatnvar_confusing_chararray_0, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_08_func_1784989191(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1899809974(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("6f036280-7308-453f-94ad-3ecb6c286a16");

}

void _activation_check_proc_08_func_920877554(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_08_func_1645681228(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_08_func_752491038(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	
	/* inline */ _activation_check_proc_08_func_2036581424(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_08_func_794977970(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_157070958(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xb] += _activatnvar_section1.mData[0x9];

}

void _activation_check_proc_08_func_533253296(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_6 |= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_08_func_1230725956(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x5] <<= _activatnvar_confusing_chararray_c[0xe];

	_activation_check_proc_08_func_533253296(_activatnvar_confusing_U8_3, _activatnvar_confusing_bool_3, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_08_func_1918012766(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x0] ^= _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_08_func_639538432(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_char_1;

}

void _activation_check_proc_08_func_1059300284(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_4[0xf] &= _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_08_func_280354472(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_char_d;

	_activation_check_proc_08_func_134321393(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_08_func_134321393(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_08_func_2113995030(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] += _activatnvar_confusing_LLUUID_c.mData[0xa];

}

void _activation_check_proc_08_func_813746861(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 |= _activatnvar_combined_id.mData[0x9];

}

void _activation_check_proc_08_func_27833413(LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_b.mData[0x1];

	_activatnvar_confusing_chararray_5[0x3] = _activatnvar_secret.mData[0x2];

}

void _activation_check_proc_08_func_367203608(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_08_func_164734486(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_08_func_1138503850(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x8] += _activatnvar_confusing_chararray_2[0xd];

}

void _activation_check_proc_08_func_1090686002(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xa] = _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_08_func_540915715(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_e.mData[0x1] *= _activatnvar_confusing_chararray_6[0xc];

}

void _activation_check_proc_08_func_2096764533(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_e.mData[0x2] >>= _activatnvar_secret.mData[0xd];

	/* inline */ _activation_check_proc_08_func_1144892909(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_e);
	_activation_check_proc_08_func_540915715(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_08_func_2143450465(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_08_func_1897542652(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_08_func_1897542652(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_c.mData[0xc] += _activatnvar_confusing_LLUUID_9.mData[0x0];

}

void _activation_check_proc_08_func_1355335156(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_6 ^= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_08_func_277900304(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_08_func_32880824()
{
	
}

void _activation_check_proc_08_func_956020984(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1065246573(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_9;

	_activation_check_proc_08_func_2029810772(_activatnvar_t0);
}

void _activation_check_proc_08_func_2029810772(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_08_func_145305230(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_08_func_139806178(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_7.mData[0x2] |= _activatnvar_confusing_LLUUID_9.mData[0x2];

}

void _activation_check_proc_08_func_198374838(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xe] >>= _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_08_func_1866854524(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 += _activatnvar_confusing_char_1;

}

void _activation_check_proc_08_func_2059221361(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xb] >>= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_08_func_180806930(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_code, char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_08_func_1998862020(_activatnvar_code, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_08_func_296286008(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xb] == 0x6) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_08_func_1827431166(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 53; _activatnvar_strbuf_0[0] ^= 4; _activatnvar_strbuf_0[1] = 97; _activatnvar_strbuf_0[1] ^= 81; _activatnvar_strbuf_0[2] = 34; _activatnvar_strbuf_0[2] ^= 17; _activatnvar_strbuf_0[3] = 17; _activatnvar_strbuf_0[3] ^= 37; _activatnvar_strbuf_0[4] = 16; _activatnvar_strbuf_0[4] ^= 114; _activatnvar_strbuf_0[5] = 22; _activatnvar_strbuf_0[5] ^= 112; _activatnvar_strbuf_0[6] = 119; _activatnvar_strbuf_0[6] ^= 17; _activatnvar_strbuf_0[7] = 1; _activatnvar_strbuf_0[7] ^= 55; _activatnvar_strbuf_0[8] = 88; _activatnvar_strbuf_0[8] ^= 117; _activatnvar_strbuf_0[9] = 25; _activatnvar_strbuf_0[9] ^= 123; _activatnvar_strbuf_0[10] = 57; _activatnvar_strbuf_0[10] ^= 14; _activatnvar_strbuf_0[11] = 47; _activatnvar_strbuf_0[11] ^= 27; _activatnvar_strbuf_0[12] = 87; _activatnvar_strbuf_0[12] ^= 103; _activatnvar_strbuf_0[13] = 8; _activatnvar_strbuf_0[13] ^= 37; _activatnvar_strbuf_0[14] = 111; _activatnvar_strbuf_0[14] ^= 95; _activatnvar_strbuf_0[15] = 89; _activatnvar_strbuf_0[15] ^= 63; _activatnvar_strbuf_0[16] = 67; _activatnvar_strbuf_0[16] ^= 33; _activatnvar_strbuf_0[17] = 49; _activatnvar_strbuf_0[17] ^= 85; _activatnvar_strbuf_0[18] = 122; _activatnvar_strbuf_0[18] ^= 87; _activatnvar_strbuf_0[19] = 91; _activatnvar_strbuf_0[19] ^= 106; _activatnvar_strbuf_0[20] = 36; _activatnvar_strbuf_0[20] ^= 71; _activatnvar_strbuf_0[21] = 107; _activatnvar_strbuf_0[21] ^= 9; _activatnvar_strbuf_0[22] = 100; _activatnvar_strbuf_0[22] ^= 2; _activatnvar_strbuf_0[23] = 15; _activatnvar_strbuf_0[23] ^= 34; _activatnvar_strbuf_0[24] = 10; _activatnvar_strbuf_0[24] ^= 62; _activatnvar_strbuf_0[25] = 106; _activatnvar_strbuf_0[25] ^= 92; _activatnvar_strbuf_0[26] = 74; _activatnvar_strbuf_0[26] ^= 127; _activatnvar_strbuf_0[27] = 25; _activatnvar_strbuf_0[27] ^= 122; _activatnvar_strbuf_0[28] = 95; _activatnvar_strbuf_0[28] ^= 111; _activatnvar_strbuf_0[29] = 46; _activatnvar_strbuf_0[29] ^= 31; _activatnvar_strbuf_0[30] = 76; _activatnvar_strbuf_0[30] ^= 40; _activatnvar_strbuf_0[31] = 47; _activatnvar_strbuf_0[31] ^= 29; _activatnvar_strbuf_0[32] = 15; _activatnvar_strbuf_0[32] ^= 62; _activatnvar_strbuf_0[33] = 0; _activatnvar_strbuf_0[33] ^= 98; _activatnvar_strbuf_0[34] = 86; _activatnvar_strbuf_0[34] ^= 50; _activatnvar_strbuf_0[35] = 85; _activatnvar_strbuf_0[35] ^= 96; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_08_func_1959729200(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("7e68e19a-0e39-688e-06f7-ff1235da3b28");

}

void _activation_check_proc_08_func_453663034(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_08_func_1352165478(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_c[0xa] *= _activatnvar_combined_id.mData[0xa];

}

void _activation_check_proc_08_func_399370542(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_6)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_6 *= 0xa;

	_activation_check_proc_08_func_1352165478(_activatnvar_confusing_chararray_c, _activatnvar_combined_id);
}

void _activation_check_proc_08_func_858007867(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("7ba7941c-ced6-5473-cdc9-a3635dbe8c89");

}

void _activation_check_proc_08_func_1205647132(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] <<= _activatnvar_confusing_chararray_1[0x3];

}

void _activation_check_proc_08_func_1869182540(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 ^= 0xf;

}

void _activation_check_proc_08_func_1445615580(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_7[0x2] <<= _activatnvar_code.mData[0xa];

}

void _activation_check_proc_08_func_383852158(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_3.mData[0xc] >>= _activatnvar_confusing_chararray_d[0x1];

}

void _activation_check_proc_08_func_343957362()
{
	
}

void _activation_check_proc_08_func_1895175368(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_08_func_1677694005(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_1)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x7] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_3 = false;

	_activation_check_proc_08_func_140886301(_activatnvar_t0);
}

void _activation_check_proc_08_func_140886301(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_1322404862(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xd] |= _activatnvar_confusing_LLUUID_2.mData[0x4];

}

void _activation_check_proc_08_func_239014063(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_1322404862(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_08_func_1168220827(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_08_func_1937445420(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 <<= 0xc;

}

void _activation_check_proc_08_func_1154943595(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x5] |= _activatnvar_confusing_chararray_3[0x7];

	_activatnvar_confusing_LLUUID_0 = LLUUID("325fac88-d5d0-7df1-32d3-37fce8946274");

}

void _activation_check_proc_08_func_423794596(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] *= _activatnvar_confusing_chararray_e[0xd];

}

void _activation_check_proc_08_func_175596240(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_e;

	_activation_check_proc_08_func_1154943595(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_3);
	_activation_check_proc_08_func_1937445420(_activatnvar_confusing_U8_2);
	_activation_check_proc_08_func_423794596(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_08_func_2133105119()
{
	
}

void _activation_check_proc_08_func_1479940483(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_933175732(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1997664500(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_08_func_1348992851(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_e += _activatnvar_confusing_char_6;

	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_08_func_600247183(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_08_func_2030182535(LLMD5*& _activatnvar_nmd5, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_1, std::string& _activatnvar_fullname)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
	_activatnvar_confusing_char_1 *= 0x8;

	_activation_check_proc_08_func_600247183(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_08_func_1184114577(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("efb02adf-ad7d-c549-1c06-a2b0ba23eafa");

}

void _activation_check_proc_08_func_1623379135(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_08_func_1835029823(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_148686761(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_08_func_2142972295(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_08_func_345785723()
{
	
}

void _activation_check_proc_08_func_1453414186(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_08_func_626045899(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_08_func_626045899(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_LLUUID_c.mData[0x8];

}

void _activation_check_proc_08_func_1456141145(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_08_func_92980997(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_472299969(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_08_func_1933440831(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("25452fa2-69de-92f7-a280-dfff2d73bb03");

	_activation_check_proc_08_func_472299969(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_08_func_1699143252(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_1);
}

void _activation_check_proc_08_func_1051700501(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_08_func_359294895(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_08_func_1937061668(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_08_func_359294895(_activatnvar_pos);
	_activation_check_proc_08_func_1051700501(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_08_func_1750360465(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 *= _activatnvar_confusing_int_d;

}

void _activation_check_proc_08_func_1390639437(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_0 <<= _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_08_func_775192641(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_1 <<= 0x8;

}

void _activation_check_proc_08_func_1352889316(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_7 += 0x8;

}

void _activation_check_proc_08_func_1962372944(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("ef4afdbb-4044-d1d4-7e83-8d296a8db833");

}

void _activation_check_proc_08_func_704837565(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xe] *= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_08_func_825379364(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_b >>= 0x3;

}

void _activation_check_proc_08_func_1669500581(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x7] |= _activatnvar_confusing_chararray_b[0xa];

}

void _activation_check_proc_08_func_1134706344(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_08_func_150783101(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_08_func_1121618216(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x7] != 0xf) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_08_func_437456928(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xc] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_08_func_1816138175(U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_1 ^= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_08_func_1487494231(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_5)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
	_activation_check_proc_08_func_750014606(_activatnvar_confusing_char_5, _activatnvar_section1);
	_activation_check_proc_08_func_553428057(_activatnvar_confusing_U8_8, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_08_func_553428057(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xd] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_08_func_750014606(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_5 = _activatnvar_section1.mData[0x9];

}

void _activation_check_proc_08_func_718042149(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
	/* inline */ _activation_check_proc_08_func_1110286712(_activatnvar_section2, _activatnvar_so);
}

void _activation_check_proc_08_func_149750058(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] &= _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_08_func_1995439488(LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_e, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("03bd0a27-3b07-e318-84a3-c952807859eb");

	/* inline */ _activation_check_proc_08_func_1429207314(_activatnvar_confusing_int_e);
	_activation_check_proc_08_func_149750058(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_08_func_33922204(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_0);
	_activation_check_proc_08_func_13388555(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_08_func_13388555(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_08_func_622017756(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_08_func_1123840388(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_c.mData[0xc] += _activatnvar_lace.mData[0xe];

}

void _activation_check_proc_08_func_1912031028(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x0] &= _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_08_func_2031506925(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_08_func_1886095636(U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_8 = 0x0;

	/* inline */ _activation_check_proc_08_func_1446523293(_activatnvar_confusing_U8_c, _activatnvar_confusing_U8_4);
	_activation_check_proc_08_func_2031506925(_activatnvar_confusing_int_4);
}

void _activation_check_proc_08_func_607056218(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_4[0x5] += _activatnvar_confusing_chararray_a[0x5];

}

void _activation_check_proc_08_func_841020714(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_08_func_1508809850(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_08_func_293781464(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_section1;

}

void _activation_check_proc_08_func_1652731237(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_d <<= _activatnvar_confusing_int_0;

}

void _activation_check_proc_08_func_1976994705(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_b.mData[0x9];

}

void _activation_check_proc_08_func_1937398873(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_967647620(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_967647620(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1845821155(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_08_func_1524125473(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_08_func_454126545(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_7, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_U8_7 <<= 0x1;

	_activation_check_proc_08_func_1524125473(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_08_func_1703035541(_activatnvar_confusing_char_0, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_08_func_644924429(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x7] = _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_08_func_1221168828(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_e.mData[0xf] <<= _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_08_func_1057532502(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_596803600(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a |= _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_08_func_537767076(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1450730079(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 41; _activatnvar_strbuf_0[0] ^= 17; _activatnvar_strbuf_0[1] = 14; _activatnvar_strbuf_0[1] ^= 108; _activatnvar_strbuf_0[2] = 18; _activatnvar_strbuf_0[2] ^= 113; _activatnvar_strbuf_0[3] = 96; _activatnvar_strbuf_0[3] ^= 85; _activatnvar_strbuf_0[4] = 5; _activatnvar_strbuf_0[4] ^= 49; _activatnvar_strbuf_0[5] = 0; _activatnvar_strbuf_0[5] ^= 52; _activatnvar_strbuf_0[6] = 9; _activatnvar_strbuf_0[6] ^= 59; _activatnvar_strbuf_0[7] = 81; _activatnvar_strbuf_0[7] ^= 100; _activatnvar_strbuf_0[8] = 25; _activatnvar_strbuf_0[8] ^= 52; _activatnvar_strbuf_0[9] = 94; _activatnvar_strbuf_0[9] ^= 110; _activatnvar_strbuf_0[10] = 5; _activatnvar_strbuf_0[10] ^= 52; _activatnvar_strbuf_0[11] = 109; _activatnvar_strbuf_0[11] ^= 91; _activatnvar_strbuf_0[12] = 113; _activatnvar_strbuf_0[12] ^= 65; _activatnvar_strbuf_0[13] = 62; _activatnvar_strbuf_0[13] ^= 19; _activatnvar_strbuf_0[14] = 44; _activatnvar_strbuf_0[14] ^= 28; _activatnvar_strbuf_0[15] = 40; _activatnvar_strbuf_0[15] ^= 24; _activatnvar_strbuf_0[16] = 75; _activatnvar_strbuf_0[16] ^= 115; _activatnvar_strbuf_0[17] = 73; _activatnvar_strbuf_0[17] ^= 123; _activatnvar_strbuf_0[18] = 88; _activatnvar_strbuf_0[18] ^= 117; _activatnvar_strbuf_0[19] = 73; _activatnvar_strbuf_0[19] ^= 122; _activatnvar_strbuf_0[20] = 98; _activatnvar_strbuf_0[20] ^= 80; _activatnvar_strbuf_0[21] = 94; _activatnvar_strbuf_0[21] ^= 110; _activatnvar_strbuf_0[22] = 85; _activatnvar_strbuf_0[22] ^= 103; _activatnvar_strbuf_0[23] = 59; _activatnvar_strbuf_0[23] ^= 22; _activatnvar_strbuf_0[24] = 19; _activatnvar_strbuf_0[24] ^= 112; _activatnvar_strbuf_0[25] = 47; _activatnvar_strbuf_0[25] ^= 23; _activatnvar_strbuf_0[26] = 119; _activatnvar_strbuf_0[26] ^= 71; _activatnvar_strbuf_0[27] = 100; _activatnvar_strbuf_0[27] ^= 86; _activatnvar_strbuf_0[28] = 100; _activatnvar_strbuf_0[28] ^= 84; _activatnvar_strbuf_0[29] = 66; _activatnvar_strbuf_0[29] ^= 112; _activatnvar_strbuf_0[30] = 101; _activatnvar_strbuf_0[30] ^= 92; _activatnvar_strbuf_0[31] = 53; _activatnvar_strbuf_0[31] ^= 5; _activatnvar_strbuf_0[32] = 66; _activatnvar_strbuf_0[32] ^= 114; _activatnvar_strbuf_0[33] = 70; _activatnvar_strbuf_0[33] ^= 126; _activatnvar_strbuf_0[34] = 30; _activatnvar_strbuf_0[34] ^= 46; _activatnvar_strbuf_0[35] = 7; _activatnvar_strbuf_0[35] ^= 53; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_08_func_189672670(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_d)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x5] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_08_func_1779281493(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x2] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_08_func_1554951134(U8& _activatnvar_pos, int& _activatnvar_confusing_int_7)
{
	_activatnvar_pos |= 8;
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_08_func_948454391(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1942854874(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_08_func_1365643573(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_c[0x6] = _activatnvar_confusing_chararray_7[0x3];

}

void _activation_check_proc_08_func_2115387963(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_int_f <<= _activatnvar_confusing_int_6;

	_activation_check_proc_08_func_1365643573(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_08_func_957458930(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_fscked.mData[0x0];

}

void _activation_check_proc_08_func_328139148(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xe;

}

void _activation_check_proc_08_func_1788776300(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_so)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
	/* inline */ _activation_check_proc_08_func_224784348(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_328139148(_activatnvar_confusing_int_e);
	_activation_check_proc_08_func_1312408596(_activatnvar_confusing_chararray_b, _activatnvar_confusing_char_d);
}

void _activation_check_proc_08_func_1312408596(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_08_func_1807682616(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_08_func_267658532(_activatnvar_confusing_chararray_1, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_08_func_267658532(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_08_func_1083608274(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_a)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x2] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_9;

	/* inline */ _activation_check_proc_08_func_795378486(_activatnvar_confusing_U8_5, _activatnvar_generic_bool_1, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_08_func_937098484(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_1906194691(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_d <<= _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_08_func_65896924(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 = 0x9;

}

void _activation_check_proc_08_func_1269914212(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_e++;

	_activation_check_proc_08_func_1152504137(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_08_func_1152504137(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_08_func_2095318357(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
}

void _activation_check_proc_08_func_1437168490(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] *= _activatnvar_confusing_chararray_3[0x3];

}

void _activation_check_proc_08_func_1712937276(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("e7d39ee5-5de6-c212-fb0c-613a0e627ca9");

	_activation_check_proc_08_func_2095318357(_activatnvar_combined_id, _activatnvar_name_digest);
	_activation_check_proc_08_func_1437168490(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_08_func_1702406080(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("36fc531a-3f64-4f3f-ffa4-6bfc6ff2e155");

	/* inline */ _activation_check_proc_08_func_1802079714(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_08_func_982506952(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_b, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d = 0x8;

	/* inline */ _activation_check_proc_08_func_1865498498(_activatnvar_confusing_char_8, _activatnvar_confusing_bool_6, _activatnvar_confusing_char_b);
}

void _activation_check_proc_08_func_981194346(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_a.mData[0x0];

}

void _activation_check_proc_08_func_1509935328(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_473018320(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_08_func_1897266194(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activation_check_proc_08_func_473018320(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_08_func_552338340(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_chararray_b[0x9];

	_activatnvar_confusing_chararray_7[0x3] *= _activatnvar_confusing_chararray_a[0x0];

	_activation_check_proc_08_func_53311164(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_08_func_1973851484(_activatnvar_confusing_U8_2, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_e, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_08_func_53311164(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("0d7b8a64-cd21-4329-d83f-c269cbe139fe");

}

void _activation_check_proc_08_func_1973851484(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x4] == _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_08_func_556711273(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_08_func_2095222269(char& _activatnvar_confusing_char_9, bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_chararray_e[0x2] <<= _activatnvar_confusing_chararray_8[0x9];

	/* inline */ _activation_check_proc_08_func_1032558617(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_08_func_669757009(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_9, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_08_func_2016015875(_activatnvar_confusing_bool_2, _activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_08_func_455549306(_activatnvar_generic_bool_0, _activatnvar_generic_iterator, _activatnvar_doaccount);
}

void _activation_check_proc_08_func_294360796(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_08_func_344360662(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_lace;

}

void _activation_check_proc_08_func_1912081158(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_08_func_1238233064(U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_08_func_1912081158(_activatnvar_confusing_U8_1);
	_activation_check_proc_08_func_87204181(_activatnvar_confusing_U8_b);
	/* inline */ _activation_check_proc_08_func_1862798827(_activatnvar_confusing_int_4);
	_activation_check_proc_08_func_92593427();
}

void _activation_check_proc_08_func_87204181(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b |= 0x7;

}

void _activation_check_proc_08_func_92593427()
{
	
}

void _activation_check_proc_08_func_1287527115(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_1 <<= _activatnvar_confusing_char_c;

}

void _activation_check_proc_08_func_512386770(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_08_func_1597361916(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_666307(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_e[0xd] ^= _activatnvar_name_digest[0xf];

	/* inline */ _activation_check_proc_08_func_780100460(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_08_func_1882915514(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_3.mData[0x7] <<= _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_08_func_773884079(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_08_func_1402966827(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_0.mData[0xa];

}

void _activation_check_proc_08_func_1158671227(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_2111433911(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_14729697(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_a += _activatnvar_confusing_char_0;

	/* inline */ _activation_check_proc_08_func_1011640360(_activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_bool_f);
	_activation_check_proc_08_func_1678842715(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1678842715(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_08_func_1678611315(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xd] &= _activatnvar_confusing_LLUUID_4.mData[0xb];

}

void _activation_check_proc_08_func_962990435(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_1611666121(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_08_func_887465331(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_4 <<= _activatnvar_confusing_int_9;

}

void _activation_check_proc_08_func_1526299967()
{
	
}

void _activation_check_proc_08_func_438768227(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_08_func_1189433350(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_08_func_750595158(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_8.mData[0x5];

}

void _activation_check_proc_08_func_978999264(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 ^= 0x2;

}

void _activation_check_proc_08_func_1104774028(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_char_8 ^= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_08_func_539950403(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 *= _activatnvar_confusing_chararray_4[0xe];

}

void _activation_check_proc_08_func_590292664(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_08_func_1647026410(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("44ab2243-b53b-6de7-e356-b54ef195900f");

}

void _activation_check_proc_08_func_666027881(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("bbe2fea3-38e7-5091-eb15-9e5bf766c338");

}

void _activation_check_proc_08_func_1733218530(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_e)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] == _activatnvar_confusing_char_e) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_08_func_783271372(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	/* inline */ _activation_check_proc_08_func_1501888404(_activatnvar_confusing_chararray_4, _activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_08_func_1687571875(_activatnvar_confusing_int_2);
}

void _activation_check_proc_08_func_1955632301(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_8.mData[0xa];

	_activation_check_proc_08_func_1907475124(_activatnvar_confusing_LLUUID_e, _activatnvar_name_digest);
}

void _activation_check_proc_08_func_1907475124(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_e.mData[0x5] <<= _activatnvar_name_digest[0xe];

}

void _activation_check_proc_08_func_1312318700(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_08_func_220394347(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x7] == 0x0) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_08_func_1843501771(_activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_08_func_823412168(_activatnvar_confusing_bool_c, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_08_func_616008175(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1843501771(bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_08_func_616008175(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_414493708(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_section2;

}

void _activation_check_proc_08_func_989759617(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_section2;

}

void _activation_check_proc_08_func_2015232971(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xe] += _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_08_func_2058048289(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_2, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_1;

	_activation_check_proc_08_func_2015232971(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_08_func_1437043802(_activatnvar_confusing_int_8);
}

void _activation_check_proc_08_func_1465792916(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_lace.mData[0xb];

}

void _activation_check_proc_08_func_399050756(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_chararray_7[0x2];

	_activation_check_proc_08_func_1465792916(_activatnvar_lace, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_08_func_943998398(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xb] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_08_func_1563319080(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x9] >>= _activatnvar_name_digest[0x8];

}

void _activation_check_proc_08_func_974771202(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] = _activatnvar_confusing_LLUUID_d.mData[0xc];

}

void _activation_check_proc_08_func_86592986(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_t0;

	/* inline */ _activation_check_proc_08_func_1871657511(_activatnvar_code, _activatnvar_confusing_chararray_d);
	_activation_check_proc_08_func_974771202(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_08_func_493176513(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_452046123(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] >>= _activatnvar_confusing_LLUUID_f.mData[0x8];

}

void _activation_check_proc_08_func_664014500(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_360719358(char& _activatnvar_feat, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_08_func_1575880410(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xd] *= _activatnvar_mac_digest[0xd];

	_activation_check_proc_08_func_747702207(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_553008369(_activatnvar_fscked, _activatnvar_code, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_char_0, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_553008369(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_4.mData[0x3];

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_747702207(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_08_func_851204055(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d >>= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_08_func_327933324(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f *= 0x7;

}

void _activation_check_proc_08_func_397387582(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_f, U8& _activatnvar_confusing_U8_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x5] != _activatnvar_confusing_U8_f) _activatnvar_confusing_bool_f = true;

	/* inline */ _activation_check_proc_08_func_1651397248(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_327933324(_activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_08_func_954450475(_activatnvar_confusing_chararray_9, _activatnvar_lace);
	_activation_check_proc_08_func_851204055(_activatnvar_confusing_U8_e, _activatnvar_confusing_char_d);
	/* inline */ _activation_check_proc_08_func_507979036(_activatnvar_confusing_int_8);
}

void _activation_check_proc_08_func_163212594(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_d)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x5] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_f = true;

	_activatnvar_confusing_chararray_c[0x2] >>= _activatnvar_confusing_chararray_d[0x8];

}

void _activation_check_proc_08_func_1175615489(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_0.mData[0xb] |= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_08_func_1026197064(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_809771952(char& _activatnvar_confusing_char_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_int_9 <<= 0x3;

	_activation_check_proc_08_func_1026197064(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_157604088(_activatnvar_confusing_char_c, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_08_func_528807531(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_08_func_157604088(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_c |= 0x1;

}

void _activation_check_proc_08_func_1447079514(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_08_func_2136121598(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_827666636(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_530515519(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xb] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_08_func_221226501(bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_08_func_807557428(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_5.mData[0x8] |= _activatnvar_confusing_chararray_8[0xc];

	_activatnvar_confusing_char_4 >>= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_08_func_110314926(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xb] <<= _activatnvar_section2.mData[0x7];

	/* inline */ _activation_check_proc_08_func_36351670(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_9);
	_activation_check_proc_08_func_221226501(_activatnvar_doaccount, _activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_lace);
	_activation_check_proc_08_func_900166883(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_08_func_1335278339(_activatnvar_confusing_chararray_7, _activatnvar_confusing_U8_9);
	_activation_check_proc_08_func_807557428(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_6, _activatnvar_confusing_char_4, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_08_func_900166883(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_512283443(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_08_func_1626202333(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_08_func_214559523(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_08_func_1626202333(_activatnvar_confusing_int_3);
}

void _activation_check_proc_08_func_690427114(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_08_func_1431408297(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_1988348463(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_section2;

}

void _activation_check_proc_08_func_23713217(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("e5205abc-58f1-f436-73dd-ba194063ac40");

	_activation_check_proc_08_func_1988348463(_activatnvar_section2, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_08_func_1323246322(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_e[0xd] += _activatnvar_confusing_LLUUID_5.mData[0x4];

}

void _activation_check_proc_08_func_1778046121(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_1371723371(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_08_func_2020299458(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1547743415(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] >>= _activatnvar_confusing_chararray_3[0x1];

}

void _activation_check_proc_08_func_577884689(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x7] *= _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_08_func_1014330945(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_625042888(_activatnvar_confusing_LLUUID_7);
	_activation_check_proc_08_func_577884689(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_08_func_84084361();
}

void _activation_check_proc_08_func_2024151656(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] *= _activatnvar_confusing_LLUUID_2.mData[0x5];

}

void _activation_check_proc_08_func_1306841602(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_t1)
{
	_activatnvar_confusing_U8_0 *= _activatnvar_confusing_chararray_a[0xc];

	/* inline */ _activation_check_proc_08_func_550397388(_activatnvar_confusing_char_4, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_08_func_40731246(_activatnvar_t1);
}

void _activation_check_proc_08_func_1871500430(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_7.mData[0x1];

}

void _activation_check_proc_08_func_2040723333(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_08_func_1594429549(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_0)
{
	
	_activation_check_proc_08_func_1796932085(_activatnvar_confusing_U8_3, _activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_08_func_1796932085(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x0] == _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_08_func_101981788(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xf] == 0xe) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_08_func_906688365(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xa] += _activatnvar_confusing_chararray_4[0xd];

	_activation_check_proc_08_func_101981788(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_08_func_1236537201(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_08_func_436707388(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_1835271842(_activatnvar_confusing_bool_5, _activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_08_func_1314781673(_activatnvar_secret, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_08_func_661879486(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_9)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_9 *= _activatnvar_confusing_char_7;

	_activatnvar_confusing_LLUUID_7 = LLUUID("5503e088-5546-edb7-c4c8-77717ccf40b0");

	/* inline */ _activation_check_proc_08_func_1318728035(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_08_func_1875463726(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] <<= _activatnvar_confusing_chararray_0[0x7];

	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1956881913(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_990936619(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_886106913(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_secret;

}

void _activation_check_proc_08_func_1433557619(int& _activatnvar_confusing_int_5)
{
	
	/* inline */ _activation_check_proc_08_func_1452474626(_activatnvar_confusing_int_5);
}

void _activation_check_proc_08_func_1575319181(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_6[0xd] >>= _activatnvar_code.mData[0x9];

}

void _activation_check_proc_08_func_251184750(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_code)
{
	
	_activation_check_proc_08_func_1575319181(_activatnvar_confusing_chararray_6, _activatnvar_code);
}

void _activation_check_proc_08_func_1499204819(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_7[0xd] >>= _activatnvar_confusing_LLUUID_4.mData[0xa];

}

void _activation_check_proc_08_func_1338726062(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_08_func_1698290132(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] = _activatnvar_combined_id.mData[0x7];

	_activation_check_proc_08_func_1338726062(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_08_func_1382844186(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_08_func_255608193(U8& _activatnvar_t0, LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_0, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_08_func_549047701(_activatnvar_t0);
	_activation_check_proc_08_func_1382844186(_activatnvar_t1, _activatnvar_pos, _activatnvar_so);
	_activation_check_proc_08_func_1454974834(_activatnvar_confusing_char_0);
}

void _activation_check_proc_08_func_1454974834(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_08_func_549047701(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_08_func_658377196(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_08_func_1824060443(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_7)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_08_func_535743884(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_08_func_535743884(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xe] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_08_func_1499542291(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_08_func_101682054(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

	/* inline */ _activation_check_proc_08_func_590217044(_activatnvar_confusing_char_e, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_08_func_1762818001(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_08_func_889739486(LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_08_func_643631349(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_2013544466(bool& _activatnvar_confusing_bool_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_7;

	_activation_check_proc_08_func_643631349(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_08_func_1320846551(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1459075709(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("92563a37-b284-47e6-5c37-11669f429b35");

}

void _activation_check_proc_08_func_722009792(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_e <<= _activatnvar_confusing_char_9;

}

void _activation_check_proc_08_func_399834550(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_08_func_577402460(char& _activatnvar_confusing_char_e, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_a)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_e &= _activatnvar_confusing_char_a;

}

void _activation_check_proc_08_func_718225826(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x5] |= _activatnvar_confusing_LLUUID_a.mData[0x2];

}

void _activation_check_proc_08_func_1259249560(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_08_func_1188085106(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_08_func_1371816903(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_08_func_1157429680(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1945251894(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_section2;

}

void _activation_check_proc_08_func_895194912(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_doaccount;

}

void _activation_check_proc_08_func_1804465786(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_08_func_829052702(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b += _activatnvar_confusing_chararray_2[0x9];

}

void _activation_check_proc_08_func_1321092904(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= _activatnvar_confusing_LLUUID_c.mData[0x4];

}

void _activation_check_proc_08_func_2098128532(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xb] <<= _activatnvar_mac_digest[0x5];

}

void _activation_check_proc_08_func_1915106169(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 += 0x5;

}

void _activation_check_proc_08_func_320475081(int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_LLUUID_e.mData[0x5];

	_activation_check_proc_08_func_1915106169(_activatnvar_confusing_int_7);
}

void _activation_check_proc_08_func_2122400158(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_4 += _activatnvar_confusing_char_e;

	/* inline */ _activation_check_proc_08_func_403590696(_activatnvar_confusing_U8_b);
}

void _activation_check_proc_08_func_892838101(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x4] >>= _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_08_func_1669628780(int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_3)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_08_func_892838101(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_08_func_1371337491(_activatnvar_confusing_int_3, _activatnvar_confusing_U8_7, _activatnvar_confusing_chararray_2, _activatnvar_confusing_int_d);
}

void _activation_check_proc_08_func_145031851(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_6 <<= 0x7;

}

void _activation_check_proc_08_func_1226885380(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1000682269(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("e2d8505a-b4c4-4611-917b-7f595e3815f9");

	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_7.mData[0xd];

	_activation_check_proc_08_func_1226885380(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_681442884(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_08_func_681442884(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x4] <<= _activatnvar_confusing_LLUUID_c.mData[0x4];

}

void _activation_check_proc_08_func_1468530105(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_464347831()
{
	
}

void _activation_check_proc_08_func_2106510821(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_char_d;

}

void _activation_check_proc_08_func_780038677(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_e[0xb] >>= _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_08_func_329404084(unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x2] <<= _activatnvar_confusing_chararray_4[0x1];

}

void _activation_check_proc_08_func_1939352807(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_08_func_1136782034(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_0, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_0 ^= _activatnvar_confusing_chararray_1[0x6];

	_activation_check_proc_08_func_329404084(_activatnvar_confusing_chararray_4);
	_activation_check_proc_08_func_713402042(_activatnvar_confusing_char_6, _activatnvar_confusing_chararray_7);
	_activation_check_proc_08_func_1939352807(_activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_08_func_1968108977();
}

void _activation_check_proc_08_func_1968108977()
{
	
}

void _activation_check_proc_08_func_713402042(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_6 ^= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_08_func_115877078()
{
	
}

void _activation_check_proc_08_func_1713934070(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_08_func_1039734756(char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_char_a++;

	_activation_check_proc_08_func_290495180(_activatnvar_confusing_U8_2, _activatnvar_confusing_bool_6, _activatnvar_confusing_char_b);
}

void _activation_check_proc_08_func_290495180(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_b = _activatnvar_confusing_U8_2;

}

void _activation_check_proc_08_func_2029577125(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_LLUUID_0.mData[0x5];

}

void _activation_check_proc_08_func_619699388(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_08_func_635267373(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_4 += 0x2;

}

void _activation_check_proc_08_func_662525121(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_f = true;

	_activation_check_proc_08_func_2063592495(_activatnvar_confusing_char_c, _activatnvar_code);
}

void _activation_check_proc_08_func_2063592495(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_c = _activatnvar_code.mData[0xe];

}

void _activation_check_proc_08_func_2105169472(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_pos, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_5 = true;

	_activation_check_proc_08_func_166072697(_activatnvar_t0, _activatnvar_confusing_bool_2, _activatnvar_confusing_bool_e, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_08_func_166072697(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_08_func_1423294583(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d = 0x3;

	_activation_check_proc_08_func_1219601366(_activatnvar_confusing_int_a);
	_activation_check_proc_08_func_1387763500(_activatnvar_lace, _activatnvar_fscked);
	_activation_check_proc_08_func_1987151348(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_08_func_1219601366(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_08_func_1987151348(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_08_func_1387763500(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
}

void _activation_check_proc_08_func_1794663855(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x9] = _activatnvar_confusing_LLUUID_b.mData[0x4];

}

void _activation_check_proc_08_func_2007185440(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_f >>= _activatnvar_confusing_int_c;

}

void _activation_check_proc_08_func_1854170492(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_e[0x8] ^= _activatnvar_name_digest[0x8];

}

void _activation_check_proc_08_func_1176318069(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1130525160(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_08_func_693229555(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_a *= _activatnvar_confusing_int_7;

}

void _activation_check_proc_08_func_615169455(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_08_func_24341625(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_1337306243(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1337306243(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1535753880(LLUUID& _activatnvar_so, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_so;

	/* inline */ _activation_check_proc_08_func_1667797089(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_677154911(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a <<= 0x9;

}

void _activation_check_proc_08_func_2076355653(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xf] >>= _activatnvar_mac_digest[0x3];

}

void _activation_check_proc_08_func_1133027408(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_08_func_1765848217(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_8 = true;

	/* inline */ _activation_check_proc_08_func_1278772138(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_08_func_1984254337(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_08_func_176651615(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x0] >>= _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_08_func_55510143(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_a += _activatnvar_confusing_chararray_2[0x0];

}

void _activation_check_proc_08_func_737344025(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_LLUUID_7.mData[0x0];

	/* inline */ _activation_check_proc_08_func_835138812(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_6);
	_activation_check_proc_08_func_1409052189(_activatnvar_section2, _activatnvar_confusing_chararray_3);
	_activation_check_proc_08_func_4624544(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_lace);
	_activation_check_proc_08_func_55510143(_activatnvar_confusing_U8_a, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_08_func_1409052189(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x2] >>= _activatnvar_section2.mData[0x8];

}

void _activation_check_proc_08_func_4624544(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1445257217()
{
	
}

void _activation_check_proc_08_func_219475819(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_08_func_681019758(_activatnvar_confusing_LLUUID_9);
	_activation_check_proc_08_func_1445257217();
}

void _activation_check_proc_08_func_681019758(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("8fc6ba5d-5071-8241-6719-bd7b78591c36");

}

void _activation_check_proc_08_func_116416017(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_08_func_1317771434(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_a[0x7] += _activatnvar_confusing_chararray_1[0x9];

	_activation_check_proc_08_func_116416017(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_08_func_1797693817(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_08_func_1606581250(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_08_func_516813061(_activatnvar_lace, _activatnvar_fscked, _activatnvar_generic_iterator);
	_activation_check_proc_08_func_1235436746(_activatnvar_confusing_U8_7, _activatnvar_fscked);
}

void _activation_check_proc_08_func_1235436746(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_7 = _activatnvar_fscked.mData[0x2];

}

void _activation_check_proc_08_func_1513115624(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_08_func_403561420(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_doaccount;

}

void _activation_check_proc_08_func_1768810721(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_1 ^= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_08_func_344329777(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("72c4de5e-336b-a9b7-9ce8-d62f9fac085b");

	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_08_func_2057094560()
{
	
}

void _activation_check_proc_08_func_369013362(int& _activatnvar_confusing_int_b, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_U8_0++;

	/* inline */ _activation_check_proc_08_func_273391478(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_08_func_453911585(_activatnvar_confusing_int_b);
	_activation_check_proc_08_func_2057094560();
}

void _activation_check_proc_08_func_129903146(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_a |= 0xf;

	/* inline */ _activation_check_proc_08_func_1573687715(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_2);
	/* inline */ _activation_check_proc_08_func_1824018695(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_08_func_166531665(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1018684402(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_3, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 ^= 0x8;

	/* inline */ _activation_check_proc_08_func_860947978(_activatnvar_confusing_char_3, _activatnvar_confusing_bool_c, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_08_func_755043541(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_7.mData[0xc] <<= _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_08_func_657543528(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_3 <<= 0x9;

	_activation_check_proc_08_func_754494278(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	_activation_check_proc_08_func_1213508309(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1213508309(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_08_func_754494278(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_829885080(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_897713845(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

	/* inline */ _activation_check_proc_08_func_1517146330(_activatnvar_confusing_chararray_b, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_08_func_2048549069(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x3] != 0xc) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_08_func_1939717793(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_08_func_797847655(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("0372d339-700e-f5d8-69ba-8299904fa9d6");

	_activation_check_proc_08_func_791394902(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_791394902(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1400177615(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_100864402(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_552845772(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_2034836292(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_U8_4 *= _activatnvar_confusing_chararray_f[0xe];

	/* inline */ _activation_check_proc_08_func_909856427(_activatnvar_confusing_int_6);
}

void _activation_check_proc_08_func_715389129(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1649068595(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_b <<= _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_08_func_579433907(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_909224102(bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_c[0x2] += _activatnvar_confusing_LLUUID_4.mData[0xd];

	_activation_check_proc_08_func_1707058204(_activatnvar_generic_bool_0);
}

void _activation_check_proc_08_func_1707058204(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_08_func_309646016(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 = 0x6;

}

void _activation_check_proc_08_func_1428172623(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_08_func_1035231130(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 125; _activatnvar_strbuf_0[0] ^= 60; _activatnvar_strbuf_0[1] = 31; _activatnvar_strbuf_0[1] ^= 124; _activatnvar_strbuf_0[2] = 75; _activatnvar_strbuf_0[2] ^= 63; _activatnvar_strbuf_0[3] = 92; _activatnvar_strbuf_0[3] ^= 53; _activatnvar_strbuf_0[4] = 83; _activatnvar_strbuf_0[4] ^= 37; _activatnvar_strbuf_0[5] = 73; _activatnvar_strbuf_0[5] ^= 40; _activatnvar_strbuf_0[6] = 94; _activatnvar_strbuf_0[6] ^= 42; _activatnvar_strbuf_0[7] = 72; _activatnvar_strbuf_0[7] ^= 33; _activatnvar_strbuf_0[8] = 68; _activatnvar_strbuf_0[8] ^= 43; _activatnvar_strbuf_0[9] = 84; _activatnvar_strbuf_0[9] ^= 58; _activatnvar_strbuf_0[10] = 106; _activatnvar_strbuf_0[10] ^= 41; _activatnvar_strbuf_0[11] = 106; _activatnvar_strbuf_0[11] ^= 5; _activatnvar_strbuf_0[12] = 18; _activatnvar_strbuf_0[12] ^= 118; _activatnvar_strbuf_0[13] = 98; _activatnvar_strbuf_0[13] ^= 7; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_08_func_1344454834(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_chararray_4[0x2];

}

void _activation_check_proc_08_func_1920056833(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_08_func_1726657771(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x4] |= _activatnvar_confusing_LLUUID_d.mData[0xa];

	/* inline */ _activation_check_proc_08_func_712324141(_activatnvar_doaccount, _activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_feat);
}

void _activation_check_proc_08_func_1895194022(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1396712570(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_08_func_914225093(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_08_func_249007685(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("067d61d2-2536-b8ff-3436-c0a5028d993b");

}

void _activation_check_proc_08_func_1438615482(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_08_func_201044008(_activatnvar_doaccount, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_08_func_1503191887(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_08_func_519523113(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_0.mData[0xf];

}

void _activation_check_proc_08_func_21278411(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_519523113(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_08_func_153831961(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] ^= _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_08_func_1515538873(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 <<= 0x4;

}

void _activation_check_proc_08_func_821518323(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_293822213(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x1] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_08_func_66380600(unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x3] <<= _activatnvar_confusing_chararray_1[0x4];

	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_LLUUID_4.mData[0x9] ^= _activatnvar_confusing_LLUUID_0.mData[0x3];

	_activation_check_proc_08_func_293822213(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_08_func_798479967(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_3[0xd] <<= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_08_func_1256602055(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_9.mData[0xb] <<= _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_08_func_532420073(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_08_func_411702784(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("54bebed5-816b-9e61-15c7-d8c659dad640");

}

void _activation_check_proc_08_func_894708858(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_6;

	_activation_check_proc_08_func_532420073(_activatnvar_t0);
	_activation_check_proc_08_func_1256602055(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_b);
	_activation_check_proc_08_func_411702784(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_08_func_576440471(char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_08_func_1482633109(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_08_func_627847229(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t0, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_9 = true;

	/* inline */ _activation_check_proc_08_func_315020920(_activatnvar_confusing_char_2, _activatnvar_confusing_chararray_3);
	_activation_check_proc_08_func_8727123(_activatnvar_confusing_int_1);
	_activation_check_proc_08_func_1482633109(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_f, _activatnvar_t0);
}

void _activation_check_proc_08_func_8727123(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_08_func_172646177(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1417347719(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_e.mData[0x3];

}

void _activation_check_proc_08_func_1320998326(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_08_func_427773575(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_08_func_84918509(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

	_activation_check_proc_08_func_2000083249(_activatnvar_confusing_U8_3, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_08_func_2000083249(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_3 += _activatnvar_confusing_chararray_1[0x7];

}

void _activation_check_proc_08_func_1501668931(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_1391206919(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_08_func_1701837292()
{
	
}

void _activation_check_proc_08_func_581634357(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_08_func_2060743176(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_08_func_1948379403(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_08_func_1762166195(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_combined_id)
{
	
	_activation_check_proc_08_func_1948379403(_activatnvar_confusing_int_4);
	_activation_check_proc_08_func_2060743176(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_0);
	_activation_check_proc_08_func_581634357(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_08_func_1894273573(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_08_func_458924233(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_f;

	/* inline */ _activation_check_proc_08_func_642745931();
	_activation_check_proc_08_func_1894273573(_activatnvar_generic_bool_0);
}

void _activation_check_proc_08_func_29792770(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_0, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_0 <<= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_08_func_346165391(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_7, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_08_func_29792770(_activatnvar_confusing_U8_7, _activatnvar_confusing_char_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_08_func_595857516(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = 0xb;

}

void _activation_check_proc_08_func_747833697(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_7 <<= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_08_func_643025988(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xc] >>= _activatnvar_confusing_LLUUID_9.mData[0x7];

}

void _activation_check_proc_08_func_1261048908(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_08_func_193859527(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_08_func_76955248(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_08_func_2100326116(U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d ^= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_08_func_573458898(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x0] *= _activatnvar_confusing_chararray_9[0xb];

	/* inline */ _activation_check_proc_08_func_1877000778(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_08_func_1959293008(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_5)
{
	
	_activation_check_proc_08_func_762504947(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_08_func_762504947(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_08_func_1831595043(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_LLUUID_d.mData[0xa];

}

void _activation_check_proc_08_func_1653124877(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_08_func_1975884105(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_08_func_1518321890(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_08_func_380364108(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_08_func_1250383317(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x5] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_08_func_1509267911(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_926777843(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_08_func_1521251635(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_08_func_294076437(char& _activatnvar_feat, int& _activatnvar_confusing_int_2, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_08_func_1480570280(_activatnvar_generic_iterator, _activatnvar_confusing_int_2);
}

void _activation_check_proc_08_func_1480570280(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 >>= _activatnvar_generic_iterator;

}

void _activation_check_proc_08_func_2010738065(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_b[0xa] >>= _activatnvar_confusing_LLUUID_5.mData[0xa];

	_activation_check_proc_08_func_1931230459(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_08_func_1931230459(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] ^= _activatnvar_confusing_LLUUID_5.mData[0xb];

}

void _activation_check_proc_08_func_1070935596(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_08_func_456194730(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_U8_c ^= _activatnvar_confusing_chararray_5[0xf];

	/* inline */ _activation_check_proc_08_func_18731614(_activatnvar_confusing_char_f, _activatnvar_confusing_U8_e, _activatnvar_generic_bool_0);
	_activation_check_proc_08_func_1070935596(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_08_func_1342231733(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 *= 0x3;

}

void _activation_check_proc_08_func_1772642353(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_d)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x5] != _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_08_func_430775026(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_08_func_527592974(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("867a5347-198c-40a8-be78-800eaf9c614c");

}

void _activation_check_proc_08_func_1711365791(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_08_func_903796427(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1541481292(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1835922881(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x3] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_08_func_1976552113(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_a |= _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_08_func_1133227909(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_8 &= _activatnvar_confusing_char_2;

	_activatnvar_confusing_chararray_8[0x5] &= _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_08_func_1215543074(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] ^= _activatnvar_confusing_chararray_a[0x1];

	_activation_check_proc_08_func_1133227909(_activatnvar_confusing_char_8, _activatnvar_confusing_char_2, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_08_func_1580629423(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_08_func_51769913(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_08_func_119018387(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_08_func_1401098551()
{
	
}

void _activation_check_proc_08_func_1185662484()
{
	
	_activation_check_proc_08_func_1401098551();
}

void _activation_check_proc_08_func_506759068(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_08_func_2069029413(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_1375368925(_activatnvar_confusing_char_c, _activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1311599956(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_855601053(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_08_func_42627814(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_08_func_1562043422(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 += _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_08_func_972680928(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("c2284365-e2c0-fb04-4716-9ee11a0926b4");

}

void _activation_check_proc_08_func_726045806(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	
	_activation_check_proc_08_func_972680928(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_08_func_1753747157(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_08_func_784733662(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_a.mData[0x0] ^= _activatnvar_mac_digest[0x3];

}

void _activation_check_proc_08_func_1943952732(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_08_func_1093623652(_activatnvar_generic_iterator);
}

void _activation_check_proc_08_func_1093623652(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1276459414(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_4[0xe] = _activatnvar_confusing_chararray_9[0x3];

}

void _activation_check_proc_08_func_1031861002(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x0] <<= _activatnvar_confusing_LLUUID_3.mData[0x5];

}

void _activation_check_proc_08_func_1938140412(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] = _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_08_func_1379460040(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_e >>= _activatnvar_confusing_char_4;

	if(_activatnvar_confusing_LLUUID_f.mData[0x7] != _activatnvar_confusing_char_c) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_08_func_2042795318(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_c, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_int_1++;

	/* inline */ _activation_check_proc_08_func_1816454422(_activatnvar_confusing_chararray_f, _activatnvar_confusing_char_9);
	_activation_check_proc_08_func_1379460040(_activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_4, _activatnvar_confusing_char_4, _activatnvar_confusing_char_c, _activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_08_func_1622606088(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_08_func_1155632254(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_08_func_1735716727(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_08_func_280130204(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_7[0xf] &= _activatnvar_name_digest[0x5];

}

void _activation_check_proc_08_func_902353800(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xc] += _activatnvar_name_digest[0x6];

}

void _activation_check_proc_08_func_1325176962(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f ^= _activatnvar_confusing_int_e;

}

void _activation_check_proc_08_func_724202805(unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_08_func_1325176962(_activatnvar_confusing_int_e, _activatnvar_confusing_int_f);
	_activation_check_proc_08_func_902353800(_activatnvar_name_digest, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_08_func_748635199(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_chararray_c[0x4];

}

void _activation_check_proc_08_func_1437101952(char& _activatnvar_confusing_char_e, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_08_func_748635199(_activatnvar_confusing_chararray_c, _activatnvar_confusing_char_e);
}

void _activation_check_proc_08_func_2128604148(U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_chararray_2[0x4];

	/* inline */ _activation_check_proc_08_func_143751740(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_a, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_08_func_162273994(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_08_func_219200496(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_08_func_252296724(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_08_func_1415436971(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_08_func_1018075590(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_char_a |= _activatnvar_code.mData[0xe];

}

void _activation_check_proc_08_func_1607882043(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_chararray_b[0x9] |= _activatnvar_confusing_chararray_f[0x8];

	_activation_check_proc_08_func_1018075590(_activatnvar_confusing_char_a, _activatnvar_code);
	_activation_check_proc_08_func_1415436971(_activatnvar_confusing_int_1);
}

void _activation_check_proc_08_func_770123819(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_08_func_1100622366(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_08_func_851849379(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_08_func_575672387(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activatnvar_confusing_chararray_b[0x8] |= _activatnvar_name_digest[0xb];

}

void _activation_check_proc_08_func_788765825()
{
	
}

void _activation_check_proc_08_func_2033211990(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x4] &= _activatnvar_confusing_LLUUID_1.mData[0xe];

}

void _activation_check_proc_08_func_107142686(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_08_func_1313304202(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_08_func_307524821(U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("c1a0a0d2-5f67-220f-7650-4fac3b2d24a7");

	_activation_check_proc_08_func_1313304202(_activatnvar_t1, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_08_func_1969061266(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_08_func_112122733(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1141121390(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xc] = _activatnvar_confusing_LLUUID_6.mData[0xa];

}

void _activation_check_proc_08_func_1976048416(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_08_func_237566696(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_08_func_578162646(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_08_func_1193176639(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_code;

	_activation_check_proc_08_func_1701199506(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_08_func_1701199506(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_5.mData[0xe] ^= _activatnvar_confusing_chararray_b[0xf];

}

void _activation_check_proc_08_func_515895865(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_920511871(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] |= _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_08_func_973057258(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
	_activation_check_proc_08_func_336939071(_activatnvar_t0);
}

void _activation_check_proc_08_func_336939071(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_08_func_546743974(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_char_d *= _activatnvar_confusing_U8_c;

	_activation_check_proc_08_func_610123312(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_d);
	_activation_check_proc_08_func_488500031(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_08_func_488500031(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x4] ^= _activatnvar_confusing_LLUUID_0.mData[0x0];

}

void _activation_check_proc_08_func_610123312(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_1[0xc] >>= _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_08_func_1566531542(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x2] ^= _activatnvar_secret.mData[0x3];

}

void _activation_check_proc_08_func_1660494061(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x4] <<= _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_08_func_1567750879(bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_08_func_272728088(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x0] ^= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_08_func_2110226735(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_08_func_1444774227(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_08_func_1556191748(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_08_func_516809896()
{
	
}

void _activation_check_proc_08_func_2030432645(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_e[0xc] += _activatnvar_mac_digest[0x5];

}

void _activation_check_proc_08_func_1221240650(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("9a0d3a9a-bd76-0e5f-c22d-3466b2a3513c");

}

void _activation_check_proc_08_func_1746037549(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_6[0xd] >>= _activatnvar_confusing_chararray_a[0x3];

	_activation_check_proc_08_func_1567292926(_activatnvar_generic_iterator);
	_activation_check_proc_08_func_1083953483(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
	_activation_check_proc_08_func_2080428383(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_08_func_259835306(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
	_activation_check_proc_08_func_307776443(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_7, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_08_func_2080428383(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_307776443(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x7] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_08_func_1083953483(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_1567292926(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_08_func_2105057337(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x3] ^= _activatnvar_confusing_chararray_d[0x2];

}

void _activation_check_proc_08_func_213237656(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

	_activation_check_proc_08_func_2019796647(_activatnvar_confusing_chararray_e, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_08_func_2019796647(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_6)
{
	
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_08_func_481061638(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d *= 0x4;

}

void _activation_check_proc_08_func_1302156881(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_425607666(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_3++;

	_activatnvar_confusing_chararray_6[0x7] ^= _activatnvar_confusing_chararray_8[0xc];

}

void _activation_check_proc_08_func_1001703513(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_08_func_348220493(LLUUID& _activatnvar_so, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_08_func_1001703513(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_08_func_734437588(char& _activatnvar_confusing_char_1, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
	_activation_check_proc_08_func_1048469771(_activatnvar_combined_id, _activatnvar_confusing_char_1);
}

void _activation_check_proc_08_func_1048469771(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_08_func_931639635()
{
	
	/* inline */ _activation_check_proc_08_func_27937555();
}

void _activation_check_proc_08_func_1006538326(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_08_func_1855560004(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_08_func_892287608(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_2073182126(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_08_func_875378784(bool& _activatnvar_confusing_bool_d, int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_t0)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_d = false;

	_activation_check_proc_08_func_2073182126(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_08_func_609111403(_activatnvar_t0);
}

void _activation_check_proc_08_func_596759415(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_08_func_91586142(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_c |= _activatnvar_confusing_int_1;

}

void _activation_check_proc_08_func_206341404(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("4aba3725-2215-b42a-ef72-1f14a3c32a1a");

	_activation_check_proc_08_func_1742206075(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_0, _activatnvar_confusing_bool_4);
	_activation_check_proc_08_func_91586142(_activatnvar_confusing_int_c, _activatnvar_confusing_int_1);
}

void _activation_check_proc_08_func_1742206075(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_08_func_890525987(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x6] *= _activatnvar_secret.mData[0x9];

}

void _activation_check_proc_08_func_1803643578(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	_activation_check_proc_08_func_890525987(_activatnvar_secret, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_08_func_346422181(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_4 = _activatnvar_generic_iterator;

	_activation_check_proc_08_func_898909299(_activatnvar_fscked, _activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_08_func_898909299(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_281482645(int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_chararray_b[0x5];

	_activation_check_proc_08_func_766318704(_activatnvar_confusing_int_8);
}

void _activation_check_proc_08_func_766318704(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_08_func_387754199(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_08_func_668874065(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_pos)
{
	_activatnvar_confusing_chararray_3[0x7] ^= _activatnvar_confusing_chararray_f[0x5];

	_activation_check_proc_08_func_387754199(_activatnvar_pos);
}

void _activation_check_proc_08_func_1599474732(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_08_func_564345355(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_08_func_453541446(int& _activatnvar_confusing_int_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_08_func_1499219046(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_08_func_1369161294(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_08_func_832031532(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_08_func_1874717805()
{
	
}

void _activation_check_proc_08_func_2028911193(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_08_func_1556946545(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x9] != 0x5) _activatnvar_confusing_bool_d = true;

	_activatnvar_confusing_chararray_0[0x0] >>= _activatnvar_secret.mData[0x2];

	_activatnvar_confusing_chararray_6[0xf] += _activatnvar_confusing_LLUUID_b.mData[0x4];

	_activation_check_proc_08_func_2028911193(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_08_func_38767544(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	/* inline */ _activation_check_proc_08_func_817230102(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_char_9);
	/* inline */ _activation_check_proc_08_func_1678436825(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_08_func_1048736594(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_d.mData[0xd];

}

void _activation_check_proc_08_func_145390968(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("3402f787-fd3a-bb0c-2bbb-3cc0aa4368d1");

	
	/* inline */ _activation_check_proc_08_func_1629385157(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_1);
	_activation_check_proc_08_func_1048736594(_activatnvar_confusing_char_e, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_08_func_395554463(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_7++;

	_activatnvar_confusing_chararray_3[0x1] *= _activatnvar_confusing_LLUUID_d.mData[0x7];

	_activation_check_proc_08_func_887709277(_activatnvar_confusing_char_a, _activatnvar_so);
}

void _activation_check_proc_08_func_887709277(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_a &= _activatnvar_so.mData[0x5];

}

void _activation_check_proc_08_func_1296177113(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_08_func_1177619696(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 86; _activatnvar_strbuf_0[0] ^= 99; _activatnvar_strbuf_0[1] = 54; _activatnvar_strbuf_0[1] ^= 2; _activatnvar_strbuf_0[2] = 9; _activatnvar_strbuf_0[2] ^= 57; _activatnvar_strbuf_0[3] = 38; _activatnvar_strbuf_0[3] ^= 20; _activatnvar_strbuf_0[4] = 125; _activatnvar_strbuf_0[4] ^= 78; _activatnvar_strbuf_0[5] = 45; _activatnvar_strbuf_0[5] ^= 29; _activatnvar_strbuf_0[6] = 85; _activatnvar_strbuf_0[6] ^= 109; _activatnvar_strbuf_0[7] = 127; _activatnvar_strbuf_0[7] ^= 79; _activatnvar_strbuf_0[8] = 4; _activatnvar_strbuf_0[8] ^= 41; _activatnvar_strbuf_0[9] = 21; _activatnvar_strbuf_0[9] ^= 37; _activatnvar_strbuf_0[10] = 9; _activatnvar_strbuf_0[10] ^= 57; _activatnvar_strbuf_0[11] = 101; _activatnvar_strbuf_0[11] ^= 93; _activatnvar_strbuf_0[12] = 53; _activatnvar_strbuf_0[12] ^= 4; _activatnvar_strbuf_0[13] = 61; _activatnvar_strbuf_0[13] ^= 16; _activatnvar_strbuf_0[14] = 25; _activatnvar_strbuf_0[14] ^= 41; _activatnvar_strbuf_0[15] = 112; _activatnvar_strbuf_0[15] ^= 66; _activatnvar_strbuf_0[16] = 92; _activatnvar_strbuf_0[16] ^= 108; _activatnvar_strbuf_0[17] = 15; _activatnvar_strbuf_0[17] ^= 55; _activatnvar_strbuf_0[18] = 60; _activatnvar_strbuf_0[18] ^= 17; _activatnvar_strbuf_0[19] = 18; _activatnvar_strbuf_0[19] ^= 34; _activatnvar_strbuf_0[20] = 97; _activatnvar_strbuf_0[20] ^= 5; _activatnvar_strbuf_0[21] = 107; _activatnvar_strbuf_0[21] ^= 91; _activatnvar_strbuf_0[22] = 6; _activatnvar_strbuf_0[22] ^= 101; _activatnvar_strbuf_0[23] = 54; _activatnvar_strbuf_0[23] ^= 27; _activatnvar_strbuf_0[24] = 92; _activatnvar_strbuf_0[24] ^= 108; _activatnvar_strbuf_0[25] = 86; _activatnvar_strbuf_0[25] ^= 100; _activatnvar_strbuf_0[26] = 37; _activatnvar_strbuf_0[26] ^= 17; _activatnvar_strbuf_0[27] = 39; _activatnvar_strbuf_0[27] ^= 68; _activatnvar_strbuf_0[28] = 42; _activatnvar_strbuf_0[28] ^= 18; _activatnvar_strbuf_0[29] = 23; _activatnvar_strbuf_0[29] ^= 47; _activatnvar_strbuf_0[30] = 90; _activatnvar_strbuf_0[30] ^= 104; _activatnvar_strbuf_0[31] = 119; _activatnvar_strbuf_0[31] ^= 66; _activatnvar_strbuf_0[32] = 92; _activatnvar_strbuf_0[32] ^= 100; _activatnvar_strbuf_0[33] = 86; _activatnvar_strbuf_0[33] ^= 103; _activatnvar_strbuf_0[34] = 0; _activatnvar_strbuf_0[34] ^= 53; _activatnvar_strbuf_0[35] = 64; _activatnvar_strbuf_0[35] ^= 113; _activatnvar_strbuf_0[36] = 0;
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
