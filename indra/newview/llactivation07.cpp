// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation07.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 07

void _activation_check_proc_07_func_547075861(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_chararray_a[0x3];

}

void _activation_check_proc_07_func_335711546(int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_07_func_547075861(_activatnvar_confusing_char_9, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_07_func_621023007(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_07_func_1588182394(bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_07_func_99079170(_activatnvar_confusing_int_d);
}

void _activation_check_proc_07_func_99079170(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_07_func_909306502(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_07_func_115614785(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_LLUUID_7.mData[0x8];

}

void _activation_check_proc_07_func_1281758587(U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_U8_0;

	/* inline */ _activation_check_proc_07_func_15090213(_activatnvar_confusing_int_0);
}

void _activation_check_proc_07_func_1619908513(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x3] ^= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_07_func_78873651(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

	_activation_check_proc_07_func_1161852898();
	_activation_check_proc_07_func_1619908513(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_07_func_1273796614(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_07_func_1161852898()
{
	
}

void _activation_check_proc_07_func_1938196951(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_7 <<= _activatnvar_confusing_char_4;

}

void _activation_check_proc_07_func_1009537570(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_735955256(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("6075664c-f4fd-56ed-d261-53ae2b8a5b1b");

}

void _activation_check_proc_07_func_90975346(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1673582092(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 ^= 0xc;

	/* inline */ _activation_check_proc_07_func_1335772696(_activatnvar_confusing_bool_9, _activatnvar_confusing_U8_c, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_07_func_1866542158(_activatnvar_confusing_chararray_5, _activatnvar_confusing_int_7, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_07_func_1866542158(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x3] >>= _activatnvar_confusing_chararray_5[0xa];

	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_07_func_1468226096(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1166079329(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] |= _activatnvar_confusing_LLUUID_d.mData[0x8];

}

void _activation_check_proc_07_func_842170052(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_1 |= _activatnvar_secret.mData[0x7];

	_activation_check_proc_07_func_754877017(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_07_func_1489279197(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_07_func_754877017(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] += _activatnvar_confusing_chararray_4[0x4];

}

void _activation_check_proc_07_func_1489279197(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_436549610(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
	_activation_check_proc_07_func_317924572(_activatnvar_section1, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_07_func_108124836(_activatnvar_confusing_bool_7);
}

void _activation_check_proc_07_func_317924572(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_section1;

}

void _activation_check_proc_07_func_108124836(bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_07_func_620768953(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("cc0ab17b-e41b-bec7-7292-6ffcb669c93c");

}

void _activation_check_proc_07_func_35769885(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f = _activatnvar_so.mData[0x0];

}

void _activation_check_proc_07_func_1766265857(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x5] += _activatnvar_confusing_LLUUID_c.mData[0x9];

}

void _activation_check_proc_07_func_1275438758(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_07_func_263135824(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_f;

	_activation_check_proc_07_func_1275438758(_activatnvar_confusing_int_4);
}

void _activation_check_proc_07_func_1082585589(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_6)
{
	
	_activation_check_proc_07_func_1709288408(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_6, _activatnvar_confusing_char_6);
}

void _activation_check_proc_07_func_1709288408(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

	_activatnvar_confusing_U8_d *= _activatnvar_confusing_chararray_6[0x8];

}

void _activation_check_proc_07_func_1745571957(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 <<= 0x3;

}

void _activation_check_proc_07_func_656976185(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_07_func_1359932784(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_07_func_968734172(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_07_func_748119767(int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_chararray_f[0xa] <<= _activatnvar_confusing_chararray_f[0xf];

	_activatnvar_confusing_int_3 *= _activatnvar_confusing_int_e;

}

void _activation_check_proc_07_func_552395989(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_07_func_1677282477(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_9[0xe] <<= _activatnvar_confusing_LLUUID_e.mData[0x2];

	_activation_check_proc_07_func_552395989(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_07_func_1350318425(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_07_func_1065732534(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] += _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_07_func_316356066(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_07_func_1404986496(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("9cb628af-896c-d876-03d7-29d9b02ae5b2");

}

void _activation_check_proc_07_func_188976388(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xc] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_07_func_1404986496(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_07_func_921883489(int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_1 ^= _activatnvar_confusing_int_b;

	_activation_check_proc_07_func_54112643(_activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_07_func_1742612369(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_07_func_54112643(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_07_func_655614267(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_07_func_1658065300(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_feat, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_a)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xa] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_f = true;

	_activation_check_proc_07_func_655614267(_activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_feat);
}

void _activation_check_proc_07_func_287895598(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_f ^= _activatnvar_confusing_char_0;

}

void _activation_check_proc_07_func_320156127(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_07_func_1068199555(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_07_func_2123774700()
{
	
}

void _activation_check_proc_07_func_741036061(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_b;

	/* inline */ _activation_check_proc_07_func_595505645(_activatnvar_fscked, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_07_func_497196125(bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_07_func_448855747(int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_8[0xe] &= _activatnvar_confusing_LLUUID_9.mData[0xa];

	/* inline */ _activation_check_proc_07_func_1477675153(_activatnvar_confusing_int_7);
}

void _activation_check_proc_07_func_192270421(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x8] |= _activatnvar_ser_digest[0x2];

}

void _activation_check_proc_07_func_255281463(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_chararray_d[0xb] += _activatnvar_confusing_LLUUID_5.mData[0xf];

	_activation_check_proc_07_func_191259340(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_07_func_191259340(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_07_func_1534898842(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_7 ^= _activatnvar_confusing_char_9;

}

void _activation_check_proc_07_func_273584697(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_07_func_842726436(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x9] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_07_func_1925230340(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1869926853()
{
	
}

void _activation_check_proc_07_func_99447674(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_07_func_1878933717(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_07_func_466120883(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] &= _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_07_func_607147817(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("7d5d9af0-07d6-e937-0177-a92916c3e115");

}

void _activation_check_proc_07_func_1060097736(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a += _activatnvar_confusing_int_7;

	_activation_check_proc_07_func_607147817(_activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_07_func_1539652469(_activatnvar_confusing_int_b);
}

void _activation_check_proc_07_func_1405553510(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_07_func_1556268066(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_246241381(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] += _activatnvar_fscked.mData[0x1];

	_activation_check_proc_07_func_1556268066(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_251330295(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_969690955(bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_07_func_2035024150(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_chararray_a[0x6];

}

void _activation_check_proc_07_func_1714060668(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_07_func_1245277423(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_07_func_1541021886(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_f *= 0x0;

}

void _activation_check_proc_07_func_965924694(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_07_func_1280205767(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 <<= _activatnvar_confusing_int_7;

	_activation_check_proc_07_func_965924694(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_07_func_739784794(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_0);
	_activation_check_proc_07_func_729982604(_activatnvar_confusing_bool_b, _activatnvar_confusing_char_1, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_07_func_729982604(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_8)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_8 >>= _activatnvar_confusing_char_1;

}

void _activation_check_proc_07_func_704511490(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_842706452(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1055152337(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_725104400(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_842706452(_activatnvar_generic_iterator);
	_activation_check_proc_07_func_1055152337(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_1296182188(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = 0xf;

}

void _activation_check_proc_07_func_1565483153(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_07_func_1216589893(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_char_d;

}

void _activation_check_proc_07_func_2128402873(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_9, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_6 *= _activatnvar_confusing_char_9;

}

void _activation_check_proc_07_func_1193380515(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d <<= _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_07_func_1996821446(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1457039396(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_07_func_418701380(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_0)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x7] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_07_func_999461460(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_07_func_2033639701(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_07_func_246054071(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("7b826014-201b-b5e1-ceb9-aeecb3467ba2");

}

void _activation_check_proc_07_func_686549766(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_LLUUID_f.mData[0xf];

	_activation_check_proc_07_func_1919164321(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_07_func_1477285291(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_07_func_1919164321(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_07_func_2132183819(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_07_func_663522639(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_07_func_2061546458(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_2, LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial, char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_2, BOOL& _activatnvar_success, U8& _activatnvar_confusing_U8_2, DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	_activation_check_proc_07_func_265104052(_activatnvar_success, _activatnvar_serial);
	/* inline */ _activation_check_proc_07_func_1874817438(_activatnvar_confusing_U8_2, _activatnvar_confusing_U8_c);
	_activation_check_proc_07_func_663522639(_activatnvar_confusing_int_2);
	_activation_check_proc_07_func_1799030717(_activatnvar_confusing_char_9, _activatnvar_confusing_chararray_2);
	_activation_check_proc_07_func_118637894(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_07_func_1973264347(_activatnvar_serial, _activatnvar_smd5);
}

void _activation_check_proc_07_func_1799030717(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_9 >>= _activatnvar_confusing_chararray_2[0x9];

}

void _activation_check_proc_07_func_118637894(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_07_func_265104052(BOOL& _activatnvar_success, DWORD& _activatnvar_serial)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_07_func_14690239(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_b, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_U8_5 ^= 0xc;

	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_b |= _activatnvar_confusing_U8_0;

	_activatnvar_confusing_int_6 ^= 0xe;

	/* inline */ _activation_check_proc_07_func_101807539(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_07_func_1305128633(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_07_func_174058994(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_951319520(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_char_b;

}

void _activation_check_proc_07_func_1351629430(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("1d6bc5c3-08c6-abed-ee69-78d335fc7730");

}

void _activation_check_proc_07_func_1054153087(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_07_func_714866017(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_secret;

	_activation_check_proc_07_func_1054153087(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_07_func_1476562780(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_3[0x6] = _activatnvar_confusing_chararray_b[0x9];

}

void _activation_check_proc_07_func_1988461215(int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_LLUUID_f.mData[0x7] += _activatnvar_confusing_chararray_3[0x8];

	/* inline */ _activation_check_proc_07_func_89440302(_activatnvar_confusing_int_f, _activatnvar_confusing_int_2);
}

void _activation_check_proc_07_func_424315232(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_07_func_2015710006(_activatnvar_confusing_chararray_c, _activatnvar_confusing_char_7);
}

void _activation_check_proc_07_func_2015710006(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 <<= _activatnvar_confusing_chararray_c[0x7];

}

void _activation_check_proc_07_func_1971676009(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
	/* inline */ _activation_check_proc_07_func_951481276(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_07_func_1101493064(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xf] != 0x2) _activatnvar_confusing_bool_b = false;

	_activation_check_proc_07_func_1043576528(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_07_func_1043576528(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_07_func_857421979(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_07_func_681390104(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] |= _activatnvar_confusing_LLUUID_c.mData[0x7];

	_activation_check_proc_07_func_857421979(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_07_func_1578902408(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] += _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_07_func_357721387(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_07_func_1578902408(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_07_func_438067622()
{
	
}

void _activation_check_proc_07_func_1376961753(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_6[0x6] <<= _activatnvar_confusing_chararray_5[0xf];

}

void _activation_check_proc_07_func_1903155623(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_07_func_1022641580(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] |= _activatnvar_confusing_chararray_0[0x1];

}

void _activation_check_proc_07_func_1701149318(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 >>= 0x1;

}

void _activation_check_proc_07_func_1070944116(int& _activatnvar_confusing_int_0, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_07_func_1178851166(_activatnvar_t0);
	_activation_check_proc_07_func_1701149318(_activatnvar_confusing_int_0);
}

void _activation_check_proc_07_func_169053966(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_07_func_861833618(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_07_func_1479865160(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_2)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_a = false;

	/* inline */ _activation_check_proc_07_func_599305404(_activatnvar_confusing_U8_f, _activatnvar_confusing_char_2);
}

void _activation_check_proc_07_func_333744786(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_5 = 0x1;

}

void _activation_check_proc_07_func_904088350(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_U8_3++;

	/* inline */ _activation_check_proc_07_func_300825852(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_5);
	_activation_check_proc_07_func_333744786(_activatnvar_confusing_U8_5, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_07_func_405860107(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x7] != 0x3) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_07_func_2006015422(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_07_func_808839607(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("53878f33-2a74-0446-c70a-36625d53e1f4");

	_activation_check_proc_07_func_2006015422(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_f, _activatnvar_confusing_bool_e);
	_activation_check_proc_07_func_405860107(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_07_func_78445169(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_1[0xa] = _activatnvar_name_digest[0x6];

	/* inline */ _activation_check_proc_07_func_509249418(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_07_func_678972959(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
}

void _activation_check_proc_07_func_1282621965(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0x4;

}

void _activation_check_proc_07_func_30899326(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 ^= 0x1;

}

void _activation_check_proc_07_func_270899546(int& _activatnvar_confusing_int_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_int_0 = 0xa;

	_activation_check_proc_07_func_30899326(_activatnvar_confusing_char_6);
}

void _activation_check_proc_07_func_1512828254(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_07_func_1859439572(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_char_1;

}

void _activation_check_proc_07_func_326564186(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_char_f >>= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_07_func_1880633974(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_2.mData[0xe];

}

void _activation_check_proc_07_func_1753659548(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_1880633974(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_07_func_1696915816(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_07_func_1542653968(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_07_func_569828174(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_07_func_1940347626(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_07_func_926902483(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_5.mData[0xe];

}

void _activation_check_proc_07_func_1692580648(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_8 &= 0xf;

}

void _activation_check_proc_07_func_2007587116(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] += _activatnvar_confusing_LLUUID_2.mData[0xb];

}

void _activation_check_proc_07_func_1764506826(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_07_func_1097652745()
{
	
}

void _activation_check_proc_07_func_1606975197(bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_07_func_1999740106(int& _activatnvar_confusing_int_2, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_int_2++;

	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_07_func_950707677(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x8] &= _activatnvar_secret.mData[0x8];

}

void _activation_check_proc_07_func_950157144(U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
	_activation_check_proc_07_func_950707677(_activatnvar_secret, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_07_func_906573757(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_07_func_799397869(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_982720337(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] >>= _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_07_func_1168183656(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("5cb1d1ef-c130-3407-cc39-7d621814724e");

	_activation_check_proc_07_func_982720337(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_07_func_313459683()
{
	
}

void _activation_check_proc_07_func_1141377793(LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_section2)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_5 = true;

	_activatnvar_so ^= _activatnvar_section2;
	_activatnvar_confusing_int_0 *= _activatnvar_confusing_int_9;

}

void _activation_check_proc_07_func_1540638731(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xf] = _activatnvar_section1.mData[0xf];

}

void _activation_check_proc_07_func_2088869917()
{
	
}

void _activation_check_proc_07_func_1402977049(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_U8_9;

	/* inline */ _activation_check_proc_07_func_624594970(_activatnvar_lace, _activatnvar_fscked);
	/* inline */ _activation_check_proc_07_func_1100046331(_activatnvar_confusing_char_b);
}

void _activation_check_proc_07_func_2091397510(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_07_func_231370151(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_07_func_398794167(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_07_func_931753244(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] &= _activatnvar_confusing_LLUUID_6.mData[0xe];

	_activation_check_proc_07_func_88177996(_activatnvar_confusing_U8_2, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_07_func_88177996(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 += _activatnvar_confusing_U8_2;

}

void _activation_check_proc_07_func_730792828(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_07_func_1423769054()
{
	
}

void _activation_check_proc_07_func_1795271164(int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_07_func_1984533362(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 ^= 0x6;

}

void _activation_check_proc_07_func_920021521(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_int_9 >>= 0x9;

	/* inline */ _activation_check_proc_07_func_1625135698(_activatnvar_confusing_int_9, _activatnvar_name_digest, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_07_func_1245094610()
{
	
}

void _activation_check_proc_07_func_998487338()
{
	
}

void _activation_check_proc_07_func_1170924720(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] |= _activatnvar_confusing_chararray_f[0x3];

	/* inline */ _activation_check_proc_07_func_904003003();
	_activation_check_proc_07_func_998487338();
}

void _activation_check_proc_07_func_498435750(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_section2;

}

void _activation_check_proc_07_func_293103176(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activation_check_proc_07_func_498435750(_activatnvar_confusing_LLUUID_d, _activatnvar_section2);
}

void _activation_check_proc_07_func_54311960(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_07_func_274070259(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_9 ^= _activatnvar_confusing_char_a;

}

void _activation_check_proc_07_func_1163114555(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_3 >>= _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_07_func_616737003(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_07_func_1566255409(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("2ad568a2-ca92-e83c-1c76-5f2f7d76e90e");

	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_07_func_228550758(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_t0 |= 8;
	/* inline */ _activation_check_proc_07_func_1370461074(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_07_func_515937422(char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_07_func_45253247(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_a.mData[0xb] ^= _activatnvar_confusing_LLUUID_c.mData[0x3];

	_activatnvar_confusing_chararray_f[0x6] = _activatnvar_confusing_LLUUID_4.mData[0xf];

	_activatnvar_confusing_char_2 |= _activatnvar_confusing_char_f;

}

void _activation_check_proc_07_func_31290604(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("fbbdfd7d-4cb3-f83b-3f98-2dc25e8343eb");

	_activation_check_proc_07_func_742945545(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_07_func_742945545(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] |= _activatnvar_confusing_chararray_0[0x2];

}

void _activation_check_proc_07_func_758361841(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x6] != _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_07_func_140925024(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_07_func_711204570(unsigned char* _activatnvar_name_digest, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_8)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
	_activation_check_proc_07_func_140925024(_activatnvar_confusing_U8_c);
	/* inline */ _activation_check_proc_07_func_2002637774(_activatnvar_confusing_int_8);
}

void _activation_check_proc_07_func_1990479927(bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_9, U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_3 += _activatnvar_confusing_U8_a;

	/* inline */ _activation_check_proc_07_func_804494201(_activatnvar_confusing_int_9);
}

void _activation_check_proc_07_func_1538276714(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xb] += _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_07_func_1824585541(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 |= 0xc;

	_activation_check_proc_07_func_1538276714(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_07_func_165986280(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1567704598(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1380971362(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1893026135(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xb] >>= _activatnvar_confusing_LLUUID_0.mData[0x5];

}

void _activation_check_proc_07_func_1873619699(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_a.mData[0xe] = _activatnvar_confusing_chararray_7[0xc];

	_activation_check_proc_07_func_165986280(_activatnvar_generic_iterator);
	_activation_check_proc_07_func_1567704598(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
	_activation_check_proc_07_func_1893026135(_activatnvar_confusing_LLUUID_0);
	_activation_check_proc_07_func_1380971362(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_803935074(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1788830352(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_07_func_1282202625(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_1032211146(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_07_func_1977831137(_activatnvar_confusing_U8_7, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_07_func_1032211146(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] = _activatnvar_confusing_LLUUID_4.mData[0x2];

}

void _activation_check_proc_07_func_2084435602(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1309145139(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_07_func_671574390(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1733446173(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1708352341(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_07_func_2124009904(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_07_func_75884297(int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_chararray_f[0xa];

	_activation_check_proc_07_func_2124009904(_activatnvar_confusing_int_a);
}

void _activation_check_proc_07_func_45818003(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_5.mData[0x5];

}

void _activation_check_proc_07_func_1438720623(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d &= 0x5;

	/* inline */ _activation_check_proc_07_func_2003818380(_activatnvar_generic_iterator);
	_activation_check_proc_07_func_45818003(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_char_c);
	_activation_check_proc_07_func_1850435791(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_07_func_229386383(_activatnvar_secret, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_07_func_456950435(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_code);
}

void _activation_check_proc_07_func_1850435791(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1386517242(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_07_func_656117368(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_07_func_1003710681(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	
	_activation_check_proc_07_func_855058893(_activatnvar_section2, _activatnvar_so);
}

void _activation_check_proc_07_func_855058893(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_07_func_606700026(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x5] &= _activatnvar_confusing_chararray_2[0x3];

}

void _activation_check_proc_07_func_546183997(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_07_func_1598990503(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= _activatnvar_confusing_int_5;

}

void _activation_check_proc_07_func_11265749(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 *= _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_07_func_1986499344(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_07_func_132466650(char& _activatnvar_confusing_char_3, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 *= 0x6;

	_activation_check_proc_07_func_1986499344(_activatnvar_combined_id, _activatnvar_t0);
	_activation_check_proc_07_func_11265749(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_3);
	/* inline */ _activation_check_proc_07_func_1866660652(_activatnvar_t0);
}

void _activation_check_proc_07_func_1400203450(unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_07_func_1214736013(_activatnvar_confusing_U8_0, _activatnvar_confusing_U8_6, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_07_func_2086087350(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_93020647(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_8 *= _activatnvar_confusing_char_b;

}

void _activation_check_proc_07_func_1713565843(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_b, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 >>= _activatnvar_confusing_int_e;

	_activation_check_proc_07_func_93020647(_activatnvar_confusing_char_8, _activatnvar_confusing_char_b);
}

void _activation_check_proc_07_func_1642656697(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_07_func_24206172(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_07_func_24206172(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("7c99a3e4-c39e-f90e-7ac2-c5d72b7f5950");

}

void _activation_check_proc_07_func_1873828767(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_07_func_1891975361(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_07_func_1470494420(int& _activatnvar_confusing_int_4)
{
	
	_activation_check_proc_07_func_1891975361(_activatnvar_confusing_int_4);
}

void _activation_check_proc_07_func_1772525531(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_8, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x7] == 0x7) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_5;

	_activation_check_proc_07_func_765115325(_activatnvar_confusing_char_7, _activatnvar_confusing_char_6);
	/* inline */ _activation_check_proc_07_func_1595999354(_activatnvar_confusing_int_9);
	/* inline */ _activation_check_proc_07_func_693296573(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_07_func_433354481(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_07_func_1976837931(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_765115325(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_char_7;

}

void _activation_check_proc_07_func_1230649303(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] |= _activatnvar_name_digest[0x7];

}

void _activation_check_proc_07_func_1395741613(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_a[0x1] >>= _activatnvar_confusing_chararray_4[0xd];

}

void _activation_check_proc_07_func_1481502348(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("0ba2698e-86be-747c-fd62-c72682903d1e");

}

void _activation_check_proc_07_func_1694026696(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_07_func_1560820130(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_4.mData[0x5];

}

void _activation_check_proc_07_func_1509372530(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_07_func_826420539(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] ^= _activatnvar_confusing_LLUUID_9.mData[0x6];

	_activation_check_proc_07_func_1509372530(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_f);
	_activation_check_proc_07_func_235118816();
}

void _activation_check_proc_07_func_235118816()
{
	
}

void _activation_check_proc_07_func_1980584705(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] *= _activatnvar_confusing_LLUUID_8.mData[0xd];

}

void _activation_check_proc_07_func_978858912(int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_char_4 ^= _activatnvar_confusing_chararray_1[0x1];

	_activatnvar_confusing_int_d >>= 0x5;

}

void _activation_check_proc_07_func_558475203(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_d, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_07_func_978858912(_activatnvar_confusing_int_d, _activatnvar_confusing_char_4, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_07_func_1376999447(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x8] <<= _activatnvar_confusing_chararray_9[0x7];

}

void _activation_check_proc_07_func_519916501(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x0] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_9;

	_activation_check_proc_07_func_90763196(_activatnvar_generic_iterator);
	_activation_check_proc_07_func_1279398913(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	_activation_check_proc_07_func_1376999447(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_07_func_90763196(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1279398913(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_07_func_138023951(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_07_func_178141604(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_3, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_07_func_1588694868(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_07_func_138023951(_activatnvar_confusing_chararray_b, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_07_func_1594770606(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_07_func_679827188(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_07_func_599274515(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_e = _activatnvar_lace.mData[0xb];

}

void _activation_check_proc_07_func_953725868(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 += 0xd;

}

void _activation_check_proc_07_func_1581670350(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_07_func_2028871704(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_07_func_322205896(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_7.mData[0x0] &= _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_07_func_359768250(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_7.mData[0xa] <<= _activatnvar_confusing_LLUUID_d.mData[0x4];

}

void _activation_check_proc_07_func_599735157(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e >>= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_07_func_1850022662(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("1bf8b610-4c25-80bb-9cd7-f6b187a6ee98");

	/* inline */ _activation_check_proc_07_func_2036736997(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	_activation_check_proc_07_func_1058771384(_activatnvar_generic_iterator);
	_activation_check_proc_07_func_599735157(_activatnvar_confusing_U8_d, _activatnvar_confusing_char_e);
	/* inline */ _activation_check_proc_07_func_1405784108(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_07_func_1058771384(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_30452461(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = _activatnvar_combined_id.mData[0x0];

	_activatnvar_pos = _activatnvar_combined_id.mData[4];
	/* inline */ _activation_check_proc_07_func_169878255(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_07_func_246795570(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1761106447(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_3 <<= _activatnvar_confusing_chararray_4[0x8];

}

void _activation_check_proc_07_func_2074536881(bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] ^= _activatnvar_confusing_chararray_b[0x8];

	_activation_check_proc_07_func_2100916900(_activatnvar_confusing_char_e, _activatnvar_confusing_bool_f, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_07_func_2100916900(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_1 >>= _activatnvar_confusing_char_e;

}

void _activation_check_proc_07_func_451092463(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_07_func_1513900598(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_07_func_1080374858(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_07_func_866460448(_activatnvar_pos);
}

void _activation_check_proc_07_func_1080374858(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] |= _activatnvar_confusing_LLUUID_b.mData[0xa];

}

void _activation_check_proc_07_func_591505647(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_248430904(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_591505647(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_07_func_962797148(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_07_func_1619693642(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b += _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_07_func_373402713(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] |= _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_07_func_566607700(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 7; _activatnvar_strbuf_0[0] ^= 49; _activatnvar_strbuf_0[1] = 49; _activatnvar_strbuf_0[1] ^= 1; _activatnvar_strbuf_0[2] = 63; _activatnvar_strbuf_0[2] ^= 11; _activatnvar_strbuf_0[3] = 53; _activatnvar_strbuf_0[3] ^= 4; _activatnvar_strbuf_0[4] = 0; _activatnvar_strbuf_0[4] ^= 51; _activatnvar_strbuf_0[5] = 18; _activatnvar_strbuf_0[5] ^= 113; _activatnvar_strbuf_0[6] = 101; _activatnvar_strbuf_0[6] ^= 85; _activatnvar_strbuf_0[7] = 114; _activatnvar_strbuf_0[7] ^= 64; _activatnvar_strbuf_0[8] = 34; _activatnvar_strbuf_0[8] ^= 15; _activatnvar_strbuf_0[9] = 0; _activatnvar_strbuf_0[9] ^= 48; _activatnvar_strbuf_0[10] = 98; _activatnvar_strbuf_0[10] ^= 80; _activatnvar_strbuf_0[11] = 82; _activatnvar_strbuf_0[11] ^= 102; _activatnvar_strbuf_0[12] = 75; _activatnvar_strbuf_0[12] ^= 125; _activatnvar_strbuf_0[13] = 11; _activatnvar_strbuf_0[13] ^= 38; _activatnvar_strbuf_0[14] = 101; _activatnvar_strbuf_0[14] ^= 85; _activatnvar_strbuf_0[15] = 91; _activatnvar_strbuf_0[15] ^= 107; _activatnvar_strbuf_0[16] = 27; _activatnvar_strbuf_0[16] ^= 40; _activatnvar_strbuf_0[17] = 111; _activatnvar_strbuf_0[17] ^= 95; _activatnvar_strbuf_0[18] = 81; _activatnvar_strbuf_0[18] ^= 124; _activatnvar_strbuf_0[19] = 93; _activatnvar_strbuf_0[19] ^= 111; _activatnvar_strbuf_0[20] = 41; _activatnvar_strbuf_0[20] ^= 24; _activatnvar_strbuf_0[21] = 8; _activatnvar_strbuf_0[21] ^= 56; _activatnvar_strbuf_0[22] = 102; _activatnvar_strbuf_0[22] ^= 95; _activatnvar_strbuf_0[23] = 50; _activatnvar_strbuf_0[23] ^= 31; _activatnvar_strbuf_0[24] = 55; _activatnvar_strbuf_0[24] ^= 15; _activatnvar_strbuf_0[25] = 115; _activatnvar_strbuf_0[25] ^= 75; _activatnvar_strbuf_0[26] = 67; _activatnvar_strbuf_0[26] ^= 118; _activatnvar_strbuf_0[27] = 28; _activatnvar_strbuf_0[27] ^= 45; _activatnvar_strbuf_0[28] = 8; _activatnvar_strbuf_0[28] ^= 60; _activatnvar_strbuf_0[29] = 99; _activatnvar_strbuf_0[29] ^= 90; _activatnvar_strbuf_0[30] = 67; _activatnvar_strbuf_0[30] ^= 115; _activatnvar_strbuf_0[31] = 38; _activatnvar_strbuf_0[31] ^= 71; _activatnvar_strbuf_0[32] = 86; _activatnvar_strbuf_0[32] ^= 53; _activatnvar_strbuf_0[33] = 77; _activatnvar_strbuf_0[33] ^= 117; _activatnvar_strbuf_0[34] = 88; _activatnvar_strbuf_0[34] ^= 61; _activatnvar_strbuf_0[35] = 58; _activatnvar_strbuf_0[35] ^= 9; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_07_func_1044073387(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_457058503(_activatnvar_confusing_int_6);
}

void _activation_check_proc_07_func_457058503(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_07_func_669489015(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x1] = _activatnvar_confusing_chararray_b[0xd];

	_activation_check_proc_07_func_753230164(_activatnvar_fscked, _activatnvar_confusing_char_4);
}

void _activation_check_proc_07_func_753230164(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_fscked.mData[0x3];

}

void _activation_check_proc_07_func_13606633(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_char_2;

}

void _activation_check_proc_07_func_1448267574(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x1] <<= _activatnvar_confusing_chararray_2[0xb];

}

void _activation_check_proc_07_func_509727297(bool& _activatnvar_confusing_bool_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x9] >>= _activatnvar_lace.mData[0x2];

	_activation_check_proc_07_func_1494358784(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_07_func_1177440021(_activatnvar_lace, _activatnvar_fscked, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_07_func_1703946233(_activatnvar_lace, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_07_func_1494358784(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_07_func_1537827144(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x2] += _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_07_func_643397653(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("41b466a1-7565-1a6e-28b7-1ece2b04c79b");

}

void _activation_check_proc_07_func_2024268484(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_1;

	_activation_check_proc_07_func_643397653(_activatnvar_confusing_LLUUID_3);
	_activation_check_proc_07_func_1537827144(_activatnvar_fscked, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_07_func_1925121600(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_07_func_1777439316(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_07_func_677441999(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_07_func_125337231(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_949621311(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_char_1 |= _activatnvar_secret.mData[0xe];

}

void _activation_check_proc_07_func_2068057676(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_5[0xd] ^= _activatnvar_mac_digest[0x2];

}

void _activation_check_proc_07_func_832410769(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
	_activation_check_proc_07_func_949621311(_activatnvar_confusing_char_1, _activatnvar_secret);
	_activation_check_proc_07_func_2068057676(_activatnvar_confusing_chararray_5, _activatnvar_mac_digest);
}

void _activation_check_proc_07_func_1481019517(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xe] += _activatnvar_section1.mData[0x2];

}

void _activation_check_proc_07_func_793346557(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x2] == 0x0) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_07_func_1071046113(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_3, char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 107; _activatnvar_strbuf_0[0] ^= 90; _activatnvar_strbuf_0[1] = 53; _activatnvar_strbuf_0[1] ^= 5; _activatnvar_strbuf_0[2] = 47; _activatnvar_strbuf_0[2] ^= 28; _activatnvar_strbuf_0[3] = 53; _activatnvar_strbuf_0[3] ^= 1; _activatnvar_strbuf_0[4] = 68; _activatnvar_strbuf_0[4] ^= 38; _activatnvar_strbuf_0[5] = 72; _activatnvar_strbuf_0[5] ^= 46; _activatnvar_strbuf_0[6] = 87; _activatnvar_strbuf_0[6] ^= 49; _activatnvar_strbuf_0[7] = 119; _activatnvar_strbuf_0[7] ^= 65; _activatnvar_strbuf_0[8] = 79; _activatnvar_strbuf_0[8] ^= 98; _activatnvar_strbuf_0[9] = 23; _activatnvar_strbuf_0[9] ^= 117; _activatnvar_strbuf_0[10] = 45; _activatnvar_strbuf_0[10] ^= 26; _activatnvar_strbuf_0[11] = 112; _activatnvar_strbuf_0[11] ^= 68; _activatnvar_strbuf_0[12] = 47; _activatnvar_strbuf_0[12] ^= 31; _activatnvar_strbuf_0[13] = 119; _activatnvar_strbuf_0[13] ^= 90; _activatnvar_strbuf_0[14] = 104; _activatnvar_strbuf_0[14] ^= 88; _activatnvar_strbuf_0[15] = 70; _activatnvar_strbuf_0[15] ^= 32; _activatnvar_strbuf_0[16] = 16; _activatnvar_strbuf_0[16] ^= 114; _activatnvar_strbuf_0[17] = 90; _activatnvar_strbuf_0[17] ^= 62; _activatnvar_strbuf_0[18] = 89; _activatnvar_strbuf_0[18] ^= 116; _activatnvar_strbuf_0[19] = 72; _activatnvar_strbuf_0[19] ^= 121; _activatnvar_strbuf_0[20] = 66; _activatnvar_strbuf_0[20] ^= 33; _activatnvar_strbuf_0[21] = 14; _activatnvar_strbuf_0[21] ^= 108; _activatnvar_strbuf_0[22] = 19; _activatnvar_strbuf_0[22] ^= 117; _activatnvar_strbuf_0[23] = 74; _activatnvar_strbuf_0[23] ^= 103; _activatnvar_strbuf_0[24] = 79; _activatnvar_strbuf_0[24] ^= 123; _activatnvar_strbuf_0[25] = 31; _activatnvar_strbuf_0[25] ^= 41; _activatnvar_strbuf_0[26] = 48; _activatnvar_strbuf_0[26] ^= 5; _activatnvar_strbuf_0[27] = 87; _activatnvar_strbuf_0[27] ^= 52; _activatnvar_strbuf_0[28] = 13; _activatnvar_strbuf_0[28] ^= 61; _activatnvar_strbuf_0[29] = 59; _activatnvar_strbuf_0[29] ^= 10; _activatnvar_strbuf_0[30] = 85; _activatnvar_strbuf_0[30] ^= 49; _activatnvar_strbuf_0[31] = 58; _activatnvar_strbuf_0[31] ^= 8; _activatnvar_strbuf_0[32] = 88; _activatnvar_strbuf_0[32] ^= 105; _activatnvar_strbuf_0[33] = 47; _activatnvar_strbuf_0[33] ^= 77; _activatnvar_strbuf_0[34] = 118; _activatnvar_strbuf_0[34] ^= 18; _activatnvar_strbuf_0[35] = 22; _activatnvar_strbuf_0[35] ^= 35; _activatnvar_strbuf_0[36] = 0;
	_activation_check_proc_07_func_442576839();
	_activation_check_proc_07_func_793346557(_activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_07_func_442576839()
{
	
}

void _activation_check_proc_07_func_926000433(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_07_func_2129654692(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_07_func_1791604879(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1991274670(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_8.mData[0x0] >>= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_07_func_1086510294(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_U8_9 >>= _activatnvar_confusing_char_f;

}

void _activation_check_proc_07_func_279066078(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_07_func_456581665(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_07_func_636148719(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_0 <<= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_07_func_2017216237(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_1;

	/* inline */ _activation_check_proc_07_func_941985148(_activatnvar_generic_bool_1, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_1960187093(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x2] *= _activatnvar_mac_digest[0xc];

}

void _activation_check_proc_07_func_1054977286(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_07_func_1638201963(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_07_func_757210312(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_07_func_1680141713();
}

void _activation_check_proc_07_func_1655256464(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("49ecff7c-a000-3447-6aa8-c0fb95418765");

}

void _activation_check_proc_07_func_1755393324(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1287423612(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 = 0x5;

}

void _activation_check_proc_07_func_678340512(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_LLUUID_6.mData[0x8] |= _activatnvar_confusing_LLUUID_6.mData[0x6];

	_activation_check_proc_07_func_1287423612(_activatnvar_confusing_char_8);
}

void _activation_check_proc_07_func_1586217994(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_8)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_8 >>= _activatnvar_pos;

}

void _activation_check_proc_07_func_1492042783(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_9[0x8] += _activatnvar_confusing_chararray_3[0x2];

}

void _activation_check_proc_07_func_1875232097(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] >>= _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_07_func_1522710591(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_9 = _activatnvar_confusing_U8_1;

}

void _activation_check_proc_07_func_932784735(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_07_func_1184991568(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_07_func_676731297(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x1] *= _activatnvar_section2.mData[0x4];

}

void _activation_check_proc_07_func_1963445305(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_07_func_1674713330(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_doaccount = false;
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_07_func_1370839053(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_5.mData[0x0] <<= _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_07_func_1470895868(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xd] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_07_func_45368376(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_67537501(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_07_func_372968911(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_secret.mData[0xb];

}

void _activation_check_proc_07_func_1942323509(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_07_func_689017857(_activatnvar_confusing_U8_2, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_07_func_689017857(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_8[0x7];

}

void _activation_check_proc_07_func_1796640036(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_64190896(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 ^= 0x3;

}

void _activation_check_proc_07_func_1457034671(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_07_func_1384475972(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_07_func_1384475972(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_9[0x8] <<= _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_07_func_538695285(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 &= 0xa;

}

void _activation_check_proc_07_func_1912121034(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x0] &= _activatnvar_confusing_LLUUID_9.mData[0x0];

}

void _activation_check_proc_07_func_1687464863()
{
	
}

void _activation_check_proc_07_func_427129829(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_so.mData[0x6];

	_activation_check_proc_07_func_1687464863();
	_activation_check_proc_07_func_538695285(_activatnvar_confusing_char_6);
	_activation_check_proc_07_func_1912121034(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_07_func_1289411811(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_char_5 *= _activatnvar_confusing_U8_8;

	_activatnvar_confusing_U8_1 = _activatnvar_confusing_chararray_6[0xe];

	/* inline */ _activation_check_proc_07_func_1124221674(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_07_func_359813060(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1160571057(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_07_func_286940205(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_07_func_1706797391();
}

void _activation_check_proc_07_func_1706797391()
{
	
}

void _activation_check_proc_07_func_1907357463(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_07_func_541348424(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("f482c9b7-9038-e2ca-f9c9-35e814aedd35");

}

void _activation_check_proc_07_func_699442925(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_2 ^= 0x6;

	if(_activatnvar_confusing_LLUUID_9.mData[0x9] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_07_func_1632865330(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_07_func_197764052(std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
}

void _activation_check_proc_07_func_353565578(std::string& _activatnvar_fullname, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_197764052(_activatnvar_fullname);
}

void _activation_check_proc_07_func_51605095(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xc] *= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_07_func_985425029(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_t1)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] == _activatnvar_t1) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_07_func_110857185(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1458520931(char& _activatnvar_confusing_char_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_LLUUID_c.mData[0x8];

	/* inline */ _activation_check_proc_07_func_2027803421(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_106566863(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_47857016(U8& _activatnvar_pos, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

	_activatnvar_pos &= 7;
}

void _activation_check_proc_07_func_1513852061(int& _activatnvar_confusing_int_e, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b *= 0xe;

	/* inline */ _activation_check_proc_07_func_1599168259(_activatnvar_confusing_char_e, _activatnvar_confusing_chararray_a);
	_activation_check_proc_07_func_47857016(_activatnvar_pos, _activatnvar_confusing_int_e);
}

void _activation_check_proc_07_func_1339841549(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("5500714f-d127-c471-bf67-51bf5d3c3173");

}

void _activation_check_proc_07_func_92616536(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_07_func_2008492677(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("1bcd17bf-dbbb-c90e-b0cb-93419725efb1");

	_activation_check_proc_07_func_92616536(_activatnvar_confusing_U8_6, _activatnvar_section1);
}

void _activation_check_proc_07_func_2025390422(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_07_func_1930562249(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 += _activatnvar_confusing_chararray_1[0x0];

	_activation_check_proc_07_func_2025390422(_activatnvar_confusing_U8_b);
}

void _activation_check_proc_07_func_441958375(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	/* inline */ _activation_check_proc_07_func_271326328(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_318635525(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_07_func_503614987(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_2[0xe] &= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_07_func_193327000(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_7 |= _activatnvar_confusing_char_6;

}

void _activation_check_proc_07_func_30815568(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xe] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_07_func_79174346(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_07_func_1672769223(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_c.mData[0xf] <<= _activatnvar_confusing_LLUUID_9.mData[0x8];

}

void _activation_check_proc_07_func_859701972(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_e = _activatnvar_section2.mData[0x1];

	/* inline */ _activation_check_proc_07_func_1201004522(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_07_func_1303676582(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_906677161(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_07_func_729923990(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_07_func_273358529(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_a;

	_activation_check_proc_07_func_1302058659(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_1, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_07_func_1302058659(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_1;

	_activatnvar_confusing_LLUUID_d.mData[0x0] &= _activatnvar_confusing_LLUUID_5.mData[0x5];

}

void _activation_check_proc_07_func_1821069248(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_490026874(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1954757942(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_c.mData[0x7] |= _activatnvar_ser_digest[0x7];

	_activation_check_proc_07_func_490026874(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_07_func_370036014(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_int_6 &= 0xff;

	if(_activatnvar_confusing_LLUUID_f.mData[0xf] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_07_func_474568195(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_4, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("2300c1e1-a1c4-d738-b49d-ed6bf736f2b1");

	/* inline */ _activation_check_proc_07_func_426999990(_activatnvar_confusing_chararray_e, _activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_07_func_2002298730(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_f);
	_activation_check_proc_07_func_370036014(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_a, _activatnvar_confusing_int_6, _activatnvar_confusing_U8_3);
	_activation_check_proc_07_func_1023650647(_activatnvar_confusing_int_c);
	_activation_check_proc_07_func_674728481(_activatnvar_confusing_bool_4, _activatnvar_confusing_U8_d);
	/* inline */ _activation_check_proc_07_func_1481723412(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_07_func_1023650647(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= 0x4;

}

void _activation_check_proc_07_func_674728481(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_d)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_d ^= 0x0;

}

void _activation_check_proc_07_func_1796526704(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x6] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_07_func_449707189(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_07_func_741041117(U8& _activatnvar_t0, char& _activatnvar_confusing_char_6, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
	/* inline */ _activation_check_proc_07_func_358496396(_activatnvar_confusing_char_6);
}

void _activation_check_proc_07_func_1856963885(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] *= _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_07_func_1956807352(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("5c293612-d37d-01eb-e2af-f205544eaa3f");

}

void _activation_check_proc_07_func_649270646(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_int_2 = _activatnvar_confusing_int_2;

	/* inline */ _activation_check_proc_07_func_1324661763(_activatnvar_confusing_char_4, _activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_07_func_876462031(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_07_func_993324551(_activatnvar_confusing_U8_7, _activatnvar_confusing_bool_4);
	/* inline */ _activation_check_proc_07_func_1770591151(_activatnvar_confusing_U8_3);
	/* inline */ _activation_check_proc_07_func_471559497(_activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_07_func_2096535077(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_07_func_173775564(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_07_func_1621527983(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_857826437(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x1] &= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_07_func_2056996381(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_07_func_780759020(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("957fd5cb-a9af-6322-ea65-99896978128e");

	_activation_check_proc_07_func_1667615792();
}

void _activation_check_proc_07_func_1667615792()
{
	
}

void _activation_check_proc_07_func_1512024991(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_7++;

	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_07_func_326592211(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_8)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_8 = _activatnvar_confusing_char_b;

	_activation_check_proc_07_func_614596413(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_07_func_614596413(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_07_func_1024771163(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_07_func_347472467(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("1ec61c3a-0f68-ee98-075f-93490afb5ce2");

}

void _activation_check_proc_07_func_61046178(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x3] >>= _activatnvar_section1.mData[0xa];

}

void _activation_check_proc_07_func_902234806(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_c |= 0x0;

}

void _activation_check_proc_07_func_1976148144(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_07_func_371663494(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1603253391(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_3[0xa] = _activatnvar_name_digest[0xd];

}

void _activation_check_proc_07_func_867099414(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_a |= _activatnvar_combined_id.mData[0x5];

	/* inline */ _activation_check_proc_07_func_2089679926(_activatnvar_so, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_07_func_194539589(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_07_func_2070460067(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_f[0x3] |= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_07_func_1857000209(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_07_func_712725593(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x0] *= _activatnvar_confusing_chararray_7[0x5];

}

void _activation_check_proc_07_func_1535953758(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 ^= 0x3;

	/* inline */ _activation_check_proc_07_func_123058698(_activatnvar_generic_iterator);
	_activation_check_proc_07_func_712725593(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_5);
	_activation_check_proc_07_func_75683799(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_07_func_977882606(_activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_c);
	_activation_check_proc_07_func_604997940(_activatnvar_confusing_U8_b, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_07_func_75683799(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_07_func_604997940(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_chararray_4[0x2];

}

void _activation_check_proc_07_func_1092489299(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_1, char* _activatnvar_strbuf_0, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x6] != _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_e = false;

	/* inline */ _activation_check_proc_07_func_1862848863(_activatnvar_strbuf_0, _activatnvar_secret);
	_activation_check_proc_07_func_1490267936(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_1490267936(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_07_func_336932465(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_07_func_794930548(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_07_func_984859450(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] += _activatnvar_confusing_LLUUID_d.mData[0x9];

}

void _activation_check_proc_07_func_2015072340(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_07_func_1755923269(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("3cec2013-5833-4229-1505-5c8dee27a278");

}

void _activation_check_proc_07_func_730260701(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_07_func_541989720(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x1] &= _activatnvar_confusing_LLUUID_5.mData[0x9];

	/* inline */ _activation_check_proc_07_func_760902664(_activatnvar_generic_iterator);
	_activation_check_proc_07_func_834553508(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked);
}

void _activation_check_proc_07_func_834553508(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_690370501(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_b[0xd] |= _activatnvar_confusing_chararray_2[0x4];

	/* inline */ _activation_check_proc_07_func_53009806();
}

void _activation_check_proc_07_func_1167478948(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_fscked.mData[0x3];

}

void _activation_check_proc_07_func_1460433658()
{
	
}

void _activation_check_proc_07_func_2049236431(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_LLUUID_a.mData[0xf];

	_activation_check_proc_07_func_580545499(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_07_func_580545499(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_07_func_18642398(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_d.mData[0x8] = _activatnvar_confusing_LLUUID_9.mData[0xe];

}

void _activation_check_proc_07_func_1637997395(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_07_func_125827271(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_6[0x1] = _activatnvar_code.mData[0xe];

}

void _activation_check_proc_07_func_1177200249(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_07_func_1890745045(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1632310585(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x8] = _activatnvar_confusing_chararray_e[0x6];

}

void _activation_check_proc_07_func_1565399172(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x8] == 0x0) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_07_func_471112077(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

	_activation_check_proc_07_func_1565399172(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_07_func_761980039(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_07_func_333114802(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] = _activatnvar_code.mData[0x5];

	_activation_check_proc_07_func_967227661(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_967227661(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_2046227127(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("462d2a92-01e3-d2a3-b915-6f0a60fd7462");

}

void _activation_check_proc_07_func_2021673881(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 <<= _activatnvar_confusing_char_7;

}

void _activation_check_proc_07_func_78181529(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_923652979(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_07_func_1059623363(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_chararray_a[0x2];

}

void _activation_check_proc_07_func_881171940(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_9 >>= 0x9;

}

void _activation_check_proc_07_func_1602399039(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_1 |= _activatnvar_t0;

}

void _activation_check_proc_07_func_81527530(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_07_func_708101950(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x1] >>= _activatnvar_code.mData[0xa];

}

void _activation_check_proc_07_func_1541004712(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_07_func_1136658263(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_07_func_1449769920(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_4, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_07_func_1136658263(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_07_func_885610253(_activatnvar_t0);
	/* inline */ _activation_check_proc_07_func_509089366(_activatnvar_confusing_int_4);
}

void _activation_check_proc_07_func_666295084(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_07_func_1374498362(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_07_func_1664761640(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_07_func_1763545499(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_07_func_1253629584(U8& _activatnvar_confusing_U8_5)
{
	
	_activation_check_proc_07_func_1763545499(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_07_func_1005989021(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d ^= 0x8;

}

void _activation_check_proc_07_func_1415463309(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xe] &= _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_07_func_1780170312(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_d)
{
	
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_07_func_1722441523(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_07_func_1681645409(_activatnvar_confusing_U8_9, _activatnvar_generic_bool_0, _activatnvar_confusing_char_6);
}

void _activation_check_proc_07_func_1936739389(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 += 0x6;

}

void _activation_check_proc_07_func_1406750431(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_1 |= _activatnvar_confusing_char_4;

	_activation_check_proc_07_func_1810203537(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_5);
	_activation_check_proc_07_func_1936739389(_activatnvar_confusing_int_1);
}

void _activation_check_proc_07_func_1810203537(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x7] += _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_07_func_987096944(char& _activatnvar_feat, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_e, U8& _activatnvar_pos, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_e *= _activatnvar_feat;

	/* inline */ _activation_check_proc_07_func_1502118798();
	_activation_check_proc_07_func_1131900457(_activatnvar_pos, _activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_07_func_1131900457(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_pos &= 7;
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_07_func_168188785(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_c.mData[0xd] += _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_07_func_706549218(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] &= _activatnvar_confusing_chararray_6[0xb];

}

void _activation_check_proc_07_func_1663635501(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xa] += _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_07_func_1417054151(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_b += _activatnvar_confusing_char_4;

}

void _activation_check_proc_07_func_914514536(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_4, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xa] += _activatnvar_confusing_chararray_e[0xa];

	/* inline */ _activation_check_proc_07_func_1034956629(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_07_func_1417054151(_activatnvar_confusing_char_b, _activatnvar_confusing_bool_0, _activatnvar_confusing_char_4);
	_activation_check_proc_07_func_55340580();
	/* inline */ _activation_check_proc_07_func_1825725516(_activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_07_func_75702034(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_07_func_55340580()
{
	
}

void _activation_check_proc_07_func_239498008(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_5[0xc] *= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_07_func_999201469(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("38fcbf32-c98b-eb6c-5bb8-98b768c8ff9c");

}

void _activation_check_proc_07_func_1343735863(int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

	/* inline */ _activation_check_proc_07_func_1119617936(_activatnvar_confusing_int_f);
}

void _activation_check_proc_07_func_1341159786(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_07_func_1704534733(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1782588283(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_char_0;

	/* inline */ _activation_check_proc_07_func_1489743895(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_07_func_1248959964(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1725219895(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_chararray_c[0xe] >>= _activatnvar_secret.mData[0x0];

	_activation_check_proc_07_func_1281989123(_activatnvar_confusing_int_a);
}

void _activation_check_proc_07_func_1281989123(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a = 0x3;

}

void _activation_check_proc_07_func_325851235(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_07_func_1510263934(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_d.mData[0x8] <<= _activatnvar_so.mData[0x7];

	/* inline */ _activation_check_proc_07_func_840630059(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_07_func_1346826485(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_07_func_2122323466(U8& _activatnvar_confusing_U8_9, char* _activatnvar_strbuf_0, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_c[0xb] *= _activatnvar_section2.mData[0xa];

	/* inline */ _activation_check_proc_07_func_1349495906(_activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_07_func_461830953(_activatnvar_secret, _activatnvar_confusing_U8_9, _activatnvar_confusing_chararray_2, _activatnvar_strbuf_0);
}

void _activation_check_proc_07_func_1268558587(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_6;

	/* inline */ _activation_check_proc_07_func_1504167738(_activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_07_func_104902050(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_1 *= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_07_func_1429211949(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_d)
{
	
	_activation_check_proc_07_func_104902050(_activatnvar_confusing_U8_1, _activatnvar_confusing_bool_a, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_07_func_1119291980(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_846789665(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	
	/* inline */ _activation_check_proc_07_func_1333166591(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_07_func_493074772(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_07_func_1827078978(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("b0a579f4-ec35-2033-7524-2708fa1a11b1");

	_activation_check_proc_07_func_493074772(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_07_func_1978175414(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x5] ^= _activatnvar_confusing_LLUUID_e.mData[0xe];

}

void _activation_check_proc_07_func_480157240(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_572777942(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x1] &= _activatnvar_lace.mData[0x6];

}

void _activation_check_proc_07_func_584762180(U8& _activatnvar_t0, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 &= _activatnvar_t0;

}

void _activation_check_proc_07_func_698337412(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_3 ^= _activatnvar_confusing_int_4;

	_activation_check_proc_07_func_480157240(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
	_activation_check_proc_07_func_584762180(_activatnvar_t0, _activatnvar_confusing_char_5);
	_activation_check_proc_07_func_572777942(_activatnvar_lace, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_07_func_680921494(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_07_func_1050219545(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_3;

	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_07_func_937833669(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xa] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_07_func_620147990(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_8[0x7] &= _activatnvar_confusing_LLUUID_2.mData[0xe];

	/* inline */ _activation_check_proc_07_func_887292534(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_07_func_629754002(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_07_func_2140017660(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_U8_0;

	_activation_check_proc_07_func_403763894(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_07_func_403763894(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("722660ec-e93f-d7ee-bae5-b684d4c81db6");

}

void _activation_check_proc_07_func_1520346233(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_07_func_1388966293(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_b = 0x7;

}

void _activation_check_proc_07_func_354450308(U8& _activatnvar_confusing_U8_5, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_3)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_07_func_1376215848(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_07_func_1803251582(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x9] &= _activatnvar_confusing_chararray_9[0x1];

}

void _activation_check_proc_07_func_1533298757(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_2 ^= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_07_func_825802350(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_07_func_1501514130(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_1501514130(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_2018502899(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_LLUUID_4.mData[0xe];

}

void _activation_check_proc_07_func_99817997(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_1, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

	/* inline */ _activation_check_proc_07_func_1193213979(_activatnvar_confusing_U8_1, _activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_a, _activatnvar_generic_bool_1);
}

void _activation_check_proc_07_func_443630636(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_07_func_1610044492(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_07_func_1549524918(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x5] >>= _activatnvar_confusing_LLUUID_d.mData[0xd];

}

void _activation_check_proc_07_func_1318851517(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] >>= _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_07_func_285053565(LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("41517a50-907d-3e9f-4782-0c8c5025c93f");

	_activation_check_proc_07_func_1318851517(_activatnvar_section1, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_07_func_882116603(_activatnvar_confusing_int_2);
}

void _activation_check_proc_07_func_882116603(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 >>= 0x4;

}

void _activation_check_proc_07_func_639954651(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_07_func_729782123(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_2)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_2 <<= _activatnvar_confusing_char_d;

}

void _activation_check_proc_07_func_1177296127(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 ^= 0x7;

}

void _activation_check_proc_07_func_1712153214(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_c)
{
	
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_9 &= _activatnvar_confusing_char_1;

}

void _activation_check_proc_07_func_608257078(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_int_f >>= 0xf;

	/* inline */ _activation_check_proc_07_func_1880822877(_activatnvar_confusing_chararray_d, _activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_07_func_1086875605(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	_activation_check_proc_07_func_1715281465(_activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_07_func_1715281465(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x3] != 0xe) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_07_func_433668770(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_07_func_1304521740(char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_990672440(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("6400ed6e-1483-ae3b-f92c-4c2315c9ae60");

}

void _activation_check_proc_07_func_1880584341(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_c |= _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_07_func_1364822000(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("c676c4d9-7c3a-03ad-f9e4-dc6e4a40af05");

	/* inline */ _activation_check_proc_07_func_1995658983(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_07_func_869229009(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_c);
	_activation_check_proc_07_func_1277527464(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_07_func_1277527464(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("ced3cacc-a09c-ce0a-c9cc-949a6b69d1f6");

}

void _activation_check_proc_07_func_1672331679(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_1807157943(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_1807157943(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_415923034(bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_07_func_867028753(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_07_func_548438206(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= 0x4;

}

void _activation_check_proc_07_func_1368581815(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_1;

	_activation_check_proc_07_func_548438206(_activatnvar_confusing_char_b);
	_activation_check_proc_07_func_1854925880(_activatnvar_confusing_chararray_6, _activatnvar_confusing_char_4);
	_activation_check_proc_07_func_867028753(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_07_func_1854925880(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_chararray_6[0xe];

}

void _activation_check_proc_07_func_1258201650(bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_combined_id)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_2 *= _activatnvar_confusing_U8_6;

	/* inline */ _activation_check_proc_07_func_546975427(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
}

void _activation_check_proc_07_func_526591621(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_f, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_9 <<= _activatnvar_confusing_U8_a;

	_activation_check_proc_07_func_55088031(_activatnvar_confusing_int_f, _activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_07_func_1324342279(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_07_func_55088031(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 <<= _activatnvar_confusing_int_f;

}

void _activation_check_proc_07_func_2014604012(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x8] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_07_func_1117884104(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_07_func_751932913(U8& _activatnvar_pos, int& _activatnvar_confusing_int_d)
{
	
	/* inline */ _activation_check_proc_07_func_1714974543(_activatnvar_confusing_int_d);
	_activation_check_proc_07_func_1117884104(_activatnvar_pos);
}

void _activation_check_proc_07_func_1319977817(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] >>= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_07_func_1782333748(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("d3e2fe58-0ec7-b801-3dbc-ca6b9d0310f9");

}

void _activation_check_proc_07_func_877828411(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_b[0xe] *= _activatnvar_confusing_LLUUID_f.mData[0x5];

	_activation_check_proc_07_func_1782333748(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_07_func_512940828(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_e[0xa] >>= _activatnvar_confusing_LLUUID_7.mData[0x1];

}

void _activation_check_proc_07_func_1852693483(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_512940828(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_07_func_1404787277(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_b += 0xb;

}

void _activation_check_proc_07_func_1010874653(U8& _activatnvar_t0, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_07_func_104680457(_activatnvar_t0);
	_activation_check_proc_07_func_216800809(_activatnvar_t0);
}

void _activation_check_proc_07_func_104680457(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_07_func_216800809(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_07_func_593797329(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1474668321(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_07_func_117429362(LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_8[0xd] *= _activatnvar_confusing_chararray_d[0x5];

	_activation_check_proc_07_func_1474668321(_activatnvar_smd5);
}

void _activation_check_proc_07_func_880606651(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_3.mData[0x0] <<= _activatnvar_confusing_LLUUID_d.mData[0x8];

}

void _activation_check_proc_07_func_1482211620(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_07_func_1801538018(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("aaa191a3-4540-df08-ca90-206457823f21");

	_activation_check_proc_07_func_1482211620(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_07_func_993811674(_activatnvar_confusing_int_f, _activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_07_func_556024828(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_07_func_1917608345(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_95943861(int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activation_check_proc_07_func_119845775(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_119845775(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1339775013()
{
	
}

void _activation_check_proc_07_func_14382536()
{
	
}

void _activation_check_proc_07_func_1756348376(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_07_func_14382536();
}

void _activation_check_proc_07_func_1979744650(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_07_func_1140881563(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_07_func_811207533(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_07_func_117424604(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_07_func_811207533(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_07_func_169040149(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x5] == 0x2) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_07_func_1867069653(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_07_func_2131689776(bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section1)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_07_func_1867069653(_activatnvar_pos);
	_activation_check_proc_07_func_1356319171(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_0);
	_activation_check_proc_07_func_169040149(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_07_func_426968386(_activatnvar_confusing_bool_9, _activatnvar_confusing_int_7, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_07_func_1883840006(_activatnvar_confusing_char_8, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_07_func_1382679076(_activatnvar_confusing_U8_a, _activatnvar_section1);
}

void _activation_check_proc_07_func_1356319171(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_4[0x0] >>= _activatnvar_confusing_chararray_0[0xa];

}

void _activation_check_proc_07_func_426968386(bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_7, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_9 = false;

	_activatnvar_confusing_int_7 = 0xf;

}

void _activation_check_proc_07_func_1238673622(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_07_func_947056989(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_07_func_1308843170(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_LLUUID_5.mData[0x7] |= _activatnvar_confusing_LLUUID_3.mData[0x1];

}

void _activation_check_proc_07_func_1500968419(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_07_func_361184897(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_7 |= _activatnvar_confusing_LLUUID_3.mData[0xb];

	/* inline */ _activation_check_proc_07_func_1427478128(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_07_func_1500968419(_activatnvar_confusing_int_0);
}

void _activation_check_proc_07_func_1786645144(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_b.mData[0xa];

}

void _activation_check_proc_07_func_104059388(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_07_func_1786645144(_activatnvar_confusing_char_a, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_07_func_91070303(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_07_func_483133067(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_3.mData[0xc] <<= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_07_func_212648211(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x0] <<= _activatnvar_confusing_chararray_9[0x4];

}

void _activation_check_proc_07_func_1947732153(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_07_func_453319536(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_section1;

	_activation_check_proc_07_func_1947732153(_activatnvar_confusing_bool_2, _activatnvar_generic_bool_0);
	_activation_check_proc_07_func_212648211(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_07_func_1107453370(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_char_7, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_07_func_56205145(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_07_func_878363980(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] ^= _activatnvar_confusing_LLUUID_9.mData[0x9];

}

void _activation_check_proc_07_func_1732121006(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 = 0xc;

}

void _activation_check_proc_07_func_1029752247(LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_07_func_381819423(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_07_func_1244972726(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_07_func_1923667826(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_char_9;

	_activation_check_proc_07_func_1982206185(_activatnvar_confusing_int_c);
}

void _activation_check_proc_07_func_1982206185(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_07_func_995676537()
{
	
}

void _activation_check_proc_07_func_1679877425(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_U8_2;

	/* inline */ _activation_check_proc_07_func_701201353(_activatnvar_confusing_U8_3, _activatnvar_confusing_char_a);
}

void _activation_check_proc_07_func_694092301(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_07_func_1635432612(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_U8_2++;

	_activation_check_proc_07_func_694092301(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_3);
	_activation_check_proc_07_func_886861052(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_07_func_886861052(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_07_func_878925875(int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_a >>= _activatnvar_generic_iterator;

}

void _activation_check_proc_07_func_1606053442(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x4] == 0x7) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_07_func_284167133(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x8] ^= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_07_func_470856440(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_0.mData[0x8] += _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_07_func_45796685(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("fdeee20b-73d2-397d-38a0-d35e0b0808ce");

	_activation_check_proc_07_func_144897822(_activatnvar_confusing_char_6);
}

void _activation_check_proc_07_func_144897822(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_07_func_359460955(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_07_func_1399387885(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_d[0xd] >>= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_07_func_847409854(U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_9 >>= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_07_func_1772559671(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("83cc4d19-664e-9220-a2ef-e53845fcb9b9");

}

void _activation_check_proc_07_func_1145916993(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_07_func_1629485797(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_f[0xe] ^= _activatnvar_confusing_LLUUID_b.mData[0xd];

}

void _activation_check_proc_07_func_434971775(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_07_func_233762664(char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_07_func_434971775(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_4);
	_activation_check_proc_07_func_142740164(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_07_func_129182340(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_07_func_142740164(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] <<= _activatnvar_confusing_LLUUID_4.mData[0x3];

}

void _activation_check_proc_07_func_1814886329(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_07_func_67659121(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_818225182(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
	_activatnvar_confusing_char_2 <<= _activatnvar_t0;

	_activation_check_proc_07_func_1244064786(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_1);
	_activation_check_proc_07_func_1964609872(_activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_07_func_593472246(_activatnvar_pos);
	/* inline */ _activation_check_proc_07_func_899917502();
	/* inline */ _activation_check_proc_07_func_374760783(_activatnvar_confusing_char_3, _activatnvar_t0, _activatnvar_combined_id, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_07_func_1964609872(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("3dfd9069-b3fb-de07-fc8d-4a35194154bd");

}

void _activation_check_proc_07_func_1244064786(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x0] *= _activatnvar_confusing_LLUUID_2.mData[0xe];

}

void _activation_check_proc_07_func_182308492(U8& _activatnvar_t0, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_b ^= 0x1;

	_activation_check_proc_07_func_494821024(_activatnvar_t0);
	/* inline */ _activation_check_proc_07_func_214281015(_activatnvar_confusing_int_1);
}

void _activation_check_proc_07_func_494821024(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_07_func_1714151665(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_0 ^= 0x6;

}

void _activation_check_proc_07_func_155180757(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] ^= _activatnvar_secret.mData[0x4];

}

void _activation_check_proc_07_func_658231334(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_774831788(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_07_func_742556097(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xc] += _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_07_func_2132864354(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_LLUUID_5.mData[0xf];

}

void _activation_check_proc_07_func_1827517103(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_2.mData[0x7] &= _activatnvar_confusing_chararray_9[0x5];

	_activatnvar_confusing_char_b++;

	/* inline */ _activation_check_proc_07_func_870218644(_activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_07_func_1039691675(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_f);
	_activation_check_proc_07_func_2132864354(_activatnvar_confusing_U8_2, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_07_func_1752893350(int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] <<= _activatnvar_confusing_chararray_f[0xd];

	_activation_check_proc_07_func_1012772540(_activatnvar_confusing_int_e, _activatnvar_confusing_int_7);
}

void _activation_check_proc_07_func_1012772540(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 = _activatnvar_confusing_int_e;

}

void _activation_check_proc_07_func_930468371(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b *= 0x3;

}

void _activation_check_proc_07_func_471100383(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_07_func_1838727300(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("a75ef235-3f30-9917-5981-593f072672fd");

}

void _activation_check_proc_07_func_597251077(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_c[0xb] *= _activatnvar_confusing_LLUUID_2.mData[0xd];

}

void _activation_check_proc_07_func_1646021035(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x3] <<= _activatnvar_confusing_LLUUID_0.mData[0x8];

}

void _activation_check_proc_07_func_1954287787(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_LLUUID_0.mData[0x8];

	_activatnvar_confusing_LLUUID_d.mData[0x9] ^= _activatnvar_confusing_chararray_f[0x3];

	_activation_check_proc_07_func_530727750(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_530727750(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_562420556(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1070642817(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_07_func_1681221835(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_07_func_1000481516(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xb] ^= _activatnvar_confusing_LLUUID_4.mData[0x9];

}

void _activation_check_proc_07_func_189109704(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_4.mData[0x5] *= _activatnvar_confusing_LLUUID_8.mData[0x5];

}

void _activation_check_proc_07_func_2121869142(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_d.mData[0xf] <<= _activatnvar_confusing_chararray_5[0x2];

	/* inline */ _activation_check_proc_07_func_2127617591(_activatnvar_confusing_U8_f, _activatnvar_confusing_U8_0);
	_activation_check_proc_07_func_1000481516(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_07_func_189109704(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_07_func_188865469(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_code;

}

void _activation_check_proc_07_func_210143396(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d += 0xc;

}

void _activation_check_proc_07_func_1204605865(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_combined_id.mData[0x2];

}

void _activation_check_proc_07_func_412474339(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_07_func_431585840(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 |= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_07_func_140683400(int& _activatnvar_confusing_int_1, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_1;

	_activation_check_proc_07_func_412474339(_activatnvar_confusing_int_1);
	_activation_check_proc_07_func_431585840(_activatnvar_confusing_U8_b, _activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_07_func_126718438(_activatnvar_confusing_char_e, _activatnvar_secret);
}

void _activation_check_proc_07_func_2089725028(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_a >>= _activatnvar_confusing_int_5;

}

void _activation_check_proc_07_func_321010657(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_07_func_470512409(U8& _activatnvar_t0, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_t1)
{
	_activatnvar_confusing_U8_1 += 0x2;

	_activation_check_proc_07_func_321010657(_activatnvar_confusing_int_7);
	_activation_check_proc_07_func_820096839(_activatnvar_t0);
	/* inline */ _activation_check_proc_07_func_1886674705(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
}

void _activation_check_proc_07_func_820096839(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_07_func_2048182677(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_948993879(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_07_func_2048182677(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_07_func_1541950431(_activatnvar_confusing_char_a, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_07_func_1329662979(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xe] <<= _activatnvar_confusing_LLUUID_0.mData[0x9];

}

void _activation_check_proc_07_func_1836012052(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_07_func_1510428054(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_136262931(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_3.mData[0x1] &= _activatnvar_confusing_LLUUID_1.mData[0xe];

}

void _activation_check_proc_07_func_728519013(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_c.mData[0xc] <<= _activatnvar_confusing_chararray_5[0x9];

}

void _activation_check_proc_07_func_1947697348(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1656824111(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_07_func_1709402821(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xe] == 0xe) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_07_func_331878749(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_d.mData[0xb];

	_activation_check_proc_07_func_1656824111(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_9);
	_activation_check_proc_07_func_1709402821(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_07_func_1134039669(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x4] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_07_func_1817311852(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1351118157(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_07_func_673407165(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_07_func_1465636877(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_4;

	_activation_check_proc_07_func_673407165(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_07_func_628376934(_activatnvar_pos);
}

void _activation_check_proc_07_func_302282241(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_07_func_1012964543(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_chararray_1[0x5];

}

void _activation_check_proc_07_func_695552010(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_07_func_1241535231(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] += _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_07_func_1743834418(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 |= _activatnvar_confusing_int_2;

}

void _activation_check_proc_07_func_1620073747(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_07_func_1009467925(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_07_func_2073699810(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_07_func_1893968593(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_07_func_2037418022(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 ^= 0x7;

}

void _activation_check_proc_07_func_1596850935(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b <<= _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_07_func_161306568(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_3++;

	_activation_check_proc_07_func_1596850935(_activatnvar_confusing_chararray_2, _activatnvar_confusing_char_b);
}

void _activation_check_proc_07_func_1599125681(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xd] = _activatnvar_confusing_chararray_e[0x6];

}

void _activation_check_proc_07_func_288881715(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x7] != 0x2) _activatnvar_confusing_bool_d = false;

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_495623228(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_int_c >>= 0x3;

	/* inline */ _activation_check_proc_07_func_576287501(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_d);
	_activation_check_proc_07_func_288881715(_activatnvar_section2, _activatnvar_confusing_LLUUID_6, _activatnvar_generic_iterator, _activatnvar_confusing_bool_d, _activatnvar_lace);
}

void _activation_check_proc_07_func_2058737848(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1069649123(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_07_func_1656173403(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x2] == 0x9) _activatnvar_confusing_bool_e = false;

	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1522067882(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_07_func_1194107380(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_section2;

	_activation_check_proc_07_func_1522067882(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_07_func_1902121695(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1851757119(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_LLUUID_c.mData[0xc];

}

void _activation_check_proc_07_func_1958863750(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1355513215(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_07_func_1851757119(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_U8_9);
	_activation_check_proc_07_func_1958863750(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
	_activation_check_proc_07_func_1902121695(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_07_func_1302177273(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_07_func_1820977276(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("50d2f0df-a1c6-00a9-1a80-da40e8b2a883");

}

void _activation_check_proc_07_func_872850193(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_07_func_1868731381(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 65; _activatnvar_strbuf_0[0] ^= 116; _activatnvar_strbuf_0[1] = 63; _activatnvar_strbuf_0[1] ^= 11; _activatnvar_strbuf_0[2] = 66; _activatnvar_strbuf_0[2] ^= 114; _activatnvar_strbuf_0[3] = 48; _activatnvar_strbuf_0[3] ^= 2; _activatnvar_strbuf_0[4] = 3; _activatnvar_strbuf_0[4] ^= 48; _activatnvar_strbuf_0[5] = 107; _activatnvar_strbuf_0[5] ^= 91; _activatnvar_strbuf_0[6] = 13; _activatnvar_strbuf_0[6] ^= 53; _activatnvar_strbuf_0[7] = 121; _activatnvar_strbuf_0[7] ^= 73; _activatnvar_strbuf_0[8] = 49; _activatnvar_strbuf_0[8] ^= 28; _activatnvar_strbuf_0[9] = 19; _activatnvar_strbuf_0[9] ^= 35; _activatnvar_strbuf_0[10] = 3; _activatnvar_strbuf_0[10] ^= 51; _activatnvar_strbuf_0[11] = 81; _activatnvar_strbuf_0[11] ^= 105; _activatnvar_strbuf_0[12] = 4; _activatnvar_strbuf_0[12] ^= 53; _activatnvar_strbuf_0[13] = 22; _activatnvar_strbuf_0[13] ^= 59; _activatnvar_strbuf_0[14] = 55; _activatnvar_strbuf_0[14] ^= 7; _activatnvar_strbuf_0[15] = 23; _activatnvar_strbuf_0[15] ^= 37; _activatnvar_strbuf_0[16] = 85; _activatnvar_strbuf_0[16] ^= 101; _activatnvar_strbuf_0[17] = 28; _activatnvar_strbuf_0[17] ^= 36; _activatnvar_strbuf_0[18] = 57; _activatnvar_strbuf_0[18] ^= 20; _activatnvar_strbuf_0[19] = 62; _activatnvar_strbuf_0[19] ^= 14; _activatnvar_strbuf_0[20] = 28; _activatnvar_strbuf_0[20] ^= 120; _activatnvar_strbuf_0[21] = 125; _activatnvar_strbuf_0[21] ^= 77; _activatnvar_strbuf_0[22] = 34; _activatnvar_strbuf_0[22] ^= 65; _activatnvar_strbuf_0[23] = 38; _activatnvar_strbuf_0[23] ^= 11; _activatnvar_strbuf_0[24] = 43; _activatnvar_strbuf_0[24] ^= 27; _activatnvar_strbuf_0[25] = 81; _activatnvar_strbuf_0[25] ^= 99; _activatnvar_strbuf_0[26] = 98; _activatnvar_strbuf_0[26] ^= 86; _activatnvar_strbuf_0[27] = 66; _activatnvar_strbuf_0[27] ^= 33; _activatnvar_strbuf_0[28] = 111; _activatnvar_strbuf_0[28] ^= 87; _activatnvar_strbuf_0[29] = 4; _activatnvar_strbuf_0[29] ^= 60; _activatnvar_strbuf_0[30] = 42; _activatnvar_strbuf_0[30] ^= 24; _activatnvar_strbuf_0[31] = 120; _activatnvar_strbuf_0[31] ^= 77; _activatnvar_strbuf_0[32] = 78; _activatnvar_strbuf_0[32] ^= 118; _activatnvar_strbuf_0[33] = 110; _activatnvar_strbuf_0[33] ^= 95; _activatnvar_strbuf_0[34] = 54; _activatnvar_strbuf_0[34] ^= 3; _activatnvar_strbuf_0[35] = 71; _activatnvar_strbuf_0[35] ^= 118; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_07_func_1411548999(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_c >>= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_07_func_1530341898(U8& _activatnvar_t0, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_LLUUID_8.mData[0xe];

	/* inline */ _activation_check_proc_07_func_875682731(_activatnvar_t0);
	_activation_check_proc_07_func_1411548999(_activatnvar_confusing_U8_c, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_07_func_1802079143(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_07_func_1022345455(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_07_func_1646739386(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_d, _activatnvar_confusing_char_a);
	/* inline */ _activation_check_proc_07_func_157663939(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_07_func_1646739386(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_a)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xb] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_07_func_233377835(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xd] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_07_func_1610017207(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1314742606(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1675734544(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_07_func_8980032(bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_07_func_724545830(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xd] &= _activatnvar_confusing_chararray_c[0x1];

	_activation_check_proc_07_func_8980032(_activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_07_func_2041331938(_activatnvar_confusing_bool_2, _activatnvar_confusing_U8_1, _activatnvar_confusing_char_c);
}

void _activation_check_proc_07_func_1432900021(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_5.mData[0x9] = _activatnvar_confusing_LLUUID_0.mData[0x1];

}

void _activation_check_proc_07_func_195001395(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_464796682(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_464796682(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_469045506(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_07_func_1286134247(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_07_func_423408507(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_07_func_1286134247(_activatnvar_confusing_int_f);
}

void _activation_check_proc_07_func_2024425708(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
}

void _activation_check_proc_07_func_1060539025(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_07_func_2016586524(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_07_func_1639242118(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_07_func_1998751980(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_0, char& _activatnvar_confusing_char_2, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
	_activation_check_proc_07_func_249960598(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_07_func_1901998993(_activatnvar_confusing_bool_9, _activatnvar_confusing_char_2, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_07_func_1134176101(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_07_func_249960598(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_07_func_484760599(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] >>= _activatnvar_mac_digest[0x4];

}

void _activation_check_proc_07_func_286991187(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_07_func_1284024033(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1365535754(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_3 += _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_07_func_2022536629(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_9 ^= _activatnvar_confusing_char_7;

}

void _activation_check_proc_07_func_1243141846(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_07_func_265289603(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_07_func_692214101(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_6, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_lace;

	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_6 &= _activatnvar_confusing_U8_2;

	_activatnvar_confusing_LLUUID_0 = LLUUID("c9dcc45a-4002-f2aa-748c-5d5f723fb67e");

}

void _activation_check_proc_07_func_2038562591(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_f)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_char_f = _activatnvar_pos;

}

void _activation_check_proc_07_func_1013141343(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= _activatnvar_confusing_int_b;

	_activation_check_proc_07_func_1267146415(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_07_func_2016401517(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_07_func_1267146415(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_07_func_1902466437(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1208056014(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_07_func_1826444235(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_2011609520(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1164127515(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_881772555(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_a |= 0x7;

}

void _activation_check_proc_07_func_1899479600(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_d[0xd] = _activatnvar_fscked.mData[0x3];

}

void _activation_check_proc_07_func_309483424(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a *= 0xb;

}

void _activation_check_proc_07_func_464562052(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_07_func_1004356486()
{
	
}

void _activation_check_proc_07_func_409373803(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_3, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_int_3++;

	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_1;

	/* inline */ _activation_check_proc_07_func_1713023613(_activatnvar_t0);
	/* inline */ _activation_check_proc_07_func_393909950(_activatnvar_t0);
}

void _activation_check_proc_07_func_1399486627(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("4c4a4c1e-b988-534c-2f4b-e0d92dac7757");

}

void _activation_check_proc_07_func_768178461(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_07_func_1585627092(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 *= 0x4;

}

void _activation_check_proc_07_func_434075550(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_9++;

	_activatnvar_confusing_chararray_6[0xf] &= _activatnvar_confusing_LLUUID_b.mData[0x9];

	/* inline */ _activation_check_proc_07_func_1089242345(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_0, _activatnvar_confusing_bool_9);
	_activation_check_proc_07_func_1585627092(_activatnvar_confusing_int_4);
}

void _activation_check_proc_07_func_872590141(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1234084090(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c <<= _activatnvar_confusing_chararray_c[0xc];

}

void _activation_check_proc_07_func_1155605008(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_5 = false;

	_activation_check_proc_07_func_1234084090(_activatnvar_confusing_chararray_c, _activatnvar_confusing_char_c);
}

void _activation_check_proc_07_func_306732409(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 |= 0x7;

}

void _activation_check_proc_07_func_1531042467(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_07_func_1958899169(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 *= _activatnvar_confusing_int_0;

}

void _activation_check_proc_07_func_402569608(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_7.mData[0xc];

	/* inline */ _activation_check_proc_07_func_867907735(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_07_func_788267792(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = 0x5;

}

void _activation_check_proc_07_func_1727916767(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x1] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_07_func_1317931065(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1780552249(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_07_func_2078985948(LLUUID& _activatnvar_code, char* _activatnvar_strbuf_0)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_07_func_346623331(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_6.mData[0x6];

	_activation_check_proc_07_func_1767531002(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_07_func_1498927407(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_07_func_1994020031(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_07_func_560307955(_activatnvar_confusing_int_5);
}

void _activation_check_proc_07_func_1994020031(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] >>= _activatnvar_combined_id.mData[0x2];

}

void _activation_check_proc_07_func_1767531002(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1460521436(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_07_func_356127244(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 ^= 0xa;

}

void _activation_check_proc_07_func_926754230(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_07_func_1067639798(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_565100507(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_07_func_516400371(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_d[0xa] &= _activatnvar_confusing_chararray_0[0x1];

	_activation_check_proc_07_func_1155561332(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_07_func_2026683371(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_07_func_2026683371(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xe] *= _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_07_func_1155561332(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_07_func_494015150(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_a &= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_07_func_1942219155(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xb] &= _activatnvar_confusing_LLUUID_c.mData[0xb];

}

void _activation_check_proc_07_func_743776624(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_9.mData[0xa] &= _activatnvar_confusing_LLUUID_5.mData[0x3];

}

void _activation_check_proc_07_func_1735001738()
{
	
}

void _activation_check_proc_07_func_62514168(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b >>= 0xb;

}

void _activation_check_proc_07_func_90688673(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x8] *= _activatnvar_section1.mData[0xf];

}

void _activation_check_proc_07_func_1238101297(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1483287942(U8& _activatnvar_confusing_U8_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_c++;

	_activation_check_proc_07_func_956526241(_activatnvar_confusing_U8_3, _activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2, _activatnvar_fscked);
	_activation_check_proc_07_func_1238101297(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_956526241(U8& _activatnvar_confusing_U8_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_3 = _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_07_func_118296908(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_07_func_557469793(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] += _activatnvar_confusing_LLUUID_0.mData[0x1];

}

void _activation_check_proc_07_func_1844829520(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_b)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_b |= _activatnvar_confusing_char_6;

	/* inline */ _activation_check_proc_07_func_532001466(_activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_07_func_1044969147(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_07_func_847735767(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_6);
	_activation_check_proc_07_func_918808041(_activatnvar_confusing_int_6);
}

void _activation_check_proc_07_func_918808041(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_07_func_1729526107(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_07_func_1023849101(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_0)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_0 = 0x9;

}

void _activation_check_proc_07_func_10797950(int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_char_b;

	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_07_func_1705772986(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_3 = false;

	/* inline */ _activation_check_proc_07_func_736092245(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_07_func_57540508(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_2, _activatnvar_t0);
}

void _activation_check_proc_07_func_57540508(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_LLUUID_b.mData[0xe];

	_activatnvar_t0 |= 8;
}

void _activation_check_proc_07_func_1502567994(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_07_func_988291671(char& _activatnvar_confusing_char_3, U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_07_func_1919490913(_activatnvar_confusing_char_3);
}

void _activation_check_proc_07_func_1919490913(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_07_func_391425734(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("645e1a79-bc79-ea9b-6268-de1b5db3c8da");

}

void _activation_check_proc_07_func_1831918635(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_e.mData[0x2] *= _activatnvar_secret.mData[0xb];

}

void _activation_check_proc_07_func_363253945(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_9[0xf] = _activatnvar_section1.mData[0xd];

	/* inline */ _activation_check_proc_07_func_856275142(_activatnvar_section2, _activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_07_func_1250242893(_activatnvar_confusing_bool_a, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_07_func_1109365931(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 += _activatnvar_t0;

}

void _activation_check_proc_07_func_3527057(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 = _activatnvar_confusing_int_8;

}

void _activation_check_proc_07_func_898279321(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_07_func_1661186857(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 81; _activatnvar_strbuf_0[0] ^= 16; _activatnvar_strbuf_0[1] = 20; _activatnvar_strbuf_0[1] ^= 119; _activatnvar_strbuf_0[2] = 41; _activatnvar_strbuf_0[2] ^= 93; _activatnvar_strbuf_0[3] = 26; _activatnvar_strbuf_0[3] ^= 115; _activatnvar_strbuf_0[4] = 110; _activatnvar_strbuf_0[4] ^= 24; _activatnvar_strbuf_0[5] = 109; _activatnvar_strbuf_0[5] ^= 12; _activatnvar_strbuf_0[6] = 107; _activatnvar_strbuf_0[6] ^= 31; _activatnvar_strbuf_0[7] = 125; _activatnvar_strbuf_0[7] ^= 20; _activatnvar_strbuf_0[8] = 19; _activatnvar_strbuf_0[8] ^= 124; _activatnvar_strbuf_0[9] = 120; _activatnvar_strbuf_0[9] ^= 22; _activatnvar_strbuf_0[10] = 84; _activatnvar_strbuf_0[10] ^= 23; _activatnvar_strbuf_0[11] = 54; _activatnvar_strbuf_0[11] ^= 89; _activatnvar_strbuf_0[12] = 38; _activatnvar_strbuf_0[12] ^= 66; _activatnvar_strbuf_0[13] = 19; _activatnvar_strbuf_0[13] ^= 118; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_07_func_1615282462(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_07_func_1644368034(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_07_func_701065509(_activatnvar_confusing_int_1, _activatnvar_confusing_char_c, _activatnvar_confusing_bool_3, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_07_func_716284168(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1808679394(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_07_func_433240100(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1098397882(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_chararray_2[0x5];

	/* inline */ _activation_check_proc_07_func_1395651892(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked, _activatnvar_combined_id);
}

void _activation_check_proc_07_func_1127463901(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_07_func_1028051341(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_07_func_1127463901(_activatnvar_t0);
}

void _activation_check_proc_07_func_173270881(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("2bc551f3-a400-0981-7f6f-5c5c4896cf1b");

}

void _activation_check_proc_07_func_1659783133(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_952442159(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] += _activatnvar_confusing_chararray_3[0x5];

}

void _activation_check_proc_07_func_1920435642(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xf] &= _activatnvar_confusing_chararray_3[0x0];

}

void _activation_check_proc_07_func_508833741(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_07_func_929055080(_activatnvar_confusing_char_a, _activatnvar_confusing_chararray_9);
	_activation_check_proc_07_func_952442159(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_3);
	_activation_check_proc_07_func_1659783133(_activatnvar_generic_iterator);
	_activation_check_proc_07_func_173270881(_activatnvar_confusing_LLUUID_7);
	_activation_check_proc_07_func_1920435642(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_07_func_1255272740()
{
	
}

void _activation_check_proc_07_func_223004169(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_07_func_599864377(int& _activatnvar_confusing_int_f, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_07_func_223004169(_activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_07_func_2119939254(_activatnvar_confusing_U8_5);
	/* inline */ _activation_check_proc_07_func_123568657(_activatnvar_confusing_int_f);
	_activation_check_proc_07_func_1255272740();
}

void _activation_check_proc_07_func_2058860365(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_07_func_1272146381(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x9] <<= _activatnvar_confusing_chararray_9[0xc];

}

void _activation_check_proc_07_func_1590317289(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 90; _activatnvar_strbuf_0[0] ^= 99; _activatnvar_strbuf_0[1] = 115; _activatnvar_strbuf_0[1] ^= 67; _activatnvar_strbuf_0[2] = 65; _activatnvar_strbuf_0[2] ^= 114; _activatnvar_strbuf_0[3] = 27; _activatnvar_strbuf_0[3] ^= 47; _activatnvar_strbuf_0[4] = 74; _activatnvar_strbuf_0[4] ^= 40; _activatnvar_strbuf_0[5] = 119; _activatnvar_strbuf_0[5] ^= 19; _activatnvar_strbuf_0[6] = 15; _activatnvar_strbuf_0[6] ^= 58; _activatnvar_strbuf_0[7] = 18; _activatnvar_strbuf_0[7] ^= 37; _activatnvar_strbuf_0[8] = 59; _activatnvar_strbuf_0[8] ^= 22; _activatnvar_strbuf_0[9] = 31; _activatnvar_strbuf_0[9] ^= 125; _activatnvar_strbuf_0[10] = 101; _activatnvar_strbuf_0[10] ^= 82; _activatnvar_strbuf_0[11] = 114; _activatnvar_strbuf_0[11] ^= 22; _activatnvar_strbuf_0[12] = 9; _activatnvar_strbuf_0[12] ^= 49; _activatnvar_strbuf_0[13] = 0; _activatnvar_strbuf_0[13] ^= 45; _activatnvar_strbuf_0[14] = 105; _activatnvar_strbuf_0[14] ^= 93; _activatnvar_strbuf_0[15] = 122; _activatnvar_strbuf_0[15] ^= 25; _activatnvar_strbuf_0[16] = 113; _activatnvar_strbuf_0[16] ^= 19; _activatnvar_strbuf_0[17] = 75; _activatnvar_strbuf_0[17] ^= 41; _activatnvar_strbuf_0[18] = 124; _activatnvar_strbuf_0[18] ^= 81; _activatnvar_strbuf_0[19] = 101; _activatnvar_strbuf_0[19] ^= 93; _activatnvar_strbuf_0[20] = 11; _activatnvar_strbuf_0[20] ^= 110; _activatnvar_strbuf_0[21] = 119; _activatnvar_strbuf_0[21] ^= 21; _activatnvar_strbuf_0[22] = 55; _activatnvar_strbuf_0[22] ^= 81; _activatnvar_strbuf_0[23] = 91; _activatnvar_strbuf_0[23] ^= 118; _activatnvar_strbuf_0[24] = 117; _activatnvar_strbuf_0[24] ^= 65; _activatnvar_strbuf_0[25] = 94; _activatnvar_strbuf_0[25] ^= 104; _activatnvar_strbuf_0[26] = 23; _activatnvar_strbuf_0[26] ^= 34; _activatnvar_strbuf_0[27] = 100; _activatnvar_strbuf_0[27] ^= 7; _activatnvar_strbuf_0[28] = 121; _activatnvar_strbuf_0[28] ^= 73; _activatnvar_strbuf_0[29] = 76; _activatnvar_strbuf_0[29] ^= 127; _activatnvar_strbuf_0[30] = 119; _activatnvar_strbuf_0[30] ^= 20; _activatnvar_strbuf_0[31] = 108; _activatnvar_strbuf_0[31] ^= 94; _activatnvar_strbuf_0[32] = 97; _activatnvar_strbuf_0[32] ^= 80; _activatnvar_strbuf_0[33] = 80; _activatnvar_strbuf_0[33] ^= 49; _activatnvar_strbuf_0[34] = 74; _activatnvar_strbuf_0[34] ^= 46; _activatnvar_strbuf_0[35] = 91; _activatnvar_strbuf_0[35] ^= 110; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_07_func_611669151(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_07_func_945684306(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_07_func_2052451037(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x5] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_07_func_855812930(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_4 ^= _activatnvar_confusing_char_a;

}

void _activation_check_proc_07_func_278141886(LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
}

void _activation_check_proc_07_func_552337402(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_07_func_1235546223(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator)
{
	
	_activatnvar_confusing_char_e >>= _activatnvar_confusing_chararray_a[0x4];

	/* inline */ _activation_check_proc_07_func_304395622(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_char_7, _activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_07_func_219728676(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_char_6, _activatnvar_confusing_bool_2);
	_activation_check_proc_07_func_1618462300(_activatnvar_confusing_chararray_0, _activatnvar_confusing_U8_7);
	_activation_check_proc_07_func_552337402(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_07_func_1618462300(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_chararray_0[0x8];

}

void _activation_check_proc_07_func_294857830(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_8)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_8 |= _activatnvar_confusing_char_2;

}

void _activation_check_proc_07_func_795759884(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_07_func_1023119068(_activatnvar_confusing_LLUUID_1, _activatnvar_fscked);
}

void _activation_check_proc_07_func_1023119068(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_fscked;

}

void _activation_check_proc_07_func_20941133(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] >>= _activatnvar_code.mData[0x0];

}

void _activation_check_proc_07_func_1674242893(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_07_func_1036136606(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_07_func_1788021947(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_07_func_202983675(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
	_activation_check_proc_07_func_26334158(_activatnvar_fscked, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_07_func_1577048736(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_07_func_26334158(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_fscked;

}

void _activation_check_proc_07_func_202983675(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_529434403(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_408037849(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_07_func_895939969(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x7] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_07_func_1550116537(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_07_func_44462410(bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_8, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_char_8 <<= 0x9;

	_activation_check_proc_07_func_1550116537(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_07_func_1460595059(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_07_func_164950376(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_712337015(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_a &= _activatnvar_doaccount;

}

void _activation_check_proc_07_func_465845904(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_U8_9 <<= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_07_func_1595580409(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x6] <<= _activatnvar_mac_digest[0x7];

}

void _activation_check_proc_07_func_2146772694(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x2] != 0xc) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_07_func_2126336666(int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_07_func_510333447(_activatnvar_confusing_chararray_4, _activatnvar_confusing_char_e);
	_activation_check_proc_07_func_2146772694(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_07_func_24131245(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_07_func_534348180(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_07_func_771159171(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x7] != 0xb) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_07_func_721239457(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_07_func_1949015129(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_fscked.mData[0x2];

}

void _activation_check_proc_07_func_986846645(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("a2a4daf7-f500-7418-882f-a7054383252b");

	/* inline */ _activation_check_proc_07_func_2016218031();
	_activation_check_proc_07_func_771159171(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_7);
	_activation_check_proc_07_func_721239457(_activatnvar_doaccount, _activatnvar_generic_bool_0);
	_activation_check_proc_07_func_1949015129(_activatnvar_fscked, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_07_func_361729142(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_b[0x0] ^= _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_07_func_549688567()
{
	
}

void _activation_check_proc_07_func_315360728(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_07_func_1040535691(U8& _activatnvar_confusing_U8_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_114444490(_activatnvar_confusing_U8_3, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_07_func_114444490(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_07_func_568207220(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x3] |= _activatnvar_confusing_chararray_2[0x4];

}

void _activation_check_proc_07_func_2035915563(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0xf;

}

void _activation_check_proc_07_func_1530192041(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_07_func_20624295(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_07_func_1483409806(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_07_func_1786244517(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_07_func_10703828(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_d.mData[0x9];

}

void _activation_check_proc_07_func_202508154(U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_1 = _activatnvar_section2.mData[0x3];

	_activation_check_proc_07_func_1786244517(_activatnvar_confusing_int_c);
	_activation_check_proc_07_func_10703828(_activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_07_func_692310283(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xa] >>= _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_07_func_39062863(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_6 = true;

	/* inline */ _activation_check_proc_07_func_1444601206(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_07_func_1213291768(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_int_f &= 0xff;

	/* inline */ _activation_check_proc_07_func_963891354(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_07_func_775479653(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	
	_activation_check_proc_07_func_471326895(_activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_07_func_1474547159(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_07_func_471326895(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] <<= _activatnvar_confusing_LLUUID_b.mData[0xb];

}

void _activation_check_proc_07_func_1987039875(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 >>= _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_07_func_358322550(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_07_func_2111001726(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_07_func_1295287136(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_b >>= _activatnvar_confusing_char_f;

}

void _activation_check_proc_07_func_1826049288(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_07_func_1292924451(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_4)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	/* inline */ _activation_check_proc_07_func_1730727528(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_07_func_144101735(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xa] <<= _activatnvar_confusing_LLUUID_d.mData[0xf];

}

void _activation_check_proc_07_func_1285018818(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_07_func_726549023(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_07_func_703446553(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x5] >>= _activatnvar_confusing_LLUUID_3.mData[0x3];

}

void _activation_check_proc_07_func_1704378499(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] = _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_07_func_1053073617(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("d95ddedf-62e1-b945-67a6-691c736522bd");

}

void _activation_check_proc_07_func_1008901887(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_07_func_28614928(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_07_func_186546664(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_07_func_1190061304(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_07_func_634923699(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x8] <<= _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_07_func_404237845(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] <<= _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_07_func_334722307(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_07_func_310634280(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xc] |= _activatnvar_confusing_chararray_c[0xa];

}

void _activation_check_proc_07_func_1685714242(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("66fb6d61-2df3-6e47-2033-cc63c7e104f5");

}

void _activation_check_proc_07_func_239430254(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_b >>= _activatnvar_confusing_chararray_c[0xe];

}

void _activation_check_proc_07_func_654488112(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_07_func_721343289(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_885333051(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_721343289(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_07_func_1607403378(_activatnvar_confusing_int_5, _activatnvar_confusing_int_1);
}

void _activation_check_proc_07_func_2059193780(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] = _activatnvar_confusing_LLUUID_b.mData[0xf];

}

void _activation_check_proc_07_func_1642765382(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_chararray_7[0x7] >>= _activatnvar_confusing_LLUUID_f.mData[0xb];

	_activation_check_proc_07_func_525687747(_activatnvar_confusing_char_5, _activatnvar_confusing_chararray_e);
	_activation_check_proc_07_func_2059193780(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_07_func_525687747(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_5 *= _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_07_func_1414870067(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_chararray_e[0xf];

}

void _activation_check_proc_07_func_664575210(U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x2] == _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_c = false;

	_activatnvar_confusing_int_1++;

	_activation_check_proc_07_func_1414870067(_activatnvar_confusing_chararray_e, _activatnvar_confusing_U8_a);
}

void _activation_check_proc_07_func_1942219174(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xf] = _activatnvar_confusing_LLUUID_9.mData[0x7];

}

void _activation_check_proc_07_func_1486679593(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_07_func_693501304(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_910805095(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_07_func_825265031(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_6, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	if(_activatnvar_confusing_LLUUID_5.mData[0xf] == _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_07_func_349044126(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("a549f26c-30f8-2cec-54a2-4f6023573c31");

}

void _activation_check_proc_07_func_326665295(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_07_func_773978123(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

	_activation_check_proc_07_func_1940923057(_activatnvar_code, _activatnvar_combined_id, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_1940923057(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_1392357035()
{
	
}

void _activation_check_proc_07_func_1199693496(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x8] = _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_07_func_753587861(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_4;

	
	_activation_check_proc_07_func_1199693496(_activatnvar_fscked, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_07_func_1871298799(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_07_func_2128102035(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_1.mData[0xe];

}

void _activation_check_proc_07_func_198457408(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("692ec0c5-afda-51bd-f865-684f05855fad");

}

void _activation_check_proc_07_func_1361942387(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_section2.mData[0x7];

	_activation_check_proc_07_func_579999707(_activatnvar_confusing_bool_3, _activatnvar_generic_bool_0);
}

void _activation_check_proc_07_func_579999707(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_07_func_1862396862(bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= 0xf;

	/* inline */ _activation_check_proc_07_func_569578157(_activatnvar_confusing_bool_4, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_07_func_1154564119(_activatnvar_confusing_int_0, _activatnvar_confusing_int_d);
}

void _activation_check_proc_07_func_613560428(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_1, char& _activatnvar_feat)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_U8_b *= _activatnvar_feat;

	_activatnvar_confusing_char_1 = _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_07_func_1389457806(LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_07_func_688058257(U8& _activatnvar_t0, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_b)
{
	_activatnvar_t0 &= 3;
	_activatnvar_confusing_char_b = _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_07_func_1680835475(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_07_func_394337501(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
	_activation_check_proc_07_func_1680835475(_activatnvar_confusing_int_b);
}

void _activation_check_proc_07_func_1699135044(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_4.mData[0xd] <<= _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_07_func_648349296(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xd] += _activatnvar_confusing_LLUUID_3.mData[0x0];

}

void _activation_check_proc_07_func_2067534929(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_U8_f += _activatnvar_confusing_char_4;

}

void _activation_check_proc_07_func_410586661(U8& _activatnvar_t0, U8& _activatnvar_t1, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_7[0xf] |= _activatnvar_confusing_chararray_c[0x8];

	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_07_func_265237925(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_07_func_383208116(_activatnvar_generic_iterator);
}

void _activation_check_proc_07_func_383208116(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_07_func_1650736211(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_07_func_304239308(bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_a *= _activatnvar_confusing_U8_5;

	_activation_check_proc_07_func_1650736211(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_07_func_37436472(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_LLUUID_e.mData[0xc];

}

void _activation_check_proc_07_func_1908605928(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_07_func_572525278(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_07_func_438734277(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_e &= 0x7;

}

void _activation_check_proc_07_func_7900539(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("5dc229dc-75c4-0654-7eda-917549e2f4f4");

}

void _activation_check_proc_07_func_286127255()
{
	
}

void _activation_check_proc_07_func_103269034(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_4[0x5] &= _activatnvar_confusing_LLUUID_7.mData[0x7];

	_activation_check_proc_07_func_286127255();
}

void _activation_check_proc_07_func_1110681133(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_f)
{
	
	/* inline */ _activation_check_proc_07_func_380846639(_activatnvar_confusing_bool_5, _activatnvar_confusing_char_f, _activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_07_func_1392043204(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_07_func_695052971(int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_b *= _activatnvar_generic_iterator;

	/* inline */ _activation_check_proc_07_func_1251691707(_activatnvar_confusing_int_3);
	_activation_check_proc_07_func_720426143(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_07_func_604327167(_activatnvar_confusing_char_5);
}

void _activation_check_proc_07_func_720426143(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x7] ^= _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_07_func_944512057(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_e++;

	/* inline */ _activation_check_proc_07_func_270058935(_activatnvar_confusing_chararray_4, _activatnvar_confusing_char_1);
}

void _activation_check_proc_07_func_41981241(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_0 += _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_07_func_1583935299(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_07_func_722931961(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x6] >>= _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_07_func_1044592148(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_1;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
