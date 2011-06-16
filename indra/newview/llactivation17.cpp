// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation17.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 17

void _activation_check_proc_17_func_868861180(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_17_func_1554324973(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_b.mData[0x7];

}

void _activation_check_proc_17_func_826489583(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x2] |= _activatnvar_confusing_LLUUID_c.mData[0xd];

}

void _activation_check_proc_17_func_1919602464(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] |= _activatnvar_confusing_chararray_8[0x7];

}

void _activation_check_proc_17_func_242844541(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_e += 0xc;

	_activation_check_proc_17_func_1919602464(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_17_func_1352560737(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_combined_id;

}

void _activation_check_proc_17_func_1191506175(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1728414139(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xd] == 0x0) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_17_func_239001482(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_3 &= _activatnvar_confusing_LLUUID_7.mData[0xb];

}

void _activation_check_proc_17_func_368757106(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_b[0x2] ^= _activatnvar_confusing_chararray_1[0x1];

}

void _activation_check_proc_17_func_1111772210(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_combined_id;

}

void _activation_check_proc_17_func_1653560720(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_17_func_218955767(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
	_activation_check_proc_17_func_1653560720(_activatnvar_name_digest, _activatnvar_combined_id);
	_activation_check_proc_17_func_1015020671(_activatnvar_name_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_17_func_346181468(_activatnvar_combined_id, _activatnvar_name_digest);
	_activation_check_proc_17_func_1111772210(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_17_func_1015020671(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_17_func_462486171(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("1175ed8d-ff12-5187-8627-6cb52c02284e");

}

void _activation_check_proc_17_func_301026143(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_17_func_1321048782(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_17_func_462486171(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_17_func_713626268(_activatnvar_pos);
}

void _activation_check_proc_17_func_2006789386(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x6] <<= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_17_func_845541291(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x5] |= _activatnvar_confusing_chararray_c[0xb];

	_activation_check_proc_17_func_2006789386(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_17_func_306695035(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_LLUUID_9.mData[0x5];

}

void _activation_check_proc_17_func_129133259(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] |= _activatnvar_confusing_LLUUID_f.mData[0xa];

	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_17_func_416565166(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("1ea650dc-88d9-0637-94cb-a115f0fe27a8");

}

void _activation_check_proc_17_func_1822168887(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_char_e;

}

void _activation_check_proc_17_func_368474942(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_17_func_1619427027(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_17_func_1406263240(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_e;

	/* inline */ _activation_check_proc_17_func_675785730(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_17_func_1268971860(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_e ^= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_17_func_504376664(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_17_func_245467067(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_148260677(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1050895392(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_148260677(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_861989762(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_c, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

	_activation_check_proc_17_func_739633374(_activatnvar_combined_id, _activatnvar_pos);
	/* inline */ _activation_check_proc_17_func_1569524064(_activatnvar_confusing_int_c);
	_activation_check_proc_17_func_593595388(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_17_func_593595388(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_17_func_739633374(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_17_func_1817140919(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_chararray_d[0x7];

}

void _activation_check_proc_17_func_218578071(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_17_func_222278620(U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_f, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	
	_activation_check_proc_17_func_1252967791(_activatnvar_confusing_LLUUID_b);
	_activation_check_proc_17_func_218578071(_activatnvar_confusing_U8_3, _activatnvar_confusing_U8_1);
	_activation_check_proc_17_func_1980646168(_activatnvar_confusing_int_f);
}

void _activation_check_proc_17_func_1252967791(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("32b47c09-5243-060d-7cab-d11831bd128d");

}

void _activation_check_proc_17_func_1980646168(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_17_func_1831548558(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_d = _activatnvar_confusing_int_1;

}

void _activation_check_proc_17_func_1841446718(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f = _activatnvar_confusing_int_9;

	_activation_check_proc_17_func_136205371(_activatnvar_confusing_int_d);
}

void _activation_check_proc_17_func_136205371(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_17_func_1449805211(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_7 ^= _activatnvar_confusing_int_a;

}

void _activation_check_proc_17_func_619901254(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_17_func_336354297(U8& _activatnvar_confusing_U8_9, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_7[0xf];

	_activation_check_proc_17_func_1692074973(_activatnvar_pos);
}

void _activation_check_proc_17_func_1692074973(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_17_func_1404613881(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x6] |= _activatnvar_section2.mData[0x4];

}

void _activation_check_proc_17_func_1848612718(int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_17_func_1404613881(_activatnvar_section2, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_17_func_952918478(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_c.mData[0xa] <<= _activatnvar_confusing_LLUUID_5.mData[0x7];

}

void _activation_check_proc_17_func_2031077971(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x0] <<= _activatnvar_confusing_chararray_a[0xa];

}

void _activation_check_proc_17_func_92458788()
{
	
}

void _activation_check_proc_17_func_1255039584(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_17_func_1392165641(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x7] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_17_func_1597980983(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_17_func_1814165314(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_LLUUID_8.mData[0x5];

	/* inline */ _activation_check_proc_17_func_1927105149(_activatnvar_confusing_U8_2, _activatnvar_confusing_U8_5);
	/* inline */ _activation_check_proc_17_func_170423454(_activatnvar_confusing_U8_0, _activatnvar_confusing_chararray_8);
	/* inline */ _activation_check_proc_17_func_956642486(_activatnvar_mac_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
	_activation_check_proc_17_func_676332591(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_3);
	/* inline */ _activation_check_proc_17_func_1331738863(_activatnvar_generic_iterator, _activatnvar_confusing_int_f);
}

void _activation_check_proc_17_func_676332591(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_b[0x9] >>= _activatnvar_confusing_chararray_3[0x9];

}

void _activation_check_proc_17_func_1832902482(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_17_func_1088541648(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 &= _activatnvar_so.mData[0x7];

	_activatnvar_confusing_U8_d &= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_17_func_1456275876(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x1] += _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_17_func_1068983149(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_17_func_1462861602(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_b;

	/* inline */ _activation_check_proc_17_func_1708846058(_activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_2);
}

void _activation_check_proc_17_func_133813766(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_2 = _activatnvar_confusing_int_3;

}

void _activation_check_proc_17_func_1775549401(U8& _activatnvar_t0, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_7)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_17_func_2135351569(_activatnvar_confusing_int_7, _activatnvar_confusing_int_a);
}

void _activation_check_proc_17_func_395327064(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xc] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_17_func_209805747(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_17_func_1963225298(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1087779161(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("86c668a0-1b63-b278-d272-3b9800df854d");

}

void _activation_check_proc_17_func_1606898773(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_3 = _activatnvar_confusing_char_3;

	_activation_check_proc_17_func_1371496099(_activatnvar_confusing_LLUUID_6, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_1371496099(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_combined_id;

}

void _activation_check_proc_17_func_892031085()
{
	
}

void _activation_check_proc_17_func_2122907169(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_a;

	_activation_check_proc_17_func_1221062988(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_17_func_1221062988(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_a[0x0] <<= _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_17_func_1862854089(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1948890538(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1737844368(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_17_func_1922060382(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_17_func_109001331(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_17_func_810273153(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_17_func_834466364(LLUUID& _activatnvar_so, U8& _activatnvar_t0, int& _activatnvar_confusing_int_c, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
	/* inline */ _activation_check_proc_17_func_7788700(_activatnvar_t0, _activatnvar_t1);
	_activation_check_proc_17_func_109001331(_activatnvar_t1);
	_activation_check_proc_17_func_810273153(_activatnvar_t0, _activatnvar_t1);
	/* inline */ _activation_check_proc_17_func_799332532(_activatnvar_confusing_int_c);
}

void _activation_check_proc_17_func_814276094(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_1 = _activatnvar_lace.mData[0xf];

}

void _activation_check_proc_17_func_496913584(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x1] += _activatnvar_confusing_LLUUID_d.mData[0x3];

}

void _activation_check_proc_17_func_562424141(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_secret)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xc] == 0xe) _activatnvar_confusing_bool_7 = false;

	/* inline */ _activation_check_proc_17_func_1886194069(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_2050049170(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_f[0xe] >>= _activatnvar_so.mData[0x9];

}

void _activation_check_proc_17_func_2135590542(int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_int_7++;

	_activation_check_proc_17_func_1604979942(_activatnvar_confusing_chararray_2);
}

void _activation_check_proc_17_func_1604979942(unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x7] |= _activatnvar_confusing_chararray_2[0x1];

}

void _activation_check_proc_17_func_2101311649(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x4] &= _activatnvar_confusing_chararray_c[0x7];

}

void _activation_check_proc_17_func_717095971(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("35d51441-183d-e2ec-74e3-ff0f2aa83198");

	_activation_check_proc_17_func_2101311649(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_17_func_155873810(_activatnvar_confusing_chararray_3, _activatnvar_section1);
}

void _activation_check_proc_17_func_1643934772(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_chararray_6[0x3];

}

void _activation_check_proc_17_func_244526810()
{
	
}

void _activation_check_proc_17_func_495285817(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_17_func_1724677815()
{
	
}

void _activation_check_proc_17_func_968615881(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_17_func_1234746723(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("c9744d63-62de-e317-63f9-26e856d03c50");

}

void _activation_check_proc_17_func_1334798934(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 = 0xd;

}

void _activation_check_proc_17_func_2035105775(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_17_func_426786662(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_17_func_852115485(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_17_func_628135019(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_f = false;

	_activation_check_proc_17_func_852115485(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_17_func_11604853(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_17_func_1308342587(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_17_func_2070705663(U8& _activatnvar_t0, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d <<= _activatnvar_confusing_char_1;

	_activation_check_proc_17_func_1308342587(_activatnvar_t0);
}

void _activation_check_proc_17_func_990073593(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_17_func_1436961429(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_17_func_1920383135(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_17_func_1495855919(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_17_func_1097771330(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_code.mData[0x8];

}

void _activation_check_proc_17_func_881449277(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_1712264627(_activatnvar_confusing_char_5, _activatnvar_confusing_char_4);
	_activation_check_proc_17_func_1097771330(_activatnvar_code, _activatnvar_confusing_char_c);
	_activation_check_proc_17_func_1894150289(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_17_func_1712264627(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_char_5;

}

void _activation_check_proc_17_func_1894150289(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_9.mData[0xd] ^= _activatnvar_confusing_chararray_f[0x0];

}

void _activation_check_proc_17_func_140074450(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xf] += _activatnvar_so.mData[0x3];

}

void _activation_check_proc_17_func_298707595(unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_so)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_d;

	_activatnvar_confusing_chararray_f[0x4] <<= _activatnvar_confusing_chararray_7[0xb];

	_activation_check_proc_17_func_140074450(_activatnvar_so, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_17_func_1686057231(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_2108935982(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1801892784(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_3++;

	_activatnvar_confusing_int_9 ^= _activatnvar_confusing_int_0;

}

void _activation_check_proc_17_func_840005058(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("8d4740e8-b8a7-c6c4-60bd-1db5ab5f2988");

}

void _activation_check_proc_17_func_1153442968(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_a >>= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_17_func_1747440154(LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_17_func_1859339087(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_17_func_1777611897(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("63f5b8e9-57d1-6ee4-770a-62a0c257aba1");

}

void _activation_check_proc_17_func_93928898(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_8 >>= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_17_func_1686639029()
{
	
}

void _activation_check_proc_17_func_1484149650(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_1.mData[0xe];

}

void _activation_check_proc_17_func_1623102168(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_c *= _activatnvar_confusing_U8_e;

	_activation_check_proc_17_func_271932400(_activatnvar_confusing_int_1, _activatnvar_confusing_int_e);
	_activation_check_proc_17_func_1708026197(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_9, _activatnvar_confusing_char_7);
}

void _activation_check_proc_17_func_1708026197(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 += _activatnvar_confusing_chararray_9[0xb];

	_activatnvar_confusing_LLUUID_5 = LLUUID("26dc4fd1-1520-df35-7575-b2ba505e2915");

}

void _activation_check_proc_17_func_271932400(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e += _activatnvar_confusing_int_1;

}

void _activation_check_proc_17_func_544027532(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_17_func_2039870599(bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_17_func_1716401890(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_17_func_686261506(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] &= _activatnvar_confusing_LLUUID_8.mData[0xc];

}

void _activation_check_proc_17_func_1158356905(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_17_func_1154176729(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_2073951768(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_17_func_9175588(char& _activatnvar_confusing_char_9, U8& _activatnvar_t0, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x5] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_a = true;

	_activation_check_proc_17_func_2073951768(_activatnvar_t0);
	/* inline */ _activation_check_proc_17_func_1636917171(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_17_func_32921161(unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_chararray_e[0xb] >>= _activatnvar_confusing_chararray_c[0xe];

	_activatnvar_confusing_int_a = _activatnvar_generic_iterator;

}

void _activation_check_proc_17_func_570159370(U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b ^= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_17_func_82572336(U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_570159370(_activatnvar_confusing_U8_a, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_17_func_1602628866(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_2014943813(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("51253df9-7aa9-97c4-2ed9-505a8971b389");

}

void _activation_check_proc_17_func_2015586089(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1982432134(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_5 ^= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_17_func_1406925807(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_17_func_179757795(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code);
	_activation_check_proc_17_func_1602628866(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_17_func_534701797(_activatnvar_doaccount, _activatnvar_confusing_bool_3);
	_activation_check_proc_17_func_2015586089(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_17_func_1982432134(_activatnvar_confusing_U8_b, _activatnvar_confusing_char_5, _activatnvar_confusing_bool_b, _activatnvar_generic_iterator);
	_activation_check_proc_17_func_2014943813(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_17_func_740365489(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 *= _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_17_func_793544245(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

	_activation_check_proc_17_func_740365489(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_17_func_1063189810(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_17_func_37495358(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f *= _activatnvar_confusing_char_0;

}

void _activation_check_proc_17_func_1750522664(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_17_func_947655979(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] += _activatnvar_confusing_chararray_4[0x1];

}

void _activation_check_proc_17_func_1028398278(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_U8_1;

}

void _activation_check_proc_17_func_1279976486(char& _activatnvar_feat, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_17_func_1152144093(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_3[0xa] ^= _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_17_func_155937802(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_17_func_100936284(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_17_func_996732327(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_2[0x2] *= _activatnvar_ser_digest[0xc];

	_activation_check_proc_17_func_100936284(_activatnvar_t0);
}

void _activation_check_proc_17_func_785145331(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_17_func_370457852(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 |= 0x0;

}

void _activation_check_proc_17_func_968369131(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_1 <<= _activatnvar_confusing_chararray_1[0xf];

}

void _activation_check_proc_17_func_878941387(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_c;

	_activation_check_proc_17_func_1276007948(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1276007948(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1637046108(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1659004239(LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_9, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_1637046108(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	_activation_check_proc_17_func_32328633(_activatnvar_confusing_char_9, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_17_func_32328633(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_9 += _activatnvar_confusing_chararray_7[0x7];

}

void _activation_check_proc_17_func_911209518(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_int_f++;

	/* inline */ _activation_check_proc_17_func_152791855(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_17_func_1143969985(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_17_func_524019486(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_b >>= 0x5;

}

void _activation_check_proc_17_func_2145133117(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_17_func_1093608023(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1497058058(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_17_func_1623978969(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_602586485(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_17_func_602586485(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1588078842(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_17_func_1210883847(char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_17_func_250452859(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("98ce44c5-aaa2-f8c2-2c78-56a5e7873e55");

}

void _activation_check_proc_17_func_641300432(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_17_func_584559291(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_1.mData[0xc] += _activatnvar_so.mData[0xa];

}

void _activation_check_proc_17_func_1896295855(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_0[0xf] &= _activatnvar_name_digest[0xd];

	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_858331149(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("1857a30a-ce50-a4d9-5b3a-332aba499f4b");

}

void _activation_check_proc_17_func_1887827295(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activation_check_proc_17_func_1707410927(_activatnvar_confusing_U8_9);
}

void _activation_check_proc_17_func_1707410927(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 *= 0x8;

}

void _activation_check_proc_17_func_1214619442()
{
	
}

void _activation_check_proc_17_func_529167825(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_c.mData[0x9] >>= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_17_func_1316712419(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xa] != 0x0) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_17_func_1021542729(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("ed42e56d-5c64-53de-2796-b4da52bdbdcb");

}

void _activation_check_proc_17_func_973426200(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_17_func_1850244711(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_17_func_142388270(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("c5bc7e99-d0f6-a238-8120-af74fc9a5a39");

}

void _activation_check_proc_17_func_1952366130(U8& _activatnvar_t0, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d &= _activatnvar_t0;

}

void _activation_check_proc_17_func_2083918898(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_5)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_17_func_1717233822(_activatnvar_confusing_char_5, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_750971614(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 55; _activatnvar_strbuf_0[0] ^= 6; _activatnvar_strbuf_0[1] = 52; _activatnvar_strbuf_0[1] ^= 4; _activatnvar_strbuf_0[2] = 19; _activatnvar_strbuf_0[2] ^= 32; _activatnvar_strbuf_0[3] = 56; _activatnvar_strbuf_0[3] ^= 12; _activatnvar_strbuf_0[4] = 61; _activatnvar_strbuf_0[4] ^= 95; _activatnvar_strbuf_0[5] = 28; _activatnvar_strbuf_0[5] ^= 122; _activatnvar_strbuf_0[6] = 104; _activatnvar_strbuf_0[6] ^= 14; _activatnvar_strbuf_0[7] = 42; _activatnvar_strbuf_0[7] ^= 28; _activatnvar_strbuf_0[8] = 57; _activatnvar_strbuf_0[8] ^= 20; _activatnvar_strbuf_0[9] = 49; _activatnvar_strbuf_0[9] ^= 83; _activatnvar_strbuf_0[10] = 118; _activatnvar_strbuf_0[10] ^= 65; _activatnvar_strbuf_0[11] = 59; _activatnvar_strbuf_0[11] ^= 15; _activatnvar_strbuf_0[12] = 52; _activatnvar_strbuf_0[12] ^= 4; _activatnvar_strbuf_0[13] = 81; _activatnvar_strbuf_0[13] ^= 124; _activatnvar_strbuf_0[14] = 76; _activatnvar_strbuf_0[14] ^= 124; _activatnvar_strbuf_0[15] = 117; _activatnvar_strbuf_0[15] ^= 19; _activatnvar_strbuf_0[16] = 82; _activatnvar_strbuf_0[16] ^= 48; _activatnvar_strbuf_0[17] = 106; _activatnvar_strbuf_0[17] ^= 14; _activatnvar_strbuf_0[18] = 40; _activatnvar_strbuf_0[18] ^= 5; _activatnvar_strbuf_0[19] = 72; _activatnvar_strbuf_0[19] ^= 121; _activatnvar_strbuf_0[20] = 19; _activatnvar_strbuf_0[20] ^= 112; _activatnvar_strbuf_0[21] = 83; _activatnvar_strbuf_0[21] ^= 49; _activatnvar_strbuf_0[22] = 114; _activatnvar_strbuf_0[22] ^= 20; _activatnvar_strbuf_0[23] = 84; _activatnvar_strbuf_0[23] ^= 121; _activatnvar_strbuf_0[24] = 97; _activatnvar_strbuf_0[24] ^= 85; _activatnvar_strbuf_0[25] = 69; _activatnvar_strbuf_0[25] ^= 115; _activatnvar_strbuf_0[26] = 28; _activatnvar_strbuf_0[26] ^= 41; _activatnvar_strbuf_0[27] = 43; _activatnvar_strbuf_0[27] ^= 72; _activatnvar_strbuf_0[28] = 83; _activatnvar_strbuf_0[28] ^= 99; _activatnvar_strbuf_0[29] = 36; _activatnvar_strbuf_0[29] ^= 21; _activatnvar_strbuf_0[30] = 82; _activatnvar_strbuf_0[30] ^= 54; _activatnvar_strbuf_0[31] = 101; _activatnvar_strbuf_0[31] ^= 87; _activatnvar_strbuf_0[32] = 19; _activatnvar_strbuf_0[32] ^= 34; _activatnvar_strbuf_0[33] = 36; _activatnvar_strbuf_0[33] ^= 70; _activatnvar_strbuf_0[34] = 99; _activatnvar_strbuf_0[34] ^= 7; _activatnvar_strbuf_0[35] = 60; _activatnvar_strbuf_0[35] ^= 9; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_17_func_1586303086(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_17_func_1171118706();
}

void _activation_check_proc_17_func_1171118706()
{
	
}

void _activation_check_proc_17_func_1408676758(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_17_func_664070054(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_9.mData[0xa] *= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_17_func_1456048101(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_7[0xc] ^= _activatnvar_confusing_LLUUID_7.mData[0xe];

}

void _activation_check_proc_17_func_933676005(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_17_func_9255124(char& _activatnvar_feat, int& _activatnvar_confusing_int_b, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_int_b++;

	/* inline */ _activation_check_proc_17_func_1356002442(_activatnvar_doaccount, _activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_17_func_933676005(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_17_func_20251945(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 >>= _activatnvar_confusing_char_8;

}

void _activation_check_proc_17_func_1969637039(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_t1, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_9)
{
	
	/* inline */ _activation_check_proc_17_func_1584914395(_activatnvar_confusing_chararray_2, _activatnvar_confusing_chararray_0);
	_activation_check_proc_17_func_1263046339(_activatnvar_confusing_LLUUID_f, _activatnvar_t1, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_4, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_17_func_1263046339(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_5;

	if(_activatnvar_confusing_LLUUID_9.mData[0xa] == _activatnvar_t1) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_17_func_319382136(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_17_func_1482061105(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1845239191(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_d |= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_17_func_2093072482(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x8] += _activatnvar_lace.mData[0xd];

	/* inline */ _activation_check_proc_17_func_42499401(_activatnvar_secret, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_17_func_345777930(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xb] ^= _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_17_func_884606471(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_17_func_18516263(char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_17_func_1204816848(_activatnvar_confusing_int_0);
	_activation_check_proc_17_func_702659743(_activatnvar_confusing_char_6);
}

void _activation_check_proc_17_func_1204816848(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_17_func_702659743(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

	
}

void _activation_check_proc_17_func_1022896776(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_17_func_687820403(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_3[0x5] *= _activatnvar_confusing_LLUUID_f.mData[0x3];

	_activation_check_proc_17_func_1022896776(_activatnvar_t0);
	/* inline */ _activation_check_proc_17_func_122897712(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_17_func_1573493784(_activatnvar_confusing_LLUUID_b, _activatnvar_name_digest);
	_activation_check_proc_17_func_200470460(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_17_func_200470460(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("e40aaeaa-4de2-e706-2ad4-0250e7de86e2");

}

void _activation_check_proc_17_func_1308125508(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_1.mData[0xa];

}

void _activation_check_proc_17_func_913151079(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_17_func_180236097(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_e *= _activatnvar_confusing_int_9;

}

void _activation_check_proc_17_func_197383870(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_char_9 += _activatnvar_confusing_U8_a;

}

void _activation_check_proc_17_func_1046783274(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
	/* inline */ _activation_check_proc_17_func_662412243(_activatnvar_t0);
}

void _activation_check_proc_17_func_1368136108(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1577203031(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_f = 0x8;

}

void _activation_check_proc_17_func_1852127483(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_17_func_512563642(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_8[0xf] *= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_17_func_1741907742(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_220440798(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_17_func_766424210();
}

void _activation_check_proc_17_func_1643441931(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1685253162()
{
	
}

void _activation_check_proc_17_func_1309610338(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_17_func_486167552(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_4 += _activatnvar_confusing_chararray_7[0xe];

}

void _activation_check_proc_17_func_1806481348(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_17_func_1710764179(U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_char_1;

}

void _activation_check_proc_17_func_1521775419(U8& _activatnvar_confusing_U8_4, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_486167552(_activatnvar_confusing_U8_4, _activatnvar_confusing_chararray_7);
	_activation_check_proc_17_func_1806481348(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_17_func_1661692550(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_e);
	_activation_check_proc_17_func_1710764179(_activatnvar_confusing_U8_5, _activatnvar_confusing_char_1);
}

void _activation_check_proc_17_func_1044445541(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_17_func_1727564213(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1210477976(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("9c360625-a796-73af-b3de-99ff76f61c01");

}

void _activation_check_proc_17_func_1193382522(bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_17_func_911520041(unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_chararray_6[0xf];

	_activation_check_proc_17_func_1193382522(_activatnvar_confusing_bool_8);
}

void _activation_check_proc_17_func_562378840(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x5] |= _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_17_func_1021416022(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_17_func_677768285(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_0 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_17_func_746488488(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_709553244(unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xa] = _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_17_func_397382250(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_5.mData[0xf] |= _activatnvar_confusing_chararray_a[0x7];

}

void _activation_check_proc_17_func_47124966(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_c <<= _activatnvar_confusing_int_b;

}

void _activation_check_proc_17_func_1735703505(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_7[0x1] <<= _activatnvar_section1.mData[0x6];

}

void _activation_check_proc_17_func_867576174(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_secret;

	_activatnvar_confusing_char_b <<= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_17_func_1397011249(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_pos, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_4.mData[0x7];

	_activation_check_proc_17_func_867576174(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_8, _activatnvar_secret, _activatnvar_confusing_char_b);
	_activation_check_proc_17_func_286994293(_activatnvar_pos);
}

void _activation_check_proc_17_func_286994293(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_17_func_1867448541(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_a[0x9] >>= _activatnvar_so.mData[0x5];

}

void _activation_check_proc_17_func_1243945493(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_538172507(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_LLUUID_e.mData[0x9];

}

void _activation_check_proc_17_func_168375154(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x0] >>= _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_17_func_53741634(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] &= _activatnvar_confusing_chararray_5[0xc];

}

void _activation_check_proc_17_func_1538182987(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_17_func_2083366093(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_17_func_1587452484(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0x1;

	_activation_check_proc_17_func_2083366093(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_17_func_87134360(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_17_func_2100008449(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_17_func_2145823238(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_e.mData[0x9];

	_activation_check_proc_17_func_2100008449(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_17_func_1004495285(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_17_func_792131273(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_17_func_1950598616(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_9 |= _activatnvar_confusing_LLUUID_f.mData[0xd];

	/* inline */ _activation_check_proc_17_func_226633161(_activatnvar_confusing_int_4);
}

void _activation_check_proc_17_func_1757426142(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_17_func_246002856(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_17_func_1242807548(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_5, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_17_func_160256980(_activatnvar_confusing_int_5, _activatnvar_confusing_int_3);
}

void _activation_check_proc_17_func_160256980(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= _activatnvar_confusing_int_5;

}

void _activation_check_proc_17_func_588549194(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_4[0x2] |= _activatnvar_confusing_chararray_8[0x2];

	/* inline */ _activation_check_proc_17_func_600252389(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	/* inline */ _activation_check_proc_17_func_1156772766(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_17_func_865716822(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
}

void _activation_check_proc_17_func_862695785(LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_17_func_860293929(char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x8] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_17_func_1284479547(unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xc] >>= _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_17_func_807601181(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

	_activation_check_proc_17_func_829632850(_activatnvar_confusing_chararray_4, _activatnvar_name_digest);
}

void _activation_check_proc_17_func_829632850(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_4[0x5] |= _activatnvar_name_digest[0x3];

}

void _activation_check_proc_17_func_1460600664(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xe] >>= _activatnvar_confusing_LLUUID_9.mData[0xe];

}

void _activation_check_proc_17_func_2132387590(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("f1bacbc2-8675-15e4-57c2-b8dfbba85e51");

}

void _activation_check_proc_17_func_757538938(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x7] == 0x9) _activatnvar_confusing_bool_6 = false;

	_activation_check_proc_17_func_2132387590(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_17_func_515341965(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_8 >>= 0x9;

}

void _activation_check_proc_17_func_1737097857(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_char_0 += _activatnvar_confusing_U8_0;

}

void _activation_check_proc_17_func_916879483(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] += _activatnvar_confusing_LLUUID_9.mData[0xd];

}

void _activation_check_proc_17_func_1789999938(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x2] *= _activatnvar_confusing_LLUUID_b.mData[0x7];

}

void _activation_check_proc_17_func_1411045837(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b = _activatnvar_confusing_int_b;

	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_secret;

}

void _activation_check_proc_17_func_2092380069(int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_a;

	_activation_check_proc_17_func_1411045837(_activatnvar_secret, _activatnvar_confusing_LLUUID_3, _activatnvar_confusing_int_b);
}

void _activation_check_proc_17_func_1721052209(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_17_func_293923220(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_17_func_7569596()
{
	
}

void _activation_check_proc_17_func_284097511(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1061640278(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_17_func_1352381525(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("95c1bdab-6c38-7173-09d4-3e4744b63376");

}

void _activation_check_proc_17_func_1957661776(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] <<= _activatnvar_confusing_chararray_2[0x1];

	/* inline */ _activation_check_proc_17_func_1220194299(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_17_func_1346530250(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b |= _activatnvar_confusing_int_5;

}

void _activation_check_proc_17_func_248015702(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	
	/* inline */ _activation_check_proc_17_func_983708096(_activatnvar_confusing_chararray_f, _activatnvar_confusing_char_3);
}

void _activation_check_proc_17_func_1791140243(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_section2;

}

void _activation_check_proc_17_func_623901004(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_e[0x8] ^= _activatnvar_confusing_chararray_2[0xf];

}

void _activation_check_proc_17_func_67005895(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] <<= _activatnvar_so.mData[0xa];

}

void _activation_check_proc_17_func_973130708(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x1] |= _activatnvar_confusing_chararray_f[0x6];

	
}

void _activation_check_proc_17_func_357954559(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_17_func_1226984322(unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_chararray_1[0xa];

}

void _activation_check_proc_17_func_1432411828(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_17_func_2131195813(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x8] *= _activatnvar_confusing_chararray_a[0x8];

}

void _activation_check_proc_17_func_1701962598(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x6] |= _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_17_func_257525668(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_1;

	_activation_check_proc_17_func_1701962598(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_17_func_295144941(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_LLUUID_7.mData[0xb];

	/* inline */ _activation_check_proc_17_func_1475671141(_activatnvar_confusing_char_6);
}

void _activation_check_proc_17_func_50535380(U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_3 = _activatnvar_confusing_int_4;

	/* inline */ _activation_check_proc_17_func_468156963(_activatnvar_confusing_U8_f, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_17_func_1773533421(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] ^= _activatnvar_confusing_LLUUID_b.mData[0x9];

	/* inline */ _activation_check_proc_17_func_149666473(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_17_func_632113874(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d >>= 0xc;

}

void _activation_check_proc_17_func_1395268143(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_int_b &= 0xff;

	_activatnvar_confusing_LLUUID_3.mData[0x5] >>= _activatnvar_confusing_chararray_8[0xb];

}

void _activation_check_proc_17_func_343432688(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_7.mData[0x7];

}

void _activation_check_proc_17_func_1803188149(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_17_func_1302219560(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
	_activation_check_proc_17_func_1803188149(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_17_func_1050921000(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_2[0xd] <<= _activatnvar_confusing_chararray_d[0x3];

}

void _activation_check_proc_17_func_1359672401(bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_d;

	_activation_check_proc_17_func_1050921000(_activatnvar_confusing_chararray_2, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_17_func_1682130195(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_17_func_1900181278(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_chararray_7[0x3];

}

void _activation_check_proc_17_func_1479928465(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_17_func_595158964(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 |= _activatnvar_confusing_int_f;

}

void _activation_check_proc_17_func_2009435247(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_17_func_1479928465(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_17_func_595158964(_activatnvar_confusing_int_f, _activatnvar_confusing_int_1);
}

void _activation_check_proc_17_func_1676205215(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_LLUUID_b.mData[0x5];

}

void _activation_check_proc_17_func_1894706170(int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("00c14092-0dbb-35f0-7c4b-607f83cd8d0c");

	_activation_check_proc_17_func_161497981(_activatnvar_confusing_int_6);
}

void _activation_check_proc_17_func_161497981(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_17_func_12497563(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_0)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_2 = _activatnvar_confusing_char_0;

}

void _activation_check_proc_17_func_1960215046(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_17_func_663489550(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_c.mData[0xe];

}

void _activation_check_proc_17_func_265677283()
{
	
}

void _activation_check_proc_17_func_1467296791(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_17_func_1303694265(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_chararray_a[0x1] &= _activatnvar_confusing_chararray_7[0x0];

	_activatnvar_confusing_char_6 = _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_17_func_27768819(bool& _activatnvar_confusing_bool_6, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_chararray_0[0x0];

	/* inline */ _activation_check_proc_17_func_1808691141(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_6);
	_activation_check_proc_17_func_1004706089(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_17_func_1067270836(_activatnvar_t0);
	_activation_check_proc_17_func_13624049(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_17_func_13624049(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_17_func_1004706089(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_17_func_1496361738(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xb] <<= _activatnvar_ser_digest[0xf];

}

void _activation_check_proc_17_func_899652713(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_17_func_1977778024(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_9, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

	_activatnvar_confusing_int_4 |= _activatnvar_confusing_int_9;

}

void _activation_check_proc_17_func_1144779057(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_882496132(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_882496132(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1931207317(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	
	_activation_check_proc_17_func_2032703738(_activatnvar_confusing_LLUUID_d);
	_activation_check_proc_17_func_460947487(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_generic_bool_1, _activatnvar_feat);
}

void _activation_check_proc_17_func_2032703738(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("b1ffbf6d-7200-200a-f3e1-f93587562e72");

}

void _activation_check_proc_17_func_460947487(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_17_func_1904275480(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] |= _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_17_func_966783946(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_9.mData[0xf] &= _activatnvar_confusing_LLUUID_4.mData[0x4];

}

void _activation_check_proc_17_func_2058421951(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_696013786(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_2065969208(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_2065969208(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_217797863(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

	_activation_check_proc_17_func_90441254(_activatnvar_confusing_int_8);
	_activation_check_proc_17_func_1364510773(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_17_func_90441254(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_17_func_1364510773(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] ^= _activatnvar_confusing_LLUUID_c.mData[0xb];

}

void _activation_check_proc_17_func_551020298(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1687625741(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_U8_c <<= 0xb;

	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_17_func_599879328(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_secret, char& _activatnvar_feat, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_char_d |= _activatnvar_confusing_U8_b;

	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_secret;

	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_17_func_1504436797(_activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_generic_iterator, _activatnvar_feat);
	_activation_check_proc_17_func_1687625741(_activatnvar_confusing_bool_0, _activatnvar_confusing_U8_c, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_17_func_1266461230(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] &= _activatnvar_name_digest[0xb];

}

void _activation_check_proc_17_func_1951738241(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_535571566(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_17_func_586783214(int& _activatnvar_confusing_int_5, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_17_func_2104765031(_activatnvar_confusing_int_5);
}

void _activation_check_proc_17_func_1980897020(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 += 0xb;

}

void _activation_check_proc_17_func_1171198916(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_17_func_750572446(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_112458730(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_419068451(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x1] |= _activatnvar_confusing_chararray_1[0x4];

}

void _activation_check_proc_17_func_1443482730(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_17_func_1446985311(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1159366786(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_17_func_1021250632(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1021250632(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1471669796(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_7[0x4] >>= _activatnvar_confusing_LLUUID_6.mData[0x1];

}

void _activation_check_proc_17_func_93606082(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_f ^= _activatnvar_confusing_int_d;

	_activation_check_proc_17_func_420940819(_activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_17_func_2114038114(_activatnvar_confusing_LLUUID_f, _activatnvar_code);
	_activation_check_proc_17_func_1316113469(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_17_func_745726626(_activatnvar_feat, _activatnvar_lace, _activatnvar_doaccount, _activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_420940819(char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_17_func_1316113469(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_121404925(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_17_func_153087831(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1578144528(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_fscked)
{
	
	_activation_check_proc_17_func_153087831(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_17_func_1727588706(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_3);
	/* inline */ _activation_check_proc_17_func_896080965(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_confusing_int_e);
	_activation_check_proc_17_func_1714459536(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1714459536(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1154459166(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_17_func_914704166(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_17_func_604037111(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_8)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xf] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_17_func_1048458972(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x8] *= _activatnvar_confusing_LLUUID_7.mData[0x6];

}

void _activation_check_proc_17_func_1541675916(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_d++;

	_activation_check_proc_17_func_1048458972(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_17_func_1301345952(int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_f;

	_activation_check_proc_17_func_1267100747(_activatnvar_confusing_int_7);
}

void _activation_check_proc_17_func_1267100747(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_17_func_996306702(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_17_func_1531987914(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_17_func_1671973962(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] *= _activatnvar_confusing_chararray_0[0xd];

}

void _activation_check_proc_17_func_41001227(bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_17_func_129375157(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_17_func_129375157(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] <<= _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_17_func_1614164956(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1056081202(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_5[0x0] = _activatnvar_confusing_LLUUID_5.mData[0xb];

	_activation_check_proc_17_func_394000214(_activatnvar_confusing_int_6);
}

void _activation_check_proc_17_func_394000214(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_17_func_819745808(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] &= _activatnvar_confusing_LLUUID_1.mData[0xc];

}

void _activation_check_proc_17_func_1227070895(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_5 <<= _activatnvar_confusing_int_1;

}

void _activation_check_proc_17_func_1047903458(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_17_func_264977197(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_b)
{
	
	_activation_check_proc_17_func_888510531(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_b, _activatnvar_confusing_bool_7);
	_activation_check_proc_17_func_1047903458(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_17_func_1547837771(_activatnvar_confusing_char_b);
}

void _activation_check_proc_17_func_888510531(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_17_func_1547837771(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_17_func_2065125594(U8& _activatnvar_confusing_U8_2, char& _activatnvar_feat, U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_2 >>= _activatnvar_feat;

	_activation_check_proc_17_func_864649093(_activatnvar_t0, _activatnvar_so, _activatnvar_t1);
	/* inline */ _activation_check_proc_17_func_327697130(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_17_func_241018335();
	_activation_check_proc_17_func_246291347();
}

void _activation_check_proc_17_func_246291347()
{
	
}

void _activation_check_proc_17_func_241018335()
{
	
}

void _activation_check_proc_17_func_864649093(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_17_func_800910959(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_e += _activatnvar_confusing_chararray_3[0x0];

}

void _activation_check_proc_17_func_1295629720(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_U8_e;

	_activation_check_proc_17_func_800910959(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_17_func_1521206007(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_17_func_1497123728(U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_8)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_8 &= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_17_func_1231131023(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 += _activatnvar_confusing_char_4;

	_activation_check_proc_17_func_1497123728(_activatnvar_confusing_U8_7, _activatnvar_confusing_bool_3, _activatnvar_confusing_char_8);
	_activation_check_proc_17_func_1521206007(_activatnvar_confusing_int_7);
}

void _activation_check_proc_17_func_905481743(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_chararray_7[0xb];

}

void _activation_check_proc_17_func_1864007171(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_905481743(_activatnvar_confusing_U8_b, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_17_func_1459221126(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] ^= _activatnvar_confusing_LLUUID_f.mData[0x4];

}

void _activation_check_proc_17_func_913904091(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_8;

	_activation_check_proc_17_func_1459221126(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_f);
	/* inline */ _activation_check_proc_17_func_1398904252(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_2);
	/* inline */ _activation_check_proc_17_func_166918744(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_17_func_529595617(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_17_func_597295802(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1033879429(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_17_func_597295802(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_17_func_1110166230(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1110166230(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1148567530(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_17_func_925294385(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_17_func_104230597(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_17_func_964418289(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_17_func_788211234(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e = _activatnvar_fscked.mData[0x1];

	_activation_check_proc_17_func_964418289(_activatnvar_confusing_int_b);
}

void _activation_check_proc_17_func_309688243(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_17_func_214548127(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_546435603(unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_17_func_1675818639(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_17_func_556985673(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("ce6b401c-b74b-0133-913a-c6c659f339d4");

}

void _activation_check_proc_17_func_270454847(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_c;

	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_8 *= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_17_func_1345834844(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_7;

	/* inline */ _activation_check_proc_17_func_1163877765(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_3, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_17_func_862287503(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_c, U8& _activatnvar_t0, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] *= _activatnvar_confusing_LLUUID_9.mData[0x8];

	_activation_check_proc_17_func_2057523736(_activatnvar_confusing_char_c, _activatnvar_t0, _activatnvar_generic_bool_0);
}

void _activation_check_proc_17_func_2057523736(char& _activatnvar_confusing_char_c, U8& _activatnvar_t0, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_c &= _activatnvar_t0;

}

void _activation_check_proc_17_func_284582660(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_17_func_11633697(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x2] != _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_8 = true;

	/* inline */ _activation_check_proc_17_func_1941686429(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_17_func_724807906(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_0[0xa] *= _activatnvar_confusing_LLUUID_7.mData[0xd];

	/* inline */ _activation_check_proc_17_func_825904052(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_17_func_2081883118(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_f >>= 0xf;

}

void _activation_check_proc_17_func_1879672334(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_17_func_1162634323(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_17_func_599392468(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xf] |= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_17_func_1484148520(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_9[0x9] += _activatnvar_confusing_chararray_1[0x5];

	_activatnvar_confusing_chararray_5[0x8] = _activatnvar_ser_digest[0x2];

}

void _activation_check_proc_17_func_217120212(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_17_func_515759592(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_a;

	_activatnvar_confusing_LLUUID_b.mData[0xe] += _activatnvar_confusing_chararray_6[0xb];

	/* inline */ _activation_check_proc_17_func_2058949649(_activatnvar_section1, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_17_func_1805282017(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_17_func_1456070983(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_17_func_1745516955(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c >>= _activatnvar_confusing_chararray_0[0x7];

	/* inline */ _activation_check_proc_17_func_1468503962(_activatnvar_confusing_int_e);
	_activation_check_proc_17_func_1805282017(_activatnvar_confusing_char_9);
	_activation_check_proc_17_func_1456070983(_activatnvar_confusing_U8_d);
	_activation_check_proc_17_func_835619912(_activatnvar_section2, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_17_func_835619912(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_section2.mData[0x3];

}

void _activation_check_proc_17_func_502026134(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 >>= 0x6;

	_activation_check_proc_17_func_1854568751(_activatnvar_confusing_chararray_1, _activatnvar_section1);
}

void _activation_check_proc_17_func_1854568751(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_1[0xb] |= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_17_func_1233223845(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] ^= _activatnvar_secret.mData[0xe];

}

void _activation_check_proc_17_func_1139907919(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_5 += _activatnvar_confusing_chararray_a[0x7];

}

void _activation_check_proc_17_func_1152686709(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_17_func_1495341581(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_407126750(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_d;

	/* inline */ _activation_check_proc_17_func_162173580(_activatnvar_confusing_U8_4, _activatnvar_confusing_bool_c, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_17_func_127018274(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xe] != 0x0) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_17_func_686241794(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_17_func_831094580(U8& _activatnvar_t0, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
	/* inline */ _activation_check_proc_17_func_1159250970(_activatnvar_confusing_char_d);
}

void _activation_check_proc_17_func_1600189120(int& _activatnvar_confusing_int_5, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_17_func_1648251711(_activatnvar_confusing_int_5);
}

void _activation_check_proc_17_func_1648251711(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_17_func_1833440589(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_f.mData[0x9];

}

void _activation_check_proc_17_func_375420196(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1306267073(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x4] <<= _activatnvar_confusing_LLUUID_9.mData[0xe];

	_activation_check_proc_17_func_375420196(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_1697035885(int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_int_d <<= 0xc;

	/* inline */ _activation_check_proc_17_func_1194909034(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_17_func_1188784520(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_17_func_333444350(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x2] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_17_func_1665804028(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_chararray_5[0xa];

}

void _activation_check_proc_17_func_385767563(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_0.mData[0x9] = _activatnvar_confusing_chararray_d[0x4];

}

void _activation_check_proc_17_func_1320667114(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_17_func_1046955241(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_6[0xa] ^= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_17_func_1437073683(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xb] <<= _activatnvar_so.mData[0xf];

}

void _activation_check_proc_17_func_2028352835(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_pos, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_doaccount)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
	/* inline */ _activation_check_proc_17_func_373966735(_activatnvar_doaccount, _activatnvar_confusing_bool_b);
	_activation_check_proc_17_func_1437073683(_activatnvar_so, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_17_func_579971338(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_17_func_503036945(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_LLUUID_e.mData[0xa];

}

void _activation_check_proc_17_func_2029965071(bool& _activatnvar_doaccount, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_c, DWORD& _activatnvar_serial, bool& _activatnvar_generic_bool_1, BOOL& _activatnvar_success)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_c = _activatnvar_generic_bool_1;

	if(!_activatnvar_success) _activatnvar_serial = 0;
	_activation_check_proc_17_func_362429681(_activatnvar_confusing_U8_c, _activatnvar_code);
}

void _activation_check_proc_17_func_362429681(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_c &= _activatnvar_code.mData[0x4];

}

void _activation_check_proc_17_func_566184953(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xe] == 0x5) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_17_func_2031403966(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1367822962(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f <<= 0xa;

}

void _activation_check_proc_17_func_1310233425(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_6 = _activatnvar_confusing_int_4;

}

void _activation_check_proc_17_func_137820893(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x0] <<= _activatnvar_confusing_chararray_1[0x8];

	_activation_check_proc_17_func_737911597(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_17_func_217015603(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_char_5, _activatnvar_confusing_bool_0);
	_activation_check_proc_17_func_2103927844(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_737911597(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_2103927844(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1901706348(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_17_func_694339685(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_a.mData[0x1] &= _activatnvar_secret.mData[0x9];

}

void _activation_check_proc_17_func_524881010(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

	/* inline */ _activation_check_proc_17_func_1154399779(_activatnvar_confusing_int_e, _activatnvar_confusing_int_4);
}

void _activation_check_proc_17_func_232457333(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_17_func_4181209(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_17_func_1461869624(_activatnvar_generic_bool_0);
}

void _activation_check_proc_17_func_2035078724(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_d.mData[0x0];

}

void _activation_check_proc_17_func_1010891788(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_f, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_LLUUID_2.mData[0x4];

	_activation_check_proc_17_func_270380190(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_4);
	_activation_check_proc_17_func_1728072549(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_17_func_1926505007(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_17_func_636595478(_activatnvar_confusing_chararray_e, _activatnvar_confusing_char_f);
}

void _activation_check_proc_17_func_270380190(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_17_func_1728072549(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_39880071(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_17_func_353454121(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_8 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_17_func_785843968(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_3.mData[0x7];

}

void _activation_check_proc_17_func_857141127(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_17_func_285343450(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] *= _activatnvar_confusing_chararray_4[0x6];

}

void _activation_check_proc_17_func_1608300179(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_17_func_79036501(_activatnvar_so, _activatnvar_confusing_char_a);
}

void _activation_check_proc_17_func_1074130967(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_17_func_822279568(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_121807168(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_b[0xc] *= _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_17_func_1094052002(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 += 0xe;

	/* inline */ _activation_check_proc_17_func_571969904(_activatnvar_t0);
	_activation_check_proc_17_func_121807168(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_17_func_2009054714(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x1] <<= _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_17_func_1300377338(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_d = true;

	_activation_check_proc_17_func_2009054714(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_17_func_376100343(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_17_func_1230410610(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_17_func_900275537(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_section2;

	_activation_check_proc_17_func_536849585(_activatnvar_confusing_int_e);
}

void _activation_check_proc_17_func_536849585(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_17_func_1000926143()
{
	
}

void _activation_check_proc_17_func_338797020(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_17_func_1680329531(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_lace;

	/* inline */ _activation_check_proc_17_func_1480797463(_activatnvar_confusing_char_8, _activatnvar_confusing_char_6);
}

void _activation_check_proc_17_func_101653778(LLUUID& _activatnvar_confusing_LLUUID_7, BOOL& _activatnvar_success, LLUUID& _activatnvar_confusing_LLUUID_c, DWORD& _activatnvar_serial, DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	/* inline */ _activation_check_proc_17_func_1403229798(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_17_func_1844785786(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_17_func_587708539(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 |= _activatnvar_lace.mData[0x9];

	_activation_check_proc_17_func_1844785786(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_17_func_699381251(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_char_4 ^= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_17_func_505786109(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_17_func_124329165(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
	_activation_check_proc_17_func_1826775769(_activatnvar_confusing_char_c, _activatnvar_confusing_chararray_f);
	_activation_check_proc_17_func_505786109(_activatnvar_confusing_int_9);
}

void _activation_check_proc_17_func_1826775769(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_c ^= _activatnvar_confusing_chararray_f[0xa];

}

void _activation_check_proc_17_func_420828648(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xf] ^= _activatnvar_confusing_LLUUID_b.mData[0x9];

}

void _activation_check_proc_17_func_112715032(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_17_func_490616173(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("50f4b7d6-73ff-87c9-a5cd-fdeb6a57a940");

	/* inline */ _activation_check_proc_17_func_1884950363(_activatnvar_confusing_bool_d, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_17_func_141354956(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1905340700(int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

	_activation_check_proc_17_func_858476364(_activatnvar_confusing_int_9);
}

void _activation_check_proc_17_func_858476364(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_17_func_236276800(bool& _activatnvar_confusing_bool_d, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xf] != _activatnvar_feat) _activatnvar_confusing_bool_d = true;

	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_17_func_1647429910(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_17_func_1079678860(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x2] >>= _activatnvar_confusing_chararray_d[0x2];

}

void _activation_check_proc_17_func_1812723971(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_17_func_814415310(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_593059898(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 |= 0x5;

	_activation_check_proc_17_func_650553712(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_17_func_650553712(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] ^= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_17_func_1625108469(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x2] += _activatnvar_name_digest[0x1];

}

void _activation_check_proc_17_func_416050979(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_17_func_529350653(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_17_func_486878746(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_559339239(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_8[0xb] &= _activatnvar_confusing_LLUUID_6.mData[0x3];

}

void _activation_check_proc_17_func_1309877833(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] &= _activatnvar_name_digest[0x5];

}

void _activation_check_proc_17_func_1235970274(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_17_func_1327089226(char& _activatnvar_confusing_char_c, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_c <<= 0xc;

}

void _activation_check_proc_17_func_528635371(char& _activatnvar_confusing_char_c, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_7 *= _activatnvar_confusing_int_2;

	_activatnvar_confusing_LLUUID_5 = _activatnvar_combined_id;

	_activation_check_proc_17_func_1327089226(_activatnvar_confusing_char_c, _activatnvar_generic_bool_0);
}

void _activation_check_proc_17_func_905020133(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_17_func_559872035(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_17_func_899604675(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_8[0x7] <<= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_17_func_74942947(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_feat, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_U8_d = _activatnvar_feat;

	_activatnvar_confusing_LLUUID_4.mData[0x5] ^= _activatnvar_confusing_LLUUID_6.mData[0x6];

	/* inline */ _activation_check_proc_17_func_1179170368(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_618167802(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_17_func_990709808(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_17_func_2062662846(LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_3[0xc] |= _activatnvar_confusing_LLUUID_0.mData[0xe];

	/* inline */ _activation_check_proc_17_func_2022198774(_activatnvar_confusing_int_a);
	_activation_check_proc_17_func_99269739(_activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_17_func_343995308(_activatnvar_confusing_LLUUID_2);
	_activation_check_proc_17_func_990709808(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_confusing_LLUUID_b, _activatnvar_generic_iterator, _activatnvar_confusing_LLUUID_3, _activatnvar_code);
}

void _activation_check_proc_17_func_343995308(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("a1290191-289a-f5fe-f75d-1be7a5a12436");

}

void _activation_check_proc_17_func_99269739(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_17_func_786884823(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_5.mData[0x8] += _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_17_func_1595960392(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_17_func_561234451(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_17_func_2123456803(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_17_func_1274096871(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_6);
	_activation_check_proc_17_func_1595960392(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_17_func_786884823(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_17_func_1740216344(U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_c |= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_17_func_875356593(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_a.mData[0x2] &= _activatnvar_code.mData[0x3];

	_activation_check_proc_17_func_547714438(_activatnvar_confusing_char_7, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_17_func_547714438(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 ^= _activatnvar_confusing_char_7;

}

void _activation_check_proc_17_func_901746667(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 *= 0xd;

	/* inline */ _activation_check_proc_17_func_773994104(_activatnvar_t0);
	_activation_check_proc_17_func_607206894(_activatnvar_t0, _activatnvar_so, _activatnvar_pos);
	_activation_check_proc_17_func_570911086(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_17_func_607206894(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_17_func_570911086(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_17_func_1547163965(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_f.mData[0x5] |= _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_17_func_1751609338(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x1] += _activatnvar_section1.mData[0x6];

	/* inline */ _activation_check_proc_17_func_1437620825(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_17_func_1169256555(_activatnvar_confusing_U8_b, _activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_17_func_1841724748(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_char_b);
	_activation_check_proc_17_func_1547163965(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_17_func_1149903006(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_f[0x3] = _activatnvar_confusing_LLUUID_c.mData[0x1];

}

void _activation_check_proc_17_func_275912571(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_17_func_1241192852(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_6 += _activatnvar_confusing_U8_9;

}

void _activation_check_proc_17_func_1585623787(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_17_func_1532721276(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_17_func_1141450271(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_17_func_1007199871(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1641913108(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = 0x5;

}

void _activation_check_proc_17_func_1493859486(int& _activatnvar_confusing_int_1, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

	_activation_check_proc_17_func_1426121983(_activatnvar_confusing_int_1);
}

void _activation_check_proc_17_func_1426121983(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_17_func_275085567(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_secret;

}

void _activation_check_proc_17_func_1532040472(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 *= _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_17_func_1979818119(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_17_func_96711447(_activatnvar_confusing_LLUUID_3, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_17_func_1804331681(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_a);
	_activation_check_proc_17_func_1188122170(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_1188122170(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_57526383(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_3 >>= _activatnvar_confusing_chararray_f[0x0];

	_activation_check_proc_17_func_1032056788(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_1032056788(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_17_func_1261562455(int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_int_0++;

	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_17_func_1626741033(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_17_func_1837494621(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_17_func_1889867604(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_8[0x2] <<= _activatnvar_confusing_chararray_0[0x9];

}

void _activation_check_proc_17_func_188864606(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 <<= 0xf;

}

void _activation_check_proc_17_func_428866484(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] ^= _activatnvar_confusing_LLUUID_d.mData[0x6];

}

void _activation_check_proc_17_func_39495771(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
	/* inline */ _activation_check_proc_17_func_855680450(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_17_func_1661281632(_activatnvar_confusing_U8_6, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_17_func_1852952967(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_17_func_2093864422(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("7f4ad68d-60da-b8b3-e977-cbccdc18aba0");

	/* inline */ _activation_check_proc_17_func_291108642(_activatnvar_confusing_chararray_5, _activatnvar_so);
	_activation_check_proc_17_func_1852952967(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_17_func_1256951427(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_17_func_1742384609(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_fscked;

}

void _activation_check_proc_17_func_770779718(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("94f61729-74a6-7f51-24ee-9269d00fb471");

}

void _activation_check_proc_17_func_996195663(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 <<= 0x8;

}

void _activation_check_proc_17_func_1120075322(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_b &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_17_func_143562413(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_17_func_185884299(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1135038803(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_17_func_1975340054(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_17_func_658050446(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x5] |= _activatnvar_so.mData[0x9];

}

void _activation_check_proc_17_func_1959688848(char& _activatnvar_confusing_char_a, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_char_a &= _activatnvar_t0;

}

void _activation_check_proc_17_func_463597673(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_17_func_121894389(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_pos, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_1, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_17_func_463597673(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_17_func_981249626(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_U8_7);
	_activation_check_proc_17_func_658050446(_activatnvar_so, _activatnvar_confusing_chararray_d);
	_activation_check_proc_17_func_1171114325(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_8);
	_activation_check_proc_17_func_1959688848(_activatnvar_confusing_char_a, _activatnvar_t0, _activatnvar_confusing_bool_d);
	_activation_check_proc_17_func_1975340054(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_17_func_1746665693(_activatnvar_pos);
	/* inline */ _activation_check_proc_17_func_1954073407(_activatnvar_confusing_char_f);
}

void _activation_check_proc_17_func_1171114325(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x7] &= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_17_func_73360083(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_d[0x6] += _activatnvar_confusing_chararray_4[0x3];

}

void _activation_check_proc_17_func_374835306(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_so;

}

void _activation_check_proc_17_func_1545891050(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_char_c *= 0x8;

}

void _activation_check_proc_17_func_2049249027(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1966450707(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_17_func_220934438(char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_b.mData[0x4] &= _activatnvar_confusing_LLUUID_a.mData[0x5];

	_activation_check_proc_17_func_1966450707(_activatnvar_confusing_U8_0, _activatnvar_confusing_char_d);
}

void _activation_check_proc_17_func_1266737377(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_17_func_305272671(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x0] >>= _activatnvar_confusing_chararray_a[0x8];

	/* inline */ _activation_check_proc_17_func_2032432796(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_17_func_727124435(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_643341473(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

	_activation_check_proc_17_func_727124435(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_2097278579()
{
	
}

void _activation_check_proc_17_func_290499698(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_char_e |= 0x3;

	/* inline */ _activation_check_proc_17_func_394063151(_activatnvar_pos, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_17_func_222115350(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_5);
	_activation_check_proc_17_func_2097278579();
}

void _activation_check_proc_17_func_957819512(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x5] >>= _activatnvar_confusing_chararray_1[0x8];

}

void _activation_check_proc_17_func_309652506(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1743766331(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_17_func_846074939(unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_d[0xc] ^= _activatnvar_confusing_chararray_5[0x4];

	_activation_check_proc_17_func_1743766331(_activatnvar_confusing_int_1);
}

void _activation_check_proc_17_func_1106705628(unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_chararray_2[0x8];

}

void _activation_check_proc_17_func_2145499380(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_17_func_1024659719(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_17_func_652633302(unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_9[0xb] |= _activatnvar_confusing_LLUUID_8.mData[0x3];

	/* inline */ _activation_check_proc_17_func_1982927007(_activatnvar_confusing_int_5);
}

void _activation_check_proc_17_func_1403007354(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x8] += _activatnvar_confusing_LLUUID_5.mData[0x8];

	_activation_check_proc_17_func_1862564(_activatnvar_confusing_chararray_9, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_17_func_1862564(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_9[0x2] &= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_17_func_668680855(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_17_func_1089155890(bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_b, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_char_b |= _activatnvar_confusing_LLUUID_b.mData[0xf];

	_activation_check_proc_17_func_668680855(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_17_func_856872799(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_b.mData[0xc] |= _activatnvar_fscked.mData[0x3];

}

void _activation_check_proc_17_func_1065383328(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_section2.mData[0x1];

}

void _activation_check_proc_17_func_1959276043(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x1] = _activatnvar_lace.mData[0xf];

	_activation_check_proc_17_func_789394808(_activatnvar_confusing_LLUUID_a);
	_activation_check_proc_17_func_1065383328(_activatnvar_confusing_U8_2, _activatnvar_section2);
}

void _activation_check_proc_17_func_789394808(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("e134894f-9830-6302-52ea-69bceccd5a6a");

}

void _activation_check_proc_17_func_1203698146(unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_17_func_1081873157(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1154131995(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_17_func_563622950(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_17_func_1830262700(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_c >>= _activatnvar_confusing_chararray_c[0xa];

}

void _activation_check_proc_17_func_1036338792(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_d |= _activatnvar_confusing_char_7;

}

void _activation_check_proc_17_func_608693817(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
	/* inline */ _activation_check_proc_17_func_1461542942(_activatnvar_t1);
}

void _activation_check_proc_17_func_1591307631(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_842313273(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x9] == _activatnvar_confusing_char_6) _activatnvar_confusing_bool_5 = true;

	_activation_check_proc_17_func_298496398();
}

void _activation_check_proc_17_func_298496398()
{
	
}

void _activation_check_proc_17_func_252882423(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_17_func_19680622(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_17_func_2087800145(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_17_func_943641297(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_f[0x6] *= _activatnvar_confusing_LLUUID_c.mData[0x8];

}

void _activation_check_proc_17_func_1736435661(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_5++;

	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_c |= _activatnvar_confusing_char_1;

	/* inline */ _activation_check_proc_17_func_66622767(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_17_func_1118514875(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_17_func_1161328653();
	_activation_check_proc_17_func_1016634101(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_17_func_1016634101(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("a55d93fd-5ef2-c985-59a9-a6fd0b1620ef");

}

void _activation_check_proc_17_func_1388298981(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("8daccb78-ce70-bfa5-8106-b1fefb337ff9");

}

void _activation_check_proc_17_func_308072027(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_9 = _activatnvar_section1.mData[0x2];

}

void _activation_check_proc_17_func_1611113298(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_U8_2 |= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_17_func_792469055(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_8[0x7] >>= _activatnvar_confusing_chararray_a[0x2];

}

void _activation_check_proc_17_func_1669436790(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_17_func_1853449976(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_443388462(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_17_func_1228420736(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_e, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_17_func_91353283(_activatnvar_confusing_int_5, _activatnvar_confusing_int_e);
}

void _activation_check_proc_17_func_1693694915(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_3 <<= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_17_func_1904276735(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xa] += _activatnvar_confusing_chararray_8[0x7];

}

void _activation_check_proc_17_func_1690241780(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_17_func_1244604750(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] *= _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_17_func_699749969(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_5)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_5 |= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_17_func_1845019846(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_b[0x0] <<= _activatnvar_so.mData[0x6];

}

void _activation_check_proc_17_func_1806796745(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_17_func_1344182242(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d ^= 0x6;

}

void _activation_check_proc_17_func_1849344162(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_int_0 += _activatnvar_confusing_int_6;

	_activation_check_proc_17_func_264293562(_activatnvar_confusing_LLUUID_c, _activatnvar_code);
}

void _activation_check_proc_17_func_264293562(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_code;

}

void _activation_check_proc_17_func_561500224(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_9.mData[0x6];

}

void _activation_check_proc_17_func_1350919814(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_chararray_e[0xa];

}

void _activation_check_proc_17_func_797344710(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_17_func_683821937(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_6, int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_4 &= 0xff;

	/* inline */ _activation_check_proc_17_func_716648777(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
	_activation_check_proc_17_func_797344710(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_17_func_878880336(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("df0d8583-a7c2-c950-7aff-4990917e67a6");

}

void _activation_check_proc_17_func_1602808467(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_char_9++;

	_activation_check_proc_17_func_1518538707(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_4);
	/* inline */ _activation_check_proc_17_func_289657052(_activatnvar_confusing_U8_4, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_17_func_1518538707(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x3] == 0x0) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_17_func_2079896437(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x7] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_17_func_946713146(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_17_func_1444784841(LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_2.mData[0xa];

}

void _activation_check_proc_17_func_1299008830(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_17_func_95662691(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_0 = _activatnvar_secret.mData[0x1];

	_activatnvar_confusing_LLUUID_e.mData[0xd] = _activatnvar_confusing_LLUUID_0.mData[0x1];

}

void _activation_check_proc_17_func_2087477655(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_8 = _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_17_func_769809903(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x6] == 0x0) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_17_func_2144181948(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x4] == _activatnvar_pos) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_17_func_1292954264(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_d[0x0] <<= _activatnvar_confusing_chararray_b[0xa];

	_activation_check_proc_17_func_461638333(_activatnvar_confusing_LLUUID_4, _activatnvar_ser_digest);
	_activation_check_proc_17_func_1391333136(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_17_func_461638333(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_4.mData[0x4] ^= _activatnvar_ser_digest[0x1];

}

void _activation_check_proc_17_func_1391333136(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_chararray_6[0x4];

}

void _activation_check_proc_17_func_1217816925(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_f)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_17_func_1244824110(_activatnvar_fscked, _activatnvar_confusing_char_f);
}

void _activation_check_proc_17_func_994192122(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_a *= _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_17_func_1689256636(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_17_func_491983576(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_17_func_1048546651(_activatnvar_generic_iterator);
	_activation_check_proc_17_func_1717394981(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_17_func_1717394981(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_17_func_545003067(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_confusing_U8_4;

}

void _activation_check_proc_17_func_1528529106(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("af8a8fb1-2394-0460-3ba7-bb41176c2a54");

}

void _activation_check_proc_17_func_1971681693(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_7[0x0] ^= _activatnvar_confusing_chararray_e[0xa];

}

void _activation_check_proc_17_func_1001131273(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x4] >>= _activatnvar_confusing_chararray_2[0xf];

}

void _activation_check_proc_17_func_1575744346(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_17_func_327376617(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_U8_a |= _activatnvar_code.mData[0xb];

}

void _activation_check_proc_17_func_894160456(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xb] += _activatnvar_confusing_chararray_e[0x3];

	/* inline */ _activation_check_proc_17_func_638121449(_activatnvar_confusing_int_4);
}

void _activation_check_proc_17_func_331042323(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= _activatnvar_confusing_int_e;

}

void _activation_check_proc_17_func_628130107(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_17_func_1400606010(U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_LLUUID_2.mData[0x3];

	/* inline */ _activation_check_proc_17_func_57885993(_activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_17_func_1244005623(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_4[0x0] *= _activatnvar_code.mData[0x2];

	_activation_check_proc_17_func_663193200(_activatnvar_confusing_char_2, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_17_func_123891995(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_17_func_663193200(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_2 += _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_17_func_523239048(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c &= 0x9;

}

void _activation_check_proc_17_func_1033871186(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 <<= 0xc;

}

void _activation_check_proc_17_func_470364228(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("033ea521-822d-caa3-b8a9-0bfcb20e4080");

	_activation_check_proc_17_func_634071079(_activatnvar_confusing_int_8);
}

void _activation_check_proc_17_func_634071079(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_17_func_1313332764(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_b.mData[0x9];

}

void _activation_check_proc_17_func_71686943(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 86; _activatnvar_strbuf_0[0] ^= 110; _activatnvar_strbuf_0[1] = 37; _activatnvar_strbuf_0[1] ^= 71; _activatnvar_strbuf_0[2] = 55; _activatnvar_strbuf_0[2] ^= 84; _activatnvar_strbuf_0[3] = 52; _activatnvar_strbuf_0[3] ^= 1; _activatnvar_strbuf_0[4] = 8; _activatnvar_strbuf_0[4] ^= 60; _activatnvar_strbuf_0[5] = 41; _activatnvar_strbuf_0[5] ^= 29; _activatnvar_strbuf_0[6] = 51; _activatnvar_strbuf_0[6] ^= 1; _activatnvar_strbuf_0[7] = 33; _activatnvar_strbuf_0[7] ^= 20; _activatnvar_strbuf_0[8] = 22; _activatnvar_strbuf_0[8] ^= 59; _activatnvar_strbuf_0[9] = 53; _activatnvar_strbuf_0[9] ^= 5; _activatnvar_strbuf_0[10] = 72; _activatnvar_strbuf_0[10] ^= 121; _activatnvar_strbuf_0[11] = 84; _activatnvar_strbuf_0[11] ^= 98; _activatnvar_strbuf_0[12] = 122; _activatnvar_strbuf_0[12] ^= 74; _activatnvar_strbuf_0[13] = 39; _activatnvar_strbuf_0[13] ^= 10; _activatnvar_strbuf_0[14] = 63; _activatnvar_strbuf_0[14] ^= 15; _activatnvar_strbuf_0[15] = 116; _activatnvar_strbuf_0[15] ^= 68; _activatnvar_strbuf_0[16] = 100; _activatnvar_strbuf_0[16] ^= 92; _activatnvar_strbuf_0[17] = 77; _activatnvar_strbuf_0[17] ^= 127; _activatnvar_strbuf_0[18] = 102; _activatnvar_strbuf_0[18] ^= 75; _activatnvar_strbuf_0[19] = 56; _activatnvar_strbuf_0[19] ^= 11; _activatnvar_strbuf_0[20] = 110; _activatnvar_strbuf_0[20] ^= 92; _activatnvar_strbuf_0[21] = 90; _activatnvar_strbuf_0[21] ^= 106; _activatnvar_strbuf_0[22] = 90; _activatnvar_strbuf_0[22] ^= 104; _activatnvar_strbuf_0[23] = 99; _activatnvar_strbuf_0[23] ^= 78; _activatnvar_strbuf_0[24] = 11; _activatnvar_strbuf_0[24] ^= 104; _activatnvar_strbuf_0[25] = 112; _activatnvar_strbuf_0[25] ^= 72; _activatnvar_strbuf_0[26] = 123; _activatnvar_strbuf_0[26] ^= 75; _activatnvar_strbuf_0[27] = 19; _activatnvar_strbuf_0[27] ^= 33; _activatnvar_strbuf_0[28] = 120; _activatnvar_strbuf_0[28] ^= 72; _activatnvar_strbuf_0[29] = 113; _activatnvar_strbuf_0[29] ^= 67; _activatnvar_strbuf_0[30] = 0; _activatnvar_strbuf_0[30] ^= 57; _activatnvar_strbuf_0[31] = 104; _activatnvar_strbuf_0[31] ^= 88; _activatnvar_strbuf_0[32] = 102; _activatnvar_strbuf_0[32] ^= 86; _activatnvar_strbuf_0[33] = 73; _activatnvar_strbuf_0[33] ^= 113; _activatnvar_strbuf_0[34] = 68; _activatnvar_strbuf_0[34] ^= 116; _activatnvar_strbuf_0[35] = 90; _activatnvar_strbuf_0[35] ^= 104; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_17_func_1996660246(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1197225981(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_17_func_1289031537(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_17_func_617535884(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= 0xd;

}

void _activation_check_proc_17_func_1803170936(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 >>= _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_17_func_2052718571(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_716322726(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] |= _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_17_func_2051491284(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_85954821(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_670673782(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_char_8 >>= 0xc;

}

void _activation_check_proc_17_func_1561671998(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_17_func_614567049(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_char_b;

}

void _activation_check_proc_17_func_382129893(char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_8;

	_activation_check_proc_17_func_614567049(_activatnvar_confusing_char_b, _activatnvar_confusing_char_4);
}

void _activation_check_proc_17_func_1571767183(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_17_func_1067240394(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xb] |= _activatnvar_confusing_chararray_f[0x1];

	_activation_check_proc_17_func_228768446(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_228768446(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_278900279(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x1] ^= _activatnvar_secret.mData[0x2];

}

void _activation_check_proc_17_func_664910486(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_17_func_1347608487(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_e)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x8] != _activatnvar_confusing_char_e) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_17_func_1004497862(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] |= _activatnvar_code.mData[0xb];

	_activatnvar_confusing_U8_1++;

	/* inline */ _activation_check_proc_17_func_1484667348(_activatnvar_confusing_int_3);
}

void _activation_check_proc_17_func_1879828568(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_LLUUID_1.mData[0xd] <<= _activatnvar_confusing_LLUUID_5.mData[0x6];

	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_char_7 |= _activatnvar_confusing_char_8;

	_activation_check_proc_17_func_1101200413(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_0, _activatnvar_generic_bool_0);
}

void _activation_check_proc_17_func_1101200413(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xb] == 0xd) _activatnvar_confusing_bool_5 = _activatnvar_generic_bool_0;

}

void _activation_check_proc_17_func_70924770(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] <<= _activatnvar_section2.mData[0xc];

}

void _activation_check_proc_17_func_1556936088(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_17_func_1637291488(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

	/* inline */ _activation_check_proc_17_func_1815973419(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_17_func_1484279083()
{
	
}

void _activation_check_proc_17_func_188305092(U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_b[0x5];

	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_17_func_719858791(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("94ba5467-b45c-1a74-5146-0ac7b09f1f4d");

	/* inline */ _activation_check_proc_17_func_1841652654(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_17_func_1000386157(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_17_func_1278203977(_activatnvar_confusing_bool_d, _activatnvar_confusing_chararray_a, _activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_17_func_1278203977(bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_a[0x3] <<= _activatnvar_confusing_LLUUID_f.mData[0x3];

	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_17_func_144684351(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_17_func_2046039149(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_17_func_1046644643(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_LLUUID_0.mData[0xd];

}

void _activation_check_proc_17_func_1440386575(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x1] ^= _activatnvar_confusing_LLUUID_d.mData[0x2];

	_activation_check_proc_17_func_1046644643(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_17_func_1802304413(int& _activatnvar_confusing_int_7)
{
	
	/* inline */ _activation_check_proc_17_func_448707427(_activatnvar_confusing_int_7);
}

void _activation_check_proc_17_func_896570166(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_17_func_415722166(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_17_func_896570166(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_993069411(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 107; _activatnvar_strbuf_0[0] ^= 93; _activatnvar_strbuf_0[1] = 125; _activatnvar_strbuf_0[1] ^= 77; _activatnvar_strbuf_0[2] = 67; _activatnvar_strbuf_0[2] ^= 119; _activatnvar_strbuf_0[3] = 77; _activatnvar_strbuf_0[3] ^= 124; _activatnvar_strbuf_0[4] = 24; _activatnvar_strbuf_0[4] ^= 43; _activatnvar_strbuf_0[5] = 66; _activatnvar_strbuf_0[5] ^= 33; _activatnvar_strbuf_0[6] = 1; _activatnvar_strbuf_0[6] ^= 49; _activatnvar_strbuf_0[7] = 23; _activatnvar_strbuf_0[7] ^= 37; _activatnvar_strbuf_0[8] = 35; _activatnvar_strbuf_0[8] ^= 14; _activatnvar_strbuf_0[9] = 11; _activatnvar_strbuf_0[9] ^= 59; _activatnvar_strbuf_0[10] = 58; _activatnvar_strbuf_0[10] ^= 8; _activatnvar_strbuf_0[11] = 95; _activatnvar_strbuf_0[11] ^= 107; _activatnvar_strbuf_0[12] = 11; _activatnvar_strbuf_0[12] ^= 61; _activatnvar_strbuf_0[13] = 29; _activatnvar_strbuf_0[13] ^= 48; _activatnvar_strbuf_0[14] = 32; _activatnvar_strbuf_0[14] ^= 16; _activatnvar_strbuf_0[15] = 74; _activatnvar_strbuf_0[15] ^= 122; _activatnvar_strbuf_0[16] = 4; _activatnvar_strbuf_0[16] ^= 55; _activatnvar_strbuf_0[17] = 14; _activatnvar_strbuf_0[17] ^= 62; _activatnvar_strbuf_0[18] = 58; _activatnvar_strbuf_0[18] ^= 23; _activatnvar_strbuf_0[19] = 102; _activatnvar_strbuf_0[19] ^= 84; _activatnvar_strbuf_0[20] = 94; _activatnvar_strbuf_0[20] ^= 111; _activatnvar_strbuf_0[21] = 23; _activatnvar_strbuf_0[21] ^= 39; _activatnvar_strbuf_0[22] = 15; _activatnvar_strbuf_0[22] ^= 54; _activatnvar_strbuf_0[23] = 65; _activatnvar_strbuf_0[23] ^= 108; _activatnvar_strbuf_0[24] = 105; _activatnvar_strbuf_0[24] ^= 81; _activatnvar_strbuf_0[25] = 126; _activatnvar_strbuf_0[25] ^= 70; _activatnvar_strbuf_0[26] = 13; _activatnvar_strbuf_0[26] ^= 56; _activatnvar_strbuf_0[27] = 78; _activatnvar_strbuf_0[27] ^= 127; _activatnvar_strbuf_0[28] = 41; _activatnvar_strbuf_0[28] ^= 29; _activatnvar_strbuf_0[29] = 83; _activatnvar_strbuf_0[29] ^= 106; _activatnvar_strbuf_0[30] = 93; _activatnvar_strbuf_0[30] ^= 109; _activatnvar_strbuf_0[31] = 95; _activatnvar_strbuf_0[31] ^= 62; _activatnvar_strbuf_0[32] = 21; _activatnvar_strbuf_0[32] ^= 118; _activatnvar_strbuf_0[33] = 76; _activatnvar_strbuf_0[33] ^= 116; _activatnvar_strbuf_0[34] = 83; _activatnvar_strbuf_0[34] ^= 54; _activatnvar_strbuf_0[35] = 81; _activatnvar_strbuf_0[35] ^= 98; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_17_func_589318687(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_17_func_1593080142(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_17_func_1859753981(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x2] = _activatnvar_confusing_chararray_e[0xe];

}

void _activation_check_proc_17_func_1877328513(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] <<= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_17_func_551061923(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[5] = _activatnvar_fscked.mData[5];
}

void _activation_check_proc_17_func_954964428(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xf] >>= _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_17_func_1348475151()
{
	
}

void _activation_check_proc_17_func_1259590047(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_17_func_533838095(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_17_func_582175482(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_17_func_835298525(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] += _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_17_func_1494932710(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_f.mData[0x5];

}

void _activation_check_proc_17_func_153741412(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_17_func_1263928764(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_LLUUID_0.mData[0x9];

	_activation_check_proc_17_func_153741412(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_17_func_1554035813(_activatnvar_confusing_bool_7, _activatnvar_confusing_char_a);
}

void _activation_check_proc_17_func_291032357(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_17_func_1558838487(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 |= _activatnvar_generic_iterator;

	/* inline */ _activation_check_proc_17_func_1334039577(_activatnvar_section2, _activatnvar_secret, _activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1969233717(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_17_func_1543047099(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("3b1d70c6-471a-2b4b-7f88-6cf50351b387");

}

void _activation_check_proc_17_func_419397768(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_17_func_1373956793(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_17_func_870035962(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_8)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xd] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_d = true;

	/* inline */ _activation_check_proc_17_func_666295474(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_17_func_419397768(_activatnvar_t0, _activatnvar_t1);
	_activation_check_proc_17_func_1373956793(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_17_func_2022382674(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_fscked;

}

void _activation_check_proc_17_func_230425276(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_f[0x9] = _activatnvar_confusing_chararray_d[0xb];

}

void _activation_check_proc_17_func_323509847(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_feat)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xf] != _activatnvar_feat) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_17_func_1887496560(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_17_func_888945532(U8& _activatnvar_confusing_U8_3, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_3 &= _activatnvar_confusing_chararray_f[0x1];

}

void _activation_check_proc_17_func_985632266(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_f)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_a;

	_activation_check_proc_17_func_888945532(_activatnvar_confusing_U8_3, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_17_func_2129948670(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] = _activatnvar_so.mData[0x9];

}

void _activation_check_proc_17_func_2042813815(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 |= _activatnvar_lace.mData[0x1];

}

void _activation_check_proc_17_func_510925880(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x3] += _activatnvar_confusing_chararray_e[0x6];

}

void _activation_check_proc_17_func_1809441950(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x3] = _activatnvar_section1.mData[0x9];

}

void _activation_check_proc_17_func_1951339632(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_17_func_1680148726(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_17_func_1285509586(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_430300748(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_3[0x4] *= _activatnvar_confusing_chararray_4[0x1];

}

void _activation_check_proc_17_func_1967863730(char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_d)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_a ^= _activatnvar_confusing_char_d;

}

void _activation_check_proc_17_func_356845524(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x5] ^= _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_17_func_1415048612(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_17_func_1121183697(int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x5] *= _activatnvar_confusing_chararray_0[0x9];

	_activation_check_proc_17_func_1415048612(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_17_func_184115559(_activatnvar_confusing_char_b);
}

void _activation_check_proc_17_func_1799986059(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_6[0x5] *= _activatnvar_confusing_LLUUID_b.mData[0xa];

}

void _activation_check_proc_17_func_2086615675(unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_int_d++;

	/* inline */ _activation_check_proc_17_func_62244386(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_17_func_2110128912(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x3] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_17_func_2000022567(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_17_func_719755486(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xb] &= _activatnvar_section1.mData[0xa];

}

void _activation_check_proc_17_func_1348376536(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_4 &= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_17_func_1429312767(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_int_3 >>= _activatnvar_confusing_int_3;

	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_d;

	_activation_check_proc_17_func_2093198833(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_17_func_283398392(_activatnvar_section1, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_17_func_2093198833(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_17_func_619751420(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x5] <<= _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_17_func_2043115967(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 ^= _activatnvar_confusing_int_4;

}

void _activation_check_proc_17_func_173215006(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_0)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x4] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_6 = false;

	_activation_check_proc_17_func_619751420(_activatnvar_secret, _activatnvar_confusing_chararray_b);
	_activation_check_proc_17_func_215734141(_activatnvar_confusing_LLUUID_6);
	_activation_check_proc_17_func_2043115967(_activatnvar_confusing_int_4);
}

void _activation_check_proc_17_func_215734141(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("571378d4-8424-afce-4dd1-ed7cd78eb9ad");

}

void _activation_check_proc_17_func_1744879429(char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

	/* inline */ _activation_check_proc_17_func_1419782245(_activatnvar_confusing_char_d, _activatnvar_code);
	/* inline */ _activation_check_proc_17_func_246232751(_activatnvar_confusing_LLUUID_d, _activatnvar_name_digest);
	/* inline */ _activation_check_proc_17_func_477759793(_activatnvar_confusing_int_0);
}

void _activation_check_proc_17_func_958662358(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_2[0x5] <<= _activatnvar_mac_digest[0x9];

}

void _activation_check_proc_17_func_1335766788(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_239627902(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_17_func_330801912(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1294019692(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_17_func_1204168535(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_pos, U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_int_e <<= 0x0;

	/* inline */ _activation_check_proc_17_func_1502258836(_activatnvar_t0);
	_activation_check_proc_17_func_1294019692(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_17_func_1301276527(_activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_17_func_399473356(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_17_func_1937623786(_activatnvar_so, _activatnvar_t1, _activatnvar_pos);
}

void _activation_check_proc_17_func_1301276527(bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_17_func_255006034(U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_U8_7 &= 0x1;

	_activation_check_proc_17_func_1109665132(_activatnvar_confusing_char_a, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_17_func_1109665132(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c += _activatnvar_confusing_char_a;

}

void _activation_check_proc_17_func_987519903(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1099706717(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x2] *= _activatnvar_confusing_chararray_d[0xd];

}

void _activation_check_proc_17_func_1636464392(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	
	_activation_check_proc_17_func_60064713(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_1, _activatnvar_confusing_U8_9);
	_activation_check_proc_17_func_1099706717(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_2);
	/* inline */ _activation_check_proc_17_func_1391661480(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_17_func_60064713(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_9)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0xc] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_17_func_1444350693(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_7 <<= 0x7;

}

void _activation_check_proc_17_func_1231376752(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_U8_e;

	_activation_check_proc_17_func_898162085(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_17_func_898162085(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("e288283b-42bb-bcd5-9f0c-0c3db1db3f0e");

}

void _activation_check_proc_17_func_887665039(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xd] != _activatnvar_pos) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_17_func_500889524(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_2[0xf] *= _activatnvar_confusing_LLUUID_a.mData[0x2];

}

void _activation_check_proc_17_func_861065039(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_17_func_500889524(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_17_func_1919678312(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_17_func_845225005(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_17_func_845225005(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] &= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_17_func_181691986(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_17_func_751039133(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
	_activation_check_proc_17_func_382097983(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_17_func_382097983(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_17_func_911434039(U8& _activatnvar_confusing_U8_9, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_9 >>= _activatnvar_t1;

}

void _activation_check_proc_17_func_1627019910(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1275435568(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_c.mData[0x9] *= _activatnvar_confusing_LLUUID_d.mData[0x4];

}

void _activation_check_proc_17_func_2050617676(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_17_func_719469196(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b ^= 0x7;

}

void _activation_check_proc_17_func_710737663(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_17_func_701307359(bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("3a7cef69-0a47-f42d-2fcb-9522d2be52cb");

	_activation_check_proc_17_func_927770542(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_7, _activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_17_func_927770542(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_e = false;

	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_17_func_184488658(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x3] |= _activatnvar_confusing_LLUUID_c.mData[0x6];

}

void _activation_check_proc_17_func_1254871546(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_3 ^= 0x8;

}

void _activation_check_proc_17_func_1090697794(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_17_func_2063486362(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_6;

	_activation_check_proc_17_func_1868283636(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_17_func_677423064(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_17_func_1868283636(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_17_func_588488654(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("d8bab91e-7c00-8c66-3575-8ff336d658db");

}

void _activation_check_proc_17_func_58728430(bool& _activatnvar_generic_bool_1, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_U8_f += _activatnvar_confusing_char_a;

	/* inline */ _activation_check_proc_17_func_1050106500(_activatnvar_confusing_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_17_func_1249052302(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_17_func_471896375(_activatnvar_confusing_U8_8, _activatnvar_confusing_chararray_e);
	_activation_check_proc_17_func_509314153(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_e, _activatnvar_confusing_char_1);
	_activation_check_proc_17_func_1300837713(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_17_func_471896375(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_chararray_e[0xc];

}

void _activation_check_proc_17_func_1300837713(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
}

void _activation_check_proc_17_func_509314153(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_1)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xf] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_17_func_331939621(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_8.mData[0x4] |= _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_17_func_294680962(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1646739835(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1899312611()
{
	
}

void _activation_check_proc_17_func_1574209087(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x7] <<= _activatnvar_ser_digest[0x4];

}

void _activation_check_proc_17_func_1499597392(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x1] != _activatnvar_t1) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_17_func_1856889805(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_0 += 0x4;

}

void _activation_check_proc_17_func_264344520(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f += _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_17_func_2018524378(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_17_func_1852840130(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

	/* inline */ _activation_check_proc_17_func_867715721(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_17_func_718255944(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_17_func_1536501707(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] *= _activatnvar_confusing_chararray_8[0xe];

	/* inline */ _activation_check_proc_17_func_1378444317(_activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_17_func_651647913(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_pos |= 8;
	/* inline */ _activation_check_proc_17_func_84302676(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_17_func_415081874(_activatnvar_confusing_LLUUID_9);
	_activation_check_proc_17_func_1170687250(_activatnvar_confusing_bool_d);
}

void _activation_check_proc_17_func_415081874(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("50d2d876-5aab-f8a9-57c6-9550a01bf14e");

}

void _activation_check_proc_17_func_1170687250(bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_17_func_386698173(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_17_func_1096600329(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
}

void _activation_check_proc_17_func_1267699589(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("4c9fdc51-8d15-fa6e-175f-4bb470022401");

	_activation_check_proc_17_func_1096600329(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_17_func_1910864633(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x1] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_d = false;

	/* inline */ _activation_check_proc_17_func_1816302768(_activatnvar_confusing_char_1, _activatnvar_confusing_char_a);
}

void _activation_check_proc_17_func_1734717262(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] >>= _activatnvar_code.mData[0x1];

}

void _activation_check_proc_17_func_789301552(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_5)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_0 = true;

	_activation_check_proc_17_func_1473269003();
	/* inline */ _activation_check_proc_17_func_662867187(_activatnvar_confusing_char_5);
}

void _activation_check_proc_17_func_1473269003()
{
	
}

void _activation_check_proc_17_func_1158070564(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= _activatnvar_confusing_int_9;

}

void _activation_check_proc_17_func_597346087(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_17_func_1945904426(LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_6, U8& _activatnvar_t0, U8& _activatnvar_t1, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e ^= _activatnvar_confusing_char_6;

	_activation_check_proc_17_func_597346087(_activatnvar_so, _activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_17_func_980322591(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_code;

}

void _activation_check_proc_17_func_225465992(int& _activatnvar_generic_iterator)
{
	
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_17_func_160073136(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_17_func_692958963(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_17_func_692958963(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_7.mData[0x7] |= _activatnvar_confusing_LLUUID_2.mData[0x0];

}

void _activation_check_proc_17_func_1857530706(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1432353362(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_17_func_514936656(bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_int_2++;

	_activation_check_proc_17_func_1432353362(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_c);
	_activation_check_proc_17_func_1857530706(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1568958504(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_17_func_1653902099(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_17_func_1568958504(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_17_func_876172619(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_17_func_5434838(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_17_func_559959869(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_secret, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 *= 0x0;

	_activation_check_proc_17_func_2045825819(_activatnvar_t0, _activatnvar_confusing_U8_6);
	/* inline */ _activation_check_proc_17_func_1735064788(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
	_activation_check_proc_17_func_5434838(_activatnvar_confusing_bool_8, _activatnvar_generic_bool_0);
}

void _activation_check_proc_17_func_2045825819(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 ^= _activatnvar_t0;

}

void _activation_check_proc_17_func_777840250(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_196577058(int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x5] += _activatnvar_so.mData[0xc];

	_activation_check_proc_17_func_1605578994(_activatnvar_doaccount);
	/* inline */ _activation_check_proc_17_func_310224976(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_d);
	_activation_check_proc_17_func_721268210(_activatnvar_confusing_int_a);
}

void _activation_check_proc_17_func_721268210(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_17_func_1605578994(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_17_func_1721387854(int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_int_3++;

	/* inline */ _activation_check_proc_17_func_134708913(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_17_func_1358248289(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_LLUUID_f.mData[0x8];

}

void _activation_check_proc_17_func_1419572118(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
	_activation_check_proc_17_func_1631042357(_activatnvar_confusing_int_4, _activatnvar_confusing_int_5);
}

void _activation_check_proc_17_func_1631042357(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_4 = _activatnvar_confusing_int_5;

}

void _activation_check_proc_17_func_488308840(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_17_func_109552509(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_17_func_2075573974(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x0] &= _activatnvar_fscked.mData[0x5];

}

void _activation_check_proc_17_func_832760836(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_4[0xc] &= _activatnvar_name_digest[0xc];

}

void _activation_check_proc_17_func_903997862(DWORD& _activatnvar_serial)
{
	_activatnvar_serial = 0;
}

void _activation_check_proc_17_func_1701842898(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_17_func_694625662(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_1[0x2] >>= _activatnvar_name_digest[0x2];

}

void _activation_check_proc_17_func_1656495996(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x0] <<= _activatnvar_confusing_chararray_6[0xe];

}

void _activation_check_proc_17_func_1450869589(int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_int_6 |= 0x3;

	_activation_check_proc_17_func_1656495996(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_17_func_1577540378(_activatnvar_confusing_int_2, _activatnvar_confusing_int_6);
}

void _activation_check_proc_17_func_1577540378(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 += _activatnvar_confusing_int_2;

}

void _activation_check_proc_17_func_1409165224(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_char_c += _activatnvar_confusing_chararray_9[0x8];

	/* inline */ _activation_check_proc_17_func_497102053(_activatnvar_confusing_char_6, _activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_17_func_1651092082(_activatnvar_confusing_char_3, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_17_func_2079822669(int& _activatnvar_confusing_int_0, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_int_0++;

	/* inline */ _activation_check_proc_17_func_1401639464(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_17_func_216123051(bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_5, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_8)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_8 = true;

	_activatnvar_confusing_int_5 &= _activatnvar_confusing_int_8;

}

void _activation_check_proc_17_func_702533724(int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

	_activation_check_proc_17_func_216123051(_activatnvar_confusing_bool_8, _activatnvar_confusing_int_5, _activatnvar_generic_bool_1, _activatnvar_confusing_int_8);
}

void _activation_check_proc_17_func_92146908(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_2)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xc] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_a = true;

	/* inline */ _activation_check_proc_17_func_1339420584(_activatnvar_confusing_int_2);
}

void _activation_check_proc_17_func_1479178785(LLUUID& _activatnvar_so, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_so;

	/* inline */ _activation_check_proc_17_func_1383794280(_activatnvar_t0);
}

void _activation_check_proc_17_func_839229461(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_5.mData[0x3] <<= _activatnvar_confusing_chararray_d[0x4];

}

void _activation_check_proc_17_func_1929506420(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_17_func_1254470536(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_17_func_1677715229(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_0[0xf] *= _activatnvar_name_digest[0x1];

}

void _activation_check_proc_17_func_111297911(char& _activatnvar_confusing_char_8, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
	/* inline */ _activation_check_proc_17_func_1932786602(_activatnvar_confusing_char_8);
}

void _activation_check_proc_17_func_503745466(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_5.mData[0x1] = _activatnvar_confusing_chararray_7[0xd];

	_activatnvar_confusing_LLUUID_2 = LLUUID("880ea977-3154-d79a-9257-47c3fadd4637");

	/* inline */ _activation_check_proc_17_func_1553507802(_activatnvar_t0);
}

void _activation_check_proc_17_func_117932896(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_0 |= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_17_func_9778391(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_a++;

	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_17_func_1826539356(_activatnvar_confusing_LLUUID_6);
	_activation_check_proc_17_func_117932896(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_b, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_17_func_1494786116(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_17_func_2084561343(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0xf] != 0x5) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_17_func_1906491438(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_0.mData[0x5];

	_activation_check_proc_17_func_2084561343(_activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_17_func_24505290(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_17_func_24505290(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] ^= _activatnvar_confusing_LLUUID_d.mData[0x0];

}

void _activation_check_proc_17_func_2010638913(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x4] = _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_17_func_1106017096(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_combined_id;

}

void _activation_check_proc_17_func_864763021(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_4[0xe] *= _activatnvar_confusing_LLUUID_e.mData[0x7];

}

void _activation_check_proc_17_func_455165407(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 |= 0x3;

}

void _activation_check_proc_17_func_1884775149(int& _activatnvar_confusing_int_3, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_17_func_455165407(_activatnvar_confusing_int_3);
}

void _activation_check_proc_17_func_1930318653(unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_confusing_int_f, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_2 += _activatnvar_confusing_U8_a;

	/* inline */ _activation_check_proc_17_func_937522648(_activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_17_func_1032903880(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_17_func_1765840361(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_17_func_398306130(_activatnvar_confusing_chararray_e, _activatnvar_confusing_U8_e);
}

void _activation_check_proc_17_func_172795242(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_17_func_777594024(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_17_func_398815196(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_4 <<= _activatnvar_confusing_int_b;

}

void _activation_check_proc_17_func_1326117203(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_17_func_165002025(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_17_func_788984992(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] <<= _activatnvar_confusing_LLUUID_e.mData[0x7];

}

void _activation_check_proc_17_func_421418978(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_17_func_2135961927(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_17_func_1889834606(LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_17_func_2135961927(_activatnvar_confusing_int_e);
}

void _activation_check_proc_17_func_1464467898(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_2001331333(U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 <<= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_17_func_602345269(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_c.mData[0xf] |= _activatnvar_name_digest[0xc];

}

void _activation_check_proc_17_func_1826586097(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_516686211(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x7] != 0xb) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_17_func_483247669(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_187786826(unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_int_8 += 0x8;

	_activatnvar_confusing_chararray_f[0x5] <<= _activatnvar_confusing_LLUUID_9.mData[0x4];

	_activation_check_proc_17_func_483247669(_activatnvar_secret, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_17_func_1471707414(_activatnvar_confusing_int_3);
	_activation_check_proc_17_func_1218887481(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_17_func_731227109(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1218887481(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x2] >>= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_17_func_1471707414(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 <<= 0xe;

}

void _activation_check_proc_17_func_692147195(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("027efd8e-d504-7131-9313-04cda1b9d81d");

}

void _activation_check_proc_17_func_62734636(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_4)
{
	
	/* inline */ _activation_check_proc_17_func_1066208062(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_17_func_1529477722(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_17_func_1199921134(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_2054737150(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1629343349(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_b;

	/* inline */ _activation_check_proc_17_func_994301577(_activatnvar_confusing_bool_f, _activatnvar_generic_bool_0, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_17_func_1337051970(_activatnvar_confusing_int_9, _activatnvar_confusing_int_2);
	_activation_check_proc_17_func_2054737150(_activatnvar_generic_iterator);
	_activation_check_proc_17_func_1199921134(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
}

void _activation_check_proc_17_func_974885171(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	
	_activatnvar_confusing_chararray_1[0xc] &= _activatnvar_confusing_chararray_5[0x1];

	_activatnvar_confusing_LLUUID_4.mData[0x4] |= _activatnvar_confusing_LLUUID_3.mData[0x6];

}

void _activation_check_proc_17_func_72471311(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_17_func_86611648(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_9 <<= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_17_func_1714286014(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_17_func_291938029(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_17_func_1714286014(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_17_func_1698449632(int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_chararray_5[0xb] = _activatnvar_lace.mData[0xa];

	_activatnvar_confusing_int_8 &= 0xff;

	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_d = true;

	/* inline */ _activation_check_proc_17_func_1188279843(_activatnvar_generic_iterator);
}

void _activation_check_proc_17_func_1534222907(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_d &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_17_func_777548089(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activatnvar_confusing_LLUUID_8.mData[0x0] *= _activatnvar_confusing_LLUUID_6.mData[0xb];

	_activation_check_proc_17_func_1534222907(_activatnvar_confusing_bool_d, _activatnvar_generic_bool_0);
}

void _activation_check_proc_17_func_166574(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("0ae5b228-7efa-e5aa-930b-b506f7f090d1");

}

void _activation_check_proc_17_func_1943940916(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = 0x0;

}

void _activation_check_proc_17_func_1861707125(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_2 += _activatnvar_confusing_int_1;

	_activation_check_proc_17_func_1943940916(_activatnvar_confusing_int_9);
	_activation_check_proc_17_func_166574(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_17_func_1984804598(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x1] >>= _activatnvar_confusing_LLUUID_4.mData[0x6];

}

void _activation_check_proc_17_func_1229588723(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_8.mData[0x1];

}

void _activation_check_proc_17_func_491254302(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_17_func_49854913(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1312603608(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_9 ^= 0x1;

}

void _activation_check_proc_17_func_1668135639(U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_17_func_1475933924(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0xd;

}

void _activation_check_proc_17_func_1272043320(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_354911576(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_336807968(U8& _activatnvar_pos, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 *= _activatnvar_pos;

}

void _activation_check_proc_17_func_1352158664(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_17_func_1076561220(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_17_func_462634337(_activatnvar_generic_iterator);
	_activation_check_proc_17_func_547714508(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	/* inline */ _activation_check_proc_17_func_774086320(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_17_func_1076561220(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_547714508(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_2131936468(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_17_func_1113866506(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activation_check_proc_17_func_2131936468(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_17_func_671141735(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_746890000(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_chararray_b[0xc];

	/* inline */ _activation_check_proc_17_func_1344090288();
}

void _activation_check_proc_17_func_1507485586(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_d += _activatnvar_confusing_U8_d;

}

void _activation_check_proc_17_func_1912065634(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_5.mData[0x4] = _activatnvar_confusing_LLUUID_0.mData[0x6];

}

void _activation_check_proc_17_func_75635670(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_a, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_17_func_1249526804(_activatnvar_t0);
	_activation_check_proc_17_func_1912065634(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_17_func_228308162(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_17_func_1507485586(_activatnvar_confusing_U8_d, _activatnvar_generic_bool_1, _activatnvar_confusing_char_d);
	/* inline */ _activation_check_proc_17_func_248548188(_activatnvar_confusing_char_a);
	/* inline */ _activation_check_proc_17_func_2027941286(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_17_func_228308162(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_e.mData[0x3] ^= _activatnvar_confusing_LLUUID_9.mData[0xe];

}

void _activation_check_proc_17_func_693193911(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_17_func_648843300(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_1598847945(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_17_func_413226249(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_7 >>= 0xe;

}

void _activation_check_proc_17_func_161437275(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_17_func_1804556013(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_17_func_1639947177(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_1403918182(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_f;

	_activation_check_proc_17_func_1194861028(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_17_func_1194861028(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] = _activatnvar_confusing_LLUUID_7.mData[0xa];

}

void _activation_check_proc_17_func_1006757041(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_2 = true;

	/* inline */ _activation_check_proc_17_func_313768196(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_17_func_942674594(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x2] &= _activatnvar_ser_digest[0x2];

	/* inline */ _activation_check_proc_17_func_225883211(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_char_9);
}

void _activation_check_proc_17_func_856257756(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x6] == 0x6) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_17_func_2053755357(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_17_func_2053755357(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] ^= _activatnvar_confusing_LLUUID_7.mData[0x3];

}

void _activation_check_proc_17_func_393110683()
{
	
}

void _activation_check_proc_17_func_612389905(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_17_func_975428029(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_LLUUID_6.mData[0x8] *= _activatnvar_confusing_LLUUID_1.mData[0x3];

	/* inline */ _activation_check_proc_17_func_244545354();
	_activation_check_proc_17_func_950847972(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_17_func_950847972(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_17_func_184553591(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xb] &= _activatnvar_confusing_LLUUID_3.mData[0x8];

}

void _activation_check_proc_17_func_1688800018(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_e += _activatnvar_confusing_int_a;

}

void _activation_check_proc_17_func_1754685642(int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_a, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_d.mData[0x7] |= _activatnvar_confusing_chararray_9[0x0];

	_activation_check_proc_17_func_1688800018(_activatnvar_confusing_int_e, _activatnvar_confusing_int_a);
	_activation_check_proc_17_func_184553591(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_17_func_400326251(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_17_func_602360288(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_a.mData[0x3] *= _activatnvar_confusing_chararray_3[0x1];

}

void _activation_check_proc_17_func_1875975235(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_17_func_38078816(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_17_func_2079029973(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_17_func_1794473026(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_17_func_805604395(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_17_func_602294902(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_e;

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
