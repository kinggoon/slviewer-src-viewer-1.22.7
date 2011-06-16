// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation1e.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 1e

void _activation_check_proc_1e_func_955806022(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1e_func_1249017989(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_code;

	/* inline */ _activation_check_proc_1e_func_1058965493(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_3, _activatnvar_confusing_char_3);
}

void _activation_check_proc_1e_func_1392012555()
{
	
}

void _activation_check_proc_1e_func_292775116(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 >>= _activatnvar_confusing_chararray_f[0x5];

}

void _activation_check_proc_1e_func_856494187(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_9[0x8];

	_activation_check_proc_1e_func_292775116(_activatnvar_confusing_chararray_f, _activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_1e_func_1181475930(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1e_func_1558699171(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("e18c355a-2632-e322-93e4-f22859efa638");

}

void _activation_check_proc_1e_func_47510112(U8& _activatnvar_t0, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
	_activatnvar_confusing_U8_f = _activatnvar_confusing_U8_7;

	/* inline */ _activation_check_proc_1e_func_1222089030(_activatnvar_confusing_LLUUID_7, _activatnvar_section1);
	/* inline */ _activation_check_proc_1e_func_950894351(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_1e_func_260460219(_activatnvar_confusing_char_6);
}

void _activation_check_proc_1e_func_1013516072(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_2050809471(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_5)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_3 ^= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_1e_func_1630621926(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
	_activation_check_proc_1e_func_820452004(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_U8_e);
	/* inline */ _activation_check_proc_1e_func_2033655272(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_1e_func_820452004(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_LLUUID_a.mData[0xa];

}

void _activation_check_proc_1e_func_845553774(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_1e_func_301588417(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_2037077755(int& _activatnvar_confusing_int_f, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_chararray_a[0x1];

	_activation_check_proc_1e_func_285695299(_activatnvar_confusing_U8_7, _activatnvar_pos, _activatnvar_confusing_int_e, _activatnvar_combined_id, _activatnvar_confusing_int_f);
}

void _activation_check_proc_1e_func_285695299(U8& _activatnvar_confusing_U8_7, U8& _activatnvar_pos, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_f)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
	_activatnvar_pos &= 7;
	_activatnvar_confusing_U8_7 = 0xc;

	_activatnvar_confusing_int_f ^= _activatnvar_confusing_int_e;

}

void _activation_check_proc_1e_func_1394760161(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_6[0x3] ^= _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_1e_func_1130190004(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_6 = 0xb;

}

void _activation_check_proc_1e_func_669071992(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x2] |= _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_1e_func_501124866(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_b.mData[0x8] = _activatnvar_confusing_chararray_4[0x7];

	/* inline */ _activation_check_proc_1e_func_1936659506(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_1e_func_1615898284(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
	_activation_check_proc_1e_func_175115248(_activatnvar_confusing_U8_7);
	/* inline */ _activation_check_proc_1e_func_1017764867();
	/* inline */ _activation_check_proc_1e_func_708820555(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_1e_func_175115248(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_1e_func_384574802(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_LLUUID_3.mData[0x5];

}

void _activation_check_proc_1e_func_91506444(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

	/* inline */ _activation_check_proc_1e_func_115761774(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_1e_func_810697073(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_1e_func_485999695(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1, U8& _activatnvar_pos, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_char_e++;

	/* inline */ _activation_check_proc_1e_func_1053271116(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_1e_func_52654206(_activatnvar_t1);
	/* inline */ _activation_check_proc_1e_func_384129506(_activatnvar_t1, _activatnvar_t0);
	_activation_check_proc_1e_func_810697073(_activatnvar_t1, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_1e_func_1384422075()
{
	
}

void _activation_check_proc_1e_func_1903906787(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1e_func_1838607557(int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] = _activatnvar_section2.mData[0x3];

	/* inline */ _activation_check_proc_1e_func_566225724(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
	_activation_check_proc_1e_func_1903906787(_activatnvar_confusing_int_f);
	_activation_check_proc_1e_func_1384422075();
}

void _activation_check_proc_1e_func_940843548(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_6 *= _activatnvar_confusing_char_7;

}

void _activation_check_proc_1e_func_740107721(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_3[0x6] >>= _activatnvar_confusing_LLUUID_e.mData[0x8];

	_activation_check_proc_1e_func_940843548(_activatnvar_confusing_char_7, _activatnvar_confusing_U8_6, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_1e_func_1225268021(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_1e_func_422468236(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("e4f8d869-3651-5f2d-b6dc-f8a35e405bd7");

	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_1808300934(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1e_func_1534773872(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_chararray_b[0xc];

	_activation_check_proc_1e_func_422468236(_activatnvar_t0, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_1e_func_1808300934(_activatnvar_t0);
}

void _activation_check_proc_1e_func_446502704(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1e_func_2058546412(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_e.mData[0xb] *= _activatnvar_fscked.mData[0x5];

}

void _activation_check_proc_1e_func_1661305414(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1e_func_736772380(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_1e_func_1053715089(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_chararray_d[0xd];

}

void _activation_check_proc_1e_func_1275821230(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1451288413(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_1e_func_271695526(unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_1e_func_89127173(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_6);
	_activation_check_proc_1e_func_52256867(_activatnvar_confusing_int_d);
	_activation_check_proc_1e_func_1451288413(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1e_func_89127173(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xa] ^= _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_1e_func_52256867(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1e_func_1572325925(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("52acfe8b-9d09-989e-8074-b1c155d81096");

}

void _activation_check_proc_1e_func_51526854(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_1e_func_2132321116(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_1e_func_1846069794(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1e_func_1781053688(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1e_func_1201022976(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
	_activation_check_proc_1e_func_1781053688(_activatnvar_pos);
	/* inline */ _activation_check_proc_1e_func_397403342(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_1e_func_968320127(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1e_func_1157671985(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_5[0x6] *= _activatnvar_confusing_LLUUID_f.mData[0xe];

	/* inline */ _activation_check_proc_1e_func_1511965158(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1e_func_471011740(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_4, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_1e_func_793745478(_activatnvar_confusing_int_4, _activatnvar_confusing_int_b);
}

void _activation_check_proc_1e_func_793745478(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_4 <<= _activatnvar_confusing_int_b;

}

void _activation_check_proc_1e_func_862312075(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_0, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_1e_func_8387550(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1e_func_1951653418(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 <<= 0x9;

}

void _activation_check_proc_1e_func_206899302(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_1e_func_476663855(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_1e_func_206899302(_activatnvar_confusing_int_b);
}

void _activation_check_proc_1e_func_1786519702(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1e_func_643998706(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1e_func_603121152(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1e_func_383883151(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x3] == 0x9) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_1e_func_1335065383(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] >>= _activatnvar_confusing_LLUUID_0.mData[0xa];

}

void _activation_check_proc_1e_func_436084898(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_0, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_4 += _activatnvar_confusing_int_c;

	/* inline */ _activation_check_proc_1e_func_363500774();
	/* inline */ _activation_check_proc_1e_func_1102443161(_activatnvar_confusing_char_0, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1e_func_1148249874(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b += _activatnvar_confusing_chararray_1[0x2];

}

void _activation_check_proc_1e_func_1069724774(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_a[0x3] *= _activatnvar_mac_digest[0x2];

}

void _activation_check_proc_1e_func_147998587(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_1.mData[0x1] = _activatnvar_confusing_LLUUID_6.mData[0xf];

	/* inline */ _activation_check_proc_1e_func_830363360(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_U8_f, _activatnvar_confusing_bool_4, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_1e_func_1853607203(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_9.mData[0x0] += _activatnvar_secret.mData[0x2];

	/* inline */ _activation_check_proc_1e_func_1268514473(_activatnvar_confusing_char_4);
}

void _activation_check_proc_1e_func_1712016719(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("81bab9b0-d2ef-83de-95a8-495ad3bae23c");

}

void _activation_check_proc_1e_func_1013359519(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_1712016719(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_1e_func_974869254(DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_gvi_flags = 0;
}

void _activation_check_proc_1e_func_1777890594(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 += 0xd;

}

void _activation_check_proc_1e_func_2097066292(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 |= 0xb;

}

void _activation_check_proc_1e_func_1931263113(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("d12f5402-2661-5978-79b3-58c0e767ca82");

}

void _activation_check_proc_1e_func_95258661(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_9.mData[0x5];

}

void _activation_check_proc_1e_func_133215741(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xa;

}

void _activation_check_proc_1e_func_764077584(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_1e_func_1137519950(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_815717921(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_5 <<= _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_1e_func_534433464()
{
	
}

void _activation_check_proc_1e_func_131117376(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_815717921(_activatnvar_confusing_char_5, _activatnvar_confusing_chararray_b);
	_activation_check_proc_1e_func_534433464();
	/* inline */ _activation_check_proc_1e_func_1121150306(_activatnvar_confusing_int_4, _activatnvar_confusing_int_8);
}

void _activation_check_proc_1e_func_1268665692(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("cd6ff5aa-afd3-4cfc-8b9d-21a81638f0be");

}

void _activation_check_proc_1e_func_1886190497(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_7 >>= 0x5;

	_activation_check_proc_1e_func_1268665692(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1e_func_924989700(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_7)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x8] != _activatnvar_confusing_char_7) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_1e_func_134445484(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_1)
{
	
	_activation_check_proc_1e_func_1170087590(_activatnvar_generic_iterator);
	_activation_check_proc_1e_func_2034893027(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_1e_func_1518488873(_activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_6, _activatnvar_confusing_U8_7);
	/* inline */ _activation_check_proc_1e_func_1034010258(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_1e_func_1405490628(_activatnvar_secret, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_1e_func_321260433(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_1e_func_636818053(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1e_func_321260433(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] += _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_1e_func_1170087590(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_2034893027(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1e_func_490604446(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_5)
{
	
	_activation_check_proc_1e_func_1960781885(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_5, _activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1e_func_1960781885(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("5505d41f-4837-937e-2885-32eb01886899");

	_activatnvar_confusing_chararray_5[0x2] >>= _activatnvar_confusing_LLUUID_8.mData[0xf];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_586738176(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xf] *= _activatnvar_lace.mData[0xa];

}

void _activation_check_proc_1e_func_338216154(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] >>= _activatnvar_code.mData[0x1];

}

void _activation_check_proc_1e_func_1769076852(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
	_activation_check_proc_1e_func_1462053615();
	/* inline */ _activation_check_proc_1e_func_79959449(_activatnvar_confusing_char_1, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1e_func_1462053615()
{
	
}

void _activation_check_proc_1e_func_1601036274(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_4.mData[0xe];

	_activation_check_proc_1e_func_1549253868();
}

void _activation_check_proc_1e_func_1549253868()
{
	
}

void _activation_check_proc_1e_func_396449501(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_int_e &= 0xff;

	_activatnvar_confusing_LLUUID_9.mData[0x7] &= _activatnvar_confusing_LLUUID_c.mData[0x2];

}

void _activation_check_proc_1e_func_1436742723(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1966717981(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_62623380(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1e_func_915297685(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] |= _activatnvar_section1.mData[0xc];

	_activation_check_proc_1e_func_62623380(_activatnvar_confusing_int_5);
}

void _activation_check_proc_1e_func_1104649943(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_1e_func_874140120(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_1 &= _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_1e_func_1967626345(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_759310532(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xb] >>= _activatnvar_mac_digest[0x4];

}

void _activation_check_proc_1e_func_1974974824(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_1e_func_69847987(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xb] == 0xb) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1e_func_50016635(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_4[0xe] <<= _activatnvar_confusing_chararray_d[0xd];

}

void _activation_check_proc_1e_func_1181435192(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] &= _activatnvar_confusing_LLUUID_7.mData[0x5];

}

void _activation_check_proc_1e_func_1719322650(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_1 = false;

	_activatnvar_confusing_char_4 &= _activatnvar_confusing_LLUUID_e.mData[0x0];

	_activation_check_proc_1e_func_1181435192(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_1e_func_1674663239(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_chararray_6[0xb];

	/* inline */ _activation_check_proc_1e_func_1396699560(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1e_func_92130367(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_1552164812(U8& _activatnvar_t0, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

	_activation_check_proc_1e_func_92130367(_activatnvar_t0);
}

void _activation_check_proc_1e_func_1207932567(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_276236693(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_2076115310(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_section1;

	_activation_check_proc_1e_func_780125212(_activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_1e_func_780125212(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_1e_func_1948547653(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x6] += _activatnvar_confusing_chararray_8[0x1];

	_activation_check_proc_1e_func_1598980046(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_1e_func_1598980046(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1454237538(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1e_func_1542736212(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_d[0xe] >>= _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_1e_func_1850100344(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_section2;

}

void _activation_check_proc_1e_func_553412031(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	
	_activation_check_proc_1e_func_1850100344(_activatnvar_confusing_LLUUID_a, _activatnvar_section2);
}

void _activation_check_proc_1e_func_395562990(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_982295405(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_7[0xe] &= _activatnvar_confusing_LLUUID_5.mData[0x2];

}

void _activation_check_proc_1e_func_10829603(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_1e_func_1782525555(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("e21674e1-f607-952a-03d9-32c7051fbc0f");

}

void _activation_check_proc_1e_func_166412850(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_7[0xc] = _activatnvar_mac_digest[0xb];

	/* inline */ _activation_check_proc_1e_func_622758524(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1e_func_1448832760(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_1e_func_1336767440(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1593632628(char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1e_func_549812833(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_5.mData[0x1] *= _activatnvar_confusing_LLUUID_0.mData[0xc];

	_activation_check_proc_1e_func_1593632628(_activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_generic_bool_1, _activatnvar_lace);
}

void _activation_check_proc_1e_func_202006159(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x6] += _activatnvar_confusing_chararray_1[0xc];

}

void _activation_check_proc_1e_func_914622431(unsigned char* _activatnvar_name_digest, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
	_activatnvar_strbuf_0[0] = 120; _activatnvar_strbuf_0[0] ^= 65; _activatnvar_strbuf_0[1] = 29; _activatnvar_strbuf_0[1] ^= 45; _activatnvar_strbuf_0[2] = 120; _activatnvar_strbuf_0[2] ^= 75; _activatnvar_strbuf_0[3] = 70; _activatnvar_strbuf_0[3] ^= 114; _activatnvar_strbuf_0[4] = 119; _activatnvar_strbuf_0[4] ^= 21; _activatnvar_strbuf_0[5] = 84; _activatnvar_strbuf_0[5] ^= 48; _activatnvar_strbuf_0[6] = 51; _activatnvar_strbuf_0[6] ^= 6; _activatnvar_strbuf_0[7] = 49; _activatnvar_strbuf_0[7] ^= 6; _activatnvar_strbuf_0[8] = 22; _activatnvar_strbuf_0[8] ^= 59; _activatnvar_strbuf_0[9] = 6; _activatnvar_strbuf_0[9] ^= 100; _activatnvar_strbuf_0[10] = 5; _activatnvar_strbuf_0[10] ^= 50; _activatnvar_strbuf_0[11] = 83; _activatnvar_strbuf_0[11] ^= 55; _activatnvar_strbuf_0[12] = 14; _activatnvar_strbuf_0[12] ^= 54; _activatnvar_strbuf_0[13] = 106; _activatnvar_strbuf_0[13] ^= 71; _activatnvar_strbuf_0[14] = 58; _activatnvar_strbuf_0[14] ^= 14; _activatnvar_strbuf_0[15] = 80; _activatnvar_strbuf_0[15] ^= 51; _activatnvar_strbuf_0[16] = 81; _activatnvar_strbuf_0[16] ^= 51; _activatnvar_strbuf_0[17] = 43; _activatnvar_strbuf_0[17] ^= 73; _activatnvar_strbuf_0[18] = 99; _activatnvar_strbuf_0[18] ^= 78; _activatnvar_strbuf_0[19] = 103; _activatnvar_strbuf_0[19] ^= 95; _activatnvar_strbuf_0[20] = 26; _activatnvar_strbuf_0[20] ^= 127; _activatnvar_strbuf_0[21] = 65; _activatnvar_strbuf_0[21] ^= 35; _activatnvar_strbuf_0[22] = 14; _activatnvar_strbuf_0[22] ^= 104; _activatnvar_strbuf_0[23] = 30; _activatnvar_strbuf_0[23] ^= 51; _activatnvar_strbuf_0[24] = 21; _activatnvar_strbuf_0[24] ^= 33; _activatnvar_strbuf_0[25] = 6; _activatnvar_strbuf_0[25] ^= 48; _activatnvar_strbuf_0[26] = 31; _activatnvar_strbuf_0[26] ^= 42; _activatnvar_strbuf_0[27] = 93; _activatnvar_strbuf_0[27] ^= 62; _activatnvar_strbuf_0[28] = 6; _activatnvar_strbuf_0[28] ^= 54; _activatnvar_strbuf_0[29] = 100; _activatnvar_strbuf_0[29] ^= 87; _activatnvar_strbuf_0[30] = 109; _activatnvar_strbuf_0[30] ^= 14; _activatnvar_strbuf_0[31] = 31; _activatnvar_strbuf_0[31] ^= 45; _activatnvar_strbuf_0[32] = 122; _activatnvar_strbuf_0[32] ^= 75; _activatnvar_strbuf_0[33] = 108; _activatnvar_strbuf_0[33] ^= 13; _activatnvar_strbuf_0[34] = 51; _activatnvar_strbuf_0[34] ^= 87; _activatnvar_strbuf_0[35] = 21; _activatnvar_strbuf_0[35] ^= 32; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1e_func_1495989398(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_352504445(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_code.mData[0xf];

}

void _activation_check_proc_1e_func_608994064()
{
	
}

void _activation_check_proc_1e_func_1558207599(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("d6d26f07-a2d0-d5ad-ab03-40723a7746db");

	_activation_check_proc_1e_func_608994064();
}

void _activation_check_proc_1e_func_219759597(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	/* inline */ _activation_check_proc_1e_func_5020904(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_1e_func_1888512384(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_9.mData[0x2];

	_activation_check_proc_1e_func_421884644(_activatnvar_confusing_int_0);
}

void _activation_check_proc_1e_func_421884644(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 ^= 0x4;

}

void _activation_check_proc_1e_func_1743382745(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_3;

	/* inline */ _activation_check_proc_1e_func_378260700(_activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1e_func_1035897729(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_1e_func_1944324182(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_1e_func_1435552323(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_pos, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	_activation_check_proc_1e_func_1035897729(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_f);
	_activation_check_proc_1e_func_1944324182(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_1e_func_1557029716(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_LLUUID_3.mData[0xb];

	_activation_check_proc_1e_func_1045628454(_activatnvar_confusing_U8_d, _activatnvar_confusing_char_c);
	_activation_check_proc_1e_func_301126813(_activatnvar_confusing_char_a);
}

void _activation_check_proc_1e_func_301126813(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a >>= 0x1;

}

void _activation_check_proc_1e_func_1045628454(U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_char_c;

}

void _activation_check_proc_1e_func_1444392855(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_chararray_f[0xa];

	/* inline */ _activation_check_proc_1e_func_1019014073(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_f);
	_activation_check_proc_1e_func_1874595246(_activatnvar_code, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1e_func_1874595246(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] = _activatnvar_code.mData[0xa];

}

void _activation_check_proc_1e_func_386387827(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x3] += _activatnvar_code.mData[0x6];

}

void _activation_check_proc_1e_func_832587671(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_435963061(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_1e_func_621677385(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_911897275(_activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1e_func_911897275(unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xc] += _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_1e_func_156911048(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_1e_func_901203314()
{
	
}

void _activation_check_proc_1e_func_40277118(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("53742c9d-569a-3aa5-7959-1af64b926fee");

}

void _activation_check_proc_1e_func_1274669842(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_U8_1++;

	/* inline */ _activation_check_proc_1e_func_2123742818(_activatnvar_confusing_char_3, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_1e_func_1892351470(bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_LLUUID_a.mData[0x7] |= _activatnvar_confusing_chararray_6[0xd];

	/* inline */ _activation_check_proc_1e_func_788239849(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_1e_func_897361000()
{
	
}

void _activation_check_proc_1e_func_1664905648(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_1e_func_62620736(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xf] != 0x6) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_1e_func_1813968846(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("5e2b76cf-5131-a989-4a2c-983c16376443");

}

void _activation_check_proc_1e_func_1661152491(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_316682039(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_d.mData[0xf];

}

void _activation_check_proc_1e_func_66618895(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_554162122(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_chararray_2[0xd];

	_activation_check_proc_1e_func_66618895(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_837854750(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_chararray_8[0x0];

}

void _activation_check_proc_1e_func_1232878862(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_1e_func_1483901441(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1e_func_34863795(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_505503682(int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_1e_func_1483901441(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_6);
	_activation_check_proc_1e_func_34863795(_activatnvar_t0);
	/* inline */ _activation_check_proc_1e_func_654730821(_activatnvar_t0);
}

void _activation_check_proc_1e_func_969627173(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x5] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1e_func_55041554(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xb] != 0xa) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1e_func_159807175(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_1e_func_1417009380(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_2026628735(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_464340429(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_1e_func_321437921(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_0 <<= _activatnvar_confusing_int_2;

}

void _activation_check_proc_1e_func_1912085225(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1e_func_620475935(U8& _activatnvar_pos)
{
	
	_activation_check_proc_1e_func_1912085225(_activatnvar_pos);
}

void _activation_check_proc_1e_func_869778961(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1e_func_458583835(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1e_func_2018023188(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_1e_func_139013290(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] <<= _activatnvar_confusing_chararray_5[0x8];

}

void _activation_check_proc_1e_func_1568572719(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_char_a;

	/* inline */ _activation_check_proc_1e_func_52743386(_activatnvar_confusing_LLUUID_0, _activatnvar_fscked);
}

void _activation_check_proc_1e_func_102300774(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 |= _activatnvar_confusing_int_2;

}

void _activation_check_proc_1e_func_1790342843(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_510142421(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] *= _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_1e_func_1877370934(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_1e_func_129883232(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_8 ^= _activatnvar_confusing_int_2;

}

void _activation_check_proc_1e_func_1296515785(int& _activatnvar_confusing_int_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_6 &= _activatnvar_generic_iterator;

}

void _activation_check_proc_1e_func_4529034(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_342354621(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_6)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_6 *= _activatnvar_confusing_char_a;

	_activation_check_proc_1e_func_129883232(_activatnvar_confusing_int_8, _activatnvar_confusing_int_2);
	_activation_check_proc_1e_func_1296515785(_activatnvar_confusing_int_6, _activatnvar_generic_iterator);
	_activation_check_proc_1e_func_4529034(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1675812540(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1126024358(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_1e_func_687016787(int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_char_f;

	_activation_check_proc_1e_func_882460525(_activatnvar_confusing_int_4);
}

void _activation_check_proc_1e_func_882460525(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0x8;

}

void _activation_check_proc_1e_func_1342372046(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1e_func_1421484728(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_1e_func_1367583195(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("e297fc0b-dbf7-f456-44a1-d4f27ef8da94");

}

void _activation_check_proc_1e_func_1662834729(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 *= _activatnvar_confusing_int_7;

}

void _activation_check_proc_1e_func_1750949741(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_2096557869(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_1662834729(_activatnvar_confusing_int_7, _activatnvar_confusing_int_5);
	_activation_check_proc_1e_func_1750949741(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
	/* inline */ _activation_check_proc_1e_func_1589433335(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_1e_func_1303500788(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_1e_func_381528287(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1e_func_1655795263(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xf] += _activatnvar_confusing_LLUUID_a.mData[0xa];

	_activation_check_proc_1e_func_826285402(_activatnvar_confusing_U8_e, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_1e_func_826285402(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 <<= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_1e_func_1942141615(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b ^= _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_1e_func_991781510(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1e_func_676896401(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1e_func_749252384(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_e.mData[0x7] |= _activatnvar_confusing_chararray_a[0xf];

	/* inline */ _activation_check_proc_1e_func_1246742185(_activatnvar_confusing_int_6, _activatnvar_confusing_int_a);
}

void _activation_check_proc_1e_func_1218255183(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_9 >>= _activatnvar_confusing_char_7;

}

void _activation_check_proc_1e_func_1875802259(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = 0x0;

}

void _activation_check_proc_1e_func_1653768673(bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1e_func_611694605(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_int_b = 0xa;

	_activation_check_proc_1e_func_1525079628(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_1e_func_1357474759(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_1e_func_1653768673(_activatnvar_confusing_bool_2);
}

void _activation_check_proc_1e_func_1525079628(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x3] == 0xe) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1e_func_2112411862(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x5] >>= _activatnvar_confusing_LLUUID_e.mData[0x7];

}

void _activation_check_proc_1e_func_80354947(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	
	_activation_check_proc_1e_func_732824277(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_1e_func_732824277(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_d[0x1] &= _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_1e_func_921267951(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1e_func_1317553419(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1e_func_1772162899(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_1e_func_1502569582(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_1e_func_755914850(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_d <<= _activatnvar_confusing_char_8;

}

void _activation_check_proc_1e_func_276563442(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= 0x6;

}

void _activation_check_proc_1e_func_560169514(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_1e_func_36198602(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_1e_func_1804754538(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_1e_func_667453117(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_c;

	/* inline */ _activation_check_proc_1e_func_1641516403(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_1e_func_273372867(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x8] <<= _activatnvar_confusing_chararray_e[0x9];

}

void _activation_check_proc_1e_func_1595403449(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_1e_func_1114753541(unsigned char* _activatnvar_name_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x0] = _activatnvar_name_digest[0xb];

	_activation_check_proc_1e_func_1595403449(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1578556279(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("17a78871-a7af-d437-37c6-e4591a780068");

	_activation_check_proc_1e_func_789373945(_activatnvar_fscked, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1e_func_789373945(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_fscked;

}

void _activation_check_proc_1e_func_1219266617(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 += _activatnvar_generic_iterator;

	/* inline */ _activation_check_proc_1e_func_630751924(_activatnvar_confusing_int_6);
}

void _activation_check_proc_1e_func_1117530318(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_4.mData[0xd];

}

void _activation_check_proc_1e_func_2100126122(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 ^= 0xb;

}

void _activation_check_proc_1e_func_973806314(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_1e_func_2100126122(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_1e_func_1913530882(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x2] &= _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_1e_func_411057248(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_1e_func_1172837022(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] += _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_1e_func_202495436(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] *= _activatnvar_confusing_LLUUID_d.mData[0x7];

}

void _activation_check_proc_1e_func_634143220(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 += _activatnvar_confusing_chararray_2[0x4];

}

void _activation_check_proc_1e_func_577524228(int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_int_3++;

	_activation_check_proc_1e_func_634143220(_activatnvar_confusing_chararray_2, _activatnvar_confusing_char_5);
}

void _activation_check_proc_1e_func_1629311305(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_1e_func_263369281(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_1e_func_1972747690(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_1e_func_1863529255(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_1e_func_1588951112(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_628850724(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_LLUUID_f.mData[0xf];

	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_1e_func_1350917389(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_1e_func_1350917389(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1e_func_420200090(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xe] = _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_1e_func_758993071(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x5] <<= _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_1e_func_1948137240(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_6)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_6 += _activatnvar_confusing_U8_d;

}

void _activation_check_proc_1e_func_650247540(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_d.mData[0x7] &= _activatnvar_confusing_chararray_b[0x7];

	/* inline */ _activation_check_proc_1e_func_1988436830(_activatnvar_confusing_chararray_f, _activatnvar_ser_digest);
	_activation_check_proc_1e_func_758993071(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_1e_func_420200090(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_5);
	_activation_check_proc_1e_func_1948137240(_activatnvar_confusing_bool_e, _activatnvar_confusing_U8_d, _activatnvar_confusing_char_6);
}

void _activation_check_proc_1e_func_549003346(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_a *= _activatnvar_confusing_chararray_0[0x6];

}

void _activation_check_proc_1e_func_934413501(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_1e_func_952331279(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("43dd3557-9527-05b3-7ca9-664ade794e6d");

}

void _activation_check_proc_1e_func_1703921470(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_1e_func_934413501(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_6);
	_activation_check_proc_1e_func_952331279(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1e_func_262563559(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_1e_func_1434635309(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_1e_func_905457383(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_1e_func_1339633613(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_1e_func_1978977399(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_2[0xe] ^= _activatnvar_so.mData[0x6];

}

void _activation_check_proc_1e_func_2127313010(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_1e_func_1835126170(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x6] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_4 = true;

	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_1e_func_2127313010(_activatnvar_pos);
	/* inline */ _activation_check_proc_1e_func_313412838(_activatnvar_pos);
}

void _activation_check_proc_1e_func_560543919(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_1e_func_231838338(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_1e_func_1864470041(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1e_func_1905313796(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_section2.mData[0xa];

	/* inline */ _activation_check_proc_1e_func_1609297624(_activatnvar_doaccount, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_1e_func_2127478450(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1e_func_1664978547(_activatnvar_doaccount, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_1e_func_1748450078(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1e_func_796153359(unsigned char* _activatnvar_confusing_chararray_b, char* _activatnvar_strbuf_0, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_1e_func_1138240019(_activatnvar_confusing_chararray_b, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_1e_func_171453793(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_9, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_code)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x7] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_a;

	_activation_check_proc_1e_func_938008598(_activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_938008598(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_831454288(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1e_func_1787699795(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_4.mData[0xe] |= _activatnvar_ser_digest[0xc];

}

void _activation_check_proc_1e_func_541778257(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_1e_func_3897824(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_589449091(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x0] |= _activatnvar_confusing_chararray_1[0x9];

	_activation_check_proc_1e_func_3897824(_activatnvar_t0);
}

void _activation_check_proc_1e_func_575074129(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_ser_digest, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] += _activatnvar_confusing_LLUUID_1.mData[0x5];

	/* inline */ _activation_check_proc_1e_func_1770556205(_activatnvar_confusing_LLUUID_0, _activatnvar_ser_digest);
	_activation_check_proc_1e_func_635160317(_activatnvar_confusing_bool_7, _activatnvar_confusing_char_0, _activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1e_func_635160317(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x2] == _activatnvar_confusing_char_0) _activatnvar_confusing_bool_7 = true;

	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_1e_func_1718665693(unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_77159994(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_1e_func_77159994(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_8[0xc] += _activatnvar_confusing_chararray_e[0xf];

}

void _activation_check_proc_1e_func_1798542521(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_combined_id.mData[0xd];

}

void _activation_check_proc_1e_func_1943550848(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d *= _activatnvar_confusing_int_d;

}

void _activation_check_proc_1e_func_1912468042(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_1e_func_188418073(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1e_func_1968329143(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_6)
{
	
	_activation_check_proc_1e_func_1673681384(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_1e_func_1673681384(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_LLUUID_7.mData[0xa];

}

void _activation_check_proc_1e_func_833001549(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_1e_func_180127240(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 ^= _activatnvar_confusing_U8_e;

	_activation_check_proc_1e_func_1475778473(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_1e_func_1475778473(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c &= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_1e_func_761134093(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xb] &= _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_1e_func_1973691101(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_2010642426()
{
	
}

void _activation_check_proc_1e_func_576666429(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_1e_func_822070426(unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_1e_func_192131327(_activatnvar_pos);
	_activation_check_proc_1e_func_205863324(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_1e_func_205863324(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_e.mData[0x9] *= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_1e_func_702315936(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1e_func_1559460127(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_U8_3 += _activatnvar_confusing_char_4;

}

void _activation_check_proc_1e_func_1535660373(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_1e_func_952427465(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_1e_func_1369203545(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1e_func_540724666(char& _activatnvar_confusing_char_7, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_char_7++;

	_activation_check_proc_1e_func_1667124405(_activatnvar_confusing_int_7, _activatnvar_confusing_int_2);
}

void _activation_check_proc_1e_func_1667124405(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_2;

}

void _activation_check_proc_1e_func_1081153700(U8& _activatnvar_confusing_U8_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_603472398(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_1e_func_603472398(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_1e_func_938281312(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1e_func_419077213(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_1e_func_552537915(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_4[0x5] >>= _activatnvar_confusing_LLUUID_4.mData[0x5];

}

void _activation_check_proc_1e_func_199669899(bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_1e_func_212585852(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] += _activatnvar_confusing_chararray_1[0x8];

	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1e_func_620314934(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1e_func_1932287770(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_LLUUID_4.mData[0x9];

	_activation_check_proc_1e_func_212585852(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_1, _activatnvar_t0);
	_activation_check_proc_1e_func_620314934(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_1e_func_641153985(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_LLUUID_0.mData[0xd];

}

void _activation_check_proc_1e_func_113072256(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_1e_func_1917399818(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] += _activatnvar_confusing_chararray_d[0x2];

}

void _activation_check_proc_1e_func_1844082634(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_301406554(int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_e;

	_activation_check_proc_1e_func_739842092(_activatnvar_confusing_int_c);
}

void _activation_check_proc_1e_func_739842092(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1e_func_735226608(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_char_1;

}

void _activation_check_proc_1e_func_1955717142(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x5] &= _activatnvar_confusing_LLUUID_3.mData[0xc];

}

void _activation_check_proc_1e_func_1165987993(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x7] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_4 = true;

	_activation_check_proc_1e_func_1955717142(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_1e_func_735226608(_activatnvar_confusing_char_3, _activatnvar_confusing_char_1);
}

void _activation_check_proc_1e_func_857965467(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x5] != _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1e_func_1350334225(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 *= _activatnvar_confusing_chararray_5[0x0];

}

void _activation_check_proc_1e_func_1059414951(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("a1fc163d-9688-4c66-ee57-93b91f6fe640");

}

void _activation_check_proc_1e_func_948100765(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_LLUUID_6.mData[0x7] ^= _activatnvar_confusing_chararray_0[0x8];

	_activation_check_proc_1e_func_1059414951(_activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_1e_func_264187890(_activatnvar_combined_id, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_1e_func_1009500269(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_0 = _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_1e_func_1751414326(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_bool_b &= _activatnvar_generic_bool_1;

	/* inline */ _activation_check_proc_1e_func_481877613();
	/* inline */ _activation_check_proc_1e_func_816028239(_activatnvar_confusing_char_8, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_1e_func_1089155243(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1e_func_1249448274(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x8] += _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_1e_func_1718334893(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] *= _activatnvar_confusing_chararray_9[0x9];

	_activation_check_proc_1e_func_1249448274(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_1e_func_743602531(_activatnvar_confusing_char_5, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_1e_func_1271433816(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0x9;

}

void _activation_check_proc_1e_func_2036321879(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 += 0x2;

}

void _activation_check_proc_1e_func_254329840(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_c)
{
	
	/* inline */ _activation_check_proc_1e_func_1108167458(_activatnvar_confusing_char_c, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1e_func_360815720(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_secret;

}

void _activation_check_proc_1e_func_780006541(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_1e_func_775956221(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_b[0x4] >>= _activatnvar_confusing_LLUUID_2.mData[0x7];

}

void _activation_check_proc_1e_func_842382223(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_e++;

	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1e_func_1975285038(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_1e_func_69668990(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("d18005ec-a068-385b-d644-63c65a9e70e0");

}

void _activation_check_proc_1e_func_494126081(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a ^= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_1e_func_1465360245(int& _activatnvar_confusing_int_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_e >>= 0x9;

	_activation_check_proc_1e_func_439989744(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_439989744(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_1e_func_1932927331(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1e_func_162522970(char& _activatnvar_confusing_char_9, bool& _activatnvar_generic_bool_0, U8& _activatnvar_pos)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_9 &= 0xc;

	_activation_check_proc_1e_func_1932927331(_activatnvar_pos);
}

void _activation_check_proc_1e_func_8465169(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_250076021(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 >>= 0xa;

}

void _activation_check_proc_1e_func_2136875517(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_chararray_e[0x5];

}

void _activation_check_proc_1e_func_2040446676(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_127944881(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_85051575(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_doaccount, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1e_func_438800548(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_1e_func_889097698(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_2, _activatnvar_doaccount);
	_activation_check_proc_1e_func_127944881(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1e_func_1255063022(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_889097698(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = _activatnvar_doaccount;

}

void _activation_check_proc_1e_func_1337549662(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_9 += _activatnvar_confusing_char_0;

}

void _activation_check_proc_1e_func_135353135(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("b257f78a-2eb7-7682-cf60-07a1c0cf519e");

}

void _activation_check_proc_1e_func_1516081260(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_7[0x3] <<= _activatnvar_confusing_chararray_9[0x7];

}

void _activation_check_proc_1e_func_1600352481(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1293432229(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_1e_func_1863021938(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_f.mData[0x6];

	/* inline */ _activation_check_proc_1e_func_1861930340(_activatnvar_t0);
}

void _activation_check_proc_1e_func_909811235(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1e_func_478439507(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x5] *= _activatnvar_confusing_LLUUID_a.mData[0x0];

}

void _activation_check_proc_1e_func_1106867245(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_6[0x9] &= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_1e_func_1361191807(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1e_func_1251852662(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1e_func_1566626385(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1e_func_1271565563(unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 >>= _activatnvar_confusing_chararray_5[0x2];

}

void _activation_check_proc_1e_func_1984121730(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_combined_id;

}

void _activation_check_proc_1e_func_296307296(unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_0[0x2] |= _activatnvar_confusing_LLUUID_a.mData[0xc];

	/* inline */ _activation_check_proc_1e_func_1019612602(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1e_func_949767459(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("08e0758c-96b7-a9c2-8e8f-45b9e08d2a31");

}

void _activation_check_proc_1e_func_1987577925(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1524673818(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1634366959(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_1e_func_84016022(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_0.mData[0xd];

}

void _activation_check_proc_1e_func_514119723(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a >>= _activatnvar_confusing_U8_5;

	_activation_check_proc_1e_func_1542304421(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1e_func_1542304421(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("d0f2aeb1-0325-5897-112c-013e2edf1e89");

}

void _activation_check_proc_1e_func_1473169888(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 62; _activatnvar_strbuf_0[0] ^= 8; _activatnvar_strbuf_0[1] = 79; _activatnvar_strbuf_0[1] ^= 127; _activatnvar_strbuf_0[2] = 57; _activatnvar_strbuf_0[2] ^= 13; _activatnvar_strbuf_0[3] = 5; _activatnvar_strbuf_0[3] ^= 52; _activatnvar_strbuf_0[4] = 117; _activatnvar_strbuf_0[4] ^= 70; _activatnvar_strbuf_0[5] = 87; _activatnvar_strbuf_0[5] ^= 52; _activatnvar_strbuf_0[6] = 85; _activatnvar_strbuf_0[6] ^= 101; _activatnvar_strbuf_0[7] = 41; _activatnvar_strbuf_0[7] ^= 27; _activatnvar_strbuf_0[8] = 51; _activatnvar_strbuf_0[8] ^= 30; _activatnvar_strbuf_0[9] = 93; _activatnvar_strbuf_0[9] ^= 109; _activatnvar_strbuf_0[10] = 120; _activatnvar_strbuf_0[10] ^= 74; _activatnvar_strbuf_0[11] = 62; _activatnvar_strbuf_0[11] ^= 10; _activatnvar_strbuf_0[12] = 29; _activatnvar_strbuf_0[12] ^= 43; _activatnvar_strbuf_0[13] = 69; _activatnvar_strbuf_0[13] ^= 104; _activatnvar_strbuf_0[14] = 71; _activatnvar_strbuf_0[14] ^= 119; _activatnvar_strbuf_0[15] = 32; _activatnvar_strbuf_0[15] ^= 16; _activatnvar_strbuf_0[16] = 112; _activatnvar_strbuf_0[16] ^= 67; _activatnvar_strbuf_0[17] = 9; _activatnvar_strbuf_0[17] ^= 57; _activatnvar_strbuf_0[18] = 119; _activatnvar_strbuf_0[18] ^= 90; _activatnvar_strbuf_0[19] = 34; _activatnvar_strbuf_0[19] ^= 16; _activatnvar_strbuf_0[20] = 64; _activatnvar_strbuf_0[20] ^= 113; _activatnvar_strbuf_0[21] = 109; _activatnvar_strbuf_0[21] ^= 93; _activatnvar_strbuf_0[22] = 113; _activatnvar_strbuf_0[22] ^= 72; _activatnvar_strbuf_0[23] = 38; _activatnvar_strbuf_0[23] ^= 11; _activatnvar_strbuf_0[24] = 68; _activatnvar_strbuf_0[24] ^= 124; _activatnvar_strbuf_0[25] = 65; _activatnvar_strbuf_0[25] ^= 121; _activatnvar_strbuf_0[26] = 104; _activatnvar_strbuf_0[26] ^= 93; _activatnvar_strbuf_0[27] = 121; _activatnvar_strbuf_0[27] ^= 72; _activatnvar_strbuf_0[28] = 45; _activatnvar_strbuf_0[28] ^= 25; _activatnvar_strbuf_0[29] = 81; _activatnvar_strbuf_0[29] ^= 104; _activatnvar_strbuf_0[30] = 124; _activatnvar_strbuf_0[30] ^= 76; _activatnvar_strbuf_0[31] = 103; _activatnvar_strbuf_0[31] ^= 6; _activatnvar_strbuf_0[32] = 66; _activatnvar_strbuf_0[32] ^= 33; _activatnvar_strbuf_0[33] = 5; _activatnvar_strbuf_0[33] ^= 61; _activatnvar_strbuf_0[34] = 120; _activatnvar_strbuf_0[34] ^= 29; _activatnvar_strbuf_0[35] = 5; _activatnvar_strbuf_0[35] ^= 54; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1e_func_305628367(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_4, char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_int_4 &= 0xff;

	/* inline */ _activation_check_proc_1e_func_1330480904(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_a, _activatnvar_confusing_bool_9);
	_activation_check_proc_1e_func_1473169888(_activatnvar_strbuf_0);
}

void _activation_check_proc_1e_func_2130165893(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_6.mData[0x5];

	/* inline */ _activation_check_proc_1e_func_1382125075(_activatnvar_confusing_U8_f, _activatnvar_confusing_char_7);
	/* inline */ _activation_check_proc_1e_func_555083530(_activatnvar_generic_iterator);
	_activation_check_proc_1e_func_1871144622(_activatnvar_confusing_int_6);
}

void _activation_check_proc_1e_func_1871144622(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1e_func_786956085(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1e_func_1138273006(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1e_func_1261295458(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("4c83e30f-0b9a-543b-228d-745054969124");

	_activation_check_proc_1e_func_1138273006(_activatnvar_t0);
	_activation_check_proc_1e_func_786956085(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_1e_func_1202929029(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_687538413(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_chararray_d[0x0];

}

void _activation_check_proc_1e_func_146784320(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_1e_func_226919264(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1e_func_705124728(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1e_func_825780658(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_2092481248(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1e_func_1381062166(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_1e_func_1917960709(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1e_func_1511708022(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_0;

	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1e_func_1823823496(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_1e_func_910313885()
{
	
}

void _activation_check_proc_1e_func_1309755501(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 <<= _activatnvar_confusing_int_a;

}

void _activation_check_proc_1e_func_1057368123(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1385570636(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, U8& _activatnvar_pos, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 >>= _activatnvar_pos;

	_activation_check_proc_1e_func_1057368123(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1e_func_933607934(_activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_1e_func_15671260(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("ecb74582-e987-48d9-457d-0845b74b3488");

}

void _activation_check_proc_1e_func_1677614695(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 <<= _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_1e_func_1442487879(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_4 += _activatnvar_confusing_U8_4;

	_activation_check_proc_1e_func_1677614695(_activatnvar_confusing_chararray_e, _activatnvar_confusing_char_4);
}

void _activation_check_proc_1e_func_896039528(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1977984005(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_896039528(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
	_activation_check_proc_1e_func_682211264(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_f, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1e_func_682211264(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x2] == 0xc) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1e_func_1996568401(int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f |= _activatnvar_confusing_chararray_7[0x1];

	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_1e_func_209250552(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] <<= _activatnvar_ser_digest[0x4];

}

void _activation_check_proc_1e_func_597306179(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_a[0x6] *= _activatnvar_confusing_chararray_8[0x1];

	_activation_check_proc_1e_func_300555181(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_6);
	_activation_check_proc_1e_func_209250552(_activatnvar_confusing_LLUUID_7, _activatnvar_ser_digest);
}

void _activation_check_proc_1e_func_300555181(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xf] = _activatnvar_confusing_LLUUID_0.mData[0xa];

}

void _activation_check_proc_1e_func_1013061996(char& _activatnvar_confusing_char_1, U8& _activatnvar_t1)
{
	_activatnvar_confusing_char_1 *= _activatnvar_t1;

}

void _activation_check_proc_1e_func_845142108(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_336791437(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_5 += _activatnvar_confusing_chararray_b[0xa];

}

void _activation_check_proc_1e_func_1407565629(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c += 0x7;

}

void _activation_check_proc_1e_func_1372818889(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_0[0x9] &= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_1e_func_1699035200(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1661445827(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("619fae56-234c-5920-609a-adc4a94557e9");

}

void _activation_check_proc_1e_func_1658715245(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_2002795250(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_3.mData[0x2] *= _activatnvar_lace.mData[0x3];

}

void _activation_check_proc_1e_func_2083004145(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xb] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1e_func_306456382(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("073d96f2-af68-7a41-afd3-955711aa33e4");

	_activation_check_proc_1e_func_1133895308(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_1e_func_1133895308(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_1e_func_921179747()
{
	
}

void _activation_check_proc_1e_func_1602997875(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("de9c3058-5c50-2e9b-0757-2147bc0dea55");

	/* inline */ _activation_check_proc_1e_func_1655313549(_activatnvar_doaccount, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_1e_func_921179747();
}

void _activation_check_proc_1e_func_1230153899(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_d = true;

	/* inline */ _activation_check_proc_1e_func_125651680(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_1e_func_1595445653(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_578681407(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_1e_func_92236996(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1e_func_1742039325(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_1e_func_1801019591(bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1e_func_1868273387(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1933884446()
{
	
}

void _activation_check_proc_1e_func_1976174372()
{
	
}

void _activation_check_proc_1e_func_206300559(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_1e_func_1213699095(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("652247f3-4135-601e-81f6-7dea85245315");

}

void _activation_check_proc_1e_func_151086164(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_1e_func_1081254574(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xc] != _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_a;

	_activatnvar_confusing_chararray_1[0x5] &= _activatnvar_confusing_LLUUID_2.mData[0xb];

}

void _activation_check_proc_1e_func_853807938(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_6 &= _activatnvar_confusing_int_3;

}

void _activation_check_proc_1e_func_2132564590(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("1aac9671-87b6-2ee8-e3c9-b0f927f97cce");

}

void _activation_check_proc_1e_func_1861789234(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 <<= _activatnvar_confusing_int_0;

}

void _activation_check_proc_1e_func_382309539(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_1e_func_541401400(U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e ^= _activatnvar_confusing_chararray_d[0x1];

	/* inline */ _activation_check_proc_1e_func_634523394(_activatnvar_confusing_U8_4);
	_activation_check_proc_1e_func_2045608900(_activatnvar_confusing_int_f);
}

void _activation_check_proc_1e_func_2045608900(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_1e_func_958551350(unsigned char* _activatnvar_name_digest, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_1e_func_741972750(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_e)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_e >>= _activatnvar_confusing_char_a;

}

void _activation_check_proc_1e_func_1975055650(int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x8] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_8;

	/* inline */ _activation_check_proc_1e_func_2026055444(_activatnvar_confusing_int_7);
}

void _activation_check_proc_1e_func_716279811(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 += _activatnvar_confusing_char_e;

}

void _activation_check_proc_1e_func_1056971406(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_e <<= _activatnvar_confusing_chararray_1[0x8];

	_activation_check_proc_1e_func_1604148405(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1e_func_1604148405(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_5.mData[0xf] >>= _activatnvar_confusing_LLUUID_1.mData[0x8];

}

void _activation_check_proc_1e_func_1515725607(int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_1e_func_2142360373(_activatnvar_confusing_int_0);
}

void _activation_check_proc_1e_func_132934627(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

	_activation_check_proc_1e_func_505975830(_activatnvar_secret, _activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_1e_func_1388010710(_activatnvar_strbuf_0);
	_activation_check_proc_1e_func_439801063(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_1e_func_505975830(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1e_func_439801063(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_1e_func_1843610589(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b |= _activatnvar_generic_iterator;

}

void _activation_check_proc_1e_func_687781601(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x9] != _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_f = true;

	_activation_check_proc_1e_func_1843610589(_activatnvar_generic_iterator, _activatnvar_confusing_int_b);
}

void _activation_check_proc_1e_func_264260767(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("9340fe6f-96d6-91b2-591c-4f809d48bdad");

	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
	/* inline */ _activation_check_proc_1e_func_515238971(_activatnvar_confusing_LLUUID_d, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_1e_func_845517672(_activatnvar_confusing_chararray_c, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_1e_func_797343593(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= _activatnvar_confusing_int_4;

}

void _activation_check_proc_1e_func_101794117(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1e_func_2082026164(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_U8_2++;

	_activation_check_proc_1e_func_1459197038(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_1e_func_1327736696(_activatnvar_confusing_chararray_b, _activatnvar_confusing_char_8, _activatnvar_code, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_1e_func_1459197038(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_1e_func_427358970(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_1[0x9] += _activatnvar_code.mData[0x4];

}

void _activation_check_proc_1e_func_1288999379(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1e_func_2073534375(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_1e_func_823837451(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x8] == _activatnvar_confusing_char_d) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_1e_func_2073534375(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_1e_func_818898144(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_1e_func_344298924(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1e_func_1067368877(std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
}

void _activation_check_proc_1e_func_487023915(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("3fef0f87-0807-7189-4344-7b9c86720328");

}

void _activation_check_proc_1e_func_978297604(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1744479184(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_978297604(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1982974614(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_8 ^= _activatnvar_confusing_int_2;

}

void _activation_check_proc_1e_func_1184198046(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] ^= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_1e_func_2083817231(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x6] |= _activatnvar_name_digest[0xf];

	_activation_check_proc_1e_func_2058803732(_activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_1e_func_920296107(_activatnvar_confusing_bool_9, _activatnvar_confusing_char_8, _activatnvar_confusing_char_e);
}

void _activation_check_proc_1e_func_2058803732(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("7d99ed12-1775-a6e1-b2c8-55e3f9548b32");

}

void _activation_check_proc_1e_func_1083184000(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1e_func_500830460(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] >>= _activatnvar_confusing_chararray_f[0x5];

}

void _activation_check_proc_1e_func_662362500(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_500830460(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_1e_func_463218222(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_4[0xe];

}

void _activation_check_proc_1e_func_1231894960(int& _activatnvar_confusing_int_c, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_int_c += 0xb;

	_activation_check_proc_1e_func_531269811(_activatnvar_t0, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_1e_func_531269811(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 <<= _activatnvar_t0;

}

void _activation_check_proc_1e_func_1689329296(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1810804219(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = 0xe;

}

void _activation_check_proc_1e_func_573835182(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1390051552(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("d0b91ac1-707c-5546-9d5f-69cbec7ffdf4");

	_activation_check_proc_1e_func_1689329296(_activatnvar_generic_iterator);
	_activation_check_proc_1e_func_573835182(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator);
	_activation_check_proc_1e_func_1810804219(_activatnvar_confusing_U8_c);
}

void _activation_check_proc_1e_func_1858297820(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_1e_func_543976264(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_d |= _activatnvar_confusing_char_4;

	/* inline */ _activation_check_proc_1e_func_989768925(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_1e_func_559787700(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_4[0xd] ^= _activatnvar_confusing_chararray_e[0xb];

}

void _activation_check_proc_1e_func_364075954(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_2;

	_activation_check_proc_1e_func_559787700(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_1e_func_2090399353(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_1e_func_1063734561(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 |= _activatnvar_code.mData[0x9];

}

void _activation_check_proc_1e_func_1551216689(bool& _activatnvar_confusing_bool_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_int_6++;

	/* inline */ _activation_check_proc_1e_func_955825373(_activatnvar_generic_iterator);
	_activation_check_proc_1e_func_987722889(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_b);
	_activation_check_proc_1e_func_959634292(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_code);
}

void _activation_check_proc_1e_func_987722889(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_3 = true;

	
}

void _activation_check_proc_1e_func_959634292(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_2062686196(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_1e_func_1354538155(_activatnvar_pos, _activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_1e_func_1354538155(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1e_func_121190816(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_1e_func_1729903354(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xc] &= _activatnvar_confusing_chararray_5[0xf];

}

void _activation_check_proc_1e_func_1587805705(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1e_func_603303005(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("b29b5eb8-6b16-32d7-097b-e04e1bca4dcd");

	_activation_check_proc_1e_func_1132931161(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_1e_func_1132931161(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x6] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_1e_func_260708946(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xd] |= _activatnvar_combined_id.mData[0xb];

}

void _activation_check_proc_1e_func_456429432(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_LLUUID_e.mData[0x9] ^= _activatnvar_confusing_LLUUID_0.mData[0x5];

	_activation_check_proc_1e_func_488677691(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_1e_func_1004279723(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1e_func_488677691(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_1e_func_345655586(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_1e_func_1895934194(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_835834444(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_1189631321(_activatnvar_confusing_char_9, _activatnvar_confusing_bool_3, _activatnvar_confusing_U8_4);
	_activation_check_proc_1e_func_1895934194(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1189631321(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_4 ^= _activatnvar_confusing_char_9;

}

void _activation_check_proc_1e_func_2072668811()
{
	
}

void _activation_check_proc_1e_func_2013312191(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_0, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_d++;

	/* inline */ _activation_check_proc_1e_func_450404078(_activatnvar_confusing_int_b, _activatnvar_confusing_int_0);
	_activation_check_proc_1e_func_1999104699(_activatnvar_generic_bool_1, _activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_1e_func_1999104699(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1e_func_1081715804(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1210071289(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_1e_func_174706469(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_8;

	/* inline */ _activation_check_proc_1e_func_315587465(_activatnvar_t0);
}

void _activation_check_proc_1e_func_1759890333(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_1e_func_1994643343(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_c[0x3] *= _activatnvar_confusing_chararray_b[0x3];

	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_1e_func_838582303(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_2100852704(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_1e_func_927349537(int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

	/* inline */ _activation_check_proc_1e_func_610281373(_activatnvar_confusing_int_1);
}

void _activation_check_proc_1e_func_1422844139(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 >>= 0x7;

}

void _activation_check_proc_1e_func_1710209900(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_4 ^= _activatnvar_confusing_U8_7;

	/* inline */ _activation_check_proc_1e_func_237282079(_activatnvar_confusing_char_8, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1e_func_78085646(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
	/* inline */ _activation_check_proc_1e_func_1944927291(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_1e_func_1817703866(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_1e_func_1309471195(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_266913061(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 *= _activatnvar_confusing_chararray_4[0x7];

}

void _activation_check_proc_1e_func_1548753944(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] = _activatnvar_confusing_chararray_8[0x9];

}

void _activation_check_proc_1e_func_1094041813(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x8] |= _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_1e_func_1808980893(int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_1e_func_2026791863(_activatnvar_confusing_chararray_4, _activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_1e_func_1556793813(_activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_1e_func_1890392177();
}

void _activation_check_proc_1e_func_644420001(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] ^= _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_1e_func_971842971(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1e_func_689523985(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_9[0xc] &= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_1e_func_255026551(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_1e_func_821002650(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_6.mData[0x2] *= _activatnvar_confusing_chararray_a[0x7];

}

void _activation_check_proc_1e_func_1157359296(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1e_func_1820683224(bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_1e_func_710905591(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_2)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x4] != _activatnvar_confusing_U8_2) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_1e_func_1693975603(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	
	_activation_check_proc_1e_func_933897653(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_1e_func_710905591(_activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_1e_func_933897653(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xd] &= _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_1e_func_1771260525(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_1e_func_1980827607(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1e_func_663117140(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_1e_func_1513818482(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_6;

	_activation_check_proc_1e_func_160126354(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_1e_func_160126354(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_1e_func_140190658(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("558f8d1b-13e7-b49c-a9f7-e6e83086a0ec");

}

void _activation_check_proc_1e_func_512018775(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1328079662(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_512018775(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_136173098(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_pos)
{
	_activatnvar_confusing_U8_f &= _activatnvar_pos;

}

void _activation_check_proc_1e_func_1256631698(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x1] != _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_1e_func_2121689688(bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_6;

	_activation_check_proc_1e_func_1371088026(_activatnvar_confusing_int_7);
	_activation_check_proc_1e_func_1256631698(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_b, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_1e_func_1371088026(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 += 0x7;

}

void _activation_check_proc_1e_func_1519234616(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x0] == 0x8) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_1e_func_86915419(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_4 += 0x9;

}

void _activation_check_proc_1e_func_1796166817(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_9 *= _activatnvar_confusing_int_a;

}

void _activation_check_proc_1e_func_628883743(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_char_a;

}

void _activation_check_proc_1e_func_1034826229(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1540529891(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= _activatnvar_confusing_int_b;

}

void _activation_check_proc_1e_func_2018856741(int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_char_d++;

	_activation_check_proc_1e_func_1540529891(_activatnvar_confusing_int_b, _activatnvar_confusing_int_9);
}

void _activation_check_proc_1e_func_435164783(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1e_func_427329919(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 43; _activatnvar_strbuf_0[0] ^= 30; _activatnvar_strbuf_0[1] = 112; _activatnvar_strbuf_0[1] ^= 68; _activatnvar_strbuf_0[2] = 37; _activatnvar_strbuf_0[2] ^= 21; _activatnvar_strbuf_0[3] = 59; _activatnvar_strbuf_0[3] ^= 9; _activatnvar_strbuf_0[4] = 71; _activatnvar_strbuf_0[4] ^= 116; _activatnvar_strbuf_0[5] = 50; _activatnvar_strbuf_0[5] ^= 2; _activatnvar_strbuf_0[6] = 52; _activatnvar_strbuf_0[6] ^= 12; _activatnvar_strbuf_0[7] = 87; _activatnvar_strbuf_0[7] ^= 103; _activatnvar_strbuf_0[8] = 79; _activatnvar_strbuf_0[8] ^= 98; _activatnvar_strbuf_0[9] = 117; _activatnvar_strbuf_0[9] ^= 69; _activatnvar_strbuf_0[10] = 4; _activatnvar_strbuf_0[10] ^= 52; _activatnvar_strbuf_0[11] = 51; _activatnvar_strbuf_0[11] ^= 11; _activatnvar_strbuf_0[12] = 98; _activatnvar_strbuf_0[12] ^= 83; _activatnvar_strbuf_0[13] = 110; _activatnvar_strbuf_0[13] ^= 67; _activatnvar_strbuf_0[14] = 31; _activatnvar_strbuf_0[14] ^= 47; _activatnvar_strbuf_0[15] = 107; _activatnvar_strbuf_0[15] ^= 89; _activatnvar_strbuf_0[16] = 116; _activatnvar_strbuf_0[16] ^= 68; _activatnvar_strbuf_0[17] = 14; _activatnvar_strbuf_0[17] ^= 54; _activatnvar_strbuf_0[18] = 125; _activatnvar_strbuf_0[18] ^= 80; _activatnvar_strbuf_0[19] = 103; _activatnvar_strbuf_0[19] ^= 87; _activatnvar_strbuf_0[20] = 105; _activatnvar_strbuf_0[20] ^= 13; _activatnvar_strbuf_0[21] = 120; _activatnvar_strbuf_0[21] ^= 72; _activatnvar_strbuf_0[22] = 102; _activatnvar_strbuf_0[22] ^= 5; _activatnvar_strbuf_0[23] = 42; _activatnvar_strbuf_0[23] ^= 7; _activatnvar_strbuf_0[24] = 5; _activatnvar_strbuf_0[24] ^= 53; _activatnvar_strbuf_0[25] = 103; _activatnvar_strbuf_0[25] ^= 85; _activatnvar_strbuf_0[26] = 109; _activatnvar_strbuf_0[26] ^= 89; _activatnvar_strbuf_0[27] = 20; _activatnvar_strbuf_0[27] ^= 119; _activatnvar_strbuf_0[28] = 115; _activatnvar_strbuf_0[28] ^= 75; _activatnvar_strbuf_0[29] = 87; _activatnvar_strbuf_0[29] ^= 111; _activatnvar_strbuf_0[30] = 113; _activatnvar_strbuf_0[30] ^= 67; _activatnvar_strbuf_0[31] = 125; _activatnvar_strbuf_0[31] ^= 72; _activatnvar_strbuf_0[32] = 120; _activatnvar_strbuf_0[32] ^= 64; _activatnvar_strbuf_0[33] = 25; _activatnvar_strbuf_0[33] ^= 40; _activatnvar_strbuf_0[34] = 60; _activatnvar_strbuf_0[34] ^= 9; _activatnvar_strbuf_0[35] = 75; _activatnvar_strbuf_0[35] ^= 122; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_1e_func_1302207587(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("e464597c-2429-ea03-0dd8-5f3c7eb2cbc3");

	_activation_check_proc_1e_func_435164783(_activatnvar_strbuf_0, _activatnvar_section2);
	/* inline */ _activation_check_proc_1e_func_327758224(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_9);
	_activation_check_proc_1e_func_427329919(_activatnvar_strbuf_0);
}

void _activation_check_proc_1e_func_1836057728(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("9aa9d410-e82e-f757-9320-c0a0fd8b0606");

	/* inline */ _activation_check_proc_1e_func_101498491(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_5);
	_activation_check_proc_1e_func_984901688(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1e_func_984901688(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] = _activatnvar_confusing_LLUUID_f.mData[0x6];

}

void _activation_check_proc_1e_func_1003986291(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_7.mData[0x2] = _activatnvar_section1.mData[0x7];

}

void _activation_check_proc_1e_func_1315495898(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1e_func_1598171300(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_int_3 &= _activatnvar_confusing_int_1;

	_activatnvar_so = LLUUID(_activatnvar_section1);
}

void _activation_check_proc_1e_func_668913667(LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_secret;

	_activation_check_proc_1e_func_1003986291(_activatnvar_confusing_LLUUID_7, _activatnvar_section1);
	_activation_check_proc_1e_func_1315495898(_activatnvar_confusing_int_5);
	_activation_check_proc_1e_func_1598171300(_activatnvar_confusing_int_1, _activatnvar_confusing_int_3, _activatnvar_so, _activatnvar_section1);
}

void _activation_check_proc_1e_func_690466649(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("b56c047b-12b3-0494-c154-e06579ecece4");

}

void _activation_check_proc_1e_func_172420317(char& _activatnvar_confusing_char_2, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_6)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_6 *= _activatnvar_confusing_char_2;

}

void _activation_check_proc_1e_func_1937051361(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_9.mData[0x7];

}

void _activation_check_proc_1e_func_470852467(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x0] != 0xa) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1e_func_443551436(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_lace;

}

void _activation_check_proc_1e_func_1595530472(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1e_func_2018868344(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1e_func_2095239428(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_388580564(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_LLUUID_f.mData[0xf];

	/* inline */ _activation_check_proc_1e_func_1207207004(_activatnvar_combined_id, _activatnvar_t0);
	_activation_check_proc_1e_func_2095239428(_activatnvar_t0);
}

void _activation_check_proc_1e_func_134220303(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_1e_func_352832971(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1136547488(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
	_activatnvar_confusing_chararray_8[0x5] <<= _activatnvar_mac_digest[0x2];

}

void _activation_check_proc_1e_func_129581497(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_6.mData[0x2] |= _activatnvar_confusing_chararray_d[0x4];

}

void _activation_check_proc_1e_func_895022868(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_section1;

}

void _activation_check_proc_1e_func_1040383776(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("a424ff3d-7c17-dd5e-acab-039b5dbe1624");

}

void _activation_check_proc_1e_func_1255780572(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x1] == 0x6) _activatnvar_confusing_bool_d = false;

	_activation_check_proc_1e_func_1566080336(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1e_func_1566080336(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1e_func_937994932(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_1e_func_1939351250(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_c |= 0xc;

}

void _activation_check_proc_1e_func_154399854(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_473978203(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x2] == _activatnvar_t0) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1e_func_463733833(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_1e_func_1320724095(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_U8_a++;

	_activation_check_proc_1e_func_463733833(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_1e_func_1639383862(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_1e_func_388916230(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1752347350(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_1e_func_231414018(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_7[0x1] <<= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_1e_func_1549445181(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_pos, char& _activatnvar_confusing_char_b)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_1e_func_79841089(_activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1e_func_79841089(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_b |= _activatnvar_confusing_LLUUID_9.mData[0x2];

}

void _activation_check_proc_1e_func_896518598(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x7] &= _activatnvar_secret.mData[0xa];

}

void _activation_check_proc_1e_func_976559655(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_162537006(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_501797592()
{
	
}

void _activation_check_proc_1e_func_183869424(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_b;

	/* inline */ _activation_check_proc_1e_func_691963654();
}

void _activation_check_proc_1e_func_1957282575(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_2137768039(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_1957282575(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1884394122(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1e_func_1411686506(_activatnvar_confusing_int_8);
}

void _activation_check_proc_1e_func_711917575(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_1e_func_325007124(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1e_func_124792028(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_739107691(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_5 = _activatnvar_confusing_int_8;

	_activatnvar_confusing_chararray_c[0x1] = _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_1e_func_904866989(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_5, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_e = _activatnvar_code.mData[0xf];

	_activatnvar_confusing_int_6++;

	/* inline */ _activation_check_proc_1e_func_1334941344(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_1e_func_286827868(_activatnvar_confusing_U8_1, _activatnvar_confusing_char_d);
	_activation_check_proc_1e_func_739107691(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_e, _activatnvar_confusing_int_5, _activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_1e_func_1521425422(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_1e_func_1093980896(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xf] != _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_d = true;

	
}

void _activation_check_proc_1e_func_364482393(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1e_func_1286741831(int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_a;

	_activation_check_proc_1e_func_364482393(_activatnvar_confusing_int_5);
}

void _activation_check_proc_1e_func_622996850(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_so, U8& _activatnvar_t0, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_8 <<= _activatnvar_confusing_int_4;

	_activation_check_proc_1e_func_1723504929(_activatnvar_confusing_U8_7, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_1e_func_325194324(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_1e_func_1872249331(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_1e_func_1872249331(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_1e_func_325194324(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("c076d3f7-5d7c-7b60-9f92-5ca9df08403d");

}

void _activation_check_proc_1e_func_1723504929(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_7 |= _activatnvar_confusing_LLUUID_b.mData[0x4];

}

void _activation_check_proc_1e_func_738822798(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_1e_func_1761033088(LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_738822798(_activatnvar_confusing_int_a);
}

void _activation_check_proc_1e_func_1636873544(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_779680943(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x3] &= _activatnvar_confusing_LLUUID_3.mData[0xc];

}

void _activation_check_proc_1e_func_1231392992(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c ^= 0xe;

}

void _activation_check_proc_1e_func_1108336639(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xe] <<= _activatnvar_confusing_chararray_c[0x8];

	_activation_check_proc_1e_func_1231392992(_activatnvar_confusing_int_c);
	_activation_check_proc_1e_func_1951875716(_activatnvar_confusing_char_d, _activatnvar_confusing_U8_9);
	_activation_check_proc_1e_func_779680943(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1e_func_1951875716(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_char_d += _activatnvar_confusing_U8_9;

}

void _activation_check_proc_1e_func_404901212(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1e_func_1705829380(_activatnvar_secret, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_1e_func_408191727(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_1e_func_506506040(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_1e_func_1372656406(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1e_func_1332522898(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_1e_func_666525965(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_1e_func_525462513(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_1e_func_2061952649(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1e_func_1816909111(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] &= _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_1e_func_1830251440()
{
	
}

void _activation_check_proc_1e_func_406021861(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_564201986(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_chararray_d[0x1];

}

void _activation_check_proc_1e_func_1099403723(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1e_func_894696335(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_741132533(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_1e_func_1121207849(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_9.mData[0x8] *= _activatnvar_confusing_chararray_6[0x1];

}

void _activation_check_proc_1e_func_969786721(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_1e_func_645993096(int& _activatnvar_confusing_int_d, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_1e_func_741132533(_activatnvar_t1);
	_activation_check_proc_1e_func_969786721(_activatnvar_t1, _activatnvar_t0);
	_activation_check_proc_1e_func_1121207849(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_1e_func_978048823(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1e_func_332560949(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1e_func_1721217119(U8& _activatnvar_t0, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

	_activation_check_proc_1e_func_1503017611(_activatnvar_t0);
}

void _activation_check_proc_1e_func_1503017611(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_293864432(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_chararray_0[0x0];

}

void _activation_check_proc_1e_func_1261083329(U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a >>= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_1e_func_2079566151(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_1e_func_2049113513(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_U8_3 &= 0xe;

	/* inline */ _activation_check_proc_1e_func_476381376(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_1e_func_1261083329(_activatnvar_confusing_U8_8, _activatnvar_confusing_char_a);
	_activation_check_proc_1e_func_2079566151(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_1e_func_1578406503(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x7] = _activatnvar_confusing_LLUUID_2.mData[0xf];

	/* inline */ _activation_check_proc_1e_func_39960077(_activatnvar_confusing_chararray_9, _activatnvar_mac_digest);
}

void _activation_check_proc_1e_func_412989499(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1e_func_1734710738(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("e489aa5c-7920-0f8a-1cfa-ff87802ac702");

}

void _activation_check_proc_1e_func_47681393(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_0.mData[0xf] <<= _activatnvar_confusing_chararray_6[0xa];

}

void _activation_check_proc_1e_func_997848687(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1162505462(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 |= _activatnvar_confusing_int_1;

}

void _activation_check_proc_1e_func_1864979295(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_931759500(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_1431752981(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1431752981(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_520220348(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_1e_func_1298158402(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("fc2bcf94-6376-6284-ab0d-977ae74d9cd1");

	/* inline */ _activation_check_proc_1e_func_36498800(_activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_1e_func_1230120354(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1e_func_204589536(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_6 >>= _activatnvar_confusing_U8_0;

	_activation_check_proc_1e_func_265998803(_activatnvar_t0);
}

void _activation_check_proc_1e_func_265998803(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1e_func_864039299(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_1e_func_594529465(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_9[0x0] |= _activatnvar_confusing_LLUUID_7.mData[0x8];

}

void _activation_check_proc_1e_func_1483901559(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xe] != 0xe) _activatnvar_confusing_bool_2 = true;

	_activation_check_proc_1e_func_1887896968(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1e_func_1887896968(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("9059a761-d4de-fd11-d0dc-b168cbaf90d1");

}

void _activation_check_proc_1e_func_459549147(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_1e_func_315044063(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_64898229(_activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_lace, _activatnvar_doaccount);
}

void _activation_check_proc_1e_func_64898229(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1e_func_1772990005(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_1e_func_1530916471(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_1e_func_1700602065(U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f <<= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_1e_func_248394003(bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_1e_func_1177251572(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1e_func_549614451(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_fscked);
	/* inline */ _activation_check_proc_1e_func_1663518742();
	/* inline */ _activation_check_proc_1e_func_624134929(_activatnvar_confusing_int_6);
}

void _activation_check_proc_1e_func_1344059624(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_1e_func_828575763(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x0] |= _activatnvar_confusing_chararray_6[0x0];

	/* inline */ _activation_check_proc_1e_func_873144312(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_1e_func_1851474287(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_1e_func_2108825467(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_1e_func_2108825467(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_1e_func_1868658059(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_4[0x4] <<= _activatnvar_fscked.mData[0x5];

}

void _activation_check_proc_1e_func_2130702183(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] &= _activatnvar_confusing_chararray_1[0x6];

	_activation_check_proc_1e_func_1868658059(_activatnvar_confusing_chararray_4, _activatnvar_fscked);
}

void _activation_check_proc_1e_func_1023798233(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_1798615872(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1798615872(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_584877147(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xe] = _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_1e_func_1610751882(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_1 += 0x2;

}

void _activation_check_proc_1e_func_352016299(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] <<= _activatnvar_ser_digest[0xe];

	_activation_check_proc_1e_func_1610751882(_activatnvar_confusing_bool_c, _activatnvar_confusing_char_1);
	_activation_check_proc_1e_func_1739454940(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_1e_func_1739454940(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_4[0xd] >>= _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_1e_func_1921249682(LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("db31e286-93ad-709b-a1ee-5a2ec967ca02");

	/* inline */ _activation_check_proc_1e_func_491398391(_activatnvar_confusing_int_2);
}

void _activation_check_proc_1e_func_952852752(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_354637665(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1e_func_1712642121(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_2 += 0x7;

	_activation_check_proc_1e_func_354637665(_activatnvar_doaccount, _activatnvar_confusing_bool_b, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_1e_func_1711803099(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x5] += _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_1e_func_1419811825(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] >>= _activatnvar_confusing_LLUUID_9.mData[0xc];

	_activation_check_proc_1e_func_1711803099(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_1e_func_1565804663(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_1e_func_1136692663(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_c[0xb];

}

void _activation_check_proc_1e_func_1334845293(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_1e_func_502412999(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_6++;

	_activation_check_proc_1e_func_1204854794(_activatnvar_confusing_int_c, _activatnvar_confusing_int_2);
}

void _activation_check_proc_1e_func_1204854794(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activatnvar_confusing_int_2 >>= 0xc;

}

void _activation_check_proc_1e_func_1674574688(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_e)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_e >>= 0x1;

}

void _activation_check_proc_1e_func_662985094(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_U8_e++;

	_activation_check_proc_1e_func_1674574688(_activatnvar_confusing_bool_b, _activatnvar_confusing_char_e);
}

void _activation_check_proc_1e_func_74443762(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_1e_func_344141852(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	
	_activation_check_proc_1e_func_74443762(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_1e_func_1376793676(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_2, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 &= 3;
	_activation_check_proc_1e_func_255248273(_activatnvar_t0, _activatnvar_confusing_LLUUID_6, _activatnvar_so, _activatnvar_pos, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_1e_func_922801888(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_char_2);
}

void _activation_check_proc_1e_func_922801888(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_f.mData[0x1];

}

void _activation_check_proc_1e_func_255248273(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_so, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
	_activatnvar_confusing_LLUUID_2.mData[0x6] |= _activatnvar_confusing_LLUUID_6.mData[0xa];

}

void _activation_check_proc_1e_func_599235462(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so, U8& _activatnvar_t1, int& _activatnvar_confusing_int_f, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_int_f &= 0xff;

	_activation_check_proc_1e_func_1674184179(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_0);
	_activation_check_proc_1e_func_1317443418(_activatnvar_t1, _activatnvar_pos, _activatnvar_so);
}

void _activation_check_proc_1e_func_1674184179(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_1e_func_1317443418(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_1e_func_1413295766(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xa] == 0xe) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_1e_func_868892193(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_0 ^= _activatnvar_confusing_char_5;

}

void _activation_check_proc_1e_func_1570439742(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

	_activation_check_proc_1e_func_844888399(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_1e_func_844888399(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_5.mData[0x1] &= _activatnvar_confusing_chararray_3[0x3];

}

void _activation_check_proc_1e_func_367731108(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x0] |= _activatnvar_section1.mData[0xf];

}

void _activation_check_proc_1e_func_653960515(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_chararray_1[0x9];

}

void _activation_check_proc_1e_func_842909014(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_1e_func_1792192589(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_3 *= 0x1;

}

void _activation_check_proc_1e_func_642949588(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("93d672cc-9c96-f6ee-48a9-5740a79ebfb7");

	_activation_check_proc_1e_func_1045719478(_activatnvar_confusing_U8_e, _activatnvar_name_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1e_func_304413989(_activatnvar_confusing_chararray_7, _activatnvar_confusing_char_2);
	/* inline */ _activation_check_proc_1e_func_25821123(_activatnvar_confusing_char_0, _activatnvar_confusing_U8_9, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_1e_func_1045719478(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
	_activatnvar_confusing_U8_e |= 0x0;

}

void _activation_check_proc_1e_func_1906690862(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_c ^= _activatnvar_confusing_char_0;

	_activation_check_proc_1e_func_539883059(_activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_1e_func_539883059(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("1040dc91-ce20-d3c4-0ac3-5f1ecea4465d");

	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_1e_func_1935161200(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 += _activatnvar_confusing_int_9;

}

void _activation_check_proc_1e_func_947562726(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_1 >>= 0x7;

}

void _activation_check_proc_1e_func_69525344(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1e_func_1920026412(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_110076689(_activatnvar_confusing_U8_8);
	_activation_check_proc_1e_func_604874080(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_1e_func_110076689(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 >>= 0x0;

}

void _activation_check_proc_1e_func_604874080(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_144578567(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_0[0x2];

	/* inline */ _activation_check_proc_1e_func_552916508(_activatnvar_code, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_1e_func_272560201(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1e_func_272560201(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d = 0x4;

}

void _activation_check_proc_1e_func_603849017(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] <<= _activatnvar_confusing_LLUUID_8.mData[0x0];

}

void _activation_check_proc_1e_func_899068298(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f <<= 0x2;

}

void _activation_check_proc_1e_func_875918451(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 |= 0xf;

}

void _activation_check_proc_1e_func_1002254036(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_LLUUID_8.mData[0xd];

}

void _activation_check_proc_1e_func_917546113(char& _activatnvar_feat, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 += _activatnvar_feat;

	_activation_check_proc_1e_func_1002254036(_activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1e_func_1461162711(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_1631131535(char& _activatnvar_feat, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_2.mData[0x6] >>= _activatnvar_combined_id.mData[0x1];

	/* inline */ _activation_check_proc_1e_func_1151250987(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_1e_func_2125709751(_activatnvar_feat, _activatnvar_lace);
}

void _activation_check_proc_1e_func_2007745949(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_760041129(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_1e_func_1457001546(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_447737277(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1926698586(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_1e_func_1618902877(_activatnvar_pos, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_1e_func_462465087(_activatnvar_pos);
}

void _activation_check_proc_1e_func_1025014556(U8& _activatnvar_t0, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_7 |= _activatnvar_t0;

	_activation_check_proc_1e_func_1355302385(_activatnvar_confusing_chararray_f, _activatnvar_ser_digest);
}

void _activation_check_proc_1e_func_1355302385(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_f[0x5] += _activatnvar_ser_digest[0x9];

}

void _activation_check_proc_1e_func_985943789(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1200911320(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_1e_func_985943789(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1168329597(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_1e_func_1287977873(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_958120402(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_7;

	_activation_check_proc_1e_func_1287977873(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_1e_func_102057163(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_1e_func_685199826(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 = 0x3;

}

void _activation_check_proc_1e_func_1880130548(U8& _activatnvar_confusing_U8_a, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_U8_a++;

	_activation_check_proc_1e_func_685199826(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_1e_func_145254196(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1e_func_1010064358();
}

void _activation_check_proc_1e_func_958488297(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_1e_func_820874000(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1e_func_1135189376(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] += _activatnvar_confusing_chararray_d[0x3];

}

void _activation_check_proc_1e_func_1122159113(bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_1e_func_915806904(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7)
{
	
	_activation_check_proc_1e_func_219686426(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_1e_func_219686426(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_1e_func_1235157680(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_1517787114(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
	_activation_check_proc_1e_func_1235157680(_activatnvar_t0);
}

void _activation_check_proc_1e_func_320704164(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_880292564(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_1 |= _activatnvar_confusing_char_b;

}

void _activation_check_proc_1e_func_19066431(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1882209312(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_2021662903(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xc] &= _activatnvar_ser_digest[0x2];

}

void _activation_check_proc_1e_func_1373202309(int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_chararray_3[0x2] |= _activatnvar_confusing_chararray_e[0x7];

	_activation_check_proc_1e_func_124632927(_activatnvar_confusing_int_b, _activatnvar_confusing_int_4);
}

void _activation_check_proc_1e_func_124632927(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 ^= _activatnvar_confusing_int_b;

}

void _activation_check_proc_1e_func_23609101(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_chararray_e[0x8] |= _activatnvar_name_digest[0xd];

	_activatnvar_confusing_chararray_8[0xb] *= _activatnvar_confusing_LLUUID_2.mData[0x6];

}

void _activation_check_proc_1e_func_373731771(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_5[0xd] <<= _activatnvar_confusing_LLUUID_d.mData[0xd];

}

void _activation_check_proc_1e_func_310339563(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_pos, int& _activatnvar_confusing_int_b, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_int_b++;

	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_3;

	_activatnvar_pos &= 7;
}

void _activation_check_proc_1e_func_1145928437(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1e_func_921122909(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_1e_func_1219132136(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_853145730(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1e_func_62134700(DWORD& _activatnvar_serial, LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
	_activation_check_proc_1e_func_1707368144(_activatnvar_smd5);
	/* inline */ _activation_check_proc_1e_func_2035774498(_activatnvar_ser_digest, _activatnvar_smd5);
}

void _activation_check_proc_1e_func_1707368144(LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.finalize();
}

void _activation_check_proc_1e_func_676718659(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] *= _activatnvar_confusing_chararray_5[0x0];

	/* inline */ _activation_check_proc_1e_func_612959359(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_char_8, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_1e_func_182127985(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_1e_func_203339517(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("09fc8fb9-4ce7-95d5-bb74-bf02c1a44ee8");

}

void _activation_check_proc_1e_func_805616588(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_3 *= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_1e_func_574796106(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_1e_func_597808652(_activatnvar_confusing_LLUUID_f, _activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
}

void _activation_check_proc_1e_func_597808652(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_f = LLUUID("37a55400-ee04-c3aa-ae63-c72a1c180784");

}

void _activation_check_proc_1e_func_2045822673(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_int_6++;

	_activatnvar_confusing_LLUUID_8 = LLUUID("58399907-1982-1948-7485-8911b63fe4ab");

}

void _activation_check_proc_1e_func_860613719(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] &= _activatnvar_fscked.mData[0xb];

}

void _activation_check_proc_1e_func_1845070534(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_LLUUID_6.mData[0xc];

}

void _activation_check_proc_1e_func_1910561957(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_6 *= _activatnvar_confusing_U8_d;

	_activation_check_proc_1e_func_1845070534(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_char_a);
	_activation_check_proc_1e_func_860613719(_activatnvar_confusing_LLUUID_1, _activatnvar_fscked);
}

void _activation_check_proc_1e_func_1602954274(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1e_func_949919826(int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_a;

	_activatnvar_confusing_int_0 *= _activatnvar_confusing_int_8;

}

void _activation_check_proc_1e_func_742673037(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_9;

	/* inline */ _activation_check_proc_1e_func_1335057575(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1e_func_1762412978(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x0] <<= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_1e_func_309340475(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("6d6b7ef1-4121-b27f-0e00-4324396540d9");

}

void _activation_check_proc_1e_func_1174190056(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1482057113(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_3 += 0x6;

}

void _activation_check_proc_1e_func_877900759(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_1430540494(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_1e_func_1430540494(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_8[0x1] = _activatnvar_confusing_chararray_0[0x0];

}

void _activation_check_proc_1e_func_1556621671(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("8a317788-1e40-d674-f959-2a01f1b8676c");

}

void _activation_check_proc_1e_func_175829132(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("31943db9-92e2-a61f-0f7a-70853d9f1f22");

}

void _activation_check_proc_1e_func_1987436572(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_U8_d;

}

void _activation_check_proc_1e_func_1496583637(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_chararray_3[0x1];

}

void _activation_check_proc_1e_func_1157660537(int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_1e_func_811867045(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_e, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_1e_func_93083442(_activatnvar_confusing_chararray_0, _activatnvar_confusing_char_e);
}

void _activation_check_proc_1e_func_743497114(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_1e_func_1043832071(U8& _activatnvar_t0, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_t0 |= 8;
	_activatnvar_confusing_char_1 = _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_1e_func_1758484753(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_1e_func_1486133181(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_name_digest, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_d;

	/* inline */ _activation_check_proc_1e_func_176792682(_activatnvar_confusing_U8_a, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_1e_func_2122437576(_activatnvar_name_digest, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1e_func_670421406(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x6] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_b;

	_activation_check_proc_1e_func_2109902562();
}

void _activation_check_proc_1e_func_2109902562()
{
	
}

void _activation_check_proc_1e_func_959362029(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 <<= 0x9;

	_activation_check_proc_1e_func_260129829(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
	_activation_check_proc_1e_func_483791672(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_1e_func_483791672(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_9[0xb] ^= _activatnvar_confusing_LLUUID_0.mData[0xe];

}

void _activation_check_proc_1e_func_260129829(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1458475558(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_2[0x6] <<= _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_1e_func_187345632(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] &= _activatnvar_ser_digest[0xe];

}

void _activation_check_proc_1e_func_461037284(LLUUID& _activatnvar_lace, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
	_activatnvar_confusing_LLUUID_1 = LLUUID("e22ddcb5-8586-8968-175a-94f3fb19208f");

	_activation_check_proc_1e_func_1133131088();
	/* inline */ _activation_check_proc_1e_func_749119038(_activatnvar_lace, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_1e_func_1133131088()
{
	
}

void _activation_check_proc_1e_func_1375735769(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_1e_func_222428750(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_b)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_1e_func_1937282167(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_1e_func_1868442720(_activatnvar_confusing_int_b);
}

void _activation_check_proc_1e_func_1868442720(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b |= 0x4;

}

void _activation_check_proc_1e_func_1937282167(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_463563941()
{
	
}

void _activation_check_proc_1e_func_1679315828(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_9.mData[0x8] &= _activatnvar_confusing_LLUUID_7.mData[0x4];

}

void _activation_check_proc_1e_func_1975193227(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_c = _activatnvar_confusing_U8_e;

	_activation_check_proc_1e_func_1679315828(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_1e_func_2023624443(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_fscked;

	_activation_check_proc_1e_func_564044530(_activatnvar_confusing_char_5, _activatnvar_confusing_char_c);
}

void _activation_check_proc_1e_func_564044530(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_5 >>= _activatnvar_confusing_char_c;

}

void _activation_check_proc_1e_func_1827594074(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1132156032(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_1e_func_545871704(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_3.mData[0xd];

	/* inline */ _activation_check_proc_1e_func_993695097(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_char_7);
}

void _activation_check_proc_1e_func_2075338425(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_2 ^= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_1e_func_928157723(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1e_func_715128271(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_generic_bool_0, char& _activatnvar_feat)
{
	_activatnvar_confusing_U8_f *= _activatnvar_feat;

	_activation_check_proc_1e_func_928157723(_activatnvar_generic_bool_0);
}

void _activation_check_proc_1e_func_711946147(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("0b735dd9-cc5e-235f-5982-6f060478dc4d");

}

void _activation_check_proc_1e_func_1342949556(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] <<= _activatnvar_confusing_chararray_2[0xc];

}

void _activation_check_proc_1e_func_1918586420(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_int_a *= 0xe;

	_activation_check_proc_1e_func_1342949556(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_1e_func_130929123(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_1e_func_822151671(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1990896591(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_739519743(LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] ^= _activatnvar_lace.mData[0x5];

	_activation_check_proc_1e_func_1881878816(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_5, _activatnvar_confusing_bool_9, _activatnvar_confusing_char_0);
}

void _activation_check_proc_1e_func_1881878816(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_0)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x9] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_1e_func_85336454(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d ^= 0x2;

}

void _activation_check_proc_1e_func_648912862(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_1e_func_119433160(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_1e_func_976630548(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 += 0x7;

}

void _activation_check_proc_1e_func_186711518(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1045498670(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_1e_func_97232266(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_1e_func_1887691774(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_1e_func_2038985893(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b += 0x3;

}

void _activation_check_proc_1e_func_564847689(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_char_1;

	_activatnvar_confusing_U8_3 |= _activatnvar_secret.mData[0x3];

	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_lace;

}

void _activation_check_proc_1e_func_1034210847(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_1e_func_997212425(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_1e_func_151614047(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_1e_func_997212425(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_1e_func_1844018808(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x6] <<= _activatnvar_confusing_chararray_5[0x7];

}

void _activation_check_proc_1e_func_1102448458(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1e_func_1323702947(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_1e_func_1087591231(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_1e_func_1996041791(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_818353911(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_698144156(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1709737928(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("bd6963df-836e-2a0b-02b1-691f0286d5dc");

	_activation_check_proc_1e_func_698144156(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked);
	/* inline */ _activation_check_proc_1e_func_774163482(_activatnvar_confusing_char_a, _activatnvar_confusing_chararray_3);
	_activation_check_proc_1e_func_1996041791(_activatnvar_generic_iterator);
	_activation_check_proc_1e_func_818353911(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1525027585(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x4] <<= _activatnvar_confusing_chararray_4[0xa];

}

void _activation_check_proc_1e_func_316844346(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_LLUUID_d.mData[0x9];

}

void _activation_check_proc_1e_func_1645988807(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("30205852-94b3-b52e-1c51-7fe5ee50e2a7");

}

void _activation_check_proc_1e_func_1218353400(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_pos, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_t0)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_1e_func_656153329(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_1e_func_773544976(_activatnvar_mac_digest, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_1e_func_1240897867(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_1e_func_243770704(_activatnvar_so, _activatnvar_t1, _activatnvar_t0);
}

void _activation_check_proc_1e_func_243770704(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_1e_func_2141761465(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_1e_func_1447419526(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x2] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1e_func_1249004892(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_1e_func_1380262996(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xa] >>= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_1e_func_296237857(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_a, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c += 0xa;

	_activation_check_proc_1e_func_1447419526(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_1, _activatnvar_confusing_bool_2, _activatnvar_confusing_char_b);
	_activation_check_proc_1e_func_1380262996(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_3);
	_activation_check_proc_1e_func_1249004892(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_1e_func_2128600861(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1170024842(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_9 <<= _activatnvar_confusing_U8_3;

	_activation_check_proc_1e_func_2128600861(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1746892108(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1e_func_1752639401(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_3.mData[0xd] ^= _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_1e_func_882793867(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_1e_func_327045500(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_1 += _activatnvar_confusing_U8_1;

}

void _activation_check_proc_1e_func_477802964(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_1e_func_825717316(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_f ^= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_1e_func_1233539945(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_1 = _activatnvar_section2.mData[0x7];

	_activation_check_proc_1e_func_825717316(_activatnvar_confusing_char_f, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_1e_func_2146624104(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1e_func_193529943(DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_1e_func_691110994(DWORD& _activatnvar_serial, BOOL& _activatnvar_success, DWORD& _activatnvar_gvi_flags, int& _activatnvar_confusing_int_0)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	/* inline */ _activation_check_proc_1e_func_1916157211(_activatnvar_confusing_int_0);
	_activation_check_proc_1e_func_193529943(_activatnvar_serial, _activatnvar_success);
}

void _activation_check_proc_1e_func_640098329(char& _activatnvar_confusing_char_9, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_2++;

	_activation_check_proc_1e_func_1829681010(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
	_activation_check_proc_1e_func_1145529408(_activatnvar_generic_iterator);
	_activation_check_proc_1e_func_823774162(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_1e_func_988570904(_activatnvar_confusing_char_9, _activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_1e_func_1145529408(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1829681010(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_988570904(char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x2] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_1e_func_823774162(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] = _activatnvar_confusing_LLUUID_3.mData[0x9];

}

void _activation_check_proc_1e_func_1356195467(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_5 >>= _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_1e_func_1040805580(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_7.mData[0x1];

	_activation_check_proc_1e_func_1356195467(_activatnvar_confusing_char_5, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_1e_func_288770337(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_1e_func_1953271717(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_1e_func_1750105852(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 = 0xb;

}

void _activation_check_proc_1e_func_1135775506(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_f[0x9] &= _activatnvar_confusing_LLUUID_e.mData[0xf];

}

void _activation_check_proc_1e_func_1870768293(LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_1e_func_1469779894(_activatnvar_feat, _activatnvar_lace);
}

void _activation_check_proc_1e_func_1469779894(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_1e_func_1493500346(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1e_func_1002663119(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_1e_func_1216808745(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_so;

}

void _activation_check_proc_1e_func_378446388(bool& _activatnvar_confusing_bool_f, char& _activatnvar_feat, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_1 *= _activatnvar_feat;

}

void _activation_check_proc_1e_func_1305061348(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_1e_func_1429199059(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1290935147(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1451703655(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("e6421bd6-aad7-1bcb-3237-43bada68013d");

}

void _activation_check_proc_1e_func_1226483073(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

	/* inline */ _activation_check_proc_1e_func_1802561992(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_1e_func_1290625884(_activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_1e_func_18972937(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1e_func_624784900(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_1e_func_1142342024(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_1e_func_2023025384(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] <<= _activatnvar_confusing_chararray_f[0x9];

}

void _activation_check_proc_1e_func_2057846522(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] += _activatnvar_section2.mData[0x9];

}

void _activation_check_proc_1e_func_354933802(U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_5[0x7] = _activatnvar_confusing_chararray_5[0xd];

	/* inline */ _activation_check_proc_1e_func_339812874(_activatnvar_pos, _activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_c);
	_activation_check_proc_1e_func_335846371(_activatnvar_combined_id, _activatnvar_t0);
	_activation_check_proc_1e_func_719430715();
	_activation_check_proc_1e_func_760505121(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_1e_func_335846371(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_1e_func_719430715()
{
	
}

void _activation_check_proc_1e_func_760505121(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x2] <<= _activatnvar_confusing_chararray_b[0x3];

}

void _activation_check_proc_1e_func_536902661(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_d, DWORD& _activatnvar_serial, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_confusing_LLUUID_2;

	_activation_check_proc_1e_func_83527573(_activatnvar_serial);
	_activation_check_proc_1e_func_462869290(_activatnvar_confusing_char_5);
}

void _activation_check_proc_1e_func_83527573(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_1e_func_462869290(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_1e_func_1251484429(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_1e_func_511844850(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] += _activatnvar_confusing_LLUUID_7.mData[0x9];

}

void _activation_check_proc_1e_func_1924163002(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 &= 0xff;
	/* inline */ _activation_check_proc_1e_func_122465366(_activatnvar_so, _activatnvar_t1, _activatnvar_t0);
	_activation_check_proc_1e_func_511844850(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_1e_func_1717208909(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_7, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1e_func_827254930(_activatnvar_section2, _activatnvar_confusing_char_7);
	_activation_check_proc_1e_func_1354159657(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_b);
	_activation_check_proc_1e_func_1496850695(_activatnvar_generic_iterator);
	_activation_check_proc_1e_func_1213618629(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_1e_func_1496850695(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1213618629(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1354159657(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x4] += _activatnvar_confusing_LLUUID_d.mData[0xd];

}

void _activation_check_proc_1e_func_1862493284(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_1e_func_527894370(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_795811924(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 <<= 0xd;

	/* inline */ _activation_check_proc_1e_func_457846127(_activatnvar_confusing_chararray_d, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_1e_func_1622816820(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_1e_func_1307603174(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x1] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1e_func_821616805(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_1e_func_1580718802(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_1e_func_1842057533(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x4] &= _activatnvar_confusing_LLUUID_7.mData[0xb];

}

void _activation_check_proc_1e_func_1913579686(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_LLUUID_e.mData[0x6];

}

void _activation_check_proc_1e_func_1219143519(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_LLUUID_0.mData[0xf];

	/* inline */ _activation_check_proc_1e_func_1051868744(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_1e_func_322395149(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_1e_func_1655430309()
{
	
}

void _activation_check_proc_1e_func_1536722406()
{
	
}

void _activation_check_proc_1e_func_1391778719(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_1e_func_642602746(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("c546077e-27af-3187-f6cf-ba08d9ee31b7");

	_activation_check_proc_1e_func_1391778719(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_1e_func_1054021751(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xd] == _activatnvar_confusing_char_a) _activatnvar_confusing_bool_f = true;

	/* inline */ _activation_check_proc_1e_func_354313891(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_1e_func_1802209732(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 ^= 0x4;

}

void _activation_check_proc_1e_func_1413823905(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1970691688(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_1e_func_1861053472(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = 0xf;

	_activation_check_proc_1e_func_1970691688(_activatnvar_confusing_U8_7);
	_activation_check_proc_1e_func_1413823905(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_1e_func_780221110(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xb] &= _activatnvar_confusing_LLUUID_8.mData[0x4];

	/* inline */ _activation_check_proc_1e_func_2139188014(_activatnvar_confusing_chararray_b, _activatnvar_confusing_char_7);
}

void _activation_check_proc_1e_func_293105396()
{
	
}

void _activation_check_proc_1e_func_865605982(char& _activatnvar_feat, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x7] != _activatnvar_feat) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_1e_func_2019804670(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_1e_func_920958883(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("69fc6f01-0e15-f48f-df0d-b11684c968af");

	/* inline */ _activation_check_proc_1e_func_813767223(_activatnvar_so, _activatnvar_t0, _activatnvar_pos);
}

void _activation_check_proc_1e_func_2012175362(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_1e_func_1830863759(_activatnvar_confusing_U8_2);
	/* inline */ _activation_check_proc_1e_func_131332210(_activatnvar_confusing_bool_1, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_1e_func_1830863759(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 *= 0x3;

}

void _activation_check_proc_1e_func_2114263275(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_1e_func_1149445562(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_1e_func_496223733(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_1e_func_137776904(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] += _activatnvar_confusing_LLUUID_8.mData[0xe];

}

void _activation_check_proc_1e_func_592679370(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x0] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_1e_func_1957006886(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_1e_func_670684016(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_2096119039(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_2.mData[0x1] *= _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_1e_func_1844831594(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_6)
{
	_activatnvar_generic_iterator = 4;
	/* inline */ _activation_check_proc_1e_func_1037226749();
	_activation_check_proc_1e_func_1165509408();
	_activation_check_proc_1e_func_670684016(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_code, _activatnvar_fscked);
	/* inline */ _activation_check_proc_1e_func_1709883798(_activatnvar_confusing_U8_5, _activatnvar_confusing_bool_6, _activatnvar_confusing_char_6);
	_activation_check_proc_1e_func_2096119039(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_1e_func_1165509408()
{
	
}

void _activation_check_proc_1e_func_604769381(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1190292272(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_so;

}

void _activation_check_proc_1e_func_1568577553(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_1e_func_1190292272(_activatnvar_confusing_LLUUID_e, _activatnvar_so);
}

void _activation_check_proc_1e_func_1844118738(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1897686423(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1795046162(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_1e_func_1949118826(_activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_1e_func_353887703(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 ^= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_1e_func_554349260(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

	_activation_check_proc_1e_func_985607746(_activatnvar_confusing_chararray_5, _activatnvar_confusing_char_f);
}

void _activation_check_proc_1e_func_985607746(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= _activatnvar_confusing_chararray_5[0xc];

}

void _activation_check_proc_1e_func_143347701(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x3] <<= _activatnvar_confusing_LLUUID_1.mData[0x2];

}

void _activation_check_proc_1e_func_1217126857(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_1e_func_1215237927(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_848833580(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_LLUUID_4.mData[0x0];

	_activation_check_proc_1e_func_825459777(_activatnvar_secret, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_1e_func_825459777(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_secret;

}

void _activation_check_proc_1e_func_642927616(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_5[0x3] *= _activatnvar_confusing_LLUUID_e.mData[0x1];

}

void _activation_check_proc_1e_func_573931976(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_150476598(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_1e_func_948698886(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_1e_func_1705327505()
{
	
}

void _activation_check_proc_1e_func_1458157510(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x2] <<= _activatnvar_confusing_chararray_b[0x9];

}

void _activation_check_proc_1e_func_1527522837(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_7.mData[0xe] &= _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_1e_func_1696102871(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x4] ^= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_1e_func_815827706(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] ^= _activatnvar_confusing_chararray_c[0xf];

	_activation_check_proc_1e_func_1363520690(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_1e_func_1363520690(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1352329477(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x7] >>= _activatnvar_confusing_LLUUID_7.mData[0xe];

}

void _activation_check_proc_1e_func_1708113087(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_1e_func_1763165732(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_section1;

}

void _activation_check_proc_1e_func_320872508(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_4[0xb] &= _activatnvar_combined_id.mData[0x1];

}

void _activation_check_proc_1e_func_1399677111(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x0] ^= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_1e_func_963017611(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_671082922(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_3 += _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_1e_func_293081316(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x3] <<= _activatnvar_secret.mData[0x7];

	/* inline */ _activation_check_proc_1e_func_2081400655(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_1e_func_201077019(char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_int_9 = _activatnvar_confusing_int_a;

	_activation_check_proc_1e_func_1333273989(_activatnvar_confusing_char_d, _activatnvar_confusing_char_a);
	_activation_check_proc_1e_func_996105491(_activatnvar_confusing_chararray_6, _activatnvar_confusing_char_6);
}

void _activation_check_proc_1e_func_1333273989(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a <<= _activatnvar_confusing_char_d;

}

void _activation_check_proc_1e_func_996105491(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 >>= _activatnvar_confusing_chararray_6[0xd];

}

void _activation_check_proc_1e_func_1552197144(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("7344d4bc-e957-d483-6bc2-f1427f46cf9c");

}

void _activation_check_proc_1e_func_974174044(LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_3 = _activatnvar_fscked.mData[0x3];

	_activation_check_proc_1e_func_1552197144(_activatnvar_confusing_LLUUID_c);
	_activation_check_proc_1e_func_1604632996(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_1e_func_1977371113(_activatnvar_generic_iterator);
	_activation_check_proc_1e_func_374943541(_activatnvar_confusing_char_c, _activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_1e_func_374943541(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x6] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_1e_func_1604632996(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_1938422476(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 |= 0x4;

}

void _activation_check_proc_1e_func_1018692112(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1460697079(int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_a |= _activatnvar_confusing_U8_1;

	_activation_check_proc_1e_func_1593074899(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_1e_func_1405465450();
}

void _activation_check_proc_1e_func_1593074899(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_1e_func_2089901995(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x8] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_1e_func_1040154205(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_1e_func_1058952189(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_d, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_d <<= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_1e_func_1798644866(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 = _activatnvar_confusing_int_5;

}

void _activation_check_proc_1e_func_1622744690()
{
	
}

void _activation_check_proc_1e_func_1133696939(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xe] &= _activatnvar_confusing_chararray_c[0xc];

}

void _activation_check_proc_1e_func_332799976(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_1e_func_1345544221(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_chararray_2[0xb] <<= _activatnvar_confusing_LLUUID_e.mData[0x1];

	/* inline */ _activation_check_proc_1e_func_1085383012(_activatnvar_confusing_int_c);
	_activation_check_proc_1e_func_332799976(_activatnvar_combined_id, _activatnvar_t0);
	/* inline */ _activation_check_proc_1e_func_663032337(_activatnvar_t0);
}

void _activation_check_proc_1e_func_193396656(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_8.mData[0x5];

}

void _activation_check_proc_1e_func_1968923971(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1509737950(unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xa] &= _activatnvar_confusing_chararray_0[0x7];

	_activation_check_proc_1e_func_1995779045(_activatnvar_confusing_int_d);
}

void _activation_check_proc_1e_func_1995779045(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_1e_func_225749030(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c *= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_1e_func_1774935299(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_8)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_1e_func_1381229922(_activatnvar_confusing_int_8);
	_activation_check_proc_1e_func_1872213088(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
}

void _activation_check_proc_1e_func_1381229922(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_1e_func_1872213088(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_109779584(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_2.mData[0xa];

}

void _activation_check_proc_1e_func_1128708543(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_6 &= _activatnvar_confusing_int_e;

}

void _activation_check_proc_1e_func_98088455(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_1e_func_609464687(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_490022985(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	
	/* inline */ _activation_check_proc_1e_func_554455010(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_char_0);
}

void _activation_check_proc_1e_func_991128394(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_658472249(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_1e_func_1717730673(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_b &= _activatnvar_code.mData[0x8];

}

void _activation_check_proc_1e_func_634508885(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_1e_func_795240989(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] *= _activatnvar_fscked.mData[0xf];

}

void _activation_check_proc_1e_func_436647734(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_1e_func_474916864(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_c, bool& _activatnvar_doaccount, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_7 = _activatnvar_confusing_U8_e;

	_activation_check_proc_1e_func_795240989(_activatnvar_fscked, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_1e_func_436647734(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_confusing_int_c);
}

void _activation_check_proc_1e_func_966669621(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("a3db3f08-aa3d-c3fe-94ab-12bf921c7c9f");

}

void _activation_check_proc_1e_func_1755149169(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

	_activation_check_proc_1e_func_1054496903(_activatnvar_generic_iterator);
}

void _activation_check_proc_1e_func_1054496903(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_1e_func_1292231695(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_1e_func_545264917(int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_1e_func_761489563();
	/* inline */ _activation_check_proc_1e_func_252215267(_activatnvar_confusing_int_d);
	_activation_check_proc_1e_func_1660987528(_activatnvar_confusing_int_9);
	_activation_check_proc_1e_func_1292231695(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_1e_func_761489563()
{
	
}

void _activation_check_proc_1e_func_1660987528(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0x9;

}

void _activation_check_proc_1e_func_875448282(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 ^= 0x4;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
